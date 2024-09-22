import sys
import json
from pathlib import Path

from mapfile_parser.frontends.progress import getProgress

if len(sys.argv) > 1:
    target = sys.argv[1]
else:
    target = "esa"

total, _ = getProgress(
    Path(f"build/{target}.map"),
    Path(f"asm/{target}"),
    Path(f"asm/{target}/nonmatchings"),
    pathIndex=3,
)

print(json.dumps({
    "total": round(total.decompedSize / (total.undecompedSize + total.decompedSize) * 100, 2)
}))
