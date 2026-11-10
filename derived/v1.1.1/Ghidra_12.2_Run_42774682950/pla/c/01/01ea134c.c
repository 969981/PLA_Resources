/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea134c; name: FUN_01ea134c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01ea134c(long param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  float fVar20;
  long *local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  float local_78;
  long local_68;
  
  if (*(long *)(*(long *)(param_1 + 0x208) + 0x38) == 0) {
    return;
  }
  if (*(char *)(param_1 + (long)(int)param_2 * 8 + 0x480) == '\0') {
    return;
  }
  FUN_0108ec98(&local_98,*(long *)(param_1 + 0x208),
               *(undefined4 *)(param_1 + (long)(int)param_2 * 8 + 0x484));
  local_b8 = local_98;
  local_a0 = local_80;
  local_b0 = pcStack_90;
  uStack_a8 = local_88;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x18))();
  }
  puVar12 = PTR_DAT_043795e0;
  puVar11 = PTR_DAT_043795d8;
  puVar10 = PTR_DAT_043795d0;
  puVar9 = PTR_DAT_043795c8;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  if (local_78 < 0.0) {
    fVar20 = 0.0;
    cVar4 = *local_b0;
  }
  else {
    fVar20 = local_78;
    if (60000.0 < local_78) {
      fVar20 = 60000.0;
    }
    cVar4 = *local_b0;
  }
  if (cVar4 == '\0') goto joined_r0x01ea13e4;
  if (param_2 < 10) {
    uVar5 = 1 << (ulong)(param_2 & 0x1f);
    if ((uVar5 & 10) == 0) {
      if ((uVar5 & 0x224) != 0) {
        lVar16 = *(long *)(param_1 + 0x240);
        if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
          piVar1 = (int *)(lVar16 + 0xc);
          iVar14 = *(int *)(lVar16 + 0xc);
          do {
            plVar19 = *(long **)(lVar16 + 0x10);
            if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
              if (((*puVar11 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar11), iVar13 != 0)) {
                if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
                  uVar15 = FUN_0087f8f0();
                  *(undefined8 *)puVar8 = uVar15;
                  __cxa_guard_release(puVar7);
                }
                *(undefined **)puVar12 = puVar8;
                __cxa_guard_release(puVar11);
              }
              *(undefined **)puVar10 = puVar12;
              __cxa_guard_release(puVar9);
            }
            while( true ) {
              if (plVar19 == (long *)0x0) goto joined_r0x01ea13e4;
              if (plVar19 == (long *)puVar10) break;
              plVar19 = (long *)*plVar19;
            }
            iVar13 = *piVar1;
            if (iVar13 == iVar14) {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar14 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 != '\0') goto LAB_01ea15d8;
              lVar16 = *(long *)(lVar16 + 0x18);
              if (lVar16 != 0) {
                plVar19 = (long *)(lVar16 + -0x50);
                FUN_01a74a50(&local_e8,plVar19);
                if (local_e8 == (long *)0x0) {
                  plVar18 = (long *)0x0;
                  local_c0 = (long *)0x0;
                }
                else {
                  FUN_00bd9360(&local_c0);
                  plVar18 = local_c0;
                  plVar2 = local_e8;
                  local_c0 = (long *)0x0;
                  if (local_e8 != (long *)0x0) {
                    plVar3 = local_e8 + 1;
                    do {
                      iVar14 = (int)*plVar3 + -1;
                      cVar4 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                      if (bVar6) {
                        *(int *)plVar3 = iVar14;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar14 == 0) {
                      local_e8[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar17 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar17;
                      local_68 = *plVar2;
                      FUN_02a44274(lVar17 + 0xd8,&local_68);
                    }
                  }
                }
                lVar16 = *(long *)(lVar16 + 8);
                piVar1 = (int *)(lVar16 + 0xc);
                do {
                  iVar14 = *piVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar14 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar14 + -1 == 0) {
                  *(undefined8 *)(lVar16 + 0x18) = 0;
                  (**(code **)(*plVar19 + 0x20))(plVar19);
                }
                goto joined_r0x01ea1734;
              }
              break;
            }
            ClearExclusiveLocal();
LAB_01ea15d8:
            iVar14 = iVar13;
          } while (iVar13 != 0);
        }
        goto joined_r0x01ea13e4;
      }
      goto LAB_01ea1474;
    }
    FUN_01ea188c(&local_c0,param_1);
    if (local_c0 == (long *)0x0) goto joined_r0x01ea13e4;
    FUN_01a74a50(&local_e8);
    if (local_e8 == (long *)0x0) {
      plVar18 = (long *)0x0;
LAB_01ea1510:
      local_c8 = (long *)0x0;
    }
    else {
      FUN_00bd9360(&local_c8);
      plVar18 = local_c8;
      plVar19 = local_e8;
      local_c8 = (long *)0x0;
      if (local_e8 == (long *)0x0) goto LAB_01ea1510;
      plVar2 = local_e8 + 1;
      do {
        iVar14 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar14;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar14 != 0) goto LAB_01ea1510;
      local_e8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_68 = *plVar19;
      FUN_02a44274(lVar16 + 0xd8,&local_68);
    }
    if (local_c0 != (long *)0x0) {
      lVar16 = local_c0[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar14 = *piVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_c0 + 0x20))();
      }
    }
  }
  else {
LAB_01ea1474:
    if (*(long *)(param_1 + 0x280) == 0) {
      plVar18 = (long *)0x0;
      local_e8 = (long *)0x0;
    }
    else {
      FUN_00bd9360(&local_e8);
      plVar18 = local_e8;
    }
  }
joined_r0x01ea1734:
  if (plVar18 != (long *)0x0) {
    if (1.1920929e-07 < fVar20) {
      local_e8 = (long *)&DAT_9a58aa3fc6b7b75f;
      pcStack_e0 = "FFIELDABILITY_DELAY";
      local_d8 = 0x13;
      local_d0 = (long *)0x0;
      (**(code **)(*plVar18 + 0xf8))(fVar20,plVar18,&local_e8,0);
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x20))();
      }
    }
    FUN_0290b66c(plVar18,&local_b8,0);
    lVar16 = plVar18[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
joined_r0x01ea13e4:
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  return;
}


