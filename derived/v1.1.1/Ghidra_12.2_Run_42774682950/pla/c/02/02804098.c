/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02804098; name: FUN_02804098
 */


void FUN_02804098(long param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  byte local_90 [8];
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
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
  lVar4 = FUN_00d2ec48(param_1 + 0x180,local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  lVar4 = *(long *)(lVar4 + 0x468);
  iVar1 = *(int *)(lVar4 + 8);
  if (*(int *)(lVar4 + 0x1c) == 0) {
    iVar5 = *(int *)(lVar4 + 0xc);
    iVar3 = 0;
    if (iVar5 != 0) {
      iVar3 = iVar1 / iVar5;
    }
    iVar5 = iVar1 - iVar3 * iVar5;
  }
  else {
    iVar5 = 0;
    if (*(int *)(lVar4 + 0x10) != 0) {
      iVar5 = iVar1 / *(int *)(lVar4 + 0x10);
    }
  }
  local_60 = 0;
  uStack_58 = 0;
  puVar7 = &DAT_cbf29ce484222645;
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
  snprintf((char *)local_90,0x40,"anime_L_menu_%02d_passive_selecct",iVar5);
  local_40 = strlen((char *)local_90);
  if (local_90[0] != 0) {
    pbVar6 = (byte *)((ulong)local_90 | 1);
    bVar2 = local_90[0];
    do {
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    local_50 = puVar7;
    puStack_48 = local_90;
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_50);
  }
  return;
}


