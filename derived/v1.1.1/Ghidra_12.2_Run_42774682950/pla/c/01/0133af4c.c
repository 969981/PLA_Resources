/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0133af4c; name: FUN_0133af4c
 */


void FUN_0133af4c(long param_1,undefined4 *param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x5d0);
  uVar3 = param_2[1];
  *(undefined4 *)(lVar5 + 0x30) = *param_2;
  *(undefined4 *)(lVar5 + 0x34) = uVar3;
  *(undefined4 *)(lVar5 + 0x38) = 0;
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
  lVar5 = *(long *)(param_1 + 0x5d8);
  uVar3 = param_2[1];
  *(undefined4 *)(lVar5 + 0x30) = *param_2;
  *(undefined4 *)(lVar5 + 0x34) = uVar3;
  *(undefined4 *)(lVar5 + 0x38) = 0;
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
  FUN_00d2e2f0((float)(param_3 & 1),param_1 + 0x180,"anime_L_icon_area_spmap_00_scale_area");
  bVar4 = (param_4 & 1) == 0;
  iVar1 = 100 - param_5;
  if (bVar4) {
    iVar1 = param_5;
  }
  pcVar2 = "anime_L_icon_spmap_00_timer_down";
  if (bVar4) {
    pcVar2 = "anime_L_icon_spmap_00_timer_up";
  }
  FUN_00d2e2f0((float)iVar1,param_1 + 0x180,pcVar2);
  *(byte *)(*(long *)(param_1 + 0x5d0) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5d0) + 0x58) | 1;
  *(byte *)(*(long *)(param_1 + 0x5d8) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5d8) + 0x58) | 1;
  return;
}


