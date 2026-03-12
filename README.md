# Consuming and exporting a static library in a BPL package

This is a minimal example project that contains:

 - `MyLib`, a static library
   - contains class `TMonitorFrame`
 - `MyPackage`, a BPL package that consumes `MyLib`
   - contains class `TMonitorForm`
 - `MyApp`, an executable that imports `TMonitorForm` from `MyPackage`
 - `AnotherApp`, an executable that imports `TMonitorFrame` from `MyPackage` (!)

The project group demonstrates the effect of `__declspec(package)` linker
declarations when working with static libraries.

`AnotherApp` expects that `TMonitorFrame` is exported by `MyPackage`, even
though it is compiled in a separate library. With the provided set of project
options (`MYLIB_AS_PACKAGE`), this fails. But if you change the conditional
defines in project `MyLib` to `MYLIB_EXPORTS`, the code compiles and executes.
