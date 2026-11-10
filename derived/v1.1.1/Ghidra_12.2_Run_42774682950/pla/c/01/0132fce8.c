/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0132fce8; name: FUN_0132fce8
 */


void FUN_0132fce8(long *param_1)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  local_40 = 0x30a9c837e1e298d0;
  pcStack_38 = "View_Icon";
  local_30 = 9;
  lVar1 = FUN_0130e28c(*(undefined8 *)(*param_1 + 0x4c8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  *(byte *)(*(long *)(lVar1 + 0x5d0) + 0x58) = *(byte *)(*(long *)(lVar1 + 0x5d0) + 0x58) & 0xfe;
  *(byte *)(*(long *)(lVar1 + 0x5d8) + 0x58) = *(byte *)(*(long *)(lVar1 + 0x5d8) + 0x58) & 0xfe;
  return;
}


