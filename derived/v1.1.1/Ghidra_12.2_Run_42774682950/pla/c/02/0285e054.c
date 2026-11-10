/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0285e054; name: FUN_0285e054
 */


undefined8 * FUN_0285e054(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if ((*param_1 != 0) && (puVar1 = *(undefined8 **)(*param_1 + 0x18), puVar1 != (undefined8 *)0x0))
  {
    (**(code **)*puVar1)();
    uVar2 = FUN_02860a44();
    if ((uVar2 & 1) != 0) {
      return puVar1 + -10;
    }
  }
  return (undefined8 *)0x0;
}


