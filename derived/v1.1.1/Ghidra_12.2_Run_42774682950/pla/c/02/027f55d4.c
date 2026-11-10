/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f55d4; name: FUN_027f55d4
 */


undefined4 FUN_027f55d4(long param_1)

{
  long lVar1;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  local_40 = &DAT_753f74378b49da9c;
  pcStack_38 = "View_Top";
  local_30 = 8;
  lVar1 = FUN_027f4740(*(undefined8 *)(param_1 + 0x4c8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return *(undefined4 *)(lVar1 + 0x5b0);
}


