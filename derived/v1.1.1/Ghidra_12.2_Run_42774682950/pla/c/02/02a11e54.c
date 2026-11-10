/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a11e54; name: FUN_02a11e54
 */


void FUN_02a11e54(long param_1)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  undefined2 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined8 local_ac;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  long *local_48;
  
  pbVar10 = *(byte **)(*(long *)(param_1 + 0x5e0) + 0x170);
  uVar13 = (ulong)*pbVar10;
  if (uVar13 != 0x1f) {
    bVar3 = pbVar10[8];
    uVar14 = uVar13;
    if (bVar3 != 0) {
      lVar11 = *(long *)(param_1 + 0x68);
      bVar4 = *(byte *)(*(long *)(lVar11 + 8) + 0x38);
      uVar9 = 0;
      if (bVar4 < 6) {
        uVar9 = (uint)bVar4;
      }
      uVar14 = (ulong)uVar9;
      plVar15 = *(long **)(*(long *)(*(long *)(lVar11 + 8) + uVar13 * 8 + 0x120) + 0x60);
      if (plVar15 != (long *)0x0) {
        plVar1 = plVar15 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        lVar11 = *(long *)(param_1 + 0x68);
      }
      auVar16 = NEON_fmov(0x3f800000,4);
      local_a0 = 0;
      local_ac = 0x200000000;
      local_c8 = 0;
      local_d0 = 0;
      local_b0 = 0;
      local_ae = 1;
      local_68 = 0;
      local_60 = 0;
      local_78 = 0;
      local_70 = 0;
      local_88 = 0;
      local_80 = 0;
      local_98 = 0;
      local_90 = 0;
      uStack_b8 = auVar16._8_8_;
      local_c0 = auVar16._0_8_;
      lVar11 = *(long *)(*(long *)(lVar11 + 8) + uVar13 * 8 + 0x120);
      if ((*(ulong *)(lVar11 + 0x90) & 7) != 0) {
        local_60 = (ulong)*(byte *)(lVar11 + 0x238);
        local_a0 = *(ulong *)(lVar11 + 0x90);
      }
      if ((*(ulong *)(lVar11 + 0x98) & 7) != 0) {
        local_60._0_2_ = CONCAT11(*(undefined1 *)(lVar11 + 0x239),(undefined1)local_60);
        local_60 = (ulong)(ushort)local_60;
        local_98 = *(ulong *)(lVar11 + 0x98);
      }
      if ((*(ulong *)(lVar11 + 0xa0) & 7) != 0) {
        local_60._0_3_ = CONCAT12(*(undefined1 *)(lVar11 + 0x23a),(ushort)local_60);
        local_60 = (ulong)(uint3)local_60;
        local_90 = *(ulong *)(lVar11 + 0xa0);
      }
      if ((*(ulong *)(lVar11 + 0xa8) & 7) != 0) {
        local_60._0_4_ = CONCAT13(*(undefined1 *)(lVar11 + 0x23b),(uint3)local_60);
        local_60 = (ulong)(uint)local_60;
        local_88 = *(ulong *)(lVar11 + 0xa8);
      }
      if ((*(ulong *)(lVar11 + 0xb0) & 7) != 0) {
        local_60._0_5_ = CONCAT14(*(undefined1 *)(lVar11 + 0x23c),(uint)local_60);
        local_60 = (ulong)(uint5)local_60;
        local_80 = *(ulong *)(lVar11 + 0xb0);
      }
      if ((*(ulong *)(lVar11 + 0xb8) & 7) != 0) {
        local_60._0_6_ = CONCAT15(*(undefined1 *)(lVar11 + 0x23d),(uint5)local_60);
        local_60 = (ulong)(uint6)local_60;
        local_78 = *(ulong *)(lVar11 + 0xb8);
      }
      if ((*(ulong *)(lVar11 + 0xc0) & 7) != 0) {
        local_60._0_7_ = CONCAT16(*(undefined1 *)(lVar11 + 0x23e),(uint6)local_60);
        local_60 = (ulong)(uint7)local_60;
        local_70 = *(ulong *)(lVar11 + 0xc0);
      }
      if ((*(ulong *)(lVar11 + 200) & 7) != 0) {
        local_60 = CONCAT17(*(undefined1 *)(lVar11 + 0x23f),(uint7)local_60);
        local_68 = *(ulong *)(lVar11 + 200);
      }
      uVar8 = *(undefined8 *)(param_1 + 0x60);
      local_48 = plVar15;
      if (plVar15 == (long *)0x0) {
        FUN_02948b4c(uVar8,0,uVar14,bVar4,&local_48,&local_d0);
      }
      else {
        plVar1 = plVar15 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        FUN_02948b4c(uVar8,0,uVar14,bVar4,&local_48,&local_d0);
        if (plVar15 != (long *)0x0) {
          plVar2 = plVar15 + 10;
          do {
            iVar7 = (int)*plVar2 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    plVar15 = *(long **)(*(long *)(*(long *)(param_1 + 0x60) + 0x58) + 0x1018);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x48))(plVar15,uVar14,bVar3 != 0,uVar13);
    }
    puVar12 = *(undefined2 **)(*(long *)(param_1 + 0x5e0) + 0x170);
    *(undefined4 *)(puVar12 + 2) = 5;
    *puVar12 = 0x61f;
    *(undefined1 *)(puVar12 + 4) = 0;
  }
  return;
}


