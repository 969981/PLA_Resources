/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e0d7c8; name: FUN_01e0d7c8
 */


void FUN_01e0d7c8(long *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *local_80;
  long *local_78 [2];
  long local_68;
  
  puVar8 = PTR_DAT_0437c680;
  puVar7 = PTR_DAT_0437c678;
  lVar13 = param_1[0xe];
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar10 = *(int *)(lVar13 + 0xc);
    do {
      plVar14 = *(long **)(lVar13 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        uVar11 = FUN_009311a8();
        *(undefined8 *)puVar8 = uVar11;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) {
          return;
        }
        if (plVar14 == (long *)puVar8) break;
        plVar14 = (long *)*plVar14;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar13 = *(long *)(lVar13 + 0x18);
          if (lVar13 == 0) {
            return;
          }
          if (((*PTR_DAT_04379558 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379558);
          }
          *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
          FUN_01148d50(local_78);
          if (local_78[0] == (long *)0x0) goto LAB_01e0d9e4;
          plVar14 = (long *)(lVar13 + -0x50);
          FUN_010fae78(local_78[0],param_1 + 0x19,param_4,0);
          if (local_78[0] != (long *)0x0) {
            lVar12 = local_78[0][0xb];
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*local_78[0] + 0x20))();
            }
          }
          FUN_01e5b50c(local_78,plVar14,param_3);
          plVar6 = local_78[0];
          puVar7 = PTR_DAT_0437c668;
          if (local_78[0] == (long *)0x0) goto LAB_01e0d910;
          if (*(int *)((long)local_78[0] + 0xc) == 0) {
LAB_01e0dbb0:
            plVar6 = (long *)0x0;
            plVar15 = local_78[0];
          }
          else {
            piVar1 = (int *)((long)local_78[0] + 0xc);
            iVar10 = *(int *)((long)local_78[0] + 0xc);
            while( true ) {
              plVar15 = (long *)plVar6[2];
              if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                  uVar11 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar11;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)PTR_DAT_0437c670 = PTR_DAT_043794d8;
                __cxa_guard_release(puVar7);
                if (plVar15 != (long *)0x0) goto LAB_01e0da10;
                goto LAB_01e0dbb0;
              }
              while( true ) {
                if (plVar15 == (long *)0x0) goto LAB_01e0dbb0;
LAB_01e0da10:
                if (plVar15 == (long *)PTR_DAT_0437c670) break;
                plVar15 = (long *)*plVar15;
              }
              iVar9 = *piVar1;
              if (iVar9 == iVar10) break;
              ClearExclusiveLocal();
LAB_01e0d9f8:
              iVar10 = iVar9;
              if (iVar9 == 0) goto LAB_01e0dbb0;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_01e0d9f8;
            lVar12 = plVar6[3];
            plVar6 = (long *)0x0;
            plVar15 = local_78[0];
            if (lVar12 != 0) {
              plVar6 = (long *)(lVar12 + -0x50);
            }
          }
          local_78[0] = plVar15;
          if (plVar15 != (long *)0x0) {
            plVar2 = plVar15 + 1;
            do {
              iVar10 = (int)*plVar2 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = iVar10;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 == 0) {
              plVar15[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_68 = *plVar15;
              FUN_02a44274(lVar12 + 0xd8,&local_68);
            }
          }
          if (plVar6 == (long *)0x0) goto LAB_01e0d910;
          plVar15 = (long *)plVar6[0xe];
          if (plVar15 != (long *)0x0) {
            lVar12 = plVar15[0xb];
            if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e0d9e4;
            if (*(long *)(lVar12 + 0x10) == 0) {
              uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
              *(undefined8 *)(lVar12 + 0x10) = uVar11;
            }
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            FUN_0199c220(local_78,plVar15);
            plVar2 = local_78[0];
            if (local_78[0] != (long *)0x0) {
              if (*(int *)((long)local_78[0] + 0xc) == 0) {
LAB_01e0dce4:
                plVar2 = (long *)0x0;
                plVar16 = local_78[0];
              }
              else {
                piVar1 = (int *)((long)local_78[0] + 0xc);
                iVar10 = *(int *)((long)local_78[0] + 0xc);
                while( true ) {
                  plVar16 = (long *)plVar2[2];
                  if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar9 != 0)) {
                    if (((*PTR_DAT_043794d0 & 1) == 0) &&
                       (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                      uVar11 = FUN_0087f8f0();
                      *(undefined8 *)PTR_DAT_043794d8 = uVar11;
                      __cxa_guard_release(PTR_DAT_043794d0);
                    }
                    *(undefined **)PTR_DAT_0437a0f0 = PTR_DAT_043794d8;
                    __cxa_guard_release(PTR_DAT_0437a0e8);
                    if (plVar16 != (long *)0x0) goto LAB_01e0dc34;
                    goto LAB_01e0dce4;
                  }
                  while( true ) {
                    if (plVar16 == (long *)0x0) goto LAB_01e0dce4;
LAB_01e0dc34:
                    if (plVar16 == (long *)PTR_DAT_0437a0f0) break;
                    plVar16 = (long *)*plVar16;
                  }
                  iVar9 = *piVar1;
                  if (iVar9 == iVar10) break;
                  ClearExclusiveLocal();
LAB_01e0dc14:
                  iVar10 = iVar9;
                  if (iVar9 == 0) goto LAB_01e0dce4;
                }
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar10 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 != '\0') goto LAB_01e0dc14;
                lVar12 = plVar2[3];
                plVar2 = (long *)0x0;
                plVar16 = local_78[0];
                if (lVar12 != 0) {
                  plVar2 = (long *)(lVar12 + -0x50);
                }
              }
              local_78[0] = plVar16;
              if (plVar16 != (long *)0x0) {
                plVar3 = plVar16 + 1;
                do {
                  iVar10 = (int)*plVar3 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                  if (bVar5) {
                    *(int *)plVar3 = iVar10;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar10 == 0) {
                  plVar16[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar12;
                  local_68 = *plVar16;
                  FUN_02a44274(lVar12 + 0xd8,&local_68);
                }
              }
              if (plVar2 != (long *)0x0) {
                FUN_01847290(local_78,plVar2);
                if (local_78[0] != (long *)0x0) {
                  local_80 = local_78[0];
                  lVar12 = local_78[0][0xb];
                  if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_01e0d9e4:
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl("","","",0);
                  }
                  if (*(long *)(lVar12 + 0x10) == 0) {
                    uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
                    *(undefined8 *)(lVar12 + 0x10) = uVar11;
                  }
                  piVar1 = (int *)(lVar12 + 0xc);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = *piVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  (**(code **)(*param_1 + 0x50))(param_1,param_2 & 1,&local_80,param_4);
                  if (local_80 != (long *)0x0) {
                    lVar12 = local_80[0xb];
                    piVar1 = (int *)(lVar12 + 0xc);
                    do {
                      iVar10 = *piVar1;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar5) {
                        *piVar1 = iVar10 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar10 + -1 == 0) {
                      *(undefined8 *)(lVar12 + 0x18) = 0;
                      (**(code **)(*local_80 + 0x20))();
                    }
                  }
                  if (local_78[0] != (long *)0x0) {
                    lVar12 = local_78[0][0xb];
                    piVar1 = (int *)(lVar12 + 0xc);
                    do {
                      iVar10 = *piVar1;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar5) {
                        *piVar1 = iVar10 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar10 + -1 == 0) {
                      *(undefined8 *)(lVar12 + 0x18) = 0;
                      (**(code **)(*local_78[0] + 0x20))();
                    }
                  }
                }
                lVar12 = plVar2[0xb];
                piVar1 = (int *)(lVar12 + 0xc);
                do {
                  iVar10 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar10 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*plVar2 + 0x20))(plVar2);
                }
              }
            }
            lVar12 = plVar15[0xb];
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*plVar15 + 0x20))(plVar15);
            }
          }
          lVar12 = plVar6[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))(plVar6);
          }
LAB_01e0d910:
          lVar13 = *(long *)(lVar13 + 8);
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar9;
    } while (iVar9 != 0);
  }
  return;
}


