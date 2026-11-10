/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e0af38; name: FUN_01e0af38
 */


int FUN_01e0af38(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *local_80 [2];
  long local_70;
  long local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar12 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar12;
  plVar14 = *(long **)(lVar12 + 0xc0);
  if (plVar14 != (long *)0x0) {
    lVar12 = plVar14[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_01e0b2dc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_68 = plVar14[0x18];
  local_70 = local_68 + plVar14[0x19] * 8;
  FUN_01e0c030(local_80,&local_68,&local_70);
  if (local_80[0] != (long *)(plVar14[0x18] + plVar14[0x19] * 8)) {
    plVar16 = (long *)*local_80[0];
    puVar11 = (undefined8 *)(**(code **)plVar16[10])(plVar16 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar8 != 0)) {
      uVar10 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar10;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar11 != (undefined8 *)0x0) {
LAB_01e0b02c:
      if (puVar11 != (undefined8 *)PTR_DAT_0437c680) goto LAB_01e0b120;
      lVar12 = plVar16[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e0b2dc;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar15 = plVar16;
      } while (cVar2 != '\0');
LAB_01e0b070:
      if (plVar15 == (long *)0x0) goto LAB_01e0b1a4;
      FUN_01e564f8(local_80,plVar15);
      plVar16 = local_80[0];
      puVar6 = PTR_DAT_0437c670;
      puVar5 = PTR_DAT_0437c668;
      puVar4 = PTR_DAT_043794d0;
      if (local_80[0] == (long *)0x0) {
LAB_01e0b088:
        iVar8 = 4;
      }
      else {
        if (*(int *)((long)local_80[0] + 0xc) == 0) {
LAB_01e0b344:
          plVar16 = (long *)0x0;
        }
        else {
          piVar1 = (int *)((long)local_80[0] + 0xc);
          iVar8 = *(int *)((long)local_80[0] + 0xc);
          while( true ) {
            plVar18 = (long *)plVar16[2];
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
                uVar10 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar10;
                __cxa_guard_release(puVar4);
              }
              *(undefined **)puVar6 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar5);
            }
            while( true ) {
              if (plVar18 == (long *)0x0) goto LAB_01e0b344;
              if (plVar18 == (long *)puVar6) break;
              plVar18 = (long *)*plVar18;
            }
            iVar9 = *piVar1;
            if (iVar9 == iVar8) break;
            ClearExclusiveLocal();
LAB_01e0b1dc:
            iVar8 = iVar9;
            if (iVar9 == 0) goto LAB_01e0b344;
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_01e0b1dc;
          lVar12 = plVar16[3];
          plVar16 = (long *)0x0;
          if (lVar12 != 0) {
            plVar16 = (long *)(lVar12 + -0x50);
          }
        }
        if (local_80[0] != (long *)0x0) {
          FUN_02a43934();
        }
        if (plVar16 == (long *)0x0) goto LAB_01e0b088;
        plVar18 = (long *)plVar16[0xe];
        if (plVar18 == (long *)0x0) {
          iVar8 = 4;
        }
        else {
          lVar12 = plVar18[0xb];
          if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e0b2dc;
          if (*(long *)(lVar12 + 0x10) == 0) {
            uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
            *(undefined8 *)(lVar12 + 0x10) = uVar10;
          }
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          FUN_0199ce28(local_80,plVar18);
          plVar7 = local_80[0];
          puVar4 = PTR_DAT_0437a660;
          if (local_80[0] == (long *)0x0) {
LAB_01e0b288:
            iVar8 = 4;
          }
          else {
            if (*(int *)((long)local_80[0] + 0xc) == 0) {
LAB_01e0b488:
              plVar17 = (long *)0x0;
            }
            else {
              piVar1 = (int *)((long)local_80[0] + 0xc);
              iVar8 = *(int *)((long)local_80[0] + 0xc);
              while( true ) {
                plVar17 = (long *)plVar7[2];
                if (((*PTR_DAT_0437a668 & 1) != 0) ||
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a668), iVar9 == 0)) {
                  if (plVar17 != (long *)0x0) goto LAB_01e0b3c0;
                  break;
                }
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                  uVar10 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar10;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)puVar4 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_0437a668);
                if (plVar17 == (long *)0x0) break;
LAB_01e0b3c0:
                while (plVar17 != (long *)puVar4) {
                  plVar17 = (long *)*plVar17;
                  if (plVar17 == (long *)0x0) {
                    plVar17 = (long *)0x0;
                    goto joined_r0x01e0b3f4;
                  }
                }
                iVar9 = *piVar1;
                if (iVar9 == iVar8) {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar8 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') {
                    lVar12 = plVar7[3];
                    plVar17 = (long *)0x0;
                    if (lVar12 != 0) {
                      plVar17 = (long *)(lVar12 + -0x50);
                    }
                    break;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar8 = iVar9;
                if (iVar9 == 0) goto LAB_01e0b488;
              }
            }
joined_r0x01e0b3f4:
            if (local_80[0] != (long *)0x0) {
              FUN_02a43934();
            }
            if (plVar17 == (long *)0x0) goto LAB_01e0b288;
            FUN_0199c1ac(local_80,plVar18);
            lVar12 = local_80[0][0xd];
            if (local_80[0] != (long *)0x0) {
              lVar13 = local_80[0][0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*local_80[0] + 0x20))();
              }
            }
            iVar8 = FUN_01e454d0(plVar17,param_1,(int)lVar12 == 1);
            lVar12 = plVar17[0xb];
            if (2 < iVar8 - 1U) {
              iVar8 = 0;
            }
            piVar1 = (int *)(lVar12 + 0xc);
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
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*plVar17 + 0x20))(plVar17);
            }
          }
          lVar12 = plVar18[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
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
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar18 + 0x20))(plVar18);
          }
        }
        lVar12 = plVar16[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
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
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar16 + 0x20))(plVar16);
        }
      }
      lVar12 = plVar15[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      if (plVar14 == (long *)0x0) {
        return iVar8;
      }
      goto LAB_01e0b0ac;
    }
  }
LAB_01e0b1a4:
  iVar8 = 4;
  if (plVar14 != (long *)0x0) {
LAB_01e0b0ac:
    lVar12 = plVar14[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  return iVar8;
LAB_01e0b120:
  puVar11 = (undefined8 *)*puVar11;
  plVar15 = (long *)0x0;
  if (puVar11 == (undefined8 *)0x0) goto LAB_01e0b070;
  goto LAB_01e0b02c;
}


