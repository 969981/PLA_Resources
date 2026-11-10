/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d55688; name: FUN_00d55688
 */


void FUN_00d55688(long *param_1)

{
  long lVar1;
  
  *(undefined1 *)((long)param_1 + 0x1621) = 0;
  (**(code **)(*param_1 + 0x1d0))(param_1,0);
  FUN_00d5cf50(param_1,0);
  FUN_00d4d970(param_1,1);
  lVar1 = param_1[0x88];
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x62) != '\0')) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x60) = 1;
  if (*(char *)(lVar1 + 0x61) != '\0') {
    FUN_0283351c(*(undefined8 *)(lVar1 + 0x58),0);
  }
  FUN_02831808(*(undefined8 *)(lVar1 + 0x58),0);
  return;
}


