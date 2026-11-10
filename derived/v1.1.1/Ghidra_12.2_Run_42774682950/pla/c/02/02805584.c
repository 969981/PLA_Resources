/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02805584; name: FUN_02805584
 */


void FUN_02805584(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  int iVar13;
  long *plVar14;
  byte *pbVar15;
  int iVar16;
  long lVar17;
  byte local_d0 [64];
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  
  plVar14 = *(long **)(param_1 + 0x2c8);
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
  local_d0[0x30] = 0;
  local_d0[0x31] = 0;
  local_d0[0x32] = 0;
  local_d0[0x33] = 0;
  local_d0[0x34] = 0;
  local_d0[0x35] = 0;
  local_d0[0x36] = 0;
  local_d0[0x37] = 0;
  local_d0[0x38] = 0;
  local_d0[0x39] = 0;
  local_d0[0x3a] = 0;
  local_d0[0x3b] = 0;
  local_d0[0x3c] = 0;
  local_d0[0x3d] = 0;
  local_d0[0x3e] = 0;
  local_d0[0x3f] = 0;
  local_80 = (undefined1 *)0xe2a06d3a0634e918;
  pbStack_78 = (byte *)0x39ac1bb;
  local_d0[0x20] = 0;
  local_d0[0x21] = 0;
  local_d0[0x22] = 0;
  local_d0[0x23] = 0;
  local_d0[0x24] = 0;
  local_d0[0x25] = 0;
  local_d0[0x26] = 0;
  local_d0[0x27] = 0;
  local_d0[0x28] = 0;
  local_d0[0x29] = 0;
  local_d0[0x2a] = 0;
  local_d0[0x2b] = 0;
  local_d0[0x2c] = 0;
  local_d0[0x2d] = 0;
  local_d0[0x2e] = 0;
  local_d0[0x2f] = 0;
  local_d0[0x10] = 0;
  local_d0[0x11] = 0;
  local_d0[0x12] = 0;
  local_d0[0x13] = 0;
  local_d0[0x14] = 0;
  local_d0[0x15] = 0;
  local_d0[0x16] = 0;
  local_d0[0x17] = 0;
  local_d0[0x18] = 0;
  local_d0[0x19] = 0;
  local_d0[0x1a] = 0;
  local_d0[0x1b] = 0;
  local_d0[0x1c] = 0;
  local_d0[0x1d] = 0;
  local_d0[0x1e] = 0;
  local_d0[0x1f] = 0;
  local_d0[0] = 0;
  local_d0[1] = 0;
  local_d0[2] = 0;
  local_d0[3] = 0;
  local_d0[4] = 0;
  local_d0[5] = 0;
  local_d0[6] = 0;
  local_d0[7] = 0;
  local_d0[8] = 0;
  local_d0[9] = 0;
  local_d0[10] = 0;
  local_d0[0xb] = 0;
  local_d0[0xc] = 0;
  local_d0[0xd] = 0;
  local_d0[0xe] = 0;
  local_d0[0xf] = 0;
  local_70 = 10;
  local_68 = (long *)0x0;
  lVar8 = FUN_00d2ec48(param_1 + 0x180,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (lVar8 != 0) {
    uVar2 = *(undefined4 *)(*(long *)(lVar8 + 0x468) + 8);
    *(undefined4 *)(*(long *)(lVar8 + 0x468) + 8) = 0;
    FUN_0280e96c(lVar8,0,uVar2,0);
    iVar16 = 0;
    pbVar15 = (byte *)((ulong)local_d0 | 1);
    do {
      snprintf((char *)local_d0,0x40,"button_%02d",iVar16);
      local_80 = &DAT_cbf29ce484222645;
      if (local_d0[0] != 0) {
        local_80 = &DAT_cbf29ce484222645;
        pbVar12 = pbVar15;
        bVar3 = local_d0[0];
        do {
          local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar3 != 0);
      }
      local_70 = 0x3f;
      local_68 = (long *)0x0;
      local_90 = 0;
      local_88 = 0;
      pbStack_78 = local_d0;
      FUN_0280e56c(lVar8,&local_80,&local_88,&local_90);
      if (0 < local_90._4_4_) {
        iVar10 = local_88._4_4_;
        do {
          if (0 < (int)local_90) {
            lVar11 = *(long *)(lVar8 + 0x468);
            iVar13 = (int)local_88;
            iVar1 = iVar10;
            piVar6 = (int *)(lVar11 + 0xc);
            if (*(int *)(lVar11 + 0x1c) != 0) {
              iVar13 = iVar10;
              iVar1 = (int)local_88;
              piVar6 = (int *)(lVar11 + 0x10);
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0x40) + 0x20) +
                     (ulong)(uint)(iVar13 + *piVar6 * iVar1) * 0x28;
            *(ulong *)(lVar11 + 0x20) = *(ulong *)(lVar11 + 0x20) & 0xfffffffffffffffe;
            iVar13 = (int)local_88;
            while (iVar13 = iVar13 + 1, iVar13 < (int)local_90 + (int)local_88) {
              lVar11 = *(long *)(lVar8 + 0x468);
              iVar1 = iVar13;
              iVar7 = iVar10;
              piVar6 = (int *)(lVar11 + 0xc);
              if (*(int *)(lVar11 + 0x1c) != 0) {
                iVar1 = iVar10;
                iVar7 = iVar13;
                piVar6 = (int *)(lVar11 + 0x10);
              }
              lVar11 = *(long *)(*(long *)(lVar11 + 0x40) + 0x20) +
                       (ulong)(uint)(iVar1 + *piVar6 * iVar7) * 0x28;
              *(ulong *)(lVar11 + 0x20) = *(ulong *)(lVar11 + 0x20) & 0xfffffffffffffffe;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_88._4_4_ + local_90._4_4_);
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      local_70 = strlen((char *)local_d0);
      local_80 = &DAT_cbf29ce484222645;
      if (local_d0[0] != 0) {
        local_80 = &DAT_cbf29ce484222645;
        pbVar12 = pbVar15;
        bVar3 = local_d0[0];
        do {
          local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar3 != 0);
      }
      local_68 = (long *)0x0;
      pbStack_78 = local_d0;
      plVar9 = (long *)FUN_00d2e944(param_1 + 0x180,&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if ((plVar9 != (long *)0x0) && (*(char *)((long)plVar9 + 0xa3) != '\0')) {
        *(undefined1 *)((long)plVar9 + 0xa3) = 0;
        (**(code **)(*plVar9 + 0xa0))(plVar9,0);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != 4);
  }
  local_70 = 0xf;
  local_68 = (long *)0x0;
  local_80 = (undefined1 *)0x73129179107f4232;
  pbStack_78 = (byte *)0x39be4ef;
  lVar17 = plVar14[0x37];
  lVar8 = plVar14[0x38];
  lVar11 = plVar14[0x39];
  *(undefined4 *)(lVar17 + 0x124) = 0;
  *(undefined2 *)(lVar17 + 0x128) = 0;
  *(undefined4 *)(lVar17 + 300) = 0;
  *(undefined4 *)(lVar17 + 0x134) = 0;
  FUN_02c33414(lVar17,lVar8);
  if (*(char *)(lVar11 + 0x7c) != '\0') {
    **(undefined2 **)(lVar11 + 0x58) = 0;
    *(undefined2 *)(lVar11 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar17,lVar11,lVar8,0,0);
  FUN_0283ce7c(plVar14,&local_80,plVar14[0x39],10);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x5af) = 0;
  plVar9 = plVar14 + 10;
  do {
    iVar16 = (int)*plVar9 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *(int *)plVar9 = iVar16;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  return;
}


