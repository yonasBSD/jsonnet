Jsonnet commandline interpreter v0.21.0

jsonnet {<option>} <filename>

Available options:
  -h / --help             This message
  -e / --exec             Treat filename as code
  -J / --jpath <dir>      Specify an additional library search dir (right-most wins)
  -o / --output-file <file> Write to the output file rather than stdout
  -m / --multi <dir>      Write multiple files to the directory, list files on stdout
  -y / --yaml-stream      Write output as a YAML stream of JSON documents
  -S / --string           Expect a string, manifest as plain text
  -s / --max-stack <n>    Number of allowed stack frames
  -t / --max-trace <n>    Max length of stack trace before cropping
  --gc-min-objects <n>    Do not run garbage collector until this many
  --gc-growth-trigger <n> Run garbage collector after this amount of object growth
  --version               Print version
Available options for specifying values of 'external' variables:
Provide the value as a string:
  -V / --ext-str <var>[=<val>]     If <val> is omitted, get from environment var <var>
       --ext-str-file <var>=<file> Read the string from the file
Provide a value as Jsonnet code:
  --ext-code <var>[=<code>]    If <code> is omitted, get from environment var <var>
  --ext-code-file <var>=<file> Read the code from the file
Available options for specifying values of 'top-level arguments':
Provide the value as a string:
  -A / --tla-str <var>[=<val>]     If <val> is omitted, get from environment var <var>
       --tla-str-file <var>=<file> Read the string from the file
Provide a value as Jsonnet code:
  --tla-code <var>[=<code>]    If <code> is omitted, get from environment var <var>
  --tla-code-file <var>=<file> Read the code from the file
Environment variables:
JSONNET_PATH is a colon (semicolon on Windows) separated list of directories added
in reverse order before the paths specified by --jpath (i.e. left-most wins)
E.g. JSONNET_PATH=a:b jsonnet -J c -J d is equivalent to:
JSONNET_PATH=d:c:a:b jsonnet
jsonnet -J b -J a -J c -J d

In all cases:
<filename> can be - (stdin)
Multichar options are expanded e.g. -abc becomes -a -b -c.
The -- option suppresses option processing for subsequent arguments.
Note that since filenames and jsonnet programs can begin with -, it is advised to
use -- if the argument is unknown, e.g. jsonnet -- "$FILENAME".
