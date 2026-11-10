/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01dc0d48; name: FUN_01dc0d48
 */


undefined8 * FUN_01dc0d48(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)*param_1)();
  FUN_01dc0eb0();
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar1 == (long *)PTR_DAT_04381c30) break;
    plVar1 = (long *)*plVar1;
  }
  return param_1 + -10;
}


