/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025ad148; name: FUN_025ad148
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025ad148(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
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
  long *local_80;
  undefined8 uStack_78;
  long local_70;
  long local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
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
LAB_025ad5b0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_68 = plVar14[0x18];
  local_70 = local_68 + plVar14[0x19] * 8;
  FUN_025adee0(&local_80,&local_68,&local_70);
  if (local_80 != (long *)(plVar14[0x18] + plVar14[0x19] * 8)) {
    plVar16 = (long *)*local_80;
    puVar11 = (undefined8 *)(**(code **)plVar16[10])(plVar16 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar9 != 0)) {
      uVar10 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar10;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar11 != (undefined8 *)0x0) {
LAB_025ad23c:
      if (puVar11 != (undefined8 *)PTR_DAT_0437c680) goto LAB_025ad33c;
      lVar12 = plVar16[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_025ad5b0;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar15 = plVar16;
      } while (cVar3 != '\0');
LAB_025ad280:
      if (plVar15 != (long *)0x0) {
        if (plVar15[0x1a] == 0) {
          local_80 = (long *)0x0;
          uStack_78 = 0;
        }
        else {
          local_80 = (long *)0x0;
          uStack_78 = 0;
          FUN_019d08dc(&local_80,plVar15[0x1a] + 0x1c0);
          plVar16 = local_80;
          puVar7 = PTR_DAT_0437c670;
          puVar6 = PTR_DAT_0437c668;
          puVar5 = PTR_DAT_043794d0;
          if (local_80 != (long *)0x0) {
            if (*(int *)((long)local_80 + 0xc) == 0) {
LAB_025ad668:
              plVar16 = (long *)0x0;
              plVar17 = local_80;
            }
            else {
              piVar1 = (int *)((long)local_80 + 0xc);
              iVar9 = *(int *)((long)local_80 + 0xc);
              while( true ) {
                plVar17 = (long *)plVar16[2];
                if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
                  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
                    uVar10 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar10;
                    __cxa_guard_release(puVar5);
                  }
                  *(undefined **)puVar7 = PTR_DAT_043794d8;
                  __cxa_guard_release(puVar6);
                }
                while( true ) {
                  if (plVar17 == (long *)0x0) goto LAB_025ad668;
                  if (plVar17 == (long *)puVar7) break;
                  plVar17 = (long *)*plVar17;
                }
                iVar8 = *piVar1;
                if (iVar8 == iVar9) break;
                ClearExclusiveLocal();
LAB_025ad3fc:
                iVar9 = iVar8;
                if (iVar8 == 0) goto LAB_025ad668;
              }
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB_025ad3fc;
              lVar12 = plVar16[3];
              plVar16 = (long *)0x0;
              plVar17 = local_80;
              if (lVar12 != 0) {
                plVar16 = (long *)(lVar12 + -0x50);
              }
            }
            local_80 = plVar17;
            if (plVar17 != (long *)0x0) {
              plVar2 = plVar17 + 1;
              do {
                iVar9 = (int)*plVar2 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *(int *)plVar2 = iVar9;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar9 == 0) {
                plVar17[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar12 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar12;
                local_68 = *plVar17;
                FUN_02a44274(lVar12 + 0xd8,&local_68);
              }
            }
            if (plVar16 != (long *)0x0) {
              plVar17 = (long *)plVar16[0xe];
              if (plVar17 == (long *)0x0) {
                if (_DAT_00000210 != 2) {
LAB_025ad5e4:
                  lVar12 = plVar16[0xb];
                  piVar1 = (int *)(lVar12 + 0xc);
                  do {
                    iVar9 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar9 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar9 + -1 == 0) {
                    *(undefined8 *)(lVar12 + 0x18) = 0;
                    (**(code **)(*plVar16 + 0x20))(plVar16);
                  }
                  goto LAB_025ad2a4;
                }
LAB_025ad6c4:
                FUN_0199d058(param_1,0);
              }
              else {
                lVar12 = plVar17[0xb];
                if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_025ad5b0;
                if (*(long *)(lVar12 + 0x10) == 0) {
                  uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
                  *(undefined8 *)(lVar12 + 0x10) = uVar10;
                }
                piVar1 = (int *)(lVar12 + 0xc);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                lVar13 = plVar17[0xb];
                piVar1 = (int *)(lVar13 + 0xc);
                lVar12 = plVar17[0x42];
                do {
                  iVar9 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar9 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar9 + -1 == 0) {
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  (**(code **)(*plVar17 + 0x20))(plVar17);
                }
                if ((int)lVar12 != 2) goto LAB_025ad5e4;
                plVar17 = (long *)plVar16[0xe];
                if (plVar17 == (long *)0x0) goto LAB_025ad6c4;
                lVar12 = plVar17[0xb];
                if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_025ad5b0;
                if (*(long *)(lVar12 + 0x10) == 0) {
                  uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
                  *(undefined8 *)(lVar12 + 0x10) = uVar10;
                }
                piVar1 = (int *)(lVar12 + 0xc);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                FUN_0199d058(param_1,plVar17);
                lVar12 = plVar17[0xb];
                piVar1 = (int *)(lVar12 + 0xc);
                do {
                  iVar9 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar9 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar9 + -1 == 0) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*plVar17 + 0x20))(plVar17);
                }
              }
              lVar12 = plVar16[0xb];
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar9 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*plVar16 + 0x20))(plVar16);
              }
              goto joined_r0x025ad5a8;
            }
          }
        }
      }
      goto LAB_025ad2a4;
    }
  }
  plVar15 = (long *)0x0;
LAB_025ad2a4:
  *param_1 = 0;
  param_1[1] = 0;
joined_r0x025ad5a8:
  if (plVar15 != (long *)0x0) {
    lVar12 = plVar15[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  if (plVar14 != (long *)0x0) {
    lVar12 = plVar14[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  return;
LAB_025ad33c:
  puVar11 = (undefined8 *)*puVar11;
  plVar15 = (long *)0x0;
  if (puVar11 == (undefined8 *)0x0) goto LAB_025ad280;
  goto LAB_025ad23c;
}


