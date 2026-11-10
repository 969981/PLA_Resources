/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d325f8; name: FUN_00d325f8
 */


undefined8 FUN_00d325f8(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long **pplVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  ulong uVar19;
  byte *pbVar20;
  long lVar21;
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
  
  if (((*PTR_DAT_04379d30 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379d30);
  }
  lVar21 = *(long *)PTR_DAT_04379d38;
  *(long *)PTR_DAT_04379d40 = lVar21;
  local_70 = param_3;
  if (param_3 == (long *)0x0) {
    local_70 = *(long **)(lVar21 + 8);
  }
  lVar10 = nn::os::GetCurrentThread();
  plVar17 = (long *)(lVar21 + 0x150);
  do {
    if (*plVar17 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x144));
        while (*plVar17 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar4) {
            *plVar17 = lVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00d326a0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar4) {
      *plVar17 = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00d326a0:
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  uVar13 = *(ulong *)(lVar21 + 0x78);
  uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar19 = param_2[1];
  uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar14 < 2) {
    uVar19 = uVar13 - 1 & uVar19;
  }
  else if (uVar13 <= uVar19) {
    uVar5 = 0;
    if (uVar13 != 0) {
      uVar5 = uVar19 / uVar13;
    }
    uVar19 = uVar19 - uVar5 * uVar13;
  }
  plVar16 = *(long **)(*(long *)(lVar21 + 0x70) + uVar19 * 8);
  plVar17 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    plVar17 = (long *)*plVar16;
  }
  if (plVar17 == (long *)0x0) {
LAB_00d32fe4:
    if (plVar17 == (long *)0x0) goto LAB_00d32774;
    lVar10 = plVar17[9];
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
      piVar1 = (int *)(lVar10 + 0xc);
      iVar8 = *(int *)(lVar10 + 0xc);
      do {
        plVar16 = *(long **)(lVar10 + 0x10);
        if (((*PTR_DAT_04379d20 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar9 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar11;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_04379d20);
        }
        while( true ) {
          if (plVar16 == (long *)0x0) goto LAB_00d32ff0;
          if (plVar16 == (long *)PTR_DAT_04379d28) break;
          plVar16 = (long *)*plVar16;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            if (*(long *)(lVar10 + 0x18) != 0) {
              plVar16 = (long *)(*(long *)(lVar10 + 0x18) + -0x50);
              pbVar20 = PTR_DAT_04379498;
              goto LAB_00d32a54;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar9;
      } while (iVar9 != 0);
    }
LAB_00d32ff0:
    plVar16 = (long *)FUN_00d33748(*(undefined8 *)(lVar21 + 8),param_2,&local_70);
    pbVar20 = PTR_DAT_04379498;
    if (plVar16 != (long *)0x0) {
      lVar10 = plVar16[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00d33440;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    (**(code **)(*plVar16 + 0x10))(&local_b8,plVar16);
    local_d0 = (long *)0x0;
    local_c8 = (long *)0x0;
    FUN_0093bcac(&local_d0,&local_b8);
    plVar15 = local_b8;
    if (local_b8 != (long *)0x0) {
      plVar2 = local_b8 + 1;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        local_b8[2] = 0;
        if (((*pbVar20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)puVar6;
        *(long *)puVar7 = lVar10;
        local_e0 = (long *)*plVar15;
        FUN_02a44274(lVar10 + 0xd8,&local_e0);
      }
    }
    FUN_0093b3f4(plVar17 + 9,&local_d0);
    plVar17 = local_d0;
    if (local_d0 == (long *)0x0) goto LAB_00d32a54;
    plVar15 = local_d0 + 1;
    do {
      iVar8 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 != 0) goto LAB_00d32a54;
    local_d0[2] = 0;
    if (((*pbVar20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar10 = *(long *)puVar6;
    *(long *)puVar7 = lVar10;
    local_b8 = (long *)*plVar17;
    lVar10 = lVar10 + 0xd8;
    pplVar12 = &local_b8;
LAB_00d32a50:
    FUN_02a44274(lVar10,pplVar12);
  }
  else {
    if (*param_2 == 0) {
      plVar16 = (long *)PTR_DAT_04379c88;
    }
    else {
      plVar16 = (long *)(*param_2 + 0x58);
    }
    if (uVar14 < 2) {
      do {
        plVar15 = (long *)PTR_DAT_04379c88;
        if (plVar17[2] != 0) {
          plVar15 = (long *)(plVar17[2] + 0x58);
        }
        if ((*plVar15 == *plVar16) && ((long *)plVar17[8] == local_70)) goto LAB_00d32fe4;
        plVar17 = (long *)*plVar17;
      } while ((plVar17 != (long *)0x0) && ((plVar17[1] & uVar13 - 1) == uVar19));
    }
    else {
      do {
        plVar15 = (long *)PTR_DAT_04379c88;
        if (plVar17[2] != 0) {
          plVar15 = (long *)(plVar17[2] + 0x58);
        }
        if ((*plVar15 == *plVar16) && ((long *)plVar17[8] == local_70)) goto LAB_00d32fe4;
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) break;
        uVar14 = plVar17[1];
        if (uVar13 <= uVar14) {
          uVar5 = 0;
          if (uVar13 != 0) {
            uVar5 = uVar14 / uVar13;
          }
          uVar14 = uVar14 - uVar5 * uVar13;
        }
      } while (uVar14 == uVar19);
    }
LAB_00d32774:
    plVar16 = (long *)FUN_00d33748(*(undefined8 *)(lVar21 + 8),param_2,&local_70);
    if (plVar16 != (long *)0x0) {
      lVar10 = plVar16[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00d33440;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar14 = *(ulong *)(lVar21 + 0x78);
    puVar18 = *(undefined8 **)(*(long *)(lVar21 + 0x70) + uVar19 * 8);
    if (puVar18 == (undefined8 *)0x0) {
      plVar17 = (long *)0x0;
LAB_00d3285c:
      if (plVar17 == (long *)0x0) goto LAB_00d32860;
      (**(code **)(*plVar16 + 0x10))(&local_b8,plVar16);
      local_d0 = (long *)0x0;
      local_c8 = (long *)0x0;
      FUN_0093bcac(&local_d0,&local_b8);
      pbVar20 = PTR_DAT_04379498;
      if (local_b8 != (long *)0x0) {
        plVar15 = local_b8 + 1;
        do {
          iVar8 = (int)*plVar15 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_b8[2] = 0;
          if (((*pbVar20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)puVar6;
          *(long *)puVar7 = lVar10;
          local_e0 = (long *)*local_b8;
          FUN_02a44274(lVar10 + 0xd8,&local_e0);
        }
      }
      local_b8 = local_70;
      local_b0 = (long *)0x0;
      local_a8 = 0;
      FUN_0093b3f4(&local_b0,&local_d0);
      plVar17[8] = (long)local_b8;
      FUN_0093b3f4(plVar17 + 9,&local_b0);
      plVar17 = local_b0;
      if (local_b0 != (long *)0x0) {
        plVar15 = local_b0 + 1;
        do {
          iVar8 = (int)*plVar15 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_b0[2] = 0;
          if (((*pbVar20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)puVar6;
          *(long *)puVar7 = lVar10;
          local_e0 = (long *)*plVar17;
          FUN_02a44274(lVar10 + 0xd8,&local_e0);
        }
      }
      plVar17 = local_d0;
      if (local_d0 != (long *)0x0) {
        plVar15 = local_d0 + 1;
        do {
          iVar8 = (int)*plVar15 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_d0[2] = 0;
          if (((*pbVar20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)puVar6;
          *(long *)puVar7 = lVar10;
          local_e0 = (long *)*plVar17;
          lVar10 = lVar10 + 0xd8;
          pplVar12 = &local_e0;
          goto LAB_00d32a50;
        }
      }
    }
    else {
      plVar17 = (long *)*puVar18;
      if (plVar17 == (long *)0x0) goto LAB_00d3285c;
      if ((uVar14 & uVar14 - 1) == 0) {
        do {
          plVar15 = (long *)PTR_DAT_04379c88;
          if (plVar17[2] != 0) {
            plVar15 = (long *)(plVar17[2] + 0x58);
          }
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*param_2 != 0) {
            plVar2 = (long *)(*param_2 + 0x58);
          }
          if ((*plVar15 == *plVar2) && ((plVar17[9] == 0 || (*(int *)(plVar17[9] + 0xc) == 0))))
          goto LAB_00d3285c;
          plVar17 = (long *)*plVar17;
        } while ((plVar17 != (long *)0x0) && ((plVar17[1] & uVar14 - 1) == uVar19));
      }
      else {
        do {
          plVar15 = (long *)PTR_DAT_04379c88;
          if (plVar17[2] != 0) {
            plVar15 = (long *)(plVar17[2] + 0x58);
          }
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*param_2 != 0) {
            plVar2 = (long *)(*param_2 + 0x58);
          }
          if ((*plVar15 == *plVar2) && ((plVar17[9] == 0 || (*(int *)(plVar17[9] + 0xc) == 0))))
          goto LAB_00d3285c;
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) break;
          uVar13 = plVar17[1];
          if (uVar14 <= uVar13) {
            uVar5 = 0;
            if (uVar14 != 0) {
              uVar5 = uVar13 / uVar14;
            }
            uVar13 = uVar13 - uVar5 * uVar14;
          }
        } while (uVar13 == uVar19);
      }
LAB_00d32860:
      (**(code **)(*plVar16 + 0x10))(&local_b8,plVar16);
      local_e0 = (long *)0x0;
      uStack_d8 = 0;
      FUN_0093bcac(&local_e0,&local_b8);
      pbVar20 = PTR_DAT_04379498;
      if (local_b8 != (long *)0x0) {
        plVar17 = local_b8 + 1;
        do {
          iVar8 = (int)*plVar17 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar4) {
            *(int *)plVar17 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_b8[2] = 0;
          if (((*pbVar20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)puVar6;
          *(long *)puVar7 = lVar10;
          local_d0 = (long *)*local_b8;
          FUN_02a44274(lVar10 + 0xd8,&local_d0);
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
      FUN_00d318d8((long *)(lVar21 + 0x70),&local_b8);
      plVar17 = local_80;
      if (local_80 != (long *)0x0) {
        plVar15 = local_80 + 1;
        do {
          iVar8 = (int)*plVar15 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_80[2] = 0;
          if (((*pbVar20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)puVar6;
          *(long *)puVar7 = lVar10;
          local_68 = (long *)*plVar17;
          FUN_02a44274(lVar10 + 0xd8,&local_68);
        }
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
      plVar17 = local_c8;
      if (local_c8 != (long *)0x0) {
        plVar15 = local_c8 + 1;
        do {
          iVar8 = (int)*plVar15 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_c8[2] = 0;
          if (((*pbVar20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)puVar6;
          *(long *)puVar7 = lVar10;
          local_68 = (long *)*plVar17;
          FUN_02a44274(lVar10 + 0xd8,&local_68);
        }
      }
      plVar17 = local_e0;
      if (local_e0 != (long *)0x0) {
        plVar15 = local_e0 + 1;
        do {
          iVar8 = (int)*plVar15 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_e0[2] = 0;
          if (((*pbVar20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)puVar6;
          *(long *)puVar7 = lVar10;
          local_68 = (long *)*plVar17;
          lVar10 = lVar10 + 0xd8;
          pplVar12 = &local_68;
          goto LAB_00d32a50;
        }
      }
    }
  }
LAB_00d32a54:
  if (*(char *)(lVar21 + 0x16b) != '\0') {
    param_4 = 0;
  }
  FUN_02a763dc(plVar16,param_4);
  *(undefined8 *)(lVar21 + 0x150) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0x144));
  FUN_02a8f764(*(undefined8 *)(lVar21 + 0x158),plVar16,0);
  if (plVar16 != (long *)0x0) {
    lVar21 = plVar16[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
LAB_00d33440:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar21 = plVar16[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  plVar15 = (long *)(param_1 + 8);
  plVar17 = (long *)*plVar15;
  *plVar15 = 0;
  if (plVar17 != (long *)0x0) {
    lVar21 = plVar17[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))();
      *plVar15 = (long)plVar16;
      goto joined_r0x00d32abc;
    }
  }
  *plVar15 = (long)plVar16;
joined_r0x00d32abc:
  lVar21 = 0;
  if (plVar16 != (long *)0x0) {
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
    FUN_008802f0(&local_b8,plVar16 + 0xb);
    do {
      plVar17 = local_b0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(&local_b0,0x10);
      if (bVar4) {
        local_b0 = (long *)0x0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((*pbVar20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    uVar11 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar11;
    FUN_02a44e0c(&local_e0,uVar11,plVar17);
    plVar17 = local_b8;
    local_b8 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      plVar16 = plVar17 + 1;
      do {
        iVar8 = (int)*plVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        plVar17[2] = 0;
        if (((*pbVar20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar21 = *(long *)puVar6;
        *(long *)puVar7 = lVar21;
        local_d0 = (long *)*plVar17;
        FUN_02a44274(lVar21 + 0xd8,&local_d0);
      }
    }
    plVar16 = local_b8;
    plVar17 = local_e0;
    if (local_e0 != (long *)0x0) {
      local_e0 = (long *)0x0;
    }
    if (local_b8 != (long *)0x0) {
      plVar2 = local_b8 + 1;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        local_b8[2] = 0;
        if (((*pbVar20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar21 = *(long *)puVar6;
        *(long *)puVar7 = lVar21;
        local_d0 = (long *)*plVar16;
        FUN_02a44274(lVar21 + 0xd8,&local_d0);
      }
    }
    if (plVar17 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      plVar16 = plVar17 + 1;
      *(long *)(param_1 + 0x10) = *plVar17;
      do {
        iVar8 = (int)*plVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        plVar17[2] = 0;
        if (((*pbVar20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar21 = *(long *)puVar6;
        *(long *)puVar7 = lVar21;
        local_b8 = (long *)*plVar17;
        FUN_02a44274(lVar21 + 0xd8,&local_b8);
      }
    }
    lVar21 = *plVar15;
  }
  if (lVar21 == 0) {
    uVar11 = 0;
  }
  else {
    FUN_00d335c8(&local_b8,plVar15);
    if ((*(long *)(param_1 + 0x18) != 0) || (*(long *)(param_1 + 0x20) != 0)) {
      FUN_02a76df0(local_b8,param_1,1);
    }
    if (((*PTR_DAT_04379d30 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379d30);
    }
    uVar11 = *(undefined8 *)PTR_DAT_04379d38;
    *(undefined8 *)PTR_DAT_04379d40 = uVar11;
    FUN_00939b4c(&local_d0,uVar11,*(undefined8 *)(param_1 + 8));
    plVar17 = *(long **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (plVar17 != (long *)0x0) {
      lVar21 = plVar17[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))();
      }
    }
    *(long **)(param_1 + 0x28) = local_d0;
    if (local_b8 != (long *)0x0) {
      lVar21 = local_b8[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*local_b8 + 0x20))();
      }
    }
    uVar11 = 1;
  }
  return uVar11;
}


