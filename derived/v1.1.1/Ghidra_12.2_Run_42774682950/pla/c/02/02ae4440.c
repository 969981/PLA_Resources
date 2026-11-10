/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ae4440; name: FUN_02ae4440
 */


void FUN_02ae4440(long param_1,long *param_2,long *param_3)

{
  int *piVar1;
  MutexType *pMVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long **pplVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  long *local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  long *local_c8;
  undefined8 local_c0;
  long *local_b8;
  long *local_b0;
  long local_a8;
  long local_a0;
  long *local_98;
  undefined4 local_90;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  pplVar14 = &local_e0;
  if (((*PTR_DAT_04379d30 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379d30);
  }
  lVar20 = *(long *)PTR_DAT_04379d38;
  *(long *)PTR_DAT_04379d40 = lVar20;
  local_70 = param_3;
  if (param_3 == (long *)0x0) {
    local_70 = *(long **)(lVar20 + 8);
  }
  lVar12 = nn::os::GetCurrentThread();
  plVar18 = (long *)(lVar20 + 0x150);
  do {
    if (*plVar18 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x144));
        while (*plVar18 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = lVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02ae44ec;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar5) {
      *plVar18 = lVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02ae44ec:
  puVar8 = PTR_DAT_04379d28;
  puVar7 = PTR_DAT_04379d20;
  uVar15 = *(ulong *)(lVar20 + 0x78);
  uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar21 = param_2[1];
  uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar16 < 2) {
    uVar21 = uVar15 - 1 & uVar21;
  }
  else if (uVar15 <= uVar21) {
    uVar6 = 0;
    if (uVar15 != 0) {
      uVar6 = uVar21 / uVar15;
    }
    uVar21 = uVar21 - uVar6 * uVar15;
  }
  plVar17 = *(long **)(*(long *)(lVar20 + 0x70) + uVar21 * 8);
  plVar18 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    plVar18 = (long *)*plVar17;
  }
  if (plVar18 == (long *)0x0) {
LAB_02ae4628:
    if (plVar18 == (long *)0x0) goto LAB_02ae4774;
    lVar12 = plVar18[9];
    if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
      piVar1 = (int *)(lVar12 + 0xc);
      iVar11 = *(int *)(lVar12 + 0xc);
      do {
        plVar17 = *(long **)(lVar12 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar13;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar8 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar17 == (long *)0x0) goto LAB_02ae4634;
          if (plVar17 == (long *)puVar8) break;
          plVar17 = (long *)*plVar17;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            if (*(long *)(lVar12 + 0x18) != 0) {
              plVar17 = (long *)(*(long *)(lVar12 + 0x18) + -0x50);
              goto LAB_02ae4c84;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
LAB_02ae4634:
    plVar17 = (long *)FUN_02ae5a94(*(undefined8 *)(lVar20 + 8),param_2,&local_70);
    if (plVar17 != (long *)0x0) {
      lVar12 = plVar17[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02ae53f4;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar13;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    (**(code **)(*plVar17 + 0x10))(&local_b8,plVar17);
    local_d0 = (long *)0x0;
    local_c8 = (long *)0x0;
    FUN_0093bcac(&local_d0,&local_b8);
    plVar19 = local_b8;
    if (local_b8 != (long *)0x0) {
      plVar3 = local_b8 + 1;
      do {
        iVar11 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_e0 = (long *)*plVar19;
        FUN_02a44274(lVar12 + 0xd8,&local_e0);
      }
    }
    FUN_0093b3f4(plVar18 + 9,&local_d0);
    plVar18 = local_d0;
    if (local_d0 == (long *)0x0) goto LAB_02ae4c84;
    plVar19 = local_d0 + 1;
    do {
      iVar11 = (int)*plVar19 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *(int *)plVar19 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 != 0) goto LAB_02ae4c84;
    local_d0[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar12 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar12;
    local_b8 = (long *)*plVar18;
    lVar12 = lVar12 + 0xd8;
    pplVar14 = &local_b8;
LAB_02ae4c80:
    FUN_02a44274(lVar12,pplVar14);
  }
  else {
    if (*param_2 == 0) {
      plVar17 = (long *)PTR_DAT_04379c88;
    }
    else {
      plVar17 = (long *)(*param_2 + 0x58);
    }
    if (uVar16 < 2) {
      do {
        plVar19 = (long *)PTR_DAT_04379c88;
        if (plVar18[2] != 0) {
          plVar19 = (long *)(plVar18[2] + 0x58);
        }
        if ((*plVar19 == *plVar17) && ((long *)plVar18[8] == local_70)) goto LAB_02ae4628;
        plVar18 = (long *)*plVar18;
      } while ((plVar18 != (long *)0x0) && ((plVar18[1] & uVar15 - 1) == uVar21));
    }
    else {
      do {
        plVar19 = (long *)PTR_DAT_04379c88;
        if (plVar18[2] != 0) {
          plVar19 = (long *)(plVar18[2] + 0x58);
        }
        if ((*plVar19 == *plVar17) && ((long *)plVar18[8] == local_70)) goto LAB_02ae4628;
        plVar18 = (long *)*plVar18;
        if (plVar18 == (long *)0x0) break;
        uVar16 = plVar18[1];
        if (uVar15 <= uVar16) {
          uVar6 = 0;
          if (uVar15 != 0) {
            uVar6 = uVar16 / uVar15;
          }
          uVar16 = uVar16 - uVar6 * uVar15;
        }
      } while (uVar16 == uVar21);
    }
LAB_02ae4774:
    plVar17 = (long *)FUN_02ae5a94(*(undefined8 *)(lVar20 + 8),param_2,&local_70);
    if (plVar17 != (long *)0x0) {
      lVar12 = plVar17[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02ae53f4;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar13;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar16 = *(ulong *)(lVar20 + 0x78);
    plVar19 = *(long **)(*(long *)(lVar20 + 0x70) + uVar21 * 8);
    plVar18 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      plVar18 = (long *)*plVar19;
    }
    if (plVar18 == (long *)0x0) {
LAB_02ae48c4:
      if (plVar18 == (long *)0x0) goto LAB_02ae4a40;
      (**(code **)(*plVar17 + 0x10))(&local_b8,plVar17);
      local_d0 = (long *)0x0;
      local_c8 = (long *)0x0;
      FUN_0093bcac(&local_d0,&local_b8);
      if (local_b8 != (long *)0x0) {
        plVar19 = local_b8 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *(int *)plVar19 = iVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 0) {
          local_b8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_e0 = (long *)*local_b8;
          FUN_02a44274(lVar12 + 0xd8,&local_e0);
        }
      }
      local_b8 = local_70;
      local_b0 = (long *)0x0;
      local_a8 = 0;
      FUN_0093b3f4(&local_b0,&local_d0);
      plVar18[8] = (long)local_b8;
      FUN_0093b3f4(plVar18 + 9,&local_b0);
      plVar18 = local_b0;
      if (local_b0 != (long *)0x0) {
        plVar19 = local_b0 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *(int *)plVar19 = iVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 0) {
          local_b0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_e0 = (long *)*plVar18;
          FUN_02a44274(lVar12 + 0xd8,&local_e0);
        }
      }
      plVar18 = local_d0;
      if (local_d0 != (long *)0x0) {
        plVar19 = local_d0 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *(int *)plVar19 = iVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 0) {
          local_d0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_e0 = (long *)*plVar18;
          lVar12 = lVar12 + 0xd8;
          goto LAB_02ae4c80;
        }
      }
    }
    else {
      if ((uVar16 & uVar16 - 1) == 0) {
        do {
          plVar19 = (long *)PTR_DAT_04379c88;
          if (plVar18[2] != 0) {
            plVar19 = (long *)(plVar18[2] + 0x58);
          }
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*param_2 != 0) {
            plVar3 = (long *)(*param_2 + 0x58);
          }
          if ((*plVar19 == *plVar3) && ((plVar18[9] == 0 || (*(int *)(plVar18[9] + 0xc) == 0))))
          goto LAB_02ae48c4;
          plVar18 = (long *)*plVar18;
        } while ((plVar18 != (long *)0x0) && ((plVar18[1] & uVar16 - 1) == uVar21));
      }
      else {
        do {
          plVar19 = (long *)PTR_DAT_04379c88;
          if (plVar18[2] != 0) {
            plVar19 = (long *)(plVar18[2] + 0x58);
          }
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*param_2 != 0) {
            plVar3 = (long *)(*param_2 + 0x58);
          }
          if ((*plVar19 == *plVar3) && ((plVar18[9] == 0 || (*(int *)(plVar18[9] + 0xc) == 0))))
          goto LAB_02ae48c4;
          plVar18 = (long *)*plVar18;
          if (plVar18 == (long *)0x0) break;
          uVar15 = plVar18[1];
          if (uVar16 <= uVar15) {
            uVar6 = 0;
            if (uVar16 != 0) {
              uVar6 = uVar15 / uVar16;
            }
            uVar15 = uVar15 - uVar6 * uVar16;
          }
        } while (uVar15 == uVar21);
      }
LAB_02ae4a40:
      (**(code **)(*plVar17 + 0x10))(&local_b8,plVar17);
      local_e0 = (long *)0x0;
      uStack_d8 = 0;
      FUN_0093bcac(&local_e0,&local_b8);
      if (local_b8 != (long *)0x0) {
        plVar18 = local_b8 + 1;
        do {
          iVar11 = (int)*plVar18 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *(int *)plVar18 = iVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 0) {
          local_b8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_d0 = (long *)*local_b8;
          FUN_02a44274(lVar12 + 0xd8,&local_d0);
        }
      }
      local_d0 = local_70;
      local_c8 = (long *)0x0;
      local_c0 = 0;
      FUN_0093b3f4(&local_c8,&local_e0);
      local_b8 = (long *)*param_2;
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x18))();
      }
      local_b0 = (long *)param_2[1];
      local_a8 = param_2[2];
      local_a0 = param_2[3];
      local_98 = (long *)param_2[4];
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x18))();
      }
      local_90 = (undefined4)param_2[5];
      local_88 = local_d0;
      local_80 = (long *)0x0;
      local_78 = 0;
      FUN_0093b3f4(&local_80,&local_c8);
      FUN_02ae5740((long *)(lVar20 + 0x70),&local_b8);
      plVar18 = local_80;
      if (local_80 != (long *)0x0) {
        plVar19 = local_80 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *(int *)plVar19 = iVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 0) {
          local_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_68 = (long *)*plVar18;
          FUN_02a44274(lVar12 + 0xd8,&local_68);
        }
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
      plVar18 = local_c8;
      if (local_c8 != (long *)0x0) {
        plVar19 = local_c8 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *(int *)plVar19 = iVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 0) {
          local_c8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_68 = (long *)*plVar18;
          FUN_02a44274(lVar12 + 0xd8,&local_68);
        }
      }
      plVar18 = local_e0;
      if (local_e0 != (long *)0x0) {
        plVar19 = local_e0 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *(int *)plVar19 = iVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 0) {
          local_e0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_68 = (long *)*plVar18;
          lVar12 = lVar12 + 0xd8;
          pplVar14 = &local_68;
          goto LAB_02ae4c80;
        }
      }
    }
  }
LAB_02ae4c84:
  FUN_02a763dc(plVar17,0);
  *(undefined8 *)(lVar20 + 0x150) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0x144));
  FUN_02a8f764(*(undefined8 *)(lVar20 + 0x158),plVar17,0);
  if (plVar17 != (long *)0x0) {
    lVar20 = plVar17[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) {
LAB_02ae53f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar20 = plVar17[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  plVar19 = (long *)(param_1 + 8);
  plVar18 = (long *)*plVar19;
  *plVar19 = 0;
  if (plVar18 != (long *)0x0) {
    lVar20 = plVar18[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))();
      *plVar19 = (long)plVar17;
      goto joined_r0x02ae4d38;
    }
  }
  *plVar19 = (long)plVar17;
joined_r0x02ae4d38:
  lVar20 = 0;
  if (plVar17 != (long *)0x0) {
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
    FUN_008802f0(&local_b8,plVar17 + 0xb);
    puVar7 = PTR_DAT_04379498;
    do {
      plVar18 = local_b0;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(&local_b0,0x10);
      if (bVar5) {
        local_b0 = (long *)0x0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    puVar9 = PTR_DAT_043794a8;
    puVar8 = PTR_DAT_043794a0;
    uVar13 = *(undefined8 *)PTR_DAT_043794a0;
    *(undefined8 *)PTR_DAT_043794a8 = uVar13;
    FUN_02a44e0c(&local_e0,uVar13,plVar18);
    plVar18 = local_b8;
    local_b8 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      plVar17 = plVar18 + 1;
      do {
        iVar11 = (int)*plVar17 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(int *)plVar17 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 == 0) {
        plVar18[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar20 = *(long *)puVar8;
        *(long *)puVar9 = lVar20;
        local_d0 = (long *)*plVar18;
        FUN_02a44274(lVar20 + 0xd8,&local_d0);
      }
    }
    plVar17 = local_b8;
    plVar18 = local_e0;
    if (local_e0 != (long *)0x0) {
      local_e0 = (long *)0x0;
    }
    if (local_b8 != (long *)0x0) {
      plVar3 = local_b8 + 1;
      do {
        iVar11 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 == 0) {
        local_b8[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar20 = *(long *)puVar8;
        *(long *)puVar9 = lVar20;
        local_d0 = (long *)*plVar17;
        FUN_02a44274(lVar20 + 0xd8,&local_d0);
      }
    }
    if (plVar18 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      plVar17 = plVar18 + 1;
      *(long *)(param_1 + 0x10) = *plVar18;
      do {
        iVar11 = (int)*plVar17 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(int *)plVar17 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 == 0) {
        plVar18[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar20 = *(long *)puVar8;
        *(long *)puVar9 = lVar20;
        local_b8 = (long *)*plVar18;
        FUN_02a44274(lVar20 + 0xd8,&local_b8);
      }
    }
    lVar20 = *plVar19;
  }
  if (lVar20 != 0) {
    FUN_02ae540c(&local_b8,plVar19);
    plVar18 = local_b8;
    if ((*(long *)(param_1 + 0x18) != 0) || (*(long *)(param_1 + 0x20) != 0)) {
      FUN_02a76df0(local_b8,param_1,1);
    }
    pMVar2 = (MutexType *)(plVar18 + 0x30);
    nn::os::LockMutex(pMVar2);
    if (*(char *)((long)plVar18 + 0x1e1) == '\0') {
      do {
        nn::os::WaitConditionVariable((ConditionVariableType *)(plVar18 + 0x34),pMVar2);
      } while (*(char *)((long)plVar18 + 0x1e1) == '\0');
      nn::os::UnlockMutex(pMVar2);
    }
    else {
      nn::os::UnlockMutex(pMVar2);
      if (plVar18 == (long *)0x0) {
        return;
      }
    }
    lVar20 = plVar18[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  return;
}


