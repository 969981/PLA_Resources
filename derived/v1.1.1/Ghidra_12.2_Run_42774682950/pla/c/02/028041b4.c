/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028041b4; name: FUN_028041b4
 */


void FUN_028041b4(long param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined1 *puVar12;
  byte local_90 [8];
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  char *pcStack_48;
  size_t local_40;
  undefined8 uStack_38;
  
  local_90[0] = 0x18;
  local_90[1] = 0xe9;
  local_90[2] = 0x34;
  local_90[3] = 6;
  local_90[4] = 0x3a;
  local_90[5] = 0x6d;
  local_90[6] = 0xa0;
  local_90[7] = 0xe2;
  pcStack_88 = "grid_panel";
  local_80 = 10;
  local_78 = (long *)0x0;
  lVar6 = FUN_00d2ec48(param_1 + 0x180,local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  lVar6 = *(long *)(lVar6 + 0x468);
  iVar3 = *(int *)(lVar6 + 8);
  if (*(int *)(lVar6 + 0x1c) == 0) {
    iVar7 = *(int *)(lVar6 + 0xc);
    iVar5 = 0;
    if (iVar7 != 0) {
      iVar5 = iVar3 / iVar7;
    }
    iVar7 = iVar3 - iVar5 * iVar7;
  }
  else {
    iVar7 = 0;
    if (*(int *)(lVar6 + 0x10) != 0) {
      iVar7 = iVar3 / *(int *)(lVar6 + 0x10);
    }
  }
  local_60 = 0;
  uStack_58 = 0;
  puVar12 = &DAT_cbf29ce484222645;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  local_78 = (long *)0x0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[6] = 0;
  local_90[7] = 0;
  pcStack_88 = (char *)0x0;
  snprintf((char *)local_90,0x40,"anime_L_menu_%02d_select",iVar7);
  local_40 = strlen((char *)local_90);
  if (local_90[0] != 0) {
    pbVar8 = (byte *)((ulong)local_90 | 1);
    bVar4 = local_90[0];
    do {
      puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar4 != 0);
  }
  uStack_38 = 0;
  local_50 = puVar12;
  pcStack_48 = (char *)local_90;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    pcStack_48 = (char *)local_90;
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_50);
  }
  *(undefined1 *)(param_1 + 0x5ab) = 0;
  FUN_00d42690(param_1,*(char *)(param_1 + 0x5af) == '\0',1);
  plVar2 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar6 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if ((lVar6 == 0) || (*plVar2 == -0x4cc24b1975531a43)) {
    plVar10 = plVar2;
  }
  else {
    lVar9 = lVar6 * 0x30;
    plVar11 = plVar2;
    do {
      lVar9 = lVar9 + -0x30;
      if (lVar9 == 0) goto LAB_02804348;
      plVar1 = plVar11 + 6;
      plVar10 = plVar11 + 6;
      plVar11 = plVar11 + 6;
    } while (*plVar1 != -0x4cc24b1975531a43);
  }
  if ((plVar10 != plVar2 + lVar6 * 6) && (lVar6 = plVar10[4], lVar6 != 0)) {
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe | param_2 & 1;
  }
LAB_02804348:
  if (*(char *)(param_1 + 0x5ad) != '\x01') {
    *(undefined1 *)(param_1 + 0x5ad) = 1;
    FUN_00d42438(param_1,1,1);
    FUN_02805dc8(param_1,1);
    if (*(char *)(param_1 + 0x5ac) != '\x01') {
      *(undefined1 *)(param_1 + 0x5ac) = 1;
    }
  }
  FUN_00d42438(param_1,1,1);
  FUN_00d469b4(*(undefined8 *)(param_1 + 0x68),param_1,0);
  local_50 = (undefined1 *)0xd5a646e9eb5de80c;
  pcStack_48 = "anime_f_in";
  local_40 = 10;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_50);
  }
  return;
}


