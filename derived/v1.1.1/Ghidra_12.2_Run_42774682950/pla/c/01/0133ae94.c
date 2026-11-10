/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0133ae94; name: FUN_0133ae94
 */


void FUN_0133ae94(long param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  char acStack_430 [1024];
  
  if (param_2 < 0x14) {
    memset(acStack_430,0,0x400);
    snprintf(acStack_430,0x400,"pane_L_icon_location_name_%02d",param_2);
    lVar2 = FUN_01306260(param_1 + 0x180,acStack_430);
    uVar1 = param_3[1];
    *(undefined4 *)(lVar2 + 0x30) = *param_3;
    *(undefined4 *)(lVar2 + 0x34) = uVar1;
    *(undefined4 *)(lVar2 + 0x38) = 0;
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
    snprintf(acStack_430,0x400,"pane_L_icon_location_name_%02d_P_00",param_2);
    lVar2 = FUN_01306260(param_1 + 0x180,acStack_430);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  return;
}


