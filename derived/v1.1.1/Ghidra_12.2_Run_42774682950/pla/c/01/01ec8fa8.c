/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec8fa8; name: FUN_01ec8fa8
 */


void FUN_01ec8fa8(long param_1,int param_2)

{
  long *plVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *local_90;
  long *local_88;
  long local_80 [3];
  long *local_68;
  
  puVar10 = PTR_LAB_04379590;
  puVar9 = PTR_DAT_043794a8;
  puVar8 = PTR_DAT_043794a0;
  puVar7 = PTR_DAT_04379498;
  plVar18 = *(long **)(param_1 + 0x250);
  if (plVar18 != *(long **)(param_1 + 600)) {
    if (param_2 == -1) {
      do {
        lVar16 = *plVar18;
        if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
          piVar2 = (int *)(lVar16 + 0xc);
          iVar11 = *(int *)(lVar16 + 0xc);
          do {
            uVar13 = FUN_01ecab44(*(undefined8 *)(lVar16 + 0x10));
            if ((uVar13 & 1) == 0) break;
            iVar4 = *piVar2;
            if (iVar4 == iVar11) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar11 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_01ec9220;
              lVar16 = *(long *)(lVar16 + 0x18);
              if (lVar16 != 0) {
                if (*(char *)(lVar16 + 0x5e0) == '\0') {
                  *(undefined1 *)(lVar16 + 0x48a) = 1;
                }
                else {
                  FUN_01e9ba4c((long *)(lVar16 + -0x50));
                }
                plVar14 = *(long **)(param_1 + 600);
                plVar17 = plVar18 + 6;
                local_88 = plVar18;
                if (plVar17 == plVar14) goto LAB_01ec9344;
                plVar17 = plVar18;
                do {
                  local_88 = plVar17 + 6;
                  FUN_01eacf70(plVar17);
                  plVar17[2] = plVar17[8];
                  plVar17[3] = plVar17[9];
                  plVar17[4] = plVar17[10];
                  *(int *)(plVar17 + 5) = (int)plVar17[0xb];
                  plVar1 = plVar17 + 0xc;
                  plVar17 = local_88;
                } while (plVar1 != plVar14);
                plVar17 = *(long **)(param_1 + 600);
                while (plVar17 != local_88) {
LAB_01ec9344:
                  plVar17 = plVar17 + -6;
                  plVar14 = (long *)*plVar17;
                  if (plVar14 != (long *)0x0) {
                    plVar1 = plVar14 + 1;
                    do {
                      iVar11 = (int)*plVar1 + -1;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar6) {
                        *(int *)plVar1 = iVar11;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar11 == 0) {
                      plVar14[2] = 0;
                      if (((*puVar7 & 1) == 0) &&
                         (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
                        FUN_00100250(puVar10,puVar8,&PTR_LOOP_0411a000);
                        __cxa_guard_release(puVar7);
                      }
                      lVar15 = *(long *)puVar8;
                      *(long *)puVar9 = lVar15;
                      local_80[0] = *plVar14;
                      FUN_02a44274(lVar15 + 0xd8,local_80);
                    }
                  }
                }
                *(long **)(param_1 + 600) = local_88;
                lVar15 = *(long *)(lVar16 + 8);
                piVar2 = (int *)(lVar15 + 0xc);
                do {
                  iVar11 = *piVar2;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = iVar11 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*(long *)(lVar16 + -0x50) + 0x20))();
                }
                goto LAB_01ec93d4;
              }
              break;
            }
            ClearExclusiveLocal();
LAB_01ec9220:
            iVar11 = iVar4;
          } while (iVar4 != 0);
        }
        plVar18 = plVar18 + 6;
LAB_01ec93d4:
      } while (plVar18 != *(long **)(param_1 + 600));
    }
    else {
      do {
        lVar16 = *plVar18;
        if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
          piVar2 = (int *)(lVar16 + 0xc);
          iVar11 = *(int *)(lVar16 + 0xc);
          do {
            uVar13 = FUN_01ecab44(*(undefined8 *)(lVar16 + 0x10));
            if ((uVar13 & 1) == 0) break;
            iVar4 = *piVar2;
            if (iVar4 == iVar11) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar11 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_01ec9034;
              lVar16 = *(long *)(lVar16 + 0x18);
              if (lVar16 != 0) {
                if (*(int *)(lVar16 + 0x5a8) == param_2) {
                  if (*(char *)(lVar16 + 0x5e0) == '\0') {
                    *(undefined1 *)(lVar16 + 0x48a) = 1;
                  }
                  else {
                    FUN_01e9ba4c((long *)(lVar16 + -0x50));
                  }
                  plVar14 = *(long **)(param_1 + 600);
                  plVar17 = plVar18 + 6;
                  local_90 = plVar18;
                  if (plVar17 == plVar14) goto LAB_01ec9164;
                  plVar17 = plVar18;
                  do {
                    local_90 = plVar17 + 6;
                    FUN_01eacf70(plVar17);
                    plVar17[2] = plVar17[8];
                    plVar17[3] = plVar17[9];
                    plVar17[4] = plVar17[10];
                    *(int *)(plVar17 + 5) = (int)plVar17[0xb];
                    plVar1 = plVar17 + 0xc;
                    plVar17 = local_90;
                  } while (plVar1 != plVar14);
                  plVar17 = *(long **)(param_1 + 600);
                  while (plVar17 != local_90) {
LAB_01ec9164:
                    plVar17 = plVar17 + -6;
                    plVar14 = (long *)*plVar17;
                    if (plVar14 != (long *)0x0) {
                      plVar1 = plVar14 + 1;
                      do {
                        iVar11 = (int)*plVar1 + -1;
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                        if (bVar6) {
                          *(int *)plVar1 = iVar11;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (iVar11 == 0) {
                        plVar14[2] = 0;
                        if (((*puVar7 & 1) == 0) &&
                           (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
                          FUN_00100250(puVar10,puVar8,&PTR_LOOP_0411a000);
                          __cxa_guard_release(puVar7);
                        }
                        lVar15 = *(long *)puVar8;
                        *(long *)puVar9 = lVar15;
                        local_80[0] = *plVar14;
                        FUN_02a44274(lVar15 + 0xd8,local_80);
                      }
                    }
                  }
                  *(long **)(param_1 + 600) = local_90;
                }
                else {
                  plVar18 = plVar18 + 6;
                }
                lVar15 = *(long *)(lVar16 + 8);
                piVar2 = (int *)(lVar15 + 0xc);
                do {
                  iVar11 = *piVar2;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = iVar11 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*(long *)(lVar16 + -0x50) + 0x20))();
                }
                goto LAB_01ec91f4;
              }
              break;
            }
            ClearExclusiveLocal();
LAB_01ec9034:
            iVar11 = iVar4;
          } while (iVar4 != 0);
        }
        plVar18 = plVar18 + 6;
LAB_01ec91f4:
      } while (plVar18 != *(long **)(param_1 + 600));
    }
  }
  puVar7 = PTR_DAT_0437a708;
  if (((*PTR_DAT_0437a708 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  puVar9 = PTR_DAT_0437a718;
  puVar8 = PTR_DAT_0437a710;
  uVar12 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar12;
  uVar13 = FUN_010aaed4(uVar12,*(undefined8 *)(param_1 + 0x378),0);
  if ((uVar13 & 1) != 0) {
    if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a708);
    }
    uVar12 = *(undefined8 *)puVar8;
    *(undefined8 *)puVar9 = uVar12;
    FUN_010aace4(uVar12,*(undefined8 *)(param_1 + 0x378),0);
    FUN_0108c3a8(local_80);
    iVar11 = 0;
    if (local_80[0] < 0x71e98f4e9a452820) {
      if (local_80[0] < -0x2fae1c49911526b1) {
        if (local_80[0] == -0x6e9c84e0e06db568) {
          iVar11 = 3;
        }
      }
      else if (local_80[0] == -0x2fae1c49911526b1) {
        iVar11 = 1;
      }
      else if (local_80[0] == 0x9bd13c6e7bb876e) {
        iVar11 = 5;
      }
      else if (local_80[0] == 0x3b5d719234d56e3a) {
        iVar11 = 2;
      }
    }
    else if (local_80[0] < 0x73c1dc842bbb2546) {
      if (local_80[0] == 0x71e98f4e9a452820) {
        iVar11 = 8;
      }
    }
    else if (local_80[0] == 0x79ee85ffb7c5b8e6) {
      iVar11 = 7;
    }
    else if (local_80[0] == 0x73c1dc842bbb2546) {
      iVar11 = 4;
    }
    else if (local_80[0] == 0x7cc088e10572cf65) {
      iVar11 = 6;
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (iVar11 == param_2) {
      FUN_01ec89f0(param_1);
      *(undefined1 *)(param_1 + 0x3f0) = 1;
    }
  }
  plVar18 = *(long **)(param_1 + 0x288);
  plVar17 = *(long **)(param_1 + 0x290);
  if (plVar18 != plVar17) {
    bVar3 = *puVar7;
    while( true ) {
      if (((bVar3 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_0437a778,puVar8,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar7);
      }
      uVar12 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar12;
      uVar13 = FUN_010aaed4(uVar12,*(undefined8 *)(*plVar18 + 0xa0),*(undefined1 *)(param_1 + 0x398)
                           );
      if ((uVar13 & 1) != 0) {
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_0437a778,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar7);
        }
        uVar12 = *(undefined8 *)puVar8;
        *(undefined8 *)puVar9 = uVar12;
        FUN_010aace4(uVar12,*(undefined8 *)(*plVar18 + 0xa0),*(undefined1 *)(param_1 + 0x398));
        FUN_0108c3a8(local_80);
        iVar11 = 0;
        if (local_80[0] < 0x71e98f4e9a452820) {
          if (local_80[0] < -0x2fae1c49911526b1) {
            if (local_80[0] == -0x6e9c84e0e06db568) {
              iVar11 = 3;
            }
          }
          else if (local_80[0] == -0x2fae1c49911526b1) {
            iVar11 = 1;
          }
          else if (local_80[0] == 0x9bd13c6e7bb876e) {
            iVar11 = 5;
          }
          else if (local_80[0] == 0x3b5d719234d56e3a) {
            iVar11 = 2;
          }
        }
        else if (local_80[0] < 0x73c1dc842bbb2546) {
          if (local_80[0] == 0x71e98f4e9a452820) {
            iVar11 = 8;
          }
        }
        else if (local_80[0] == 0x79ee85ffb7c5b8e6) {
          iVar11 = 7;
        }
        else if (local_80[0] == 0x73c1dc842bbb2546) {
          iVar11 = 4;
        }
        else if (local_80[0] == 0x7cc088e10572cf65) {
          iVar11 = 6;
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        if (iVar11 == param_2) {
          *(undefined1 *)(*plVar18 + 0xac) = 1;
        }
      }
      plVar18 = plVar18 + 1;
      if (plVar17 == plVar18) break;
      bVar3 = *puVar7;
    }
  }
  return;
}


