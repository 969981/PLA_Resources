/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00acb958; name: FUN_00acb958
 */


void FUN_00acb958(long param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *local_90;
  undefined1 auStack_88 [8];
  long *local_80;
  long *local_78;
  undefined1 **ppuStack_70;
  undefined1 *local_68;
  
  puVar12 = PTR_DAT_0437a130;
  puVar11 = PTR_DAT_0437a128;
  puVar10 = PTR_DAT_043795e0;
  puVar9 = PTR_DAT_043794d0;
  if ((*(long *)(param_1 + 0x4b0) == 0) || (*(int *)(*(long *)(param_1 + 0x4b0) + 0xc) == 0)) {
    lVar17 = *(long *)(param_1 + 0x4a0);
  }
  else {
    lVar17 = *(long *)(param_1 + 0x4b0);
    if ((lVar17 == 0) || (*(int *)(lVar17 + 0xc) == 0)) {
LAB_00acba0c:
      plVar20 = (long *)0x0;
    }
    else {
      piVar3 = (int *)(lVar17 + 0xc);
      iVar13 = *(int *)(lVar17 + 0xc);
      do {
        puVar19 = *(undefined8 **)(lVar17 + 0x10);
        if (((*puVar11 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar11), iVar14 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar14 != 0)) {
            if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
              uVar16 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar16;
              __cxa_guard_release(puVar9);
            }
            *(undefined **)puVar10 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar12 = puVar10;
          __cxa_guard_release(puVar11);
        }
        if (puVar19 == (undefined8 *)0x0) goto LAB_00acba0c;
        while (puVar19 != (undefined8 *)puVar12) {
          puVar19 = (undefined8 *)*puVar19;
          plVar20 = (long *)0x0;
          if (puVar19 == (undefined8 *)0x0) goto LAB_00acba10;
        }
        iVar14 = *piVar3;
        if (iVar14 == iVar13) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = iVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            plVar20 = (long *)0x0;
            if (*(long *)(lVar17 + 0x18) != 0) {
              plVar20 = (long *)(*(long *)(lVar17 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar20 = (long *)0x0;
        iVar13 = iVar14;
      } while (iVar14 != 0);
    }
LAB_00acba10:
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar13 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    FUN_0289f790(plVar20,PTR_DAT_0437a0d8);
    if (plVar20 != (long *)0x0) {
      lVar17 = plVar20[0xb];
      piVar3 = (int *)(lVar17 + 0xc);
      do {
        iVar13 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar20 + 0x20))(plVar20);
      }
    }
    FUN_009c69bc(&local_90,param_1);
    local_68 = auStack_88;
    local_78 = local_90 + 0x1e;
    ppuStack_70 = &local_68;
    FUN_00accac0(local_78,&local_80,&local_78);
    if (local_90 != (long *)0x0) {
      lVar17 = local_90[0xb];
      piVar3 = (int *)(lVar17 + 0xc);
      do {
        iVar13 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_90 + 0x20))();
      }
    }
    plVar20 = *(long **)(param_1 + 0x4b0);
    *(undefined8 *)(param_1 + 0x4b0) = 0;
    if (plVar20 != (long *)0x0) {
      plVar1 = plVar20 + 1;
      do {
        iVar13 = (int)*plVar1 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 == 0) {
        plVar20[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_78 = (long *)*plVar20;
        FUN_02a44274(lVar17 + 0xd8,&local_78);
      }
    }
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    lVar17 = *(long *)(param_1 + 0x4a0);
  }
  if (lVar17 == 0) {
    return;
  }
  if (*(int *)(lVar17 + 0xc) == 0) {
    return;
  }
  FUN_00acb2b8(param_1,0);
  FUN_009c69bc(&local_80,param_1);
  plVar1 = local_80;
  ppuStack_70 = &local_68;
  local_78 = local_80 + 0x1e;
  plVar20 = local_80 + 0x21;
  lVar18 = *plVar20;
  local_68 = (undefined1 *)&local_90;
  lVar17 = nn::os::GetCurrentThread();
  if (lVar17 == lVar18) {
    uVar15 = FUN_00acdf9c(&local_78,plVar1 + 0x2d);
    if (((uVar15 & 1) != 0) || (uVar15 = FUN_00acdf9c(&local_78,plVar1 + 0x34), (uVar15 & 1) != 0))
    goto LAB_00acbcc8;
    bVar7 = false;
LAB_00acbbbc:
    plVar20 = plVar1 + 0x28;
    do {
      lVar17 = *plVar20;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = lVar17;
        plVar1[0x29] = plVar1[0x29];
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar18 = nn::os::GetCurrentThread();
    if (lVar18 == lVar17) {
      FUN_00acdf9c(&local_78,plVar1 + 0x3b);
    }
    else {
      lVar17 = nn::os::GetCurrentThread();
      do {
        if (*plVar20 != 0 || plVar1[0x29] != 0) {
          bVar5 = false;
          ClearExclusiveLocal();
          goto LAB_00acbc00;
        }
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar5) {
          *plVar20 = lVar17;
          plVar1[0x29] = 0;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar5 = true;
LAB_00acbc00:
      lVar17 = nn::os::GetCurrentThread();
      plVar2 = plVar1 + 0x2c;
      do {
        if (*plVar2 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar1 + 0x154));
            while (*plVar2 == 0) {
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar17;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_00acbc48;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar17;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_00acbc48:
      if (bVar5) {
        uVar15 = FUN_00ace094(plVar1 + 0x3b);
        if ((uVar15 & 1) != 0) {
          FUN_00ace2e0(plVar1[0x3b],plVar1[0x3c]);
        }
        plVar1[0x2c] = 0;
        nn::os::SignalLightEvent((LightEventType *)((long)plVar1 + 0x154));
        do {
          lVar17 = *plVar20;
          lVar18 = plVar1[0x29];
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *plVar20 = lVar17;
            plVar1[0x29] = lVar18;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          if (*plVar20 != lVar17 || plVar1[0x29] != lVar18) {
            ClearExclusiveLocal();
            lVar17 = *plVar20;
            lVar18 = plVar1[0x29];
            goto LAB_00acbd88;
          }
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *plVar20 = 0;
            *(long *)((long)plVar1 + 0x144) = lVar18;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        goto LAB_00acbcac;
      }
      FUN_00acdf9c(&local_78);
      plVar1[0x2c] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar1 + 0x154));
    }
    goto joined_r0x00acbcb4;
  }
  lVar17 = nn::os::GetCurrentThread();
  do {
    if (*plVar20 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar1 + 0xfc));
        while (*plVar20 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar7) {
            *plVar20 = lVar17;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00acbb44;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar7) {
      *plVar20 = lVar17;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00acbb44:
  lVar17 = nn::os::GetCurrentThread();
  plVar20 = plVar1 + 0x24;
  do {
    if (*plVar20 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar1 + 0x114));
        while (*plVar20 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar7) {
            *plVar20 = lVar17;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00acbb8c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar7) {
      *plVar20 = lVar17;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00acbb8c:
  uVar15 = FUN_00ace094(plVar1 + 0x2d);
  if ((uVar15 & 1) == 0) {
    uVar15 = FUN_00ace094(plVar1 + 0x34);
    plVar1[0x24] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar1 + 0x114));
    if ((uVar15 & 1) == 0) {
      bVar7 = true;
      goto LAB_00acbbbc;
    }
  }
  else {
    plVar1[0x24] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar1 + 0x114));
  }
  goto LAB_00acbcb8;
LAB_00acbd88:
  do {
    lVar4 = *plVar20;
    if (lVar4 == lVar17 && plVar1[0x29] == lVar18) {
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = 0;
        *(long *)((long)plVar1 + 0x144) = lVar18;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_00acbd88;
      bVar5 = true;
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    lVar17 = lVar4;
    lVar18 = plVar1[0x29];
  } while (!bVar5);
LAB_00acbcac:
  nn::os::SignalLightEvent((LightEventType *)((long)plVar1 + 0x134));
joined_r0x00acbcb4:
  if (!bVar7) goto LAB_00acbcc8;
LAB_00acbcb8:
  plVar1[0x21] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar1 + 0xfc));
LAB_00acbcc8:
  if (local_80 != (long *)0x0) {
    lVar17 = local_80[0xb];
    piVar3 = (int *)(lVar17 + 0xc);
    do {
      iVar13 = *piVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = iVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  puVar19 = *(undefined8 **)(param_1 + 0x4a0);
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  if (puVar19 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar19 + 1);
    do {
      iVar13 = *piVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = iVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 + -1 == 0) {
      puVar19[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_78 = (long *)*puVar19;
      FUN_02a44274(lVar17 + 0xd8,&local_78);
    }
  }
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined1 *)(param_1 + 0x31e) = 1;
  return;
}


