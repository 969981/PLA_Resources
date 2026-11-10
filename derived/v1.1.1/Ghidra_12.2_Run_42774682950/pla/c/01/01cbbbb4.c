/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cbbbb4; name: FUN_01cbbbb4
 */


/* WARNING: Removing unreachable block (ram,0x01cbbfb8) */

undefined8 FUN_01cbbbb4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68 [2];
  undefined8 *local_58;
  
  lVar14 = *(long *)(param_1 + 0x68);
  if (lVar14 != 0) {
    if (*(char *)(lVar14 + 0x68) == '\0') {
      return 0;
    }
    if (*(char *)(param_1 + 0x80) != '\0') {
      plVar9 = *(long **)(lVar14 + 0x70);
      if (plVar9 != (long *)0x0) {
        lVar14 = plVar9[0xb];
        if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01cbc4ac;
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar21 = plVar9 + 0x21;
      lVar19 = *plVar21;
      lVar14 = nn::os::GetCurrentThread();
      if (lVar14 == lVar19) {
        bVar3 = false;
      }
      else {
        lVar14 = nn::os::GetCurrentThread();
        do {
          if (*plVar21 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)((long)plVar9 + 0xfc));
              while (*plVar21 == 0) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar3) {
                  *plVar21 = lVar14;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') goto LAB_01cbbcd8;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar3) {
            *plVar21 = lVar14;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_01cbbcd8:
        bVar3 = true;
      }
      lVar14 = nn::os::GetCurrentThread();
      plVar21 = plVar9 + 0x24;
      do {
        if (*plVar21 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar9 + 0x114));
            while (*plVar21 == 0) {
              cVar2 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar7) {
                *plVar21 = lVar14;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01cbbd24;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar7) {
          *plVar21 = lVar14;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01cbbd24:
      plVar21 = (long *)plVar9[0x34];
      plVar20 = (long *)plVar9[0x35];
      if (plVar21 != plVar20) {
        do {
          if (*plVar21 != 0) {
            plVar11 = (long *)(*(code *)**(undefined8 **)(*plVar21 + 8))();
            lVar14 = FUN_00ab38cc();
            for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
              if (plVar11 == (long *)lVar14) goto LAB_01cbbd70;
            }
          }
          plVar21 = plVar21 + 1;
        } while (plVar21 != plVar20);
        plVar21 = plVar20;
      }
LAB_01cbbd70:
      if ((plVar21 == (long *)plVar9[0x35]) || (*plVar21 == 0)) {
        plVar21 = (long *)plVar9[0x2d];
        plVar20 = (long *)plVar9[0x2e];
        if (plVar21 != plVar20) {
          do {
            if (*plVar21 != 0) {
              plVar11 = (long *)(*(code *)**(undefined8 **)(*plVar21 + 8))();
              lVar14 = FUN_00ab38cc();
              for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
                if (plVar11 == (long *)lVar14) goto LAB_01cbbdc8;
              }
            }
            plVar21 = plVar21 + 1;
          } while (plVar21 != plVar20);
          plVar21 = plVar20;
        }
LAB_01cbbdc8:
        if (plVar21 == (long *)plVar9[0x2e]) {
          plVar20 = (long *)0x0;
        }
        else {
          plVar20 = (long *)0x0;
          if (*plVar21 != 0) {
            plVar20 = (long *)(*plVar21 + -0x48);
          }
        }
        bVar7 = plVar20 == (long *)0x0;
      }
      else {
        bVar7 = false;
        plVar20 = (long *)(*plVar21 + -0x48);
      }
      plVar9[0x24] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar9 + 0x114));
      if (bVar3) {
        plVar9[0x21] = 0;
        nn::os::SignalLightEvent((LightEventType *)((long)plVar9 + 0xfc));
      }
      if (bVar7) {
        lVar14 = nn::os::GetCurrentThread();
        plVar21 = plVar9 + 0x28;
        do {
          lVar19 = *plVar21;
          lVar15 = plVar9[0x29];
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar3) {
            *plVar21 = lVar19;
            plVar9[0x29] = lVar15;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          while ((lVar19 != 0 && (lVar14 != lVar19))) {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar9 + 0x134));
            do {
              lVar19 = *plVar21;
              lVar15 = plVar9[0x29];
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar3) {
                *plVar21 = lVar19;
                plVar9[0x29] = lVar15;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          while( true ) {
            if (*plVar21 != lVar19 || plVar9[0x29] != lVar15) break;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar3) {
              *plVar21 = lVar19;
              *(long *)((long)plVar9 + 0x144) = lVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              plVar20 = plVar9 + 0x2c;
              lVar19 = *plVar20;
              lVar14 = nn::os::GetCurrentThread();
              if (lVar14 == lVar19) {
                bVar3 = false;
                goto LAB_01cbbf04;
              }
              lVar14 = nn::os::GetCurrentThread();
              goto LAB_01cbbec4;
            }
          }
          ClearExclusiveLocal();
          lVar19 = *plVar21;
          lVar15 = plVar9[0x29];
        } while( true );
      }
LAB_01cbc000:
      if (plVar20 != (long *)0x0) {
        lVar14 = plVar20[0xb];
        if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_01cbc4ac:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (plVar9 != (long *)0x0) {
        lVar14 = plVar9[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
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
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x10))(local_68,plVar20);
        local_78 = (undefined8 *)0x0;
        local_70 = 0;
        FUN_01c36d88(&local_78,local_68);
        puVar16 = local_68[0];
        puVar6 = PTR_DAT_043794a8;
        puVar5 = PTR_DAT_043794a0;
        puVar4 = PTR_DAT_04379498;
        if (local_68[0] != (undefined8 *)0x0) {
          piVar1 = (int *)(local_68[0] + 1);
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
            local_68[0][2] = 0;
            if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0))
            {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)puVar5;
            *(long *)puVar6 = lVar14;
            local_58 = (undefined8 *)*puVar16;
            FUN_02a44274(lVar14 + 0xd8,&local_58);
          }
        }
        do {
          uVar10 = local_70;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(&local_70,0x10);
          if (bVar3) {
            local_70 = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        uVar13 = *(undefined8 *)puVar5;
        *(undefined8 *)puVar6 = uVar13;
        FUN_02a44e0c(&local_58,uVar13,uVar10);
        puVar16 = local_78;
        local_78 = (undefined8 *)0x0;
        if (puVar16 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar16 + 1);
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
            puVar16[2] = 0;
            if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0))
            {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)puVar5;
            *(long *)puVar6 = lVar14;
            local_68[0] = (undefined8 *)*puVar16;
            FUN_02a44274(lVar14 + 0xd8,local_68);
          }
        }
        puVar16 = *(undefined8 **)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x70) = 0;
        if (local_58 == (undefined8 *)0x0) {
          uVar10 = 0;
          if (puVar16 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar16 + 1);
            do {
              iVar8 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar8 == 1) {
              puVar16[2] = 0;
              if (((*puVar4 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar14 = *(long *)puVar5;
              *(long *)puVar6 = lVar14;
              local_68[0] = (undefined8 *)*puVar16;
              FUN_02a44274(lVar14 + 0xd8,local_68);
            }
            uVar10 = 0;
          }
        }
        else {
          puVar18 = local_58;
          if (puVar16 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar16 + 1);
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
              puVar16[2] = 0;
              if (((*puVar4 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar14 = *(long *)puVar5;
              *(long *)puVar6 = lVar14;
              local_68[0] = (undefined8 *)*puVar16;
              FUN_02a44274(lVar14 + 0xd8,local_68);
            }
            puVar18 = local_58;
          }
          local_58 = (undefined8 *)0x0;
          *(undefined8 **)(param_1 + 0x70) = puVar18;
        }
        puVar16 = local_58;
        *(undefined8 *)(param_1 + 0x78) = uVar10;
        if (local_58 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_58 + 1);
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
            local_58[2] = 0;
            if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0))
            {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)puVar5;
            *(long *)puVar6 = lVar14;
            local_68[0] = (undefined8 *)*puVar16;
            FUN_02a44274(lVar14 + 0xd8,local_68);
          }
        }
        puVar16 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_78 + 1);
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
            local_78[2] = 0;
            if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0))
            {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)puVar5;
            *(long *)puVar6 = lVar14;
            local_68[0] = (undefined8 *)*puVar16;
            FUN_02a44274(lVar14 + 0xd8,local_68);
          }
        }
        lVar14 = plVar20[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
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
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar20 + 0x20))(plVar20);
        }
      }
    }
    plVar9 = *(long **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (plVar9 != (long *)0x0) {
      lVar14 = plVar9[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 1) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))();
      }
    }
  }
  return 1;
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar3) {
      *plVar20 = lVar14;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_01cbbec4:
    if (*plVar20 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar9 + 0x154));
        while (*plVar20 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar3) {
            *plVar20 = lVar14;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01cbbf00;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_01cbbf00:
  bVar3 = true;
LAB_01cbbf04:
  plVar11 = (long *)plVar9[0x3b];
  plVar20 = (long *)plVar9[0x3c];
  if (plVar11 != plVar20) {
    do {
      if (*plVar11 != 0) {
        plVar12 = (long *)(*(code *)**(undefined8 **)(*plVar11 + 8))();
        lVar14 = FUN_00ab38cc();
        for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
          if (plVar12 == (long *)lVar14) goto LAB_01cbbf50;
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar20);
    plVar11 = plVar20;
  }
LAB_01cbbf50:
  if (plVar11 == (long *)plVar9[0x3c]) {
    plVar20 = (long *)0x0;
  }
  else {
    plVar20 = (long *)0x0;
    if (*plVar11 != 0) {
      plVar20 = (long *)(*plVar11 + -0x48);
    }
  }
  if (bVar3) {
    plVar9[0x2c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar9 + 0x154));
  }
  do {
    lVar14 = *plVar21;
    lVar19 = plVar9[0x29];
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar3) {
      *plVar21 = lVar14;
      plVar9[0x29] = lVar19;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01cbbf84:
  lVar15 = *plVar21;
  lVar17 = plVar9[0x29];
  if (lVar15 == lVar14 && lVar17 == lVar19) goto code_r0x01cbbf98;
  ClearExclusiveLocal();
  do {
    do {
      lVar14 = *plVar21;
      if (lVar14 != lVar15 || plVar9[0x29] != lVar17) {
        bVar3 = false;
        ClearExclusiveLocal();
        goto LAB_01cbbfc4;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = lVar15;
        *(long *)((long)plVar9 + 0x144) = lVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = true;
LAB_01cbbfc4:
    lVar15 = lVar14;
    lVar17 = plVar9[0x29];
  } while (!bVar3);
LAB_01cbbff8:
  nn::os::SignalLightEvent((LightEventType *)((long)plVar9 + 0x134));
  goto LAB_01cbc000;
code_r0x01cbbf98:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
  if (bVar3) {
    *plVar21 = lVar14;
    *(long *)((long)plVar9 + 0x144) = lVar19 + -1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01cbbff8;
  goto LAB_01cbbf84;
}


