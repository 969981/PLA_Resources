/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c3aa24; name: FUN_01c3aa24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c3aa24(long *param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  byte *pbVar20;
  undefined1 *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_160 [48];
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
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  byte *pbStack_88;
  long local_80;
  long *local_78;
  
  local_100 = 0x7f7fffee;
  local_130[0] = 0;
  local_f8 = 0xffffffffffffffff;
  local_e8 = 0xffffffff;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_f0 = 0xffffff;
  local_e4 = 0xf;
  local_e0 = 0xffff;
  local_dc = 0;
  local_c0 = 0xffffffff;
  local_c8 = 0xffffff;
  local_bc = 0xf;
  local_b8 = 0xffff;
  local_b4 = 0;
  local_d8 = 0;
  uStack_d0 = 0xffffffffffffffff;
  local_b0 = 0;
  uStack_a8 = 0;
  fVar22 = (float)*param_3;
  fVar23 = (float)((ulong)*param_3 >> 0x20);
  local_90 = CONCAT44(fVar23 + (float)((ulong)_DAT_03889de0 >> 0x20),fVar22 + (float)_DAT_03889de0);
  fVar24 = (float)param_3[1];
  fVar25 = (float)((ulong)param_3[1] >> 0x20);
  pbStack_88 = (byte *)CONCAT44(fVar25 + (float)((ulong)_UNK_03889de8 >> 0x20),
                                fVar24 + (float)_UNK_03889de8);
  local_a0 = CONCAT44(fVar23 + (float)((ulong)_DAT_0388a3f0 >> 0x20),fVar22 + (float)_DAT_0388a3f0);
  uStack_98 = CONCAT44(fVar25 + (float)((ulong)_UNK_0388a3f8 >> 0x20),fVar24 + (float)_UNK_0388a3f8)
  ;
  uVar14 = FUN_01c3c6b4(param_2,&local_90,&local_a0,auStack_160);
  puVar10 = PTR_DAT_04381fd8;
  puVar9 = PTR_DAT_04381fd0;
  puVar8 = PTR_DAT_04381eb0;
  puVar7 = PTR_DAT_04381ea8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if ((uVar14 & 1) == 0) {
    lVar17 = *(long *)(param_2 + 0x1f8);
    if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
      piVar1 = (int *)(lVar17 + 0xc);
      iVar12 = *(int *)(lVar17 + 0xc);
      do {
        plVar15 = *(long **)(lVar17 + 0x10);
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar5), iVar13 != 0)) {
            uVar16 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar16;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar10 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_01c3aaf4;
          if (plVar15 == (long *)puVar10) break;
          plVar15 = (long *)*plVar15;
        }
        iVar13 = *piVar1;
        if (iVar13 == iVar12) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01c3ada8;
          lVar17 = *(long *)(lVar17 + 0x18);
          plVar15 = (long *)(lVar17 + -0x50);
          if (lVar17 != 0) {
            FUN_0256c7d0(&local_90,plVar15,param_3,param_4);
            if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar12 != 0)) {
              FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_0437a0d0);
            }
            plVar11 = local_78;
            if (local_90 == *(long *)PTR_DAT_0437a0d8) {
              FUN_0256d4a8(param_1,plVar15,param_3,param_4);
              if (local_78 != (long *)0x0) {
                (**(code **)(*local_78 + 0x20))();
              }
            }
            else {
              *param_1 = local_90;
              param_1[1] = (long)pbStack_88;
              local_78 = (long *)0x0;
              param_1[2] = local_80;
              param_1[3] = (long)plVar11;
            }
            lVar17 = *(long *)(lVar17 + 8);
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            uVar14 = local_130[0];
            if (iVar12 + -1 != 0) goto joined_r0x01c3ab58;
            *(undefined8 *)(lVar17 + 0x18) = 0;
            pcVar18 = *(code **)(*plVar15 + 0x20);
            goto LAB_01c3ab50;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01c3ada8:
        iVar12 = iVar13;
      } while (iVar13 != 0);
    }
  }
  else {
    lVar17 = *(long *)(param_2 + 0x228);
    if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
      piVar1 = (int *)(lVar17 + 0xc);
      iVar12 = *(int *)(lVar17 + 0xc);
      do {
        plVar15 = *(long **)(lVar17 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar5), iVar13 != 0)) {
            uVar16 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar16;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_01c3aaf4;
          if (plVar15 == (long *)puVar8) break;
          plVar15 = (long *)*plVar15;
        }
        iVar13 = *piVar1;
        if (iVar13 == iVar12) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01c3ac68;
          lVar17 = *(long *)(lVar17 + 0x18);
          if (lVar17 != 0) {
            plVar15 = (long *)(lVar17 + -0x50);
            puVar21 = &DAT_cbf29ce484222645;
            FUN_01c3cda0(&local_90,local_130);
            bVar2 = *pbStack_88;
            pbVar20 = pbStack_88;
            while (bVar2 != 0) {
              pbVar20 = pbVar20 + 1;
              puVar21 = (undefined1 *)(((ulong)puVar21 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar20;
            }
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x20))();
            }
            FUN_018c6814(param_1,plVar15,puVar21,param_4);
            lVar17 = *(long *)(lVar17 + 8);
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            uVar14 = local_130[0];
            if (iVar12 + -1 != 0) goto joined_r0x01c3ab58;
            *(undefined8 *)(lVar17 + 0x18) = 0;
            pcVar18 = *(code **)(*plVar15 + 0x20);
            goto LAB_01c3ab50;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01c3ac68:
        iVar12 = iVar13;
      } while (iVar13 != 0);
    }
  }
LAB_01c3aaf4:
  if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar12 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar5 = PTR_DAT_0437a0d8;
  lVar17 = *(long *)(PTR_DAT_0437a0d8 + 8);
  *param_1 = *(long *)PTR_DAT_0437a0d8;
  param_1[1] = lVar17;
  plVar15 = *(long **)(puVar5 + 0x18);
  param_1[2] = *(long *)(puVar5 + 0x10);
  param_1[3] = (long)plVar15;
  uVar14 = local_130[0];
  if (plVar15 != (long *)0x0) {
    pcVar18 = *(code **)(*plVar15 + 0x18);
LAB_01c3ab50:
    (*pcVar18)(plVar15);
    uVar14 = local_130[0];
  }
joined_r0x01c3ab58:
  if ((uVar14 & 1) != 0) {
    lVar17 = tpidr_el0;
    lVar19 = *(long *)(lVar17 + 0x38d490);
    local_130[0] = uVar14;
    if (lVar19 == 0) {
      lVar19 = FUN_0333d16c(0,1);
      *(long *)(lVar17 + 0x38d490) = lVar19;
    }
    plVar15 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
    *(undefined8 *)(uVar14 - 0x11) = 0;
    (**(code **)(*plVar15 + 0x18))
              (plVar15,(undefined8 *)(uVar14 - 0x11),(long)*(int *)(uVar14 - 9) + 0x10);
  }
  return;
}


