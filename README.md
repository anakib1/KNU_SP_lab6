<h1>Basic linux profyling demo</h1>

<h2>Usage</h2>

Add files `{name}`.cpp to codes folder.

Run 

```
sudo compile.sh {name}
```
Now, you can access diagnostics, run:


```
time "out/{name}"
```
to view time of the program executed.


```
sudo stat_report {name}
```
to view statistics of program calls inside the given program.

```
sudo flame {name}
```
will generate file `bin/perf.svg` that can be opened in browser to investigate the flame stack.