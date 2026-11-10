/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b48878; name: FUN_02b48878
 */


undefined8 FUN_02b48878(long param_1,ulong param_2,long *param_3,long *param_4,undefined8 param_5)

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
  undefined *puVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  long **pplVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
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
  
  if (((*PTR_DAT_04379d30 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379d30);
  }
  puVar10 = PTR_DAT_04379d40;
  lVar21 = *(long *)PTR_DAT_04379d38;
  *(long *)PTR_DAT_04379d40 = lVar21;
  local_70 = param_4;
  if (param_4 == (long *)0x0) {
    local_70 = *(long **)(lVar21 + 8);
  }
  lVar13 = nn::os::GetCurrentThread();
  plVar19 = (long *)(lVar21 + 0x150);
  do {
    if (*plVar19 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x144));
        while (*plVar19 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *plVar19 = lVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02b4892c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar5) {
      *plVar19 = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02b4892c:
  uVar16 = *(ulong *)(lVar21 + 0x78);
  uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
  uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
  uVar22 = param_3[1];
  uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar17 < 2) {
    uVar22 = uVar16 - 1 & uVar22;
  }
  else if (uVar16 <= uVar22) {
    uVar6 = 0;
    if (uVar16 != 0) {
      uVar6 = uVar22 / uVar16;
    }
    uVar22 = uVar22 - uVar6 * uVar16;
  }
  plVar18 = *(long **)(*(long *)(lVar21 + 0x70) + uVar22 * 8);
  plVar19 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    plVar19 = (long *)*plVar18;
  }
  if (plVar19 == (long *)0x0) {
LAB_02b48a68:
    if (plVar19 == (long *)0x0) goto LAB_02b48bb4;
    lVar13 = plVar19[9];
    if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
      piVar1 = (int *)(lVar13 + 0xc);
      iVar12 = *(int *)(lVar13 + 0xc);
      do {
        plVar18 = *(long **)(lVar13 + 0x10);
        if (((*PTR_DAT_04379d20 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar11 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar14;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_04379d20);
        }
        while( true ) {
          if (plVar18 == (long *)0x0) goto LAB_02b48a74;
          if (plVar18 == (long *)PTR_DAT_04379d28) break;
          plVar18 = (long *)*plVar18;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar12) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            if (*(long *)(lVar13 + 0x18) != 0) {
              plVar18 = (long *)(*(long *)(lVar13 + 0x18) + -0x50);
              goto LAB_02b490c4;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar11;
      } while (iVar11 != 0);
    }
LAB_02b48a74:
    plVar18 = (long *)FUN_02b49c78(*(undefined8 *)(lVar21 + 8),param_3,&local_70);
    if (plVar18 != (long *)0x0) {
      lVar13 = plVar18[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02b4990c;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    (**(code **)(*plVar18 + 0x10))(&local_b8,plVar18);
    local_d0 = (long *)0x0;
    local_c8 = (long *)0x0;
    FUN_0093bcac(&local_d0,&local_b8);
    plVar20 = local_b8;
    if (local_b8 != (long *)0x0) {
      plVar3 = local_b8 + 1;
      do {
        iVar12 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_e0 = (long *)*plVar20;
        FUN_02a44274(lVar13 + 0xd8,&local_e0);
      }
    }
    FUN_0093b3f4(plVar19 + 9,&local_d0);
    plVar19 = local_d0;
    if (local_d0 == (long *)0x0) goto LAB_02b490c4;
    plVar20 = local_d0 + 1;
    do {
      iVar12 = (int)*plVar20 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *(int *)plVar20 = iVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 != 0) goto LAB_02b490c4;
    local_d0[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar13 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar13;
    local_b8 = (long *)*plVar19;
    lVar13 = lVar13 + 0xd8;
    pplVar15 = &local_b8;
LAB_02b490c0:
    FUN_02a44274(lVar13,pplVar15);
  }
  else {
    if (*param_3 == 0) {
      plVar18 = (long *)PTR_DAT_04379c88;
    }
    else {
      plVar18 = (long *)(*param_3 + 0x58);
    }
    if (uVar17 < 2) {
      do {
        plVar20 = (long *)PTR_DAT_04379c88;
        if (plVar19[2] != 0) {
          plVar20 = (long *)(plVar19[2] + 0x58);
        }
        if ((*plVar20 == *plVar18) && ((long *)plVar19[8] == local_70)) goto LAB_02b48a68;
        plVar19 = (long *)*plVar19;
      } while ((plVar19 != (long *)0x0) && ((plVar19[1] & uVar16 - 1) == uVar22));
    }
    else {
      do {
        plVar20 = (long *)PTR_DAT_04379c88;
        if (plVar19[2] != 0) {
          plVar20 = (long *)(plVar19[2] + 0x58);
        }
        if ((*plVar20 == *plVar18) && ((long *)plVar19[8] == local_70)) goto LAB_02b48a68;
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) break;
        uVar17 = plVar19[1];
        if (uVar16 <= uVar17) {
          uVar6 = 0;
          if (uVar16 != 0) {
            uVar6 = uVar17 / uVar16;
          }
          uVar17 = uVar17 - uVar6 * uVar16;
        }
      } while (uVar17 == uVar22);
    }
LAB_02b48bb4:
    plVar18 = (long *)FUN_02b49c78(*(undefined8 *)(lVar21 + 8),param_3,&local_70);
    if (plVar18 != (long *)0x0) {
      lVar13 = plVar18[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02b4990c;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar17 = *(ulong *)(lVar21 + 0x78);
    plVar20 = *(long **)(*(long *)(lVar21 + 0x70) + uVar22 * 8);
    plVar19 = (long *)0x0;
    if (plVar20 != (long *)0x0) {
      plVar19 = (long *)*plVar20;
    }
    if (plVar19 == (long *)0x0) {
LAB_02b48d04:
      if (plVar19 == (long *)0x0) goto LAB_02b48e80;
      (**(code **)(*plVar18 + 0x10))(&local_b8,plVar18);
      local_d0 = (long *)0x0;
      local_c8 = (long *)0x0;
      FUN_0093bcac(&local_d0,&local_b8);
      if (local_b8 != (long *)0x0) {
        plVar20 = local_b8 + 1;
        do {
          iVar12 = (int)*plVar20 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *(int *)plVar20 = iVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 == 0) {
          local_b8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_e0 = (long *)*local_b8;
          FUN_02a44274(lVar13 + 0xd8,&local_e0);
        }
      }
      local_b8 = local_70;
      local_b0 = (long *)0x0;
      local_a8 = 0;
      FUN_0093b3f4(&local_b0,&local_d0);
      plVar19[8] = (long)local_b8;
      FUN_0093b3f4(plVar19 + 9,&local_b0);
      plVar19 = local_b0;
      if (local_b0 != (long *)0x0) {
        plVar20 = local_b0 + 1;
        do {
          iVar12 = (int)*plVar20 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *(int *)plVar20 = iVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 == 0) {
          local_b0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_e0 = (long *)*plVar19;
          FUN_02a44274(lVar13 + 0xd8,&local_e0);
        }
      }
      plVar19 = local_d0;
      if (local_d0 != (long *)0x0) {
        plVar20 = local_d0 + 1;
        do {
          iVar12 = (int)*plVar20 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *(int *)plVar20 = iVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 == 0) {
          local_d0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_e0 = (long *)*plVar19;
          lVar13 = lVar13 + 0xd8;
          pplVar15 = &local_e0;
          goto LAB_02b490c0;
        }
      }
    }
    else {
      if ((uVar17 & uVar17 - 1) == 0) {
        do {
          plVar20 = (long *)PTR_DAT_04379c88;
          if (plVar19[2] != 0) {
            plVar20 = (long *)(plVar19[2] + 0x58);
          }
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*param_3 != 0) {
            plVar3 = (long *)(*param_3 + 0x58);
          }
          if ((*plVar20 == *plVar3) && ((plVar19[9] == 0 || (*(int *)(plVar19[9] + 0xc) == 0))))
          goto LAB_02b48d04;
          plVar19 = (long *)*plVar19;
        } while ((plVar19 != (long *)0x0) && ((plVar19[1] & uVar17 - 1) == uVar22));
      }
      else {
        do {
          plVar20 = (long *)PTR_DAT_04379c88;
          if (plVar19[2] != 0) {
            plVar20 = (long *)(plVar19[2] + 0x58);
          }
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*param_3 != 0) {
            plVar3 = (long *)(*param_3 + 0x58);
          }
          if ((*plVar20 == *plVar3) && ((plVar19[9] == 0 || (*(int *)(plVar19[9] + 0xc) == 0))))
          goto LAB_02b48d04;
          plVar19 = (long *)*plVar19;
          if (plVar19 == (long *)0x0) break;
          uVar16 = plVar19[1];
          if (uVar17 <= uVar16) {
            uVar6 = 0;
            if (uVar17 != 0) {
              uVar6 = uVar16 / uVar17;
            }
            uVar16 = uVar16 - uVar6 * uVar17;
          }
        } while (uVar16 == uVar22);
      }
LAB_02b48e80:
      (**(code **)(*plVar18 + 0x10))(&local_b8,plVar18);
      local_e0 = (long *)0x0;
      uStack_d8 = 0;
      FUN_0093bcac(&local_e0,&local_b8);
      if (local_b8 != (long *)0x0) {
        plVar19 = local_b8 + 1;
        do {
          iVar12 = (int)*plVar19 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *(int *)plVar19 = iVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 == 0) {
          local_b8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_d0 = (long *)*local_b8;
          FUN_02a44274(lVar13 + 0xd8,&local_d0);
        }
      }
      local_d0 = local_70;
      local_c8 = (long *)0x0;
      local_c0 = 0;
      FUN_0093b3f4(&local_c8,&local_e0);
      local_b8 = (long *)*param_3;
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x18))();
      }
      local_b0 = (long *)param_3[1];
      local_a8 = param_3[2];
      local_a0 = param_3[3];
      local_98 = (long *)param_3[4];
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x18))();
      }
      local_90 = (undefined4)param_3[5];
      local_88 = local_d0;
      local_80 = (long *)0x0;
      local_78 = 0;
      FUN_0093b3f4(&local_80,&local_c8);
      FUN_02b49924((long *)(lVar21 + 0x70),&local_b8);
      plVar19 = local_80;
      if (local_80 != (long *)0x0) {
        plVar20 = local_80 + 1;
        do {
          iVar12 = (int)*plVar20 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *(int *)plVar20 = iVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 == 0) {
          local_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_68 = (long *)*plVar19;
          FUN_02a44274(lVar13 + 0xd8,&local_68);
        }
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
      plVar19 = local_c8;
      if (local_c8 != (long *)0x0) {
        plVar20 = local_c8 + 1;
        do {
          iVar12 = (int)*plVar20 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *(int *)plVar20 = iVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 == 0) {
          local_c8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_68 = (long *)*plVar19;
          FUN_02a44274(lVar13 + 0xd8,&local_68);
        }
      }
      plVar19 = local_e0;
      if (local_e0 != (long *)0x0) {
        plVar20 = local_e0 + 1;
        do {
          iVar12 = (int)*plVar20 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *(int *)plVar20 = iVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 == 0) {
          local_e0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_68 = (long *)*plVar19;
          lVar13 = lVar13 + 0xd8;
          pplVar15 = &local_68;
          goto LAB_02b490c0;
        }
      }
    }
  }
LAB_02b490c4:
  if (*(char *)(lVar21 + 0x16b) != '\0') {
    param_5 = 0;
  }
  FUN_02a763dc(plVar18,param_5);
  *(undefined8 *)(lVar21 + 0x150) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0x144));
  FUN_02a8f764(*(undefined8 *)(lVar21 + 0x158),plVar18,0);
  if (plVar18 != (long *)0x0) {
    lVar21 = plVar18[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
LAB_02b4990c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar21 = plVar18[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  plVar20 = (long *)(param_1 + 8);
  plVar19 = (long *)*plVar20;
  *plVar20 = 0;
  if (plVar19 != (long *)0x0) {
    lVar21 = plVar19[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))();
      *plVar20 = (long)plVar18;
      goto joined_r0x02b49180;
    }
  }
  *plVar20 = (long)plVar18;
joined_r0x02b49180:
  lVar21 = 0;
  if (plVar18 != (long *)0x0) {
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
    FUN_008802f0(&local_b8,plVar18 + 0xb);
    puVar7 = PTR_DAT_04379498;
    do {
      plVar19 = local_b0;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(&local_b0,0x10);
      if (bVar5) {
        local_b0 = (long *)0x0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    puVar9 = PTR_DAT_043794a8;
    puVar8 = PTR_DAT_043794a0;
    uVar14 = *(undefined8 *)PTR_DAT_043794a0;
    *(undefined8 *)PTR_DAT_043794a8 = uVar14;
    FUN_02a44e0c(&local_e0,uVar14,plVar19);
    plVar19 = local_b8;
    local_b8 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      plVar18 = plVar19 + 1;
      do {
        iVar12 = (int)*plVar18 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        plVar19[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar21 = *(long *)puVar8;
        *(long *)puVar9 = lVar21;
        local_d0 = (long *)*plVar19;
        FUN_02a44274(lVar21 + 0xd8,&local_d0);
      }
    }
    plVar18 = local_b8;
    plVar19 = local_e0;
    if (local_e0 != (long *)0x0) {
      local_e0 = (long *)0x0;
    }
    if (local_b8 != (long *)0x0) {
      plVar3 = local_b8 + 1;
      do {
        iVar12 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        local_b8[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar21 = *(long *)puVar8;
        *(long *)puVar9 = lVar21;
        local_d0 = (long *)*plVar18;
        FUN_02a44274(lVar21 + 0xd8,&local_d0);
      }
    }
    if (plVar19 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      plVar18 = plVar19 + 1;
      *(long *)(param_1 + 0x10) = *plVar19;
      do {
        iVar12 = (int)*plVar18 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        plVar19[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar21 = *(long *)puVar8;
        *(long *)puVar9 = lVar21;
        local_b8 = (long *)*plVar19;
        FUN_02a44274(lVar21 + 0xd8,&local_b8);
      }
    }
    lVar21 = *plVar20;
  }
  if (lVar21 == 0) {
    uVar14 = 0;
  }
  else {
    FUN_02b47c74(&local_b8,plVar20);
    if ((*(long *)(param_1 + 0x18) != 0) || (*(long *)(param_1 + 0x20) != 0)) {
      FUN_02a76df0(local_b8,param_1,1);
    }
    plVar19 = local_b8;
    if ((param_2 & 1) == 0) {
      pMVar2 = (MutexType *)(local_b8 + 0x30);
      nn::os::LockMutex(pMVar2);
      if (*(char *)((long)plVar19 + 0x1e1) == '\0') {
        do {
          nn::os::WaitConditionVariable((ConditionVariableType *)(plVar19 + 0x34),pMVar2);
        } while (*(char *)((long)plVar19 + 0x1e1) == '\0');
      }
      nn::os::UnlockMutex(pMVar2);
    }
    else {
      if (((*PTR_DAT_04379d30 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379d30);
      }
      uVar14 = *(undefined8 *)PTR_DAT_04379d38;
      *(undefined8 *)puVar10 = uVar14;
      FUN_00939b4c(&local_d0,uVar14,*(undefined8 *)(param_1 + 8));
      plVar19 = *(long **)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      if (plVar19 != (long *)0x0) {
        lVar21 = plVar19[0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*plVar19 + 0x20))();
        }
      }
      *(long **)(param_1 + 0x28) = local_d0;
      plVar19 = local_b8;
    }
    if (plVar19 != (long *)0x0) {
      lVar21 = plVar19[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
    }
    uVar14 = 1;
  }
  return uVar14;
}


