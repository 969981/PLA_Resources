/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02805dc8; name: FUN_02805dc8
 */


void FUN_02805dc8(long param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  byte local_a0 [8];
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  size_t local_50;
  long *local_48;
  
  param_1 = param_1 + 0x180;
  local_a0[0] = 0x18;
  local_a0[1] = 0xe9;
  local_a0[2] = 0x34;
  local_a0[3] = 6;
  local_a0[4] = 0x3a;
  local_a0[5] = 0x6d;
  local_a0[6] = 0xa0;
  local_a0[7] = 0xe2;
  pcStack_98 = "grid_panel";
  local_90 = 10;
  local_88 = (long *)0x0;
  plVar5 = (long *)FUN_00d2ec48(param_1,local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if ((plVar5 != (long *)0x0) && (((*(byte *)((long)plVar5 + 0xa2) != 0 ^ param_2) & 1) != 0)) {
    bVar1 = param_2 & 1;
    if (*(byte *)((long)plVar5 + 0xa2) != bVar1) {
      *(byte *)((long)plVar5 + 0xa2) = bVar1;
      (**(code **)(*plVar5 + 0x98))(plVar5,bVar1);
    }
    local_a0[0] = 0x18;
    local_a0[1] = 0xe9;
    local_a0[2] = 0x34;
    local_a0[3] = 6;
    local_a0[4] = 0x3a;
    local_a0[5] = 0x6d;
    local_a0[6] = 0xa0;
    local_a0[7] = 0xe2;
    pcStack_98 = "grid_panel";
    local_90 = 10;
    local_88 = (long *)0x0;
    lVar6 = FUN_00d2ec48(param_1,local_a0);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    lVar6 = *(long *)(lVar6 + 0x468);
    iVar2 = *(int *)(lVar6 + 8);
    if (*(int *)(lVar6 + 0x1c) == 0) {
      iVar7 = *(int *)(lVar6 + 0xc);
      iVar4 = 0;
      if (iVar7 != 0) {
        iVar4 = iVar2 / iVar7;
      }
      iVar7 = iVar2 - iVar4 * iVar7;
    }
    else {
      iVar7 = 0;
      if (*(int *)(lVar6 + 0x10) != 0) {
        iVar7 = iVar2 / *(int *)(lVar6 + 0x10);
      }
    }
    local_70 = 0;
    uStack_68 = 0;
    puVar9 = &DAT_cbf29ce484222645;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    local_88 = (long *)0x0;
    local_a0[0] = 0;
    local_a0[1] = 0;
    local_a0[2] = 0;
    local_a0[3] = 0;
    local_a0[4] = 0;
    local_a0[5] = 0;
    local_a0[6] = 0;
    local_a0[7] = 0;
    pcStack_98 = (char *)0x0;
    snprintf((char *)local_a0,0x40,"button_%02d",iVar7);
    local_50 = strlen((char *)local_a0);
    if (local_a0[0] != 0) {
      pbVar8 = (byte *)((ulong)local_a0 | 1);
      bVar3 = local_a0[0];
      do {
        puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (bVar3 != 0);
    }
    local_48 = (long *)0x0;
    local_60 = puVar9;
    puStack_58 = local_a0;
    plVar5 = (long *)FUN_00d2e944(param_1,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if ((plVar5 != (long *)0x0) && (*(byte *)((long)plVar5 + 0xa2) != bVar1)) {
      *(byte *)((long)plVar5 + 0xa2) = param_2 & 1;
      (**(code **)(*plVar5 + 0x98))(plVar5);
    }
  }
  return;
}


