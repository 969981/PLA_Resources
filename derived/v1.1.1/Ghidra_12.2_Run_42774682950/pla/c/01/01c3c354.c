/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c3c354; name: FUN_01c3c354
 */


uint FUN_01c3c354(long param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar20;
  undefined1 in_q3 [16];
  undefined8 uVar21;
  long *local_168;
  undefined1 auStack_160 [32];
  undefined4 local_140;
  undefined8 local_138;
  ulong local_130 [2];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined2 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined2 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  byte *pbStack_98;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar21 = in_q3._8_8_;
  uVar11 = in_q3._0_8_;
  local_dc = 0;
  local_100 = 0x7f7fffee;
  local_f8 = 0xffffffffffffffff;
  local_d8 = 0;
  uStack_d0 = 0xffffffffffffffff;
  local_140 = 0;
  local_e8 = 0xffffffff;
  local_f0 = 0xffffff;
  local_e4 = 0xf;
  local_e0 = 0xffff;
  local_c0 = 0xffffffff;
  local_c8 = 0xffffff;
  local_bc = 0xf;
  local_b8 = 0xffff;
  local_b4 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_138 = 0;
  local_130[0] = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  FUN_009c69bc(&local_168);
  (**(code **)(*local_168 + 0x40))();
  fVar19 = (float)FUN_00ae6464();
  fVar20 = (float)((ulong)uVar11 >> 0x20);
  local_a0 = (undefined1 *)CONCAT44(fVar20 + fVar19,(float)uVar11 + 0.0);
  fVar19 = (float)((ulong)uVar21 >> 0x20);
  pbStack_98 = (byte *)CONCAT44(fVar19 + 0.0,(float)uVar21 + 0.0);
  local_80 = CONCAT44(fVar20 + (float)((ulong)DAT_0388a140 >> 0x20),
                      (float)uVar11 + (float)DAT_0388a140);
  uStack_78 = CONCAT44(fVar19 + (float)((ulong)DAT_0388a148 >> 0x20),
                       (float)uVar21 + (float)DAT_0388a148);
  uVar9 = FUN_01c3ca30(param_1,&local_a0,&local_80,auStack_160);
  pbVar14 = PTR_DAT_043794d0;
  puVar16 = (undefined8 *)PTR_DAT_043794d8;
  pbVar5 = PTR_DAT_04381ea8;
  puVar6 = (undefined8 *)PTR_DAT_04381eb0;
  if (local_168 != (long *)0x0) {
    lVar12 = local_168[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar17 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pbVar14 = PTR_DAT_043794d0;
    puVar16 = (undefined8 *)PTR_DAT_043794d8;
    pbVar5 = PTR_DAT_04381ea8;
    puVar6 = (undefined8 *)PTR_DAT_04381eb0;
    if (iVar17 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_168 + 0x20))();
      pbVar14 = PTR_DAT_043794d0;
      puVar16 = (undefined8 *)PTR_DAT_043794d8;
      pbVar5 = PTR_DAT_04381ea8;
      puVar6 = (undefined8 *)PTR_DAT_04381eb0;
    }
  }
  PTR_DAT_043794d0 = pbVar14;
  PTR_DAT_043794d8 = (undefined *)puVar16;
  PTR_DAT_04381ea8 = pbVar5;
  PTR_DAT_04381eb0 = (undefined *)puVar6;
  if ((uVar9 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x228);
    if ((lVar12 == 0) || (*(int *)(lVar12 + 0xc) == 0)) {
LAB_01c3c4b0:
      uVar7 = 0;
    }
    else {
      piVar1 = (int *)(lVar12 + 0xc);
      iVar17 = *(int *)(lVar12 + 0xc);
      do {
        puVar18 = *(undefined8 **)(lVar12 + 0x10);
        if (((*pbVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar5), iVar8 != 0)) {
          if (((*pbVar14 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar14), iVar8 != 0)) {
            uVar11 = FUN_0087f8f0();
            *puVar16 = uVar11;
            __cxa_guard_release(pbVar14);
          }
          *puVar6 = puVar16;
          __cxa_guard_release(pbVar5);
        }
        if (puVar18 == (undefined8 *)0x0) goto LAB_01c3c4b0;
        while (puVar18 != puVar6) {
          puVar18 = (undefined8 *)*puVar18;
          uVar7 = 0;
          if (puVar18 == (undefined8 *)0x0) goto joined_r0x01c3c4b8;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar17) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar17 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01c3c568;
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 != 0) {
            plVar10 = (long *)(lVar12 + -0x50);
            puVar15 = &DAT_cbf29ce484222645;
            FUN_01c3cda0(&local_a0,local_130);
            bVar2 = *pbStack_98;
            pbVar14 = pbStack_98;
            while (bVar2 != 0) {
              pbVar14 = pbVar14 + 1;
              puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar14;
            }
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
            local_a0 = puVar15;
            uVar7 = FUN_018c6a78(plVar10,&local_a0);
            lVar12 = *(long *)(lVar12 + 8);
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar17 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar17 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar17 + -1 != 0) break;
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar10 + 0x20))(plVar10);
            if ((local_130[0] & 1) == 0) goto LAB_01c3c470;
            goto LAB_01c3c4bc;
          }
          goto LAB_01c3c4b0;
        }
        ClearExclusiveLocal();
LAB_01c3c568:
        uVar7 = 0;
        iVar17 = iVar8;
      } while (iVar8 != 0);
    }
  }
joined_r0x01c3c4b8:
  if ((local_130[0] & 1) != 0) {
LAB_01c3c4bc:
    uVar9 = local_130[0];
    lVar12 = tpidr_el0;
    lVar13 = *(long *)(lVar12 + 0x38d490);
    if (lVar13 == 0) {
      lVar13 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar13;
    }
    plVar10 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
    puVar16 = (undefined8 *)(uVar9 - 0x11);
    *puVar16 = 0;
    (**(code **)(*plVar10 + 0x18))(plVar10,puVar16,(long)*(int *)(uVar9 - 9) + 0x10);
  }
LAB_01c3c470:
  return uVar7 & 1;
}


