/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0133a3fc; name: FUN_0133a3fc
 */


void FUN_0133a3fc(long param_1)

{
  long lVar1;
  int param3;
  char acStack_430 [1024];
  
  memset(acStack_430,0,0x400);
  param3 = 0;
  do {
    snprintf(acStack_430,0x400,"pane_L_icon_location_name_%02d",param3);
    lVar1 = FUN_01306260(param_1 + 0x180,acStack_430);
    param3 = param3 + 1;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined4 *)(lVar1 + 0x38) = 0;
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | 0x10;
  } while (param3 != 0x14);
  return;
}


