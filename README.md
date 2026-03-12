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

`AnotherApp` expects that `TMonitorFrame` is exported by `MyPackage`. The
intention is to make that possible by linking `MyLib` into `MyPackage`. However,
compilation of `AnotherApp.exe` fails

 - with the provided set of project options (`MYLIB_AS_PACKAGE`)
   - undefined symbols: vtable and `_ZTR13TMonitorFrame`
 - if you change the conditional defines in project `MyLib` to `MYLIB_EXPORTS`
   - undefined symbol: `_ZTR13TMonitorFrame`
  
