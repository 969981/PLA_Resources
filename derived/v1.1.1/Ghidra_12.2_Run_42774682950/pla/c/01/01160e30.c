/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01160e30; name: FUN_01160e30
 */


undefined8 * FUN_01160e30(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if ((*param_1 != 0) && (puVar1 = *(undefined8 **)(*param_1 + 0x18), puVar1 != (undefined8 *)0x0))
  {
    (**(code **)*puVar1)();
    uVar2 = FUN_01161290();
    if ((uVar2 & 1) != 0) {
      return puVar1 + -10;
    }
  }
  return (undefined8 *)0x0;
}


