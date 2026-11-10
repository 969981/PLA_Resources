/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016bd164; name: FUN_016bd164
 */


void FUN_016bd164(ulong param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  
  FUN_0165aaf8(&local_80);
  puVar7 = local_80;
  puVar11 = PTR_DAT_04380750;
  puVar10 = PTR_DAT_04380748;
  puVar9 = PTR_DAT_043794d8;
  puVar8 = PTR_DAT_043794d0;
  if (local_80 == (undefined8 *)0x0) {
    return;
  }
  if (*(int *)((long)local_80 + 0xc) != 0) {
    piVar1 = (int *)((long)local_80 + 0xc);
    iVar13 = *(int *)((long)local_80 + 0xc);
    do {
      plVar21 = (long *)puVar7[2];
      if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)puVar9 = uVar14;
          __cxa_guard_release(puVar8);
        }
        *(undefined **)puVar11 = puVar9;
        __cxa_guard_release(puVar10);
      }
      while( true ) {
        if (plVar21 == (long *)0x0) goto LAB_016bd804;
        if (plVar21 == (long *)puVar11) break;
        plVar21 = (long *)*plVar21;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar15 = puVar7[3];
          plVar21 = (long *)0x0;
          puVar7 = local_80;
          if (lVar15 != 0) {
            plVar21 = (long *)(lVar15 + -0x50);
          }
          goto joined_r0x016bd23c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar12;
    } while (iVar12 != 0);
  }
LAB_016bd804:
  plVar21 = (long *)0x0;
  puVar7 = local_80;
joined_r0x016bd23c:
  local_80 = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_68 = *puVar7;
      FUN_02a44274(lVar15 + 0xd8,&local_68);
    }
  }
  if (plVar21 == (long *)0x0) {
    return;
  }
  uVar16 = plVar21[0x28];
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = (ulong)((uint)uVar16 - 1) & 6;
    }
    else {
      uVar18 = 6;
      if (uVar16 < 7) {
        uVar2 = (uint)uVar16 & 0xff;
        uVar5 = 0;
        if ((uVar16 & 0xff) != 0) {
          uVar5 = 6 / uVar2;
        }
        uVar18 = (ulong)(6 - uVar5 * uVar2);
      }
    }
    plVar19 = *(long **)(plVar21[0x27] + uVar18 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar19[1] == 6) {
            if ((int)plVar19[2] == 6) goto LAB_016bd354;
          }
          else if ((plVar19[1] & uVar16 - 1) != uVar18) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar19[1];
          if (uVar17 == 6) {
            if ((int)plVar19[2] == 6) goto LAB_016bd354;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar6 = 0;
              if (uVar16 != 0) {
                uVar6 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar6 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  FUN_016c1a70();
LAB_016bd8e4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_016bd354:
  plVar19 = (long *)plVar19[3];
  if (plVar19 != (long *)0x0) {
    lVar15 = plVar19[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_016bd8e4;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar15 = FUN_016c1bf0(plVar19 + 10);
  puVar10 = PTR_DAT_043794a8;
  puVar9 = PTR_DAT_043794a0;
  puVar8 = PTR_DAT_04379498;
  plVar22 = *(long **)(lVar15 + 0x98);
  if (plVar22 != (long *)0x0) {
    if ((param_1 & 1) == 0) {
      do {
        plVar20 = (long *)plVar22[3];
        if (plVar20 != (long *)0x0) {
          lVar15 = plVar20[0xb];
          if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_016bd8e4;
          if (*(long *)(lVar15 + 0x10) == 0) {
            uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
            *(undefined8 *)(lVar15 + 0x10) = uVar14;
          }
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar15 = plVar20[0xb];
          if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_016bd8e4;
          if (*(long *)(lVar15 + 0x10) == 0) {
            uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
            *(undefined8 *)(lVar15 + 0x10) = uVar14;
          }
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uVar16 = FUN_01ba0c8c(plVar20);
        if ((uVar16 & 1) == 0) {
          local_80 = (undefined8 *)0x0;
          uStack_78 = 0;
          FUN_00b63974(&local_80,plVar20 + 0xc0);
          FUN_016c24d0(&local_70,&local_80);
          puVar7 = local_80;
          if (local_80 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_80 + 1);
            do {
              iVar13 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 + -1 == 0) {
              local_80[2] = 0;
              if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar8);
              }
              lVar15 = *(long *)puVar9;
              *(long *)puVar10 = lVar15;
              local_68 = *puVar7;
              FUN_02a44274(lVar15 + 0xd8,&local_68);
            }
          }
          if ((local_70 != (long *)0x0) &&
             (FUN_015916d0(local_70,0,0x100,10), local_70 != (long *)0x0)) {
            lVar15 = local_70[0xb];
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*local_70 + 0x20))();
            }
          }
        }
        if (plVar20 != (long *)0x0) {
          lVar15 = plVar20[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar20 + 0x20))(plVar20);
          }
          lVar15 = plVar20[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar20 + 0x20))(plVar20);
          }
        }
        plVar22 = (long *)*plVar22;
      } while (plVar22 != (long *)0x0);
    }
    else {
      do {
        while( true ) {
          plVar20 = (long *)plVar22[3];
          if (plVar20 != (long *)0x0) {
            lVar15 = plVar20[0xb];
            if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_016bd8e4;
            if (*(long *)(lVar15 + 0x10) == 0) {
              uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
              *(undefined8 *)(lVar15 + 0x10) = uVar14;
            }
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            lVar15 = plVar20[0xb];
            if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_016bd8e4;
            if (*(long *)(lVar15 + 0x10) == 0) {
              uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
              *(undefined8 *)(lVar15 + 0x10) = uVar14;
            }
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          uVar16 = FUN_01ba0c8c(plVar20);
          if ((uVar16 & 1) == 0) break;
          if (plVar20 != (long *)0x0) goto LAB_016bd454;
LAB_016bd48c:
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) goto LAB_016bd724;
        }
        local_80 = (undefined8 *)0x0;
        uStack_78 = 0;
        FUN_00b63974(&local_80,plVar20 + 0xc0);
        FUN_016c24d0(&local_70,&local_80);
        puVar7 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_80 + 1);
          do {
            iVar13 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar13 + -1 == 0) {
            local_80[2] = 0;
            if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar8);
            }
            lVar15 = *(long *)puVar9;
            *(long *)puVar10 = lVar15;
            local_68 = *puVar7;
            FUN_02a44274(lVar15 + 0xd8,&local_68);
          }
        }
        if ((local_70 != (long *)0x0) &&
           (FUN_015916d0(local_70,1,0x100,10), local_70 != (long *)0x0)) {
          lVar15 = local_70[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*local_70 + 0x20))();
          }
        }
        FUN_01b9f5d4(plVar20);
        if (plVar20 == (long *)0x0) goto LAB_016bd48c;
LAB_016bd454:
        lVar15 = plVar20[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar20 + 0x20))(plVar20);
        }
        lVar15 = plVar20[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 + -1 != 0) goto LAB_016bd48c;
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar20 + 0x20))(plVar20);
        plVar22 = (long *)*plVar22;
      } while (plVar22 != (long *)0x0);
    }
  }
LAB_016bd724:
  if (plVar19 != (long *)0x0) {
    lVar15 = plVar19[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  lVar15 = plVar21[0xb];
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar13 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar13 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar21 + 0x20))(plVar21);
  }
  return;
}


