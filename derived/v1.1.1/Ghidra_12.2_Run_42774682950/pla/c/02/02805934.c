/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02805934; name: FUN_02805934
 */


void FUN_02805934(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  byte *pbVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  byte local_c0 [64];
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  char *pcStack_68;
  size_t local_60;
  long *local_58;
  
  if (param_2 < 4) {
    plVar14 = *(long **)(param_1 + 0x2c8);
    param_1 = param_1 + 0x180;
    if (plVar14 != (long *)0x0) {
      plVar9 = plVar14 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_c0[0x30] = 0;
    local_c0[0x31] = 0;
    local_c0[0x32] = 0;
    local_c0[0x33] = 0;
    local_c0[0x34] = 0;
    local_c0[0x35] = 0;
    local_c0[0x36] = 0;
    local_c0[0x37] = 0;
    local_c0[0x38] = 0;
    local_c0[0x39] = 0;
    local_c0[0x3a] = 0;
    local_c0[0x3b] = 0;
    local_c0[0x3c] = 0;
    local_c0[0x3d] = 0;
    local_c0[0x3e] = 0;
    local_c0[0x3f] = 0;
    local_70 = (undefined1 *)0xe2a06d3a0634e918;
    pcStack_68 = "grid_panel";
    local_c0[0x20] = 0;
    local_c0[0x21] = 0;
    local_c0[0x22] = 0;
    local_c0[0x23] = 0;
    local_c0[0x24] = 0;
    local_c0[0x25] = 0;
    local_c0[0x26] = 0;
    local_c0[0x27] = 0;
    local_c0[0x28] = 0;
    local_c0[0x29] = 0;
    local_c0[0x2a] = 0;
    local_c0[0x2b] = 0;
    local_c0[0x2c] = 0;
    local_c0[0x2d] = 0;
    local_c0[0x2e] = 0;
    local_c0[0x2f] = 0;
    local_c0[0x10] = 0;
    local_c0[0x11] = 0;
    local_c0[0x12] = 0;
    local_c0[0x13] = 0;
    local_c0[0x14] = 0;
    local_c0[0x15] = 0;
    local_c0[0x16] = 0;
    local_c0[0x17] = 0;
    local_c0[0x18] = 0;
    local_c0[0x19] = 0;
    local_c0[0x1a] = 0;
    local_c0[0x1b] = 0;
    local_c0[0x1c] = 0;
    local_c0[0x1d] = 0;
    local_c0[0x1e] = 0;
    local_c0[0x1f] = 0;
    local_c0[0] = 0;
    local_c0[1] = 0;
    local_c0[2] = 0;
    local_c0[3] = 0;
    local_c0[4] = 0;
    local_c0[5] = 0;
    local_c0[6] = 0;
    local_c0[7] = 0;
    local_c0[8] = 0;
    local_c0[9] = 0;
    local_c0[10] = 0;
    local_c0[0xb] = 0;
    local_c0[0xc] = 0;
    local_c0[0xd] = 0;
    local_c0[0xe] = 0;
    local_c0[0xf] = 0;
    local_60 = 10;
    local_58 = (long *)0x0;
    lVar8 = FUN_00d2ec48(param_1,&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    puVar15 = &DAT_cbf29ce484222645;
    if (lVar8 != 0) {
      snprintf((char *)local_c0,0x40,"button_%02d",param_2);
      local_70 = &DAT_cbf29ce484222645;
      if (local_c0[0] != 0) {
        local_70 = &DAT_cbf29ce484222645;
        pbVar10 = (byte *)((ulong)local_c0 | 1);
        bVar3 = local_c0[0];
        do {
          local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar3 != 0);
      }
      local_60 = 0x3f;
      local_58 = (long *)0x0;
      local_80 = 0;
      local_78 = 0;
      pcStack_68 = (char *)local_c0;
      FUN_0280e56c(lVar8,&local_70,&local_78,&local_80);
      if (0 < local_80._4_4_) {
        iVar11 = local_78._4_4_;
        do {
          if (0 < (int)local_80) {
            lVar12 = *(long *)(lVar8 + 0x468);
            iVar13 = (int)local_78;
            iVar2 = iVar11;
            piVar6 = (int *)(lVar12 + 0xc);
            if (*(int *)(lVar12 + 0x1c) != 0) {
              iVar13 = iVar11;
              iVar2 = (int)local_78;
              piVar6 = (int *)(lVar12 + 0x10);
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0x40) + 0x20) +
                     (ulong)(uint)(iVar13 + *piVar6 * iVar2) * 0x28;
            *(ulong *)(lVar12 + 0x20) = *(ulong *)(lVar12 + 0x20) & 0xfffffffffffffffe | param_3 & 1
            ;
            iVar13 = (int)local_78;
            while (iVar13 = iVar13 + 1, iVar13 < (int)local_80 + (int)local_78) {
              lVar12 = *(long *)(lVar8 + 0x468);
              iVar2 = iVar13;
              iVar7 = iVar11;
              piVar6 = (int *)(lVar12 + 0xc);
              if (*(int *)(lVar12 + 0x1c) != 0) {
                iVar2 = iVar11;
                iVar7 = iVar13;
                piVar6 = (int *)(lVar12 + 0x10);
              }
              lVar12 = *(long *)(*(long *)(lVar12 + 0x40) + 0x20) +
                       (ulong)(uint)(iVar2 + *piVar6 * iVar7) * 0x28;
              *(ulong *)(lVar12 + 0x20) =
                   *(ulong *)(lVar12 + 0x20) & 0xfffffffffffffffe | param_3 & 1;
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < local_78._4_4_ + local_80._4_4_);
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
    }
    local_60 = strlen((char *)local_c0);
    if (local_c0[0] != 0) {
      pbVar10 = (byte *)((ulong)local_c0 | 1);
      bVar3 = local_c0[0];
      do {
        puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar3 != 0);
    }
    local_58 = (long *)0x0;
    local_70 = puVar15;
    pcStack_68 = (char *)local_c0;
    plVar9 = (long *)FUN_00d2e944(param_1,&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if ((plVar9 != (long *)0x0) &&
       (uVar1 = (uint)param_3 & 1, *(byte *)((long)plVar9 + 0xa2) != uVar1)) {
      *(char *)((long)plVar9 + 0xa2) = (char)uVar1;
      (**(code **)(*plVar9 + 0x98))(plVar9);
    }
    snprintf((char *)local_c0,0x40,"anime_L_menu_%02d_switch_icon_passive",param_2);
    uVar16 = 0;
    if ((param_3 & 1) == 0) {
      uVar16 = 0x3f800000;
    }
    FUN_00d2e2f0(uVar16,param_1,local_c0);
    if (plVar14 != (long *)0x0) {
      plVar9 = plVar14 + 10;
      do {
        iVar11 = (int)*plVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  return;
}


