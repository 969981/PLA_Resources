/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02590568; name: FUN_02590568
 */


/* WARNING: Removing unreachable block (ram,0x02590b68) */

void FUN_02590568(undefined8 *param_1,long param_2,uint param_3,long *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  long *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  long *local_70;
  undefined8 *local_68;
  
  (**(code **)(*(long *)*param_4 + 0x10))(&local_80);
  local_90 = (long *)0x0;
  local_88 = 0;
  FUN_0087f944(&local_90,&local_80);
  puVar2 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80 + 1);
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
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_68 = (undefined8 *)*puVar2;
      FUN_02a44274(lVar15 + 0xd8,&local_68);
    }
  }
  plVar21 = local_90;
  if (local_90 == (long *)0x0) {
    lVar15 = 0;
    if (1 < param_3) goto LAB_025909a0;
  }
  else {
    plVar18 = local_90 + 1;
    lVar15 = *local_90;
    do {
      iVar10 = (int)*plVar18 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 != 0) goto LAB_02590680;
    local_90[2] = 0;
    if ((*PTR_DAT_04379498 & 1) == 0) goto LAB_025909a4;
    while( true ) {
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_80 = (undefined8 *)*plVar21;
      FUN_02a44274(lVar16 + 0xd8,&local_80);
LAB_02590680:
      if (param_3 < 2) break;
LAB_025909a0:
      FUN_02593260();
LAB_025909a4:
      iVar10 = __cxa_guard_acquire(PTR_DAT_04379498);
      if (iVar10 != 0) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
    }
  }
  lVar24 = param_2 + (long)(int)param_3 * 0x50;
  *param_1 = 0;
  lVar16 = (long)(int)param_3;
  if (*(long *)(lVar24 + 0x210) == lVar15) {
    lVar15 = *(long *)(param_2 + lVar16 * 0x50 + 0x218);
    if (lVar15 == 0) {
      return;
    }
    if (*(int *)(lVar15 + 0xc) == 0) {
      return;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    iVar10 = *(int *)(lVar15 + 0xc);
    do {
      uVar12 = FUN_02593cc4(*(undefined8 *)(lVar15 + 0x10));
      if ((uVar12 & 1) == 0) {
        return;
      }
      iVar3 = *piVar1;
      if (iVar3 == iVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar15 = *(long *)(lVar15 + 0x18);
          if (lVar15 == 0) {
            return;
          }
          lVar16 = *(long *)(lVar15 + 8);
          if (*(undefined8 **)(lVar16 + 0x18) != (undefined8 *)0x0) {
            plVar21 = (long *)(lVar15 + -0x50);
            if (*(long *)(lVar16 + 0x10) == 0) {
              uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
              *(undefined8 *)(lVar16 + 0x10) = uVar13;
            }
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            *param_1 = plVar21;
            lVar15 = *(long *)(lVar15 + 8);
            piVar1 = (int *)(lVar15 + 0xc);
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
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*plVar21 + 0x20))(plVar21);
              return;
            }
            return;
          }
          goto LAB_02591224;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar3;
      if (iVar3 == 0) {
        return;
      }
    } while( true );
  }
  lVar26 = *param_4;
  plVar21 = (long *)(lVar26 + 0x108);
  lVar22 = *plVar21;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 == lVar22) {
    bVar5 = false;
  }
  else {
    lVar11 = nn::os::GetCurrentThread();
    do {
      if (*plVar21 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0xfc));
          while (*plVar21 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar5) {
              *plVar21 = lVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_02590730;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_02590730:
    bVar5 = true;
  }
  lVar11 = nn::os::GetCurrentThread();
  plVar21 = (long *)(lVar26 + 0x120);
  do {
    if (*plVar21 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x114));
        while (*plVar21 == 0) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar9) {
            *plVar21 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02590780;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar9) {
      *plVar21 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02590780:
  plVar21 = *(long **)(lVar26 + 0x1a0);
  plVar18 = *(long **)(lVar26 + 0x1a8);
  if (plVar21 != plVar18) {
    do {
      if (*plVar21 != 0) {
        (*(code *)**(undefined8 **)(*plVar21 + 8))();
        uVar12 = FUN_02593cc4();
        if ((uVar12 & 1) != 0) goto LAB_02590a4c;
      }
      plVar21 = plVar21 + 1;
    } while (plVar18 != plVar21);
    plVar21 = plVar18;
LAB_02590a4c:
    if ((plVar21 != *(long **)(lVar26 + 0x1a8)) && (*plVar21 != 0)) {
      bVar9 = false;
      plVar21 = (long *)(*plVar21 + -0x48);
      goto LAB_025907a4;
    }
  }
  plVar18 = *(long **)(lVar26 + 0x168);
  plVar21 = *(long **)(lVar26 + 0x170);
  if (plVar18 == plVar21) {
LAB_02590798:
    plVar21 = (long *)0x0;
  }
  else {
    do {
      if (*plVar18 != 0) {
        (*(code *)**(undefined8 **)(*plVar18 + 8))();
        uVar12 = FUN_02593cc4();
        if ((uVar12 & 1) != 0) goto LAB_02590a9c;
      }
      plVar18 = plVar18 + 1;
    } while (plVar21 != plVar18);
    plVar18 = plVar21;
LAB_02590a9c:
    if (plVar18 == *(long **)(lVar26 + 0x170)) goto LAB_02590798;
    plVar21 = (long *)0x0;
    if (*plVar18 != 0) {
      plVar21 = (long *)(*plVar18 + -0x48);
    }
  }
  bVar9 = plVar21 == (long *)0x0;
LAB_025907a4:
  *(undefined8 *)(lVar26 + 0x120) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar26 + 0x114));
  if (bVar5) {
    *(undefined8 *)(lVar26 + 0x108) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar26 + 0xfc));
  }
  if (bVar9) {
    lVar11 = nn::os::GetCurrentThread();
    plVar18 = (long *)(lVar26 + 0x140);
    do {
      lVar22 = *plVar18;
      lVar17 = *(long *)(lVar26 + 0x148);
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = lVar22;
        *(long *)(lVar26 + 0x148) = lVar17;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      while ((lVar22 != 0 && (lVar11 != lVar22))) {
        nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x134));
        do {
          lVar22 = *plVar18;
          lVar17 = *(long *)(lVar26 + 0x148);
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = lVar22;
            *(long *)(lVar26 + 0x148) = lVar17;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      while( true ) {
        if (*plVar18 != lVar22 || *(long *)(lVar26 + 0x148) != lVar17) break;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = lVar22;
          *(long *)(lVar26 + 0x144) = lVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          plVar21 = (long *)(lVar26 + 0x160);
          lVar22 = *plVar21;
          lVar11 = nn::os::GetCurrentThread();
          if (lVar11 != lVar22) {
            lVar11 = nn::os::GetCurrentThread();
            goto LAB_02590864;
          }
          bVar5 = false;
          goto LAB_025908ac;
        }
      }
      ClearExclusiveLocal();
      lVar22 = *plVar18;
      lVar17 = *(long *)(lVar26 + 0x148);
    } while( true );
  }
LAB_02590bac:
  if (plVar21 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    lVar11 = plVar21[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_02591224:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *param_1 = plVar21;
    *(long *)(lVar24 + 0x210) = lVar15;
    (**(code **)(*plVar21 + 0x10))(&local_80,plVar21);
    puVar6 = PTR_DAT_04379498;
    local_90 = (long *)0x0;
    local_88 = 0;
    do {
      uVar13 = local_78;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(&local_78,0x10);
      if (bVar5) {
        local_78 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    puVar8 = PTR_DAT_043794a8;
    puVar7 = PTR_DAT_043794a0;
    uVar14 = *(undefined8 *)PTR_DAT_043794a0;
    *(undefined8 *)PTR_DAT_043794a8 = uVar14;
    FUN_02a44e0c(&local_70,uVar14,uVar13);
    puVar2 = local_80;
    local_80 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
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
        puVar2[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar7;
        *(long *)puVar8 = lVar15;
        local_68 = (undefined8 *)*puVar2;
        FUN_02a44274(lVar15 + 0xd8,&local_68);
      }
    }
    plVar21 = local_90;
    local_90 = (long *)0x0;
    if (local_70 == (long *)0x0) {
      if (plVar21 != (long *)0x0) {
        plVar18 = plVar21 + 1;
        do {
          lVar15 = *plVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *(int *)plVar18 = (int)lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar15 == 1) {
          plVar21[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)puVar7;
          *(long *)puVar8 = lVar15;
          local_68 = (undefined8 *)*plVar21;
          FUN_02a44274(lVar15 + 0xd8,&local_68);
        }
      }
      uVar13 = 0;
    }
    else {
      plVar18 = local_70;
      if (plVar21 != (long *)0x0) {
        plVar18 = plVar21 + 1;
        do {
          iVar10 = (int)*plVar18 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *(int *)plVar18 = iVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 == 0) {
          plVar21[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)puVar7;
          *(long *)puVar8 = lVar15;
          local_68 = (undefined8 *)*plVar21;
          FUN_02a44274(lVar15 + 0xd8,&local_68);
        }
        plVar18 = local_70;
      }
      local_70 = (long *)0x0;
      local_90 = plVar18;
    }
    plVar21 = local_70;
    local_88 = uVar13;
    if (local_70 != (long *)0x0) {
      plVar18 = local_70 + 1;
      do {
        iVar10 = (int)*plVar18 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 0) {
        local_70[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar7;
        *(long *)puVar8 = lVar15;
        local_68 = (undefined8 *)*plVar21;
        FUN_02a44274(lVar15 + 0xd8,&local_68);
      }
    }
    puVar2 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_80 + 1);
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
        local_80[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar7;
        *(long *)puVar8 = lVar15;
        local_68 = (undefined8 *)*puVar2;
        FUN_02a44274(lVar15 + 0xd8,&local_68);
      }
    }
    puVar2 = (undefined8 *)(param_2 + lVar16 * 0x50 + 0x218);
    do {
      uVar13 = local_88;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(&local_88,0x10);
      if (bVar5) {
        local_88 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    uVar14 = *(undefined8 *)puVar7;
    *(undefined8 *)puVar8 = uVar14;
    FUN_02a44e0c(&local_68,uVar14,uVar13);
    plVar21 = local_90;
    local_90 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      plVar18 = plVar21 + 1;
      do {
        iVar10 = (int)*plVar18 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 0) {
        plVar21[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar7;
        *(long *)puVar8 = lVar15;
        local_80 = (undefined8 *)*plVar21;
        FUN_02a44274(lVar15 + 0xd8,&local_80);
      }
    }
    puVar25 = (undefined8 *)*puVar2;
    *puVar2 = 0;
    if (local_68 == (undefined8 *)0x0) {
      if (puVar25 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar25 + 1);
        do {
          iVar10 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 == 1) {
          puVar25[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)puVar7;
          *(long *)puVar8 = lVar15;
          local_80 = (undefined8 *)*puVar25;
          FUN_02a44274(lVar15 + 0xd8,&local_80);
        }
      }
      uVar13 = 0;
    }
    else {
      puVar19 = local_68;
      if (puVar25 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar25 + 1);
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
          puVar25[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)puVar7;
          *(long *)puVar8 = lVar15;
          local_80 = (undefined8 *)*puVar25;
          FUN_02a44274(lVar15 + 0xd8,&local_80);
        }
        puVar19 = local_68;
      }
      local_68 = (undefined8 *)0x0;
      *puVar2 = puVar19;
    }
    puVar2 = local_68;
    *(undefined8 *)(param_2 + lVar16 * 0x50 + 0x220) = uVar13;
    if (local_68 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_68 + 1);
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
        local_68[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar7;
        *(long *)puVar8 = lVar15;
        local_80 = (undefined8 *)*puVar2;
        FUN_02a44274(lVar15 + 0xd8,&local_80);
      }
    }
    plVar21 = local_90;
    if (local_90 != (long *)0x0) {
      plVar18 = local_90 + 1;
      do {
        iVar10 = (int)*plVar18 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 0) {
        local_90[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar7;
        *(long *)puVar8 = lVar15;
        local_80 = (undefined8 *)*plVar21;
        FUN_02a44274(lVar15 + 0xd8,&local_80);
      }
    }
  }
  return;
  while( true ) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar5) {
      *plVar21 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') break;
LAB_02590864:
    if (*plVar21 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x154));
        while (*plVar21 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar5) {
            *plVar21 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_025908a8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_025908a8:
  bVar5 = true;
LAB_025908ac:
  plVar23 = *(long **)(lVar26 + 0x1d8);
  plVar21 = *(long **)(lVar26 + 0x1e0);
  if (plVar23 != plVar21) {
    do {
      if (*plVar23 != 0) {
        (*(code *)**(undefined8 **)(*plVar23 + 8))();
        uVar12 = FUN_02593cc4();
        if ((uVar12 & 1) != 0) goto LAB_02590aec;
      }
      plVar23 = plVar23 + 1;
    } while (plVar21 != plVar23);
    plVar23 = plVar21;
LAB_02590aec:
    if (plVar23 != *(long **)(lVar26 + 0x1e0)) {
      plVar21 = (long *)0x0;
      if (*plVar23 != 0) {
        plVar21 = (long *)(*plVar23 + -0x48);
      }
      goto joined_r0x02590b08;
    }
  }
  plVar21 = (long *)0x0;
joined_r0x02590b08:
  if (bVar5) {
    *(undefined8 *)(lVar26 + 0x160) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar26 + 0x154));
  }
  do {
    lVar11 = *plVar18;
    lVar22 = *(long *)(lVar26 + 0x148);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar5) {
      *plVar18 = lVar11;
      *(long *)(lVar26 + 0x148) = lVar22;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    lVar17 = *plVar18;
    lVar20 = *(long *)(lVar26 + 0x148);
    if (lVar17 != lVar11 || lVar20 != lVar22) break;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar5) {
      *plVar18 = lVar11;
      *(long *)(lVar26 + 0x144) = lVar22 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02590ba8;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar11 = *plVar18;
      if (lVar11 != lVar17 || *(long *)(lVar26 + 0x148) != lVar20) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_02590b74;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = lVar17;
        *(long *)(lVar26 + 0x144) = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = true;
LAB_02590b74:
    lVar17 = lVar11;
    lVar20 = *(long *)(lVar26 + 0x148);
  } while (!bVar5);
LAB_02590ba8:
  nn::os::SignalLightEvent((LightEventType *)(lVar26 + 0x134));
  goto LAB_02590bac;
}


