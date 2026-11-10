/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0184d4b8; name: FUN_0184d4b8
 */


void FUN_0184d4b8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  int iVar19;
  long *local_70;
  long *local_68;
  
  puVar8 = PTR_DAT_0437a250;
  puVar7 = PTR_DAT_043795d8;
  puVar6 = PTR_DAT_043794d0;
  puVar5 = PTR_DAT_043794c0;
  puVar4 = PTR_DAT_043794b0;
  plVar14 = (long *)(param_1 + 0x50);
  plVar12 = (long *)*plVar14;
  if (plVar12 == *(long **)(param_1 + 0x58)) {
    return;
  }
LAB_0184d518:
  lVar17 = *plVar12;
  if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
    piVar1 = (int *)(lVar17 + 0xc);
    iVar19 = *(int *)(lVar17 + 0xc);
    do {
      puVar15 = *(undefined8 **)(lVar17 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar10;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (puVar15 == (undefined8 *)0x0) goto LAB_0184d520;
        if (puVar15 == (undefined8 *)PTR_DAT_043794b8) break;
        puVar15 = (undefined8 *)*puVar15;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar19) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar19 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar17 = *(long *)(lVar17 + 0x18);
          if (lVar17 != 0) {
            lVar16 = plVar12[2];
            if ((lVar16 == 0) || (*(int *)(lVar16 + 0xc) == 0)) goto LAB_0184d760;
            piVar1 = (int *)(lVar16 + 0xc);
            iVar19 = *(int *)(lVar16 + 0xc);
            goto LAB_0184da7c;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar19 = iVar9;
    } while (iVar9 != 0);
  }
LAB_0184d520:
  lVar17 = plVar12[2];
  if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
    piVar1 = (int *)(lVar17 + 0xc);
    iVar19 = *(int *)(lVar17 + 0xc);
    do {
      puVar15 = *(undefined8 **)(lVar17 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar8,plVar12), iVar9 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar10;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)PTR_DAT_0437a258 = PTR_DAT_043795e0;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (puVar15 == (undefined8 *)0x0) goto LAB_0184d528;
        if (puVar15 == (undefined8 *)PTR_DAT_0437a258) break;
        puVar15 = (undefined8 *)*puVar15;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar19) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar19 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_0184d55c;
        lVar17 = *(long *)(lVar17 + 0x18);
        if (lVar17 != 0) {
          plVar18 = (long *)(lVar17 + -0x50);
          if (plVar12[0x14] == 0) goto LAB_0184d88c;
          lVar16 = *(long *)(lVar17 + 8);
          if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0184dbd4;
          if (*(long *)(lVar16 + 0x10) == 0) {
            uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
            *(undefined8 *)(lVar16 + 0x10) = uVar10;
          }
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar16 = *(long *)(lVar17 + 8);
          local_68 = plVar18;
          if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0184dbd4;
          if (*(long *)(lVar16 + 0x10) == 0) {
            uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
            *(undefined8 *)(lVar16 + 0x10) = uVar10;
          }
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uVar11 = (*(code *)plVar12[0x14])(plVar12 + 0x18,&local_68);
          if (local_68 != (long *)0x0) {
            lVar16 = local_68[0xb];
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar19 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar19 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar19 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*local_68 + 0x20))();
            }
          }
          lVar16 = *(long *)(lVar17 + 8);
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar19 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar19 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar18 + 0x20))(plVar18);
            if ((uVar11 & 1) == 0) goto LAB_0184d9d4;
LAB_0184d88c:
            if ((char)plVar12[0x24] == '\0') {
              FUN_01836814(plVar18,0);
            }
            else {
              FUN_015916d0(plVar18,0,0x2000,0);
            }
            if (plVar12[4] != 0) {
              lVar16 = *(long *)(lVar17 + 8);
              if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_0184dbd4:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl("","","",0);
              }
              if (*(long *)(lVar16 + 0x10) == 0) {
                uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
                *(undefined8 *)(lVar16 + 0x10) = uVar10;
              }
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              lVar16 = *(long *)(lVar17 + 8);
              local_68 = plVar18;
              if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0184dbd4;
              if (*(long *)(lVar16 + 0x10) == 0) {
                uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
                *(undefined8 *)(lVar16 + 0x10) = uVar10;
              }
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              (*(code *)plVar12[4])(plVar12 + 8,&local_68);
              if (local_68 != (long *)0x0) {
                lVar16 = local_68[0xb];
                piVar1 = (int *)(lVar16 + 0xc);
                do {
                  iVar19 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar19 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar19 + -1 == 0) {
                  *(undefined8 *)(lVar16 + 0x18) = 0;
                  (**(code **)(*local_68 + 0x20))();
                }
              }
              lVar16 = *(long *)(lVar17 + 8);
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                iVar19 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar19 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar19 + -1 == 0) {
                *(undefined8 *)(lVar16 + 0x18) = 0;
                (**(code **)(*plVar18 + 0x20))(plVar18);
              }
            }
            local_70 = (long *)FUN_0184dbec(plVar14,plVar12);
          }
          else {
            if ((uVar11 & 1) != 0) goto LAB_0184d88c;
LAB_0184d9d4:
            local_70 = plVar12 + 0x26;
          }
          lVar17 = *(long *)(lVar17 + 8);
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar19 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar19 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*plVar18 + 0x20))(plVar18);
          }
          plVar12 = local_70;
          goto LAB_0184d534;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_0184d55c:
      iVar19 = iVar9;
    } while (iVar9 != 0);
  }
LAB_0184d528:
  plVar12 = (long *)FUN_0184dbec(plVar14,plVar12);
  goto LAB_0184d534;
LAB_0184da7c:
  do {
    plVar18 = *(long **)(lVar16 + 0x10);
    if (((*puVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar8), iVar9 != 0)) {
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          uVar10 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar10;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar7);
      }
      *(undefined **)PTR_DAT_0437a258 = PTR_DAT_043795e0;
      __cxa_guard_release(puVar8);
    }
    while( true ) {
      if (plVar18 == (long *)0x0) goto LAB_0184d760;
      if (plVar18 == (long *)PTR_DAT_0437a258) break;
      plVar18 = (long *)*plVar18;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar19) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar19 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_0184da74;
      lVar16 = *(long *)(lVar16 + 0x18);
      if (lVar16 != 0) {
        lVar13 = *(long *)(lVar16 + 8);
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar19 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar19 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar19 == 1) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*(long *)(lVar16 + -0x50) + 0x20))();
        }
        iVar19 = 0;
        local_70 = plVar12;
        goto LAB_0184d774;
      }
      break;
    }
    ClearExclusiveLocal();
LAB_0184da74:
    iVar19 = iVar9;
  } while (iVar9 != 0);
LAB_0184d760:
  local_70 = (long *)FUN_0184dbec(plVar14,plVar12);
  iVar19 = 3;
LAB_0184d774:
  lVar16 = *(long *)(lVar17 + 8);
  piVar1 = (int *)(lVar16 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar9 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*(long *)(lVar17 + -0x50) + 0x20))();
  }
  plVar12 = local_70 + 0x26;
  if (iVar19 != 0) {
    plVar12 = local_70;
  }
LAB_0184d534:
  if (plVar12 == *(long **)(param_1 + 0x58)) {
    return;
  }
  goto LAB_0184d518;
}


