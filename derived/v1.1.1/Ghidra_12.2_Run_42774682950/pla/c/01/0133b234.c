/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0133b234; name: FUN_0133b234
 */


void FUN_0133b234(long param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  char acStack_440 [1024];
  
  if (param_2 < 5) {
    memset(acStack_440,0,0x400);
    snprintf(acStack_440,0x400,"anime_L_icon_blost_%02d_scale_area",param_2);
    lVar2 = param_1 + (ulong)param_2 * 8;
    uVar1 = param_3[1];
    lVar3 = *(long *)(lVar2 + 0x730);
    *(undefined4 *)(lVar3 + 0x30) = *param_3;
    *(undefined4 *)(lVar3 + 0x34) = uVar1;
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 0x10;
    *(undefined4 *)(lVar3 + 0x38) = 0;
    FUN_00d2e2f0((float)(param_4 & 1),param_1 + 0x180,acStack_440);
    lVar2 = *(long *)(lVar2 + 0x730);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
  }
  return;
}


