/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c4e668; name: FUN_01c4e668
 */


undefined8 FUN_01c4e668(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long *local_68;
  
  if (*(int *)(param_1 + 0x594) != 3) {
    if ((*(int *)(param_1 + 0x594) != 0) || (*(char *)(param_1 + 0x620) != '\0')) {
      return 0;
    }
    lVar12 = param_1 + (long)*(int *)(param_1 + 0x618) * 0x38;
    lVar15 = *(long *)(lVar12 + 0x5b0);
    for (lVar12 = *(long *)(lVar12 + 0x5a8); lVar12 != lVar15; lVar12 = lVar12 + 0x50) {
      FUN_016c24d0(&local_68,lVar12);
      if (local_68 != (long *)0x0) {
        if ((char)local_68[0x40] == '\0') {
          lVar16 = *(long *)(lVar12 + 0x10);
          if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
            piVar1 = (int *)(lVar16 + 0xc);
            iVar9 = *(int *)(lVar16 + 0xc);
            do {
              uVar10 = FUN_01a49bec(*(undefined8 *)(lVar16 + 0x10));
              if ((uVar10 & 1) == 0) break;
              iVar3 = *piVar1;
              if (iVar3 == iVar9) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar9 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 != '\0') goto LAB_01c4e758;
                lVar16 = *(long *)(lVar16 + 0x18);
                if (lVar16 != 0) {
                  if ((*(char *)(lVar16 + 0x7d1) == '\0') && (*(char *)(lVar16 + 0x7cd) == '\0')) {
                    lVar13 = *(long *)(lVar16 + 8);
                    piVar1 = (int *)(lVar13 + 0xc);
                    do {
                      iVar9 = *piVar1;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar5) {
                        *piVar1 = iVar9 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar9 + -1 == 0) {
                      *(undefined8 *)(lVar13 + 0x18) = 0;
                      (**(code **)(*(long *)(lVar16 + -0x50) + 0x20))();
                    }
                    break;
                  }
                  *(undefined1 *)(lVar16 + 0xae0) = 1;
                  lVar13 = *(long *)(lVar16 + 8);
                  piVar1 = (int *)(lVar13 + 0xc);
                  do {
                    iVar9 = *piVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = iVar9 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar9 + -1 == 0) {
                    *(undefined8 *)(lVar13 + 0x18) = 0;
                    (**(code **)(*(long *)(lVar16 + -0x50) + 0x20))();
                  }
                  goto joined_r0x01c4e7d4;
                }
                break;
              }
              ClearExclusiveLocal();
LAB_01c4e758:
              iVar9 = iVar3;
            } while (iVar3 != 0);
          }
          FUN_01836814(local_68,0);
        }
joined_r0x01c4e7d4:
        if (local_68 != (long *)0x0) {
          lVar16 = local_68[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x594) = 3;
  }
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  lVar12 = param_1 + (long)*(int *)(param_1 + 0x618) * 0x38;
  puVar17 = *(undefined8 **)(lVar12 + 0x5a8);
  puVar14 = *(undefined8 **)(lVar12 + 0x5b0);
  while (puVar14 != puVar17) {
    plVar11 = (long *)puVar14[-2];
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    plVar11 = (long *)puVar14[-6];
    puVar18 = puVar14 + -10;
    if (plVar11 != (long *)0x0) {
      plVar2 = plVar11 + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        plVar11[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar6);
        }
        lVar15 = *(long *)puVar7;
        *(long *)puVar8 = lVar15;
        local_68 = (long *)*plVar11;
        FUN_02a44274(lVar15 + 0xd8,&local_68);
      }
    }
    plVar11 = (long *)puVar14[-8];
    if (plVar11 != (long *)0x0) {
      plVar2 = plVar11 + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        plVar11[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar6);
        }
        lVar15 = *(long *)puVar7;
        *(long *)puVar8 = lVar15;
        local_68 = (long *)*plVar11;
        FUN_02a44274(lVar15 + 0xd8,&local_68);
      }
    }
    plVar11 = (long *)*puVar18;
    puVar14 = puVar18;
    if (plVar11 != (long *)0x0) {
      plVar2 = plVar11 + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        plVar11[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar6);
        }
        lVar15 = *(long *)puVar7;
        *(long *)puVar8 = lVar15;
        local_68 = (long *)*plVar11;
        FUN_02a44274(lVar15 + 0xd8,&local_68);
      }
    }
  }
  *(undefined8 **)(lVar12 + 0x5b0) = puVar17;
  lVar12 = param_1 + (long)*(int *)(param_1 + 0x61c) * 0x38;
  puVar14 = *(undefined8 **)(lVar12 + 0x5a8);
  puVar17 = *(undefined8 **)(lVar12 + 0x5b0);
  if (puVar14 != puVar17) {
    do {
      FUN_016c24d0(&local_68,puVar14);
      if ((local_68 != (long *)0x0) &&
         (((char)local_68[0x40] != '\0' || (FUN_01836814(local_68,0), local_68 != (long *)0x0)))) {
        lVar12 = local_68[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
      puVar8 = PTR_DAT_043794a8;
      puVar7 = PTR_DAT_043794a0;
      puVar6 = PTR_DAT_04379498;
      puVar14 = puVar14 + 10;
    } while (puVar14 != puVar17);
    lVar12 = param_1 + (long)*(int *)(param_1 + 0x61c) * 0x38;
    puVar14 = *(undefined8 **)(lVar12 + 0x5a8);
    puVar17 = *(undefined8 **)(lVar12 + 0x5b0);
    while (puVar17 != puVar14) {
      plVar11 = (long *)puVar17[-2];
      if (plVar11 != (long *)0x0) {
        lVar15 = plVar11[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))();
        }
      }
      plVar11 = (long *)puVar17[-6];
      puVar18 = puVar17 + -10;
      if (plVar11 != (long *)0x0) {
        plVar2 = plVar11 + 1;
        do {
          iVar9 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 == 0) {
          plVar11[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar15 = *(long *)puVar7;
          *(long *)puVar8 = lVar15;
          local_68 = (long *)*plVar11;
          FUN_02a44274(lVar15 + 0xd8,&local_68);
        }
      }
      plVar11 = (long *)puVar17[-8];
      if (plVar11 != (long *)0x0) {
        plVar2 = plVar11 + 1;
        do {
          iVar9 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 == 0) {
          plVar11[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar15 = *(long *)puVar7;
          *(long *)puVar8 = lVar15;
          local_68 = (long *)*plVar11;
          FUN_02a44274(lVar15 + 0xd8,&local_68);
        }
      }
      plVar11 = (long *)*puVar18;
      puVar17 = puVar18;
      if (plVar11 != (long *)0x0) {
        plVar2 = plVar11 + 1;
        do {
          iVar9 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 == 0) {
          plVar11[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar15 = *(long *)puVar7;
          *(long *)puVar8 = lVar15;
          local_68 = (long *)*plVar11;
          FUN_02a44274(lVar15 + 0xd8,&local_68);
        }
      }
    }
  }
  *(undefined8 **)(lVar12 + 0x5b0) = puVar14;
  *(undefined4 *)(param_1 + 0x594) = 0;
  return 1;
}


