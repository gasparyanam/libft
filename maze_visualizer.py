import time
import unicodedata


def _char_width(char: str) -> int:
    if not char:
        return 0
    if unicodedata.combining(char):
        return 0
    if unicodedata.east_asian_width(char) in {"W", "F"}:
        return 2
    return 1


def _display_width(text: str) -> int:
    return sum(_char_width(ch) for ch in text)


def _fit_width(text: str, width: int) -> str:
    current = _display_width(text)
    if current >= width:
        result = ""
        used = 0
        for ch in text:
            ch_w = _char_width(ch)
            if used + ch_w > width:
                break
            result += ch
            used += ch_w
        return result
    return text + (" " * (width - current))


class MazeVisualizer:
    def __init__(
        self,
        maze: list[str],
        wall_emoji: str = "🟫",
        path_emoji: str = "⬜",
        actor_emoji: str = "🙂",
    ) -> None:
        if not maze:
            raise ValueError("maze must not be empty")
        width = len(maze[0])
        if width == 0:
            raise ValueError("maze rows must not be empty")
        if any(len(row) != width for row in maze):
            raise ValueError("maze must stay rectangular")

        self.maze = maze
        self.height = len(maze)
        self.width = width
        self.wall_emoji = wall_emoji
        self.path_emoji = path_emoji
        self.actor_emoji = actor_emoji
        self.cell_width = 4

    def _tile(self, symbol: str, repeat: int = 1) -> str:
        return _fit_width(symbol * repeat, self.cell_width)

    def _tile_for_cell(self, y: int, x: int, actor: tuple[int, int] | None) -> str:
        if actor == (y, x):
            return self._tile(self.actor_emoji, 1)
        if self.maze[y][x] == "#":
            return self._tile(self.wall_emoji, 1)
        return self._tile(self.path_emoji, 2)

    def build_frame(self, actor: tuple[int, int] | None = None) -> str:
        lines: list[str] = []
        for y in range(self.height):
            line = []
            for x in range(self.width):
                line.append(self._tile_for_cell(y, x, actor))
            lines.append("".join(line))
        return "\n".join(lines)

    def draw(self, actor: tuple[int, int] | None = None) -> None:
        print("\033[H\033[J", end="")
        print(self.build_frame(actor))

    def animate(self, path: list[tuple[int, int]], delay: float = 0.12) -> None:
        if delay < 0:
            raise ValueError("delay must be >= 0")
        for y, x in path:
            if y < 0 or x < 0 or y >= self.height or x >= self.width:
                raise ValueError("path has coordinates outside maze")
            if self.maze[y][x] == "#":
                raise ValueError("path cannot go through walls")
            self.draw((y, x))
            time.sleep(delay)


if __name__ == "__main__":
    demo_maze = [
        "###########",
        "#   #     #",
        "# # # ### #",
        "# #   #   #",
        "# ### # # #",
        "#     # # #",
        "###########",
    ]

    demo_path = [
        (1, 1), (1, 2), (1, 3),
        (2, 3), (3, 3), (3, 4), (3, 5),
        (2, 5), (1, 5), (1, 6), (1, 7),
        (1, 8), (1, 9),
    ]

    viewer = MazeVisualizer(
        demo_maze,
        wall_emoji="🧱",
        path_emoji="▫️",
        actor_emoji="🐭",
    )
    viewer.animate(demo_path, delay=0.15)
