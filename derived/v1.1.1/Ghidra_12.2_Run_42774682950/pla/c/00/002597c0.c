/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002597c0; name: FUN_002597c0
 */


void FUN_002597c0(long param_1)

{
  undefined8 *puVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00232674(puVar1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


