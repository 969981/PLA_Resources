/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aae64c; name: FUN_00aae64c
 */


/* WARNING: Removing unreachable block (ram,0x00aae960) */

void FUN_00aae64c(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar19 = *param_2;
  plVar20 = (long *)(lVar19 + 0x108);
  lVar17 = *plVar20;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 == lVar17) {
    bVar3 = false;
  }
  else {
    lVar11 = nn::os::GetCurrentThread();
    bVar3 = true;
    do {
      if (*plVar20 != 0) {
        bVar3 = true;
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xfc));
          while (*plVar20 == 0) {
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar8) {
              *plVar20 = lVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00aae694;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar8) {
        *plVar20 = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
LAB_00aae694:
  lVar11 = nn::os::GetCurrentThread();
  plVar20 = (long *)(lVar19 + 0x120);
  do {
    if (*plVar20 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x114));
        while (*plVar20 == 0) {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00aae6dc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar8) {
      *plVar20 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00aae6dc:
  puVar6 = PTR_DAT_0437a5b0;
  puVar5 = PTR_DAT_0437a5a8;
  plVar20 = *(long **)(lVar19 + 0x1a0);
  plVar18 = *(long **)(lVar19 + 0x1a8);
  if (plVar20 != plVar18) {
    do {
      if (*plVar20 != 0) {
        plVar12 = (long *)(*(code *)**(undefined8 **)(*plVar20 + 8))();
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
          uVar14 = FUN_00ab38cc();
          *(undefined8 *)puVar6 = uVar14;
          __cxa_guard_release(puVar5);
        }
        for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
          if (plVar12 == (long *)puVar6) goto LAB_00aae73c;
        }
      }
      plVar20 = plVar20 + 1;
    } while (plVar20 != plVar18);
    plVar20 = plVar18;
  }
LAB_00aae73c:
  if ((plVar20 == *(long **)(lVar19 + 0x1a8)) || (*plVar20 == 0)) {
    plVar20 = *(long **)(lVar19 + 0x168);
    plVar18 = *(long **)(lVar19 + 0x170);
    if (plVar20 != plVar18) {
      do {
        if (*plVar20 != 0) {
          plVar12 = (long *)(*(code *)**(undefined8 **)(*plVar20 + 8))();
          if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
            uVar14 = FUN_00ab38cc();
            *(undefined8 *)puVar6 = uVar14;
            __cxa_guard_release(puVar5);
          }
          for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
            if (plVar12 == (long *)puVar6) goto LAB_00aae798;
          }
        }
        plVar20 = plVar20 + 1;
      } while (plVar20 != plVar18);
      plVar20 = plVar18;
    }
LAB_00aae798:
    if (plVar20 == *(long **)(lVar19 + 0x170)) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      if (*plVar20 != 0) {
        lVar11 = *plVar20 + -0x48;
      }
    }
    bVar8 = lVar11 == 0;
  }
  else {
    bVar8 = false;
    lVar11 = *plVar20 + -0x48;
  }
  *(undefined8 *)(lVar19 + 0x120) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x114));
  if (bVar3) {
    *(undefined8 *)(lVar19 + 0x108) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0xfc));
  }
  if (bVar8) {
    lVar11 = nn::os::GetCurrentThread();
    plVar20 = (long *)(lVar19 + 0x140);
    do {
      lVar17 = *plVar20;
      lVar2 = *(long *)(lVar19 + 0x148);
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = lVar17;
        *(long *)(lVar19 + 0x148) = lVar2;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      while ((lVar17 != 0 && (lVar11 != lVar17))) {
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x134));
        do {
          lVar17 = *plVar20;
          lVar2 = *(long *)(lVar19 + 0x148);
          cVar4 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar3) {
            *plVar20 = lVar17;
            *(long *)(lVar19 + 0x148) = lVar2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      while( true ) {
        if (*plVar20 != lVar17 || *(long *)(lVar19 + 0x148) != lVar2) break;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar3) {
          *plVar20 = lVar17;
          *(long *)(lVar19 + 0x144) = lVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          plVar18 = (long *)(lVar19 + 0x160);
          lVar17 = *plVar18;
          lVar11 = nn::os::GetCurrentThread();
          if (lVar11 != lVar17) {
            lVar11 = nn::os::GetCurrentThread();
            bVar3 = true;
            goto LAB_00aaec0c;
          }
          bVar3 = false;
          goto LAB_00aae86c;
        }
      }
      ClearExclusiveLocal();
      lVar17 = *plVar20;
      lVar2 = *(long *)(lVar19 + 0x148);
    } while( true );
  }
LAB_00aae9a8:
  if (lVar11 == 0) {
    lVar11 = FUN_00ab4364(*param_2 + 0xf0,&local_78);
    if (lVar11 == 0) {
      return;
    }
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_008802f0(&local_78,lVar11 + 0x58);
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    FUN_00880560(&local_88,&local_78);
    puVar7 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78 + 1);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_68 = *puVar7;
        FUN_02a44274(lVar11 + 0xd8,&local_68);
      }
    }
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00ab1f6c(&local_78,&local_88);
    puVar7 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_88 + 1);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_68 = *puVar7;
        FUN_02a44274(lVar11 + 0xd8,&local_68);
      }
    }
    FUN_00ab1c6c(param_1,&local_78);
    if (local_78 == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_78 + 1);
    do {
      iVar10 = *piVar1 + -1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_01a05218(&local_78,lVar11 + 0x3b0);
    puVar7 = local_78;
    puVar6 = PTR_DAT_0437a5c0;
    puVar5 = PTR_DAT_0437a5b8;
    if (local_78 == (undefined8 *)0x0) {
      return;
    }
    if (*(int *)((long)local_78 + 0xc) != 0) {
      piVar1 = (int *)((long)local_78 + 0xc);
      iVar10 = *(int *)((long)local_78 + 0xc);
      do {
        plVar20 = (long *)puVar7[2];
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          uVar14 = FUN_00ab4284();
          *(undefined8 *)puVar6 = uVar14;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar20 == (long *)0x0) goto joined_r0x00aaee30;
          if (plVar20 == (long *)puVar6) break;
          plVar20 = (long *)*plVar20;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar10) {
          cVar4 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar11 = puVar7[3];
            if (lVar11 != 0) {
              plVar20 = (long *)(lVar11 + -0x50);
              FUN_00aaeed4(&local_88,plVar20);
              FUN_00ab1c6c(param_1,&local_88);
              puVar7 = local_88;
              if (local_88 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_88 + 1);
                do {
                  iVar10 = *piVar1;
                  cVar4 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar10 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar10 + -1 == 0) {
                  local_88[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar17 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar17;
                  local_68 = *puVar7;
                  FUN_02a44274(lVar17 + 0xd8,&local_68);
                }
              }
              lVar11 = *(long *)(lVar11 + 8);
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar4 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*plVar20 + 0x20))(plVar20);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
joined_r0x00aaee30:
    if (local_78 == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_78 + 1);
    do {
      iVar10 = *piVar1 + -1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7 = local_78;
  if (iVar10 == 0) {
    local_78[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar11 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar11;
    local_88 = (undefined8 *)*puVar7;
    FUN_02a44274(lVar11 + 0xd8,&local_88);
  }
  return;
  while( true ) {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar8) {
      *plVar18 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') break;
LAB_00aaec0c:
    if (*plVar18 != 0) {
      bVar3 = true;
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x154));
        while (*plVar18 == 0) {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar8) {
            *plVar18 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00aae86c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_00aae86c:
  plVar18 = *(long **)(lVar19 + 0x1d8);
  plVar12 = *(long **)(lVar19 + 0x1e0);
  if (plVar18 != plVar12) {
    do {
      if (*plVar18 != 0) {
        plVar13 = (long *)(*(code *)**(undefined8 **)(*plVar18 + 8))();
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
          uVar14 = FUN_00ab38cc();
          *(undefined8 *)puVar6 = uVar14;
          __cxa_guard_release(puVar5);
        }
        for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
          if (plVar13 == (long *)puVar6) goto LAB_00aae8b8;
        }
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar12);
    plVar18 = plVar12;
  }
LAB_00aae8b8:
  if (plVar18 == *(long **)(lVar19 + 0x1e0)) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*plVar18 != 0) {
      lVar11 = *plVar18 + -0x48;
    }
  }
  if (bVar3) {
    *(undefined8 *)(lVar19 + 0x160) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x154));
  }
  do {
    lVar17 = *plVar20;
    lVar2 = *(long *)(lVar19 + 0x148);
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar3) {
      *plVar20 = lVar17;
      *(long *)(lVar19 + 0x148) = lVar2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00aae92c:
  lVar15 = *plVar20;
  lVar16 = *(long *)(lVar19 + 0x148);
  if (lVar15 == lVar17 && lVar16 == lVar2) goto code_r0x00aae940;
  ClearExclusiveLocal();
  do {
    do {
      lVar17 = *plVar20;
      if (lVar17 != lVar15 || *(long *)(lVar19 + 0x148) != lVar16) {
        bVar3 = false;
        ClearExclusiveLocal();
        goto LAB_00aae96c;
      }
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = lVar15;
        *(long *)(lVar19 + 0x144) = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar3 = true;
LAB_00aae96c:
    lVar15 = lVar17;
    lVar16 = *(long *)(lVar19 + 0x148);
  } while (!bVar3);
LAB_00aae9a0:
  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x134));
  goto LAB_00aae9a8;
code_r0x00aae940:
  cVar4 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
  if (bVar3) {
    *plVar20 = lVar17;
    *(long *)(lVar19 + 0x144) = lVar2 + -1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00aae9a0;
  goto LAB_00aae92c;
}


