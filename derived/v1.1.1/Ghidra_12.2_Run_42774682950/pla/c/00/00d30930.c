/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d30930; name: FUN_00d30930
 */


void FUN_00d30930(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 undefined4 param_5,long *param_6,undefined8 param_7)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long **pplVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
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
  
  pplVar12 = &local_e0;
  local_70 = param_6;
  if (param_6 == (long *)0x0) {
    local_70 = *(long **)(param_2 + 8);
  }
  lVar9 = nn::os::GetCurrentThread();
  plVar16 = (long *)(param_2 + 0x150);
  do {
    if (*plVar16 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x144));
        while (*plVar16 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *plVar16 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00d309b4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00d309b4:
  uVar13 = *(ulong *)(param_2 + 0x78);
  uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar17 = param_4[1];
  uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar14 < 2) {
    uVar17 = uVar13 - 1 & uVar17;
  }
  else if (uVar13 <= uVar17) {
    uVar6 = 0;
    if (uVar13 != 0) {
      uVar6 = uVar17 / uVar13;
    }
    uVar17 = uVar17 - uVar6 * uVar13;
  }
  puVar15 = *(undefined8 **)(*(long *)(param_2 + 0x70) + uVar17 * 8);
  if (puVar15 == (undefined8 *)0x0) {
    plVar16 = (long *)0x0;
LAB_00d30b58:
    if (plVar16 == (long *)0x0) goto LAB_00d30a78;
    lVar9 = plVar16[9];
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
      piVar1 = (int *)(lVar9 + 0xc);
      iVar7 = *(int *)(lVar9 + 0xc);
      do {
        plVar10 = *(long **)(lVar9 + 0x10);
        if (((*PTR_DAT_04379d20 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar8 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar11;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_04379d20);
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00d30b64;
          if (plVar10 == (long *)PTR_DAT_04379d28) break;
          plVar10 = (long *)*plVar10;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar7) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            if (*(long *)(lVar9 + 0x18) != 0) {
              plVar10 = (long *)(*(long *)(lVar9 + 0x18) + -0x50);
              goto LAB_00d30ef8;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar8;
      } while (iVar8 != 0);
    }
LAB_00d30b64:
    plVar10 = (long *)FUN_00d31c34(&local_b8,*(undefined8 *)(param_2 + 8),param_4,&local_70);
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_00d3147c;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    (**(code **)(*plVar10 + 0x10))(&local_b8,plVar10);
    local_d0 = (long *)0x0;
    local_c8 = (long *)0x0;
    FUN_0093bcac(&local_d0,&local_b8);
    plVar2 = local_b8;
    if (local_b8 != (long *)0x0) {
      plVar3 = local_b8 + 1;
      do {
        iVar7 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_e0 = (long *)*plVar2;
        FUN_02a44274(lVar9 + 0xd8,&local_e0);
      }
    }
    FUN_0093b3f4(plVar16 + 9,&local_d0);
    plVar16 = local_d0;
    if (local_d0 != (long *)0x0) {
      plVar2 = local_d0 + 1;
      do {
        iVar7 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != 0) goto LAB_00d30ef8;
      local_d0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_b8 = (long *)*plVar16;
      lVar9 = lVar9 + 0xd8;
      pplVar12 = &local_b8;
LAB_00d30ef4:
      FUN_02a44274(lVar9,pplVar12);
    }
  }
  else {
    plVar16 = (long *)*puVar15;
    if (plVar16 == (long *)0x0) goto LAB_00d30b58;
    if (*param_4 == 0) {
      plVar10 = (long *)PTR_DAT_04379c88;
    }
    else {
      plVar10 = (long *)(*param_4 + 0x58);
    }
    if (uVar14 < 2) {
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (plVar16[2] != 0) {
          plVar2 = (long *)(plVar16[2] + 0x58);
        }
        if ((*plVar2 == *plVar10) && ((long *)plVar16[8] == local_70)) goto LAB_00d30b58;
        plVar16 = (long *)*plVar16;
      } while ((plVar16 != (long *)0x0) && ((plVar16[1] & uVar13 - 1) == uVar17));
    }
    else {
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (plVar16[2] != 0) {
          plVar2 = (long *)(plVar16[2] + 0x58);
        }
        if ((*plVar2 == *plVar10) && ((long *)plVar16[8] == local_70)) goto LAB_00d30b58;
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) break;
        uVar14 = plVar16[1];
        if (uVar13 <= uVar14) {
          uVar6 = 0;
          if (uVar13 != 0) {
            uVar6 = uVar14 / uVar13;
          }
          uVar14 = uVar14 - uVar6 * uVar13;
        }
      } while (uVar14 == uVar17);
    }
LAB_00d30a78:
    plVar10 = (long *)FUN_00d31c34(&local_b8,*(undefined8 *)(param_2 + 8),param_4,&local_70);
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_00d3147c;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar14 = *(ulong *)(param_2 + 0x78);
    puVar15 = *(undefined8 **)(*(long *)(param_2 + 0x70) + uVar17 * 8);
    if (puVar15 == (undefined8 *)0x0) {
      plVar16 = (long *)0x0;
LAB_00d30cb0:
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x10))(&local_b8,plVar10);
        local_d0 = (long *)0x0;
        local_c8 = (long *)0x0;
        FUN_0093bcac(&local_d0,&local_b8);
        if (local_b8 != (long *)0x0) {
          plVar2 = local_b8 + 1;
          do {
            iVar7 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 == 0) {
            local_b8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar9 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar9;
            local_e0 = (long *)*local_b8;
            FUN_02a44274(lVar9 + 0xd8,&local_e0);
          }
        }
        local_b8 = local_70;
        local_b0 = (long *)0x0;
        local_a8 = 0;
        FUN_0093b3f4(&local_b0,&local_d0);
        plVar16[8] = (long)local_b8;
        FUN_0093b3f4(plVar16 + 9,&local_b0);
        plVar16 = local_b0;
        if (local_b0 != (long *)0x0) {
          plVar2 = local_b0 + 1;
          do {
            iVar7 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 == 0) {
            local_b0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar9 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar9;
            local_e0 = (long *)*plVar16;
            FUN_02a44274(lVar9 + 0xd8,&local_e0);
          }
        }
        plVar16 = local_d0;
        if (local_d0 != (long *)0x0) {
          plVar2 = local_d0 + 1;
          do {
            iVar7 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 == 0) {
            local_d0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar9 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar9;
            local_e0 = (long *)*plVar16;
            lVar9 = lVar9 + 0xd8;
            goto LAB_00d30ef4;
          }
        }
        goto LAB_00d30ef8;
      }
    }
    else {
      plVar16 = (long *)*puVar15;
      if (plVar16 == (long *)0x0) goto LAB_00d30cb0;
      if ((uVar14 & uVar14 - 1) == 0) {
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (plVar16[2] != 0) {
            plVar2 = (long *)(plVar16[2] + 0x58);
          }
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*param_4 != 0) {
            plVar3 = (long *)(*param_4 + 0x58);
          }
          if ((*plVar2 == *plVar3) && ((plVar16[9] == 0 || (*(int *)(plVar16[9] + 0xc) == 0))))
          goto LAB_00d30cb0;
          plVar16 = (long *)*plVar16;
        } while ((plVar16 != (long *)0x0) && ((plVar16[1] & uVar14 - 1) == uVar17));
      }
      else {
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (plVar16[2] != 0) {
            plVar2 = (long *)(plVar16[2] + 0x58);
          }
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*param_4 != 0) {
            plVar3 = (long *)(*param_4 + 0x58);
          }
          if ((*plVar2 == *plVar3) && ((plVar16[9] == 0 || (*(int *)(plVar16[9] + 0xc) == 0))))
          goto LAB_00d30cb0;
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) break;
          uVar13 = plVar16[1];
          if (uVar14 <= uVar13) {
            uVar6 = 0;
            if (uVar14 != 0) {
              uVar6 = uVar13 / uVar14;
            }
            uVar13 = uVar13 - uVar6 * uVar14;
          }
        } while (uVar13 == uVar17);
      }
    }
    (**(code **)(*plVar10 + 0x10))(&local_b8,plVar10);
    local_e0 = (long *)0x0;
    uStack_d8 = 0;
    FUN_0093bcac(&local_e0,&local_b8);
    if (local_b8 != (long *)0x0) {
      plVar16 = local_b8 + 1;
      do {
        iVar7 = (int)*plVar16 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *(int *)plVar16 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_d0 = (long *)*local_b8;
        FUN_02a44274(lVar9 + 0xd8,&local_d0);
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
    FUN_00d318d8((long *)(param_2 + 0x70),&local_b8);
    plVar16 = local_80;
    if (local_80 != (long *)0x0) {
      plVar2 = local_80 + 1;
      do {
        iVar7 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_68 = (long *)*plVar16;
        FUN_02a44274(lVar9 + 0xd8,&local_68);
      }
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    plVar16 = local_c8;
    if (local_c8 != (long *)0x0) {
      plVar2 = local_c8 + 1;
      do {
        iVar7 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        local_c8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_68 = (long *)*plVar16;
        FUN_02a44274(lVar9 + 0xd8,&local_68);
      }
    }
    plVar16 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar2 = local_e0 + 1;
      do {
        iVar7 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        local_e0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_68 = (long *)*plVar16;
        lVar9 = lVar9 + 0xd8;
        pplVar12 = &local_68;
        goto LAB_00d30ef4;
      }
    }
  }
LAB_00d30ef8:
  if (*(char *)(param_2 + 0x16b) != '\0') {
    param_7 = 0;
  }
  FUN_02a763dc(plVar10,param_7);
  *(undefined8 *)(param_2 + 0x150) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x144));
  FUN_02a8f764(*(undefined8 *)(param_2 + 0x158),plVar10,param_5);
  *param_1 = plVar10;
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_00d3147c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar9 = plVar10[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  return;
}


