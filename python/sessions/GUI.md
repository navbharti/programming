# All about Graphical Unser Interface in Python

## Tkinter

```python
from tkinter import *

window = Tk()

window.mainloop()
```

First we need to decide what `widgets` to use and how to organize those widgets in the application. 

To organize our widgets, use `layout managers`, there are two kinds of widgets: `containers` and `their children`. The containers group their children into suitable layouts.

`Tkinter` has three built-in layout managers: the `pack`, `grid`, and `place` managers. 

The `place geometry manager` positions widgets using `absolute positioning` in pixels. In this case size and the position of a widget do not change if we resize a window.

The `pack geometry manager` organizes widgets in `horizontal and vertical boxes`. 

The `grid geometry manager` places widgets in a `two dimensional grid`.

