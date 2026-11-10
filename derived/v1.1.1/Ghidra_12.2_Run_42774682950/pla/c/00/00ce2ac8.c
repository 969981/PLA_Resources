/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce2ac8; name: FUN_00ce2ac8
 */


void FUN_00ce2ac8(long param_1)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long local_90;
  long lStack_88;
  undefined1 *local_80;
  long lStack_78;
  undefined8 *local_70;
  undefined8 local_68;
  
  puVar6 = PTR_DAT_043794a0;
  plVar18 = *(long **)(param_1 + 0xb8);
  plVar3 = *(long **)(param_1 + 0xc0);
  if (plVar18 != plVar3) {
    plVar16 = *(long **)(param_1 + 0x88);
    plVar17 = plVar16;
    do {
      local_90 = *plVar18;
      lStack_88 = plVar18[1];
      local_80 = (undefined1 *)plVar18[2];
      lStack_78 = plVar18[3];
      plVar14 = *(long **)(param_1 + 0x80);
      if (*(long **)(param_1 + 0x80) == plVar16) {
        plVar14 = plVar17;
      }
      else {
        do {
          plVar16 = plVar14;
          lVar12 = *plVar16;
          if (lVar12 != 0) {
            if (*(int *)(lVar12 + 0xc) != 0) {
              piVar2 = (int *)(lVar12 + 0xc);
              iVar7 = *(int *)(lVar12 + 0xc);
              do {
                plVar17 = *(long **)(lVar12 + 0x10);
                if (((*PTR_DAT_0437b0e0 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b0e0), iVar8 != 0)) {
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
                    uVar9 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar9;
                    __cxa_guard_release(PTR_DAT_043794d0);
                  }
                  *(undefined **)PTR_DAT_0437b0e8 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_0437b0e0);
                }
                while( true ) {
                  if (plVar17 == (long *)0x0) goto LAB_00ce2df8;
                  if (plVar17 == (long *)PTR_DAT_0437b0e8) break;
                  plVar17 = (long *)*plVar17;
                }
                iVar8 = *piVar2;
                if (iVar8 == iVar7) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar7 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 != '\0') goto LAB_00ce2e4c;
                  lVar12 = *(long *)(lVar12 + 0x18);
                  if (lVar12 != 0) {
                    plVar14 = (long *)(lVar12 + -0x50);
                    plVar17 = (long *)FUN_00ce725c(plVar14);
                    if ((local_90 != *plVar17) &&
                       ((local_80 == &DAT_cbf29ce484222645 ||
                        (puVar13 = (undefined8 *)FUN_00ce7264(plVar14),
                        local_80 == (undefined1 *)*puVar13)))) {
                      FUN_00ce7070(plVar14,&local_90);
                    }
                    lVar12 = *(long *)(lVar12 + 8);
                    plVar16 = plVar16 + 2;
                    piVar2 = (int *)(lVar12 + 0xc);
                    do {
                      iVar7 = *piVar2;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar5) {
                        *piVar2 = iVar7 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar7 + -1 == 0) {
                      *(undefined8 *)(lVar12 + 0x18) = 0;
                      (**(code **)(*plVar14 + 0x20))(plVar14);
                    }
                    goto LAB_00ce2d70;
                  }
                  break;
                }
                ClearExclusiveLocal();
LAB_00ce2e4c:
                iVar7 = iVar8;
              } while (iVar8 != 0);
            }
LAB_00ce2df8:
            plVar17 = *(long **)(param_1 + 0x88);
          }
          plVar15 = plVar16 + 2;
          plVar14 = plVar16;
          if (plVar15 == plVar17) {
LAB_00ce2d0c:
            do {
              plVar15 = plVar15 + -2;
              puVar13 = (undefined8 *)*plVar15;
              if (puVar13 != (undefined8 *)0x0) {
                piVar2 = (int *)(puVar13 + 1);
                do {
                  iVar7 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar7 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar7 + -1 == 0) {
                  puVar13[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)puVar6;
                  *(long *)PTR_DAT_043794a8 = lVar12;
                  local_68 = *puVar13;
                  FUN_02a44274(lVar12 + 0xd8,&local_68);
                }
              }
            } while (plVar15 != plVar14);
          }
          else {
            do {
              plVar1 = plVar15 + 1;
              do {
                lVar12 = *plVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = 0;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              uVar9 = *(undefined8 *)puVar6;
              *(undefined8 *)PTR_DAT_043794a8 = uVar9;
              FUN_02a44e0c(&local_70,uVar9,lVar12);
              puVar13 = (undefined8 *)*plVar15;
              *plVar15 = 0;
              if (puVar13 != (undefined8 *)0x0) {
                piVar2 = (int *)(puVar13 + 1);
                do {
                  iVar7 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar7 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar7 + -1 == 0) {
                  puVar13[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar10 = *(long *)puVar6;
                  *(long *)PTR_DAT_043794a8 = lVar10;
                  local_68 = *puVar13;
                  FUN_02a44274(lVar10 + 0xd8,&local_68);
                }
              }
              puVar13 = (undefined8 *)*plVar14;
              *plVar14 = 0;
              if (local_70 == (undefined8 *)0x0) {
                if (puVar13 != (undefined8 *)0x0) {
                  piVar2 = (int *)(puVar13 + 1);
                  do {
                    iVar7 = *piVar2;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar5) {
                      *piVar2 = iVar7 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar7 == 1) {
                    puVar13[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar12 = *(long *)puVar6;
                    *(long *)PTR_DAT_043794a8 = lVar12;
                    local_68 = *puVar13;
                    FUN_02a44274(lVar12 + 0xd8,&local_68);
                  }
                }
                lVar12 = 0;
              }
              else {
                puVar11 = local_70;
                if (puVar13 != (undefined8 *)0x0) {
                  piVar2 = (int *)(puVar13 + 1);
                  do {
                    iVar7 = *piVar2;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar5) {
                      *piVar2 = iVar7 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar7 + -1 == 0) {
                    puVar13[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar10 = *(long *)puVar6;
                    *(long *)PTR_DAT_043794a8 = lVar10;
                    local_68 = *puVar13;
                    FUN_02a44274(lVar10 + 0xd8,&local_68);
                  }
                  puVar11 = local_70;
                }
                local_70 = (undefined8 *)0x0;
                *plVar14 = (long)puVar11;
              }
              puVar13 = local_70;
              plVar14[1] = lVar12;
              if (local_70 != (undefined8 *)0x0) {
                piVar2 = (int *)(local_70 + 1);
                do {
                  iVar7 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar7 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar7 + -1 == 0) {
                  local_70[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)puVar6;
                  *(long *)PTR_DAT_043794a8 = lVar12;
                  local_68 = *puVar13;
                  FUN_02a44274(lVar12 + 0xd8,&local_68);
                }
              }
              plVar15 = plVar15 + 2;
              plVar14 = plVar14 + 2;
            } while (plVar15 != plVar17);
            plVar15 = *(long **)(param_1 + 0x88);
            if (plVar15 != plVar14) goto LAB_00ce2d0c;
          }
          *(long **)(param_1 + 0x88) = plVar14;
LAB_00ce2d70:
          plVar17 = *(long **)(param_1 + 0x88);
          plVar14 = plVar16;
        } while (plVar16 != plVar17);
      }
      plVar17 = plVar14;
      plVar18 = plVar18 + 4;
    } while (plVar18 != plVar3);
    plVar18 = *(long **)(param_1 + 0xb8);
  }
  *(long **)(param_1 + 0xc0) = plVar18;
  return;
}


