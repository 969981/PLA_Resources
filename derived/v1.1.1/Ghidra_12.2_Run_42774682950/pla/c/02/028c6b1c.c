/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c6b1c; name: FUN_028c6b1c
 */


void FUN_028c6b1c(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 undefined4 param_5,long *param_6,undefined8 param_7)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long **pplVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
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
  
  pplVar10 = &local_e0;
  local_70 = param_6;
  if (param_6 == (long *)0x0) {
    local_70 = *(long **)(param_2 + 8);
  }
  lVar8 = nn::os::GetCurrentThread();
  plVar14 = (long *)(param_2 + 0x150);
  do {
    if (*plVar14 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x144));
        while (*plVar14 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_028c6ba8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar4) {
      *plVar14 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_028c6ba8:
  uVar11 = *(ulong *)(param_2 + 0x78);
  uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar16 = param_4[1];
  uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar12 < 2) {
    uVar16 = uVar11 - 1 & uVar16;
  }
  else if (uVar11 <= uVar16) {
    uVar5 = 0;
    if (uVar11 != 0) {
      uVar5 = uVar16 / uVar11;
    }
    uVar16 = uVar16 - uVar5 * uVar11;
  }
  plVar13 = *(long **)(*(long *)(param_2 + 0x70) + uVar16 * 8);
  plVar14 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar14 = (long *)*plVar13;
  }
  if (plVar14 == (long *)0x0) {
LAB_028c6ce4:
    if (plVar14 == (long *)0x0) goto LAB_028c6e34;
    lVar8 = plVar14[9];
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
      piVar1 = (int *)(lVar8 + 0xc);
      iVar7 = *(int *)(lVar8 + 0xc);
      do {
        plVar13 = *(long **)(lVar8 + 0x10);
        if (((*PTR_DAT_04379d20 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar6 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
            uVar9 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar9;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_04379d20);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_028c6cf0;
          if (plVar13 == (long *)PTR_DAT_04379d28) break;
          plVar13 = (long *)*plVar13;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            if (*(long *)(lVar8 + 0x18) != 0) {
              plVar13 = (long *)(*(long *)(lVar8 + 0x18) + -0x50);
              goto LAB_028c7348;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar6;
      } while (iVar6 != 0);
    }
LAB_028c6cf0:
    plVar13 = (long *)FUN_028c7ac4(&local_b8,*(undefined8 *)(param_2 + 8),param_4,&local_70);
    if (plVar13 != (long *)0x0) {
      lVar8 = plVar13[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_028c774c;
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    (**(code **)(*plVar13 + 0x10))(&local_b8,plVar13);
    local_d0 = (long *)0x0;
    local_c8 = (long *)0x0;
    FUN_0093bcac(&local_d0,&local_b8);
    plVar15 = local_b8;
    if (local_b8 != (long *)0x0) {
      plVar2 = local_b8 + 1;
      do {
        iVar7 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_e0 = (long *)*plVar15;
        FUN_02a44274(lVar8 + 0xd8,&local_e0);
      }
    }
    FUN_0093b3f4(plVar14 + 9,&local_d0);
    plVar14 = local_d0;
    if (local_d0 == (long *)0x0) goto LAB_028c7348;
    plVar15 = local_d0 + 1;
    do {
      iVar7 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 != 0) goto LAB_028c7348;
    local_d0[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar8 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar8;
    local_b8 = (long *)*plVar14;
    lVar8 = lVar8 + 0xd8;
    pplVar10 = &local_b8;
LAB_028c7344:
    FUN_02a44274(lVar8,pplVar10);
  }
  else {
    if (*param_4 == 0) {
      plVar13 = (long *)PTR_DAT_04379c88;
    }
    else {
      plVar13 = (long *)(*param_4 + 0x58);
    }
    if (uVar12 < 2) {
      do {
        plVar15 = (long *)PTR_DAT_04379c88;
        if (plVar14[2] != 0) {
          plVar15 = (long *)(plVar14[2] + 0x58);
        }
        if ((*plVar15 == *plVar13) && ((long *)plVar14[8] == local_70)) goto LAB_028c6ce4;
        plVar14 = (long *)*plVar14;
      } while ((plVar14 != (long *)0x0) && ((plVar14[1] & uVar11 - 1) == uVar16));
    }
    else {
      do {
        plVar15 = (long *)PTR_DAT_04379c88;
        if (plVar14[2] != 0) {
          plVar15 = (long *)(plVar14[2] + 0x58);
        }
        if ((*plVar15 == *plVar13) && ((long *)plVar14[8] == local_70)) goto LAB_028c6ce4;
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) break;
        uVar12 = plVar14[1];
        if (uVar11 <= uVar12) {
          uVar5 = 0;
          if (uVar11 != 0) {
            uVar5 = uVar12 / uVar11;
          }
          uVar12 = uVar12 - uVar5 * uVar11;
        }
      } while (uVar12 == uVar16);
    }
LAB_028c6e34:
    plVar13 = (long *)FUN_028c7ac4(&local_b8,*(undefined8 *)(param_2 + 8),param_4,&local_70);
    if (plVar13 != (long *)0x0) {
      lVar8 = plVar13[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_028c774c;
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar12 = *(ulong *)(param_2 + 0x78);
    plVar15 = *(long **)(*(long *)(param_2 + 0x70) + uVar16 * 8);
    plVar14 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      plVar14 = (long *)*plVar15;
    }
    if (plVar14 == (long *)0x0) {
LAB_028c6f88:
      if (plVar14 == (long *)0x0) goto LAB_028c7104;
      (**(code **)(*plVar13 + 0x10))(&local_b8,plVar13);
      local_d0 = (long *)0x0;
      local_c8 = (long *)0x0;
      FUN_0093bcac(&local_d0,&local_b8);
      if (local_b8 != (long *)0x0) {
        plVar15 = local_b8 + 1;
        do {
          iVar7 = (int)*plVar15 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          local_b8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_e0 = (long *)*local_b8;
          FUN_02a44274(lVar8 + 0xd8,&local_e0);
        }
      }
      local_b8 = local_70;
      local_b0 = (long *)0x0;
      local_a8 = 0;
      FUN_0093b3f4(&local_b0,&local_d0);
      plVar14[8] = (long)local_b8;
      FUN_0093b3f4(plVar14 + 9,&local_b0);
      plVar14 = local_b0;
      if (local_b0 != (long *)0x0) {
        plVar15 = local_b0 + 1;
        do {
          iVar7 = (int)*plVar15 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          local_b0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_e0 = (long *)*plVar14;
          FUN_02a44274(lVar8 + 0xd8,&local_e0);
        }
      }
      plVar14 = local_d0;
      if (local_d0 != (long *)0x0) {
        plVar15 = local_d0 + 1;
        do {
          iVar7 = (int)*plVar15 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          local_d0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_e0 = (long *)*plVar14;
          lVar8 = lVar8 + 0xd8;
          goto LAB_028c7344;
        }
      }
    }
    else {
      if ((uVar12 & uVar12 - 1) == 0) {
        do {
          plVar15 = (long *)PTR_DAT_04379c88;
          if (plVar14[2] != 0) {
            plVar15 = (long *)(plVar14[2] + 0x58);
          }
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*param_4 != 0) {
            plVar2 = (long *)(*param_4 + 0x58);
          }
          if ((*plVar15 == *plVar2) && ((plVar14[9] == 0 || (*(int *)(plVar14[9] + 0xc) == 0))))
          goto LAB_028c6f88;
          plVar14 = (long *)*plVar14;
        } while ((plVar14 != (long *)0x0) && ((plVar14[1] & uVar12 - 1) == uVar16));
      }
      else {
        do {
          plVar15 = (long *)PTR_DAT_04379c88;
          if (plVar14[2] != 0) {
            plVar15 = (long *)(plVar14[2] + 0x58);
          }
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*param_4 != 0) {
            plVar2 = (long *)(*param_4 + 0x58);
          }
          if ((*plVar15 == *plVar2) && ((plVar14[9] == 0 || (*(int *)(plVar14[9] + 0xc) == 0))))
          goto LAB_028c6f88;
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) break;
          uVar11 = plVar14[1];
          if (uVar12 <= uVar11) {
            uVar5 = 0;
            if (uVar12 != 0) {
              uVar5 = uVar11 / uVar12;
            }
            uVar11 = uVar11 - uVar5 * uVar12;
          }
        } while (uVar11 == uVar16);
      }
LAB_028c7104:
      (**(code **)(*plVar13 + 0x10))(&local_b8,plVar13);
      local_e0 = (long *)0x0;
      uStack_d8 = 0;
      FUN_0093bcac(&local_e0,&local_b8);
      if (local_b8 != (long *)0x0) {
        plVar14 = local_b8 + 1;
        do {
          iVar7 = (int)*plVar14 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *(int *)plVar14 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          local_b8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_d0 = (long *)*local_b8;
          FUN_02a44274(lVar8 + 0xd8,&local_d0);
        }
      }
      local_d0 = local_70;
      local_c8 = (long *)0x0;
      local_c0 = 0;
      FUN_0093b3f4(&local_c8,&local_e0);
      local_b8 = (long *)*param_4;
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x18))();
      }
      local_b0 = (long *)param_4[1];
      local_a8 = param_4[2];
      local_a0 = param_4[3];
      local_98 = (long *)param_4[4];
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x18))();
      }
      local_90 = (undefined4)param_4[5];
      local_88 = local_d0;
      local_80 = (long *)0x0;
      local_78 = 0;
      FUN_0093b3f4(&local_80,&local_c8);
      FUN_028c654c((long *)(param_2 + 0x70),&local_b8);
      plVar14 = local_80;
      if (local_80 != (long *)0x0) {
        plVar15 = local_80 + 1;
        do {
          iVar7 = (int)*plVar15 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          local_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_68 = (long *)*plVar14;
          FUN_02a44274(lVar8 + 0xd8,&local_68);
        }
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
      plVar14 = local_c8;
      if (local_c8 != (long *)0x0) {
        plVar15 = local_c8 + 1;
        do {
          iVar7 = (int)*plVar15 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          local_c8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_68 = (long *)*plVar14;
          FUN_02a44274(lVar8 + 0xd8,&local_68);
        }
      }
      plVar14 = local_e0;
      if (local_e0 != (long *)0x0) {
        plVar15 = local_e0 + 1;
        do {
          iVar7 = (int)*plVar15 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          local_e0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_68 = (long *)*plVar14;
          lVar8 = lVar8 + 0xd8;
          pplVar10 = &local_68;
          goto LAB_028c7344;
        }
      }
    }
  }
LAB_028c7348:
  if (*(char *)(param_2 + 0x16b) != '\0') {
    param_7 = 0;
  }
  FUN_02a763dc(plVar13,param_7);
  *(undefined8 *)(param_2 + 0x150) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x144));
  FUN_02a8f764(*(undefined8 *)(param_2 + 0x158),plVar13,param_5);
  *param_1 = plVar13;
  if (plVar13 != (long *)0x0) {
    lVar8 = plVar13[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_028c774c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar8 = plVar13[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  return;
}


