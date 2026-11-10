/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f218e4; name: FUN_01f218e4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f218e4(float param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
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
  float fVar19;
  long *local_c8;
  long local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  long *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  long local_80;
  undefined8 uStack_78;
  long *local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar12 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar12;
  plVar15 = *(long **)(lVar12 + 0xc0);
  if (plVar15 != (long *)0x0) {
    lVar12 = plVar15[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_01f21e54:
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
  local_c0 = plVar15[0x18];
  local_80 = local_c0 + plVar15[0x19] * 8;
  FUN_01f23690(&local_a0,&local_c0,&local_80);
  if (local_a0 != (long *)(plVar15[0x18] + plVar15[0x19] * 8)) {
    plVar17 = (long *)*local_a0;
    puVar11 = (undefined8 *)(**(code **)plVar17[10])(plVar17 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar9 != 0)) {
      uVar10 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar10;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar11 != (undefined8 *)0x0) {
LAB_01f219dc:
      if (puVar11 != (undefined8 *)PTR_DAT_0437c680) goto LAB_01f21ad8;
      lVar12 = plVar17[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01f21e54;
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
        plVar16 = plVar17;
      } while (cVar2 != '\0');
LAB_01f21a20:
      if (plVar16 == (long *)0x0) goto LAB_01f21a60;
      if (plVar16[0x1a] == 0) {
        local_a0 = (long *)0x0;
        pcStack_98 = (char *)0x0;
      }
      else {
        local_a0 = (long *)0x0;
        pcStack_98 = (char *)0x0;
        FUN_019d08dc(&local_a0,plVar16[0x1a] + 0x1c0);
        plVar17 = local_a0;
        puVar7 = PTR_DAT_0437c670;
        puVar6 = PTR_DAT_0437c668;
        puVar5 = PTR_DAT_043794d8;
        puVar4 = PTR_DAT_043794d0;
        if (local_a0 != (long *)0x0) {
          if (*(int *)((long)local_a0 + 0xc) == 0) {
LAB_01f21efc:
            plVar17 = (long *)0x0;
            plVar18 = local_a0;
          }
          else {
            piVar1 = (int *)((long)local_a0 + 0xc);
            iVar9 = *(int *)((long)local_a0 + 0xc);
            while( true ) {
              plVar18 = (long *)plVar17[2];
              if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
                if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
                  uVar10 = FUN_0087f8f0();
                  *(undefined8 *)puVar5 = uVar10;
                  __cxa_guard_release(puVar4);
                }
                *(undefined **)puVar7 = puVar5;
                __cxa_guard_release(puVar6);
              }
              while( true ) {
                if (plVar18 == (long *)0x0) goto LAB_01f21efc;
                if (plVar18 == (long *)puVar7) break;
                plVar18 = (long *)*plVar18;
              }
              iVar8 = *piVar1;
              if (iVar8 == iVar9) break;
              ClearExclusiveLocal();
LAB_01f21b9c:
              iVar9 = iVar8;
              if (iVar8 == 0) goto LAB_01f21efc;
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 != '\0') goto LAB_01f21b9c;
            lVar12 = plVar17[3];
            plVar17 = (long *)0x0;
            plVar18 = local_a0;
            if (lVar12 != 0) {
              plVar17 = (long *)(lVar12 + -0x50);
            }
          }
          local_a0 = plVar18;
          if (plVar18 != (long *)0x0) {
            plVar14 = plVar18 + 1;
            do {
              iVar9 = (int)*plVar14 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar3) {
                *(int *)plVar14 = iVar9;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar9 == 0) {
              plVar18[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_c0 = *plVar18;
              FUN_02a44274(lVar12 + 0xd8,&local_c0);
            }
          }
          if (plVar17 != (long *)0x0) {
            plVar18 = (long *)plVar17[0xe];
            if (plVar18 == (long *)0x0) {
              if (_DAT_00000210 == 2) {
LAB_01f22088:
                FUN_0199c694(&local_c8,0);
joined_r0x01f22098:
                if (local_c8 != (long *)0x0) {
LAB_01f21d20:
                  plVar18 = local_c8;
                  local_c8[0x1e] = local_c8[0x1e] & 0xfffffffffffffffe;
                  local_80 = 0;
                  uStack_78 = 0;
                  if (local_c8[0xd] == 0) {
                    local_68 = (long *)0x0;
                  }
                  else {
                    FUN_019bf828(&local_68);
                    if (local_68 != (long *)0x0) {
                      local_a0 = (long *)0x757527f9d900520e;
                      pcStack_98 = "Global";
                      local_c0 = -0x669030c1224ad42c;
                      pcStack_b8 = "NoiseColor";
                      local_90 = 6;
                      local_88 = (long *)0x0;
                      local_b0 = 0x1f;
                      local_a8 = (long *)0x0;
                      FUN_01f0ad5c(local_68,&local_a0,&local_c0,&local_80);
                      if (local_a8 != (long *)0x0) {
                        (**(code **)(*local_a8 + 0x20))();
                      }
                      if (local_88 != (long *)0x0) {
                        (**(code **)(*local_88 + 0x20))();
                      }
                      if (0 < (int)plVar18[0x1a0e4]) {
                        lVar12 = 0;
                        plVar14 = plVar18 + 0x1a0ef;
                        do {
                          if (lVar12 == 0x100) {
                    /* WARNING: Subroutine does not return */
                            FUN_01f22c10();
                          }
                          if ((plVar14[-10] == 0x757527f9d900520e) &&
                             (plVar14[-6] == -0x669030c1224ad42c)) {
                            plVar14[-1] = local_80;
                            *(int *)plVar14 = (int)uStack_78;
                            break;
                          }
                          lVar12 = lVar12 + 1;
                          plVar14 = plVar14 + 0xc;
                        } while ((int)plVar18[0x1a0e4] != lVar12);
                      }
                      if (local_68 != (long *)0x0) {
                        lVar12 = local_68[0xb];
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
                          (**(code **)(*local_68 + 0x20))();
                        }
                      }
                    }
                  }
                  plVar14 = plVar18 + 0x1f510;
                  if (*(int *)((long)plVar18 + 0xfa884) != 0x13) {
                    plVar18[0x1f511] = (long)(plVar18 + 0x1a0e4);
                    if ((char)*plVar14 != '\0') {
                      *(undefined1 *)(plVar18 + 0x20114) = 1;
                    }
                    *(undefined4 *)((long)plVar18 + 0xfa884) = 0x13;
                    plVar18[0x1f512] = 0x3f80000000000000;
                    *(char *)plVar14 = '\x01';
                  }
                  FUN_01f1ba38(plVar18);
                  FUN_01f1e0b4(plVar18);
                  FUN_01f1e7fc(plVar18);
                  *(undefined4 *)((long)plVar18 + 0x1009bc) = 10;
                  FUN_01f203c4(plVar18);
                  if (*(int *)((long)plVar18 + 0xfa884) != 0xff) {
                    *(undefined4 *)((long)plVar18 + 0xfa884) = 0xff;
                    *(undefined4 *)(plVar18 + 0x1f512) = 0;
                    if (param_1 <= 0.0) {
                      fVar19 = 1.0;
                    }
                    else {
                      fVar19 = 1.0 / (param_1 * 30.0);
                    }
                    *(float *)((long)plVar18 + 0xfa894) = fVar19;
                    *(char *)plVar14 = '\x01';
                  }
                  if (local_c8 != (long *)0x0) {
                    lVar12 = local_c8[0xb];
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
                      (**(code **)(*local_c8 + 0x20))();
                    }
                  }
                }
              }
            }
            else {
              lVar12 = plVar18[0xb];
              if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01f21e54;
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
              lVar13 = plVar18[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              lVar12 = plVar18[0x42];
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
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*plVar18 + 0x20))(plVar18);
              }
              if ((int)lVar12 == 2) {
                plVar18 = (long *)plVar17[0xe];
                if (plVar18 == (long *)0x0) goto LAB_01f22088;
                lVar12 = plVar18[0xb];
                if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01f21e54;
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
                FUN_0199c694(&local_c8,plVar18);
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
                if (iVar9 + -1 != 0) goto joined_r0x01f22098;
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*plVar18 + 0x20))(plVar18);
                if (local_c8 == (long *)0x0) goto LAB_01f21e18;
                goto LAB_01f21d20;
              }
            }
LAB_01f21e18:
            lVar12 = plVar17[0xb];
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
      if (iVar9 + -1 != 0) goto LAB_01f21a60;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
      if (plVar15 == (long *)0x0) {
        return;
      }
      goto LAB_01f21a64;
    }
  }
LAB_01f21a60:
  if (plVar15 != (long *)0x0) {
LAB_01f21a64:
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
  }
  return;
LAB_01f21ad8:
  puVar11 = (undefined8 *)*puVar11;
  plVar16 = (long *)0x0;
  if (puVar11 == (undefined8 *)0x0) goto LAB_01f21a20;
  goto LAB_01f219dc;
}


