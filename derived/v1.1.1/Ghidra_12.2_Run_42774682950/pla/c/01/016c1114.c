/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016c1114; name: FUN_016c1114
 */


void FUN_016c1114(uint param_1)

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
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *extraout_x10;
  long lVar19;
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
  if (local_80 != (undefined8 *)0x0) {
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
          if (plVar21 == (long *)0x0) goto LAB_016c1658;
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
            lVar19 = puVar7[3];
            plVar21 = (long *)0x0;
            puVar7 = local_80;
            if (lVar19 != 0) {
              plVar21 = (long *)(lVar19 + -0x50);
            }
            goto joined_r0x016c1244;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = iVar12;
      } while (iVar12 != 0);
    }
LAB_016c1658:
    plVar21 = (long *)0x0;
    puVar7 = local_80;
joined_r0x016c1244:
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
        lVar19 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar19;
        local_68 = *puVar7;
        FUN_02a44274(lVar19 + 0xd8,&local_68);
      }
    }
    if (plVar21 != (long *)0x0) {
      uVar15 = plVar21[0x28];
      if (uVar15 != 0) {
        uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
        uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
        uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar16 < 2) {
          uVar17 = (ulong)((uint)uVar15 - 1) & 6;
        }
        else {
          uVar17 = 6;
          if (uVar15 < 7) {
            uVar2 = (uint)uVar15 & 0xff;
            uVar5 = 0;
            if ((uVar15 & 0xff) != 0) {
              uVar5 = 6 / uVar2;
            }
            uVar17 = (ulong)(6 - uVar5 * uVar2);
          }
        }
        plVar18 = *(long **)(plVar21[0x27] + uVar17 * 8);
        if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
          if (uVar16 < 2) {
            do {
              if (plVar18[1] == 6) {
                if ((int)plVar18[2] == 6) goto LAB_016c139c;
              }
              else if ((plVar18[1] & uVar15 - 1) != uVar17) break;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              uVar16 = plVar18[1];
              if (uVar16 == 6) {
                if ((int)plVar18[2] == 6) goto LAB_016c139c;
              }
              else {
                if (uVar15 <= uVar16) {
                  uVar6 = 0;
                  if (uVar15 != 0) {
                    uVar6 = uVar16 / uVar15;
                  }
                  uVar16 = uVar16 - uVar6 * uVar15;
                }
                if (uVar16 != uVar17) break;
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
        }
      }
      FUN_016c1a70();
      plVar18 = extraout_x10;
LAB_016c139c:
      plVar18 = (long *)plVar18[3];
      if (plVar18 != (long *)0x0) {
        lVar19 = plVar18[0xb];
        if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) {
LAB_016c16a4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar19 + 0x10) == 0) {
          uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
          *(undefined8 *)(lVar19 + 0x10) = uVar14;
        }
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar19 = FUN_016c1bf0(plVar18 + 10);
      puVar10 = PTR_DAT_043794a8;
      puVar9 = PTR_DAT_043794a0;
      puVar8 = PTR_DAT_04379498;
      plVar22 = *(long **)(lVar19 + 0x98);
      if (plVar22 != (long *)0x0) {
        plVar20 = (long *)plVar22[3];
        while( true ) {
          if (plVar20 != (long *)0x0) {
            lVar19 = plVar20[0xb];
            if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_016c16a4;
            if (*(long *)(lVar19 + 0x10) == 0) {
              uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
              *(undefined8 *)(lVar19 + 0x10) = uVar14;
            }
            piVar1 = (int *)(lVar19 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            lVar19 = plVar20[0xb];
            if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_016c16a4;
            if (*(long *)(lVar19 + 0x10) == 0) {
              uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
              *(undefined8 *)(lVar19 + 0x10) = uVar14;
            }
            piVar1 = (int *)(lVar19 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
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
              lVar19 = *(long *)puVar9;
              *(long *)puVar10 = lVar19;
              local_68 = *puVar7;
              FUN_02a44274(lVar19 + 0xd8,&local_68);
            }
          }
          if ((local_70 != (long *)0x0) &&
             (FUN_015916d0(local_70,param_1 & 1,0x20000,0), local_70 != (long *)0x0)) {
            lVar19 = local_70[0xb];
            piVar1 = (int *)(lVar19 + 0xc);
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
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*local_70 + 0x20))();
            }
          }
          if (plVar20 != (long *)0x0) {
            lVar19 = plVar20[0xb];
            piVar1 = (int *)(lVar19 + 0xc);
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
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*plVar20 + 0x20))(plVar20);
            }
            lVar19 = plVar20[0xb];
            piVar1 = (int *)(lVar19 + 0xc);
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
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*plVar20 + 0x20))(plVar20);
            }
          }
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) break;
          plVar20 = (long *)plVar22[3];
        }
      }
      if (plVar18 != (long *)0x0) {
        lVar19 = plVar18[0xb];
        piVar1 = (int *)(lVar19 + 0xc);
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
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*plVar18 + 0x20))(plVar18);
        }
      }
      lVar19 = plVar21[0xb];
      piVar1 = (int *)(lVar19 + 0xc);
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
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*plVar21 + 0x20))(plVar21);
      }
    }
  }
  return;
}


