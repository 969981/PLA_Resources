/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a885f0; name: FUN_01a885f0
 */


void FUN_01a885f0(long *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  long *local_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  long *local_c8;
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  long *local_68;
  undefined8 local_58;
  
  *(undefined2 *)(param_1 + 0xec) = 0;
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  FUN_01a0703c(&local_c0,param_1 + 0x15a);
  FUN_01839c8c(&local_68,&local_c0);
  plVar13 = local_c0;
  puVar10 = PTR_DAT_043794a8;
  puVar9 = PTR_DAT_043794a0;
  puVar8 = PTR_DAT_04379498;
  if (local_c0 != (long *)0x0) {
    plVar1 = local_c0 + 1;
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      local_c0[2] = 0;
      if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)puVar9;
      *(long *)puVar10 = lVar17;
      local_d8 = (undefined8 *)*plVar13;
      FUN_02a44274(lVar17 + 0xd8,&local_d8);
    }
  }
  uVar15 = (**(code **)(*param_1 + 0x1b0))(param_1);
  if (((uVar15 & 1) != 0) || (local_68 == (long *)0x0)) goto LAB_01a88864;
  FUN_01839c8c(&local_c0,param_1 + 0x15a);
  uVar15 = (**(code **)(*param_1 + 0x1a0))(param_1);
  fVar18 = 1.0;
  if ((uVar15 & 1) == 0) {
    if (local_c0 != (long *)0x0) goto LAB_01a88714;
  }
  else if (local_c0 != (long *)0x0) {
    fVar18 = (float)local_c0[0x2a] * (float)DAT_0388a140;
    fVar19 = (float)((ulong)local_c0[0x2a] >> 0x20) * (float)((ulong)DAT_0388a140 >> 0x20);
    fVar20 = (float)local_c0[0x2b] * (float)DAT_0388a148;
    fVar21 = (float)((ulong)local_c0[0x2b] >> 0x20) * (float)((ulong)DAT_0388a148 >> 0x20);
    auVar22._4_4_ = fVar19;
    auVar22._0_4_ = fVar18;
    auVar22._8_4_ = fVar20;
    auVar22._12_4_ = fVar21;
    auVar5._4_4_ = fVar19;
    auVar5._0_4_ = fVar18;
    auVar5._8_4_ = fVar20;
    auVar5._12_4_ = fVar21;
    auVar22 = NEON_ext(auVar22,auVar5,8,1);
    fVar19 = auVar22._0_4_ + fVar18 + auVar22._4_4_ + fVar19;
    fVar18 = -1.0;
    if ((-1.0 <= fVar19) && (fVar18 = fVar19, 1.0 < fVar19)) {
      fVar18 = 1.0;
    }
LAB_01a88714:
    lVar17 = local_c0[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar14 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_c0 + 0x20))();
    }
  }
  fVar18 = (float)FUN_0095d8f0(fVar18);
  if (1.1920929e-07 <= fVar18) {
    FUN_01a88b48(&local_c0,param_1);
    puVar11 = PTR_LAB_04379590;
    local_90 = 0;
    local_c0 = (long *)((ulong)local_c0 & 0xffffffff00000000);
    local_88 = 0;
    lVar17 = local_68[0x1a];
    if (lVar17 != 0) {
      fVar18 = -1.0;
      uVar15 = 0;
      do {
        if ((ulong)(long)*(int *)(lVar17 + 0x20) <= uVar15) break;
        uVar16 = FUN_02be4818(local_68,uVar15 & 0xffffffff,&local_c0);
        if ((uVar16 & 1) != 0) {
          FUN_01e4c850(&local_d8,&local_c0);
          FUN_00cf6d78(&local_c8,&local_d8);
          puVar12 = local_d8;
          if (local_d8 != (undefined8 *)0x0) {
            piVar2 = (int *)(local_d8 + 1);
            do {
              iVar14 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar14 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar14 + -1 == 0) {
              local_d8[2] = 0;
              if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                FUN_00100250(puVar11,puVar9,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar8);
              }
              lVar17 = *(long *)puVar9;
              *(long *)puVar10 = lVar17;
              local_58 = *puVar12;
              FUN_02a44274(lVar17 + 0xd8,&local_58);
            }
          }
          if (local_c8 != (long *)0x0) {
            local_d8 = (undefined8 *)0x0;
            uStack_d0 = 0;
            FUN_01841110(&local_d8,local_c8 + 0x4b);
            if (local_d8 == (undefined8 *)0x0) {
              local_e0 = (long *)0x0;
            }
            else {
              FUN_018316b8(&local_e0);
              puVar12 = local_d8;
              if (local_d8 != (undefined8 *)0x0) {
                piVar2 = (int *)(local_d8 + 1);
                do {
                  iVar14 = *piVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = iVar14 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar14 + -1 == 0) {
                  local_d8[2] = 0;
                  if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                    FUN_00100250(puVar11,puVar9,&PTR_LOOP_0411a000);
                    __cxa_guard_release(puVar8);
                  }
                  lVar17 = *(long *)puVar9;
                  *(long *)puVar10 = lVar17;
                  local_58 = *puVar12;
                  FUN_02a44274(lVar17 + 0xd8,&local_58);
                }
              }
              if (local_e0 != (long *)0x0) {
                local_f0 = (float)local_b0;
                fStack_ec = (float)((ulong)local_b0 >> 0x20);
                fStack_e8 = (float)uStack_a8;
                fStack_e4 = (float)((ulong)uStack_a8 >> 0x20);
                local_f0 = local_f0 * (float)local_a0;
                fStack_ec = fStack_ec * (float)((ulong)local_a0 >> 0x20);
                fStack_e8 = fStack_e8 * (float)uStack_98;
                fStack_e4 = fStack_e4 * (float)((ulong)uStack_98 >> 0x20);
                auVar6._4_4_ = fStack_ec;
                auVar6._0_4_ = local_f0;
                auVar6._8_4_ = fStack_e8;
                auVar6._12_4_ = fStack_e4;
                auVar7._4_4_ = fStack_ec;
                auVar7._0_4_ = local_f0;
                auVar7._8_4_ = fStack_e8;
                auVar7._12_4_ = fStack_e4;
                auVar22 = NEON_ext(auVar6,auVar7,8,1);
                fVar19 = auVar22._0_4_ + local_f0 + auVar22._4_4_ + fStack_ec;
                if (fVar18 < fVar19) {
                  *(undefined1 *)(param_1 + 0xec) = *(undefined1 *)((long)local_e0 + 0x202);
                  *(undefined1 *)((long)param_1 + 0x761) = *(undefined1 *)((long)local_e0 + 0x203);
                  fVar18 = fVar19;
                }
                lVar17 = local_e0[0xb];
                piVar2 = (int *)(lVar17 + 0xc);
                do {
                  iVar14 = *piVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = iVar14 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar14 + -1 == 0) {
                  *(undefined8 *)(lVar17 + 0x18) = 0;
                  (**(code **)(*local_e0 + 0x20))();
                }
              }
            }
            if (local_c8 != (long *)0x0) {
              lVar17 = local_c8[0xb];
              piVar2 = (int *)(lVar17 + 0xc);
              do {
                iVar14 = *piVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar14 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar14 + -1 == 0) {
                *(undefined8 *)(lVar17 + 0x18) = 0;
                (**(code **)(*local_c8 + 0x20))();
              }
            }
          }
        }
        uVar15 = uVar15 + 1;
        lVar17 = local_68[0x1a];
      } while (lVar17 != 0);
      if (0.999 <= fVar18) goto LAB_01a88864;
    }
    *(undefined2 *)(param_1 + 0xec) = 0;
  }
LAB_01a88864:
  if (local_68 != (long *)0x0) {
    lVar17 = local_68[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar14 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


