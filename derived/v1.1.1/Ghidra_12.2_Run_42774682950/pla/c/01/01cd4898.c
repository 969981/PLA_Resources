/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd4898; name: FUN_01cd4898
 */


/* WARNING: Removing unreachable block (ram,0x01cd4f98) */

void FUN_01cd4898(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  ulong uVar6;
  ulong *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  bool bVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  bool bVar19;
  int iVar20;
  long lVar21;
  long *plVar22;
  long *local_80;
  long *local_78;
  ulong *local_70;
  undefined8 uStack_68;
  long *local_60 [2];
  long *local_48;
  
  *(undefined4 *)(*param_2 + 0x68) = 0;
  *(undefined4 *)(*param_2 + 0x6c) = 0;
  plVar17 = (long *)*param_1;
  if (plVar17 != (long *)0x0) {
    lVar21 = plVar17[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01cd4e80;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_80 = (long *)*param_2;
  if (local_80 != (long *)0x0) {
    lVar21 = local_80[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
LAB_01cd4e80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar10 = (long *)FUN_00b13c20(plVar17 + 0x1e,local_60);
  if (plVar10 == (long *)0x0) goto LAB_01cd4bc8;
  (**(code **)(*plVar10 + 0x10))(local_60);
  local_70 = (ulong *)0x0;
  uStack_68 = 0;
  FUN_00bd84b0(&local_70,local_60);
  plVar16 = local_60[0];
  if (local_60[0] != (long *)0x0) {
    plVar22 = local_60[0] + 1;
    do {
      iVar8 = (int)*plVar22 + -1;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar11) {
        *(int *)plVar22 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      local_60[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_48 = (long *)*plVar16;
      FUN_02a44274(lVar21 + 0xd8,&local_48);
    }
  }
  uVar12 = 0;
  if (local_70 != (ulong *)0x0) {
    uVar12 = *local_70;
  }
  uVar13 = local_80[0x11];
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & uVar12;
    }
    else {
      uVar15 = uVar12;
      if (uVar13 <= uVar12) {
        uVar15 = 0;
        if (uVar13 != 0) {
          uVar15 = uVar12 / uVar13;
        }
        uVar15 = uVar12 - uVar15 * uVar13;
      }
    }
    plVar16 = *(long **)(local_80[0x10] + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar16[1] == uVar12) {
            if (plVar16[2] == uVar12) goto LAB_01cd4ae4;
          }
          else if ((plVar16[1] & uVar13 - 1) != uVar15) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar16[1];
          if (uVar14 == uVar12) {
            if (plVar16[2] == uVar12) goto LAB_01cd4ae4;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar6 = 0;
              if (uVar13 != 0) {
                uVar6 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar6 * uVar13;
            }
            if (uVar14 != uVar15) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  goto LAB_01cd4b68;
LAB_01cd4ae4:
  plVar16 = plVar10 + 0x44;
  lVar18 = *plVar16;
  lVar21 = nn::os::GetCurrentThread();
  if (lVar21 == lVar18) {
    plVar22 = (long *)0x0;
    bVar11 = true;
  }
  else {
    plVar22 = plVar10 + 0x42;
    lVar21 = nn::os::GetCurrentThread();
    do {
      if (*plVar16 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar10 + 0x214));
          while (*plVar16 == 0) {
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar11) {
              *plVar16 = lVar21;
              cVar5 = ExclusiveMonitorsStatus();
            }
            bVar11 = false;
            if (cVar5 == '\0') goto LAB_01cd4b40;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar11) {
        *plVar16 = lVar21;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar11 = false;
  }
LAB_01cd4b40:
  lVar21 = plVar10[0x46];
  lVar18 = plVar10[0x45];
  if (!bVar11) {
    plVar22[2] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar22 + 4));
  }
  iVar8 = (int)((ulong)(lVar21 - lVar18) >> 4);
  if (iVar8 != 0) {
    iVar20 = 0;
    do {
      FUN_00d81884(local_60,plVar10,iVar20);
      FUN_009c69bc(&local_48,local_60[0]);
      plVar16 = local_80;
      local_78 = local_80;
      if (local_80 == (long *)0x0) {
        FUN_01cd4898(&local_48,&local_78);
      }
      else {
        lVar21 = local_80[0xb];
        if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01cd4e80;
        if (*(long *)(lVar21 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
          *(undefined8 *)(lVar21 + 0x10) = uVar9;
        }
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        FUN_01cd4898(&local_48,&local_78);
        lVar21 = plVar16[0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar3 = *piVar1;
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*plVar16 + 0x20))(plVar16);
        }
      }
      if (local_48 != (long *)0x0) {
        lVar21 = local_48[0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar3 = *piVar1;
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))();
        }
      }
      if (local_60[0] != (long *)0x0) {
        lVar21 = local_60[0][0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar3 = *piVar1;
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*local_60[0] + 0x20))();
        }
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 != iVar8);
  }
LAB_01cd4b68:
  puVar7 = local_70;
  if (local_70 != (ulong *)0x0) {
    puVar2 = local_70 + 1;
    do {
      iVar8 = (int)*puVar2 + -1;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar11) {
        *(int *)puVar2 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_60[0] = (long *)*puVar7;
      FUN_02a44274(lVar21 + 0xd8,local_60);
    }
  }
LAB_01cd4bc8:
  plVar10 = plVar17 + 0x21;
  *(int *)(local_80 + 0xd) = (int)local_80[0xd] + 1;
  lVar18 = *plVar10;
  local_60[0] = (long *)&local_80;
  lVar21 = nn::os::GetCurrentThread();
  if (lVar21 == lVar18) {
    bVar11 = false;
  }
  else {
    lVar21 = nn::os::GetCurrentThread();
    do {
      if (*plVar10 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar17 + 0xfc));
          while (*plVar10 == 0) {
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar11) {
              *plVar10 = lVar21;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01cd4c38;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar11) {
        *plVar10 = lVar21;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01cd4c38:
    bVar11 = true;
  }
  lVar21 = nn::os::GetCurrentThread();
  plVar10 = plVar17 + 0x24;
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar17 + 0x114));
        while (*plVar10 == 0) {
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar19) {
            *plVar10 = lVar21;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01cd4c84;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar19) {
      *plVar10 = lVar21;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01cd4c84:
  lVar21 = nn::os::GetCurrentThread();
  plVar10 = plVar17 + 0x28;
  do {
    lVar18 = *plVar10;
    lVar4 = plVar17[0x29];
    cVar5 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar19) {
      *plVar10 = lVar18;
      plVar17[0x29] = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    while ((lVar18 != 0 && (lVar21 != lVar18))) {
      nn::os::WaitLightEvent((LightEventType *)((long)plVar17 + 0x134));
      do {
        lVar18 = *plVar10;
        lVar4 = plVar17[0x29];
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar19) {
          *plVar10 = lVar18;
          plVar17[0x29] = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    while( true ) {
      if (*plVar10 != lVar18 || plVar17[0x29] != lVar4) break;
      cVar5 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar19) {
        *plVar10 = lVar18;
        *(long *)((long)plVar17 + 0x144) = lVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        plVar16 = plVar17 + 0x2c;
        lVar18 = *plVar16;
        lVar21 = nn::os::GetCurrentThread();
        if (lVar21 != lVar18) {
          lVar21 = nn::os::GetCurrentThread();
          goto LAB_01cd4eec;
        }
        bVar19 = true;
        goto LAB_01cd4f2c;
      }
    }
    ClearExclusiveLocal();
    lVar18 = *plVar10;
    lVar4 = plVar17[0x29];
  } while( true );
  while( true ) {
    cVar5 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar19) {
      *plVar16 = lVar21;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') break;
LAB_01cd4eec:
    if (*plVar16 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar17 + 0x154));
        while (*plVar16 == 0) {
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar19) {
            *plVar16 = lVar21;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01cd4f28;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_01cd4f28:
  bVar19 = false;
LAB_01cd4f2c:
  FUN_01cd97f0(plVar17[0x2d],plVar17[0x2e],local_60);
  FUN_01cd97f0(plVar17[0x34],plVar17[0x35],local_60);
  FUN_01cd97f0(plVar17[0x3b],plVar17[0x3c],local_60);
  if (!bVar19) {
    plVar17[0x2c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0x154));
  }
  do {
    lVar21 = *plVar10;
    lVar18 = plVar17[0x29];
    cVar5 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar19) {
      *plVar10 = lVar21;
      plVar17[0x29] = lVar18;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while( true ) {
    if (*plVar10 != lVar21 || plVar17[0x29] != lVar18) break;
    cVar5 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar19) {
      *plVar10 = lVar21;
      *(long *)((long)plVar17 + 0x144) = lVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01cd4fa8;
  }
  ClearExclusiveLocal();
  lVar21 = *plVar10;
  lVar18 = plVar17[0x29];
  do {
    do {
      lVar4 = *plVar10;
      if (lVar4 != lVar21 || plVar17[0x29] != lVar18) {
        bVar19 = false;
        ClearExclusiveLocal();
        goto LAB_01cd50ac;
      }
      cVar5 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar19) {
        *plVar10 = lVar21;
        *(long *)((long)plVar17 + 0x144) = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar19 = true;
LAB_01cd50ac:
    lVar21 = lVar4;
    lVar18 = plVar17[0x29];
  } while (!bVar19);
LAB_01cd4fa8:
  nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0x134));
  plVar17[0x24] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0x114));
  if (bVar11) {
    plVar17[0x21] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0xfc));
  }
  if (local_80 != (long *)0x0) {
    lVar21 = local_80[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  lVar21 = plVar17[0xb];
  piVar1 = (int *)(lVar21 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar11) {
      *piVar1 = iVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar21 + 0x18) = 0;
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  return;
}


