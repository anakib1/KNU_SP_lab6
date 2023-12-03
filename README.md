<h1>Basic linux profyling demo</h1>

Full documentation is located here:
https://docs.google.com/document/d/1q5ShNaAyYUmndqBkmtsd4AwRsIUAIMoxyNvZz_pxG4Q/edit?usp=sharing

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
