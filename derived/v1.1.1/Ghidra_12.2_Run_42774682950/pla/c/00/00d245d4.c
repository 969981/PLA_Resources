/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d245d4; name: FUN_00d245d4
 */


/* WARNING: Removing unreachable block (ram,0x00d24b9c) */

void FUN_00d245d4(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 undefined4 param_5,long *param_6,undefined8 param_7)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long **pplVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *puVar22;
  long *plVar23;
  ulong uVar24;
  float fVar25;
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
  local_70 = param_6;
  if (param_6 == (long *)0x0) {
    local_70 = *(long **)(param_2 + 8);
  }
  lVar11 = nn::os::GetCurrentThread();
  plVar21 = (long *)(param_2 + 0x150);
  do {
    if (*plVar21 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x144));
        while (*plVar21 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar6) {
            *plVar21 = lVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00d24658;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar6) {
      *plVar21 = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00d24658:
  uVar15 = *(ulong *)(param_2 + 0x78);
  uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar24 = param_4[1];
  uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  plVar21 = (long *)(param_2 + 0x70);
  if (uVar16 < 2) {
    uVar24 = uVar15 - 1 & uVar24;
  }
  else if (uVar15 <= uVar24) {
    uVar18 = 0;
    if (uVar15 != 0) {
      uVar18 = uVar24 / uVar15;
    }
    uVar24 = uVar24 - uVar18 * uVar15;
  }
  puVar22 = *(undefined8 **)(*plVar21 + uVar24 * 8);
  if (puVar22 == (undefined8 *)0x0) {
    plVar23 = (long *)0x0;
LAB_00d247fc:
    if (plVar23 == (long *)0x0) goto LAB_00d2471c;
    lVar11 = plVar23[9];
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
      piVar1 = (int *)(lVar11 + 0xc);
      iVar9 = *(int *)(lVar11 + 0xc);
      do {
        plVar21 = *(long **)(lVar11 + 0x10);
        if (((*PTR_DAT_04379d20 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar10 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar13;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_04379d20);
        }
        while( true ) {
          if (plVar21 == (long *)0x0) goto LAB_00d24808;
          if (plVar21 == (long *)PTR_DAT_04379d28) break;
          plVar21 = (long *)*plVar21;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar9) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            if (*(long *)(lVar11 + 0x18) != 0) {
              plVar12 = (long *)(*(long *)(lVar11 + 0x18) + -0x50);
              goto LAB_00d250e4;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
LAB_00d24808:
    plVar12 = (long *)FUN_00d2571c(&local_b8,*(undefined8 *)(param_2 + 8),param_4,&local_70);
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_00d25428;
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar13;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    (**(code **)(*plVar12 + 0x10))(&local_b8,plVar12);
    local_d0 = (long *)0x0;
    local_c8 = (long *)0x0;
    FUN_0093bcac(&local_d0,&local_b8);
    plVar21 = local_b8;
    if (local_b8 != (long *)0x0) {
      plVar3 = local_b8 + 1;
      do {
        iVar9 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_e0 = (long *)*plVar21;
        FUN_02a44274(lVar11 + 0xd8,&local_e0);
      }
    }
    FUN_0093b3f4(plVar23 + 9,&local_d0);
    plVar21 = local_d0;
    if (local_d0 != (long *)0x0) {
      plVar23 = local_d0 + 1;
      do {
        iVar9 = (int)*plVar23 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *(int *)plVar23 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != 0) goto LAB_00d250e4;
      local_d0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_b8 = (long *)*plVar21;
      lVar11 = lVar11 + 0xd8;
      pplVar14 = &local_b8;
LAB_00d250e0:
      FUN_02a44274(lVar11,pplVar14);
    }
  }
  else {
    plVar23 = (long *)*puVar22;
    if (plVar23 == (long *)0x0) goto LAB_00d247fc;
    if (*param_4 == 0) {
      plVar12 = (long *)PTR_DAT_04379c88;
    }
    else {
      plVar12 = (long *)(*param_4 + 0x58);
    }
    if (uVar16 < 2) {
      do {
        plVar3 = (long *)PTR_DAT_04379c88;
        if (plVar23[2] != 0) {
          plVar3 = (long *)(plVar23[2] + 0x58);
        }
        if ((*plVar3 == *plVar12) && ((long *)plVar23[8] == local_70)) goto LAB_00d247fc;
        plVar23 = (long *)*plVar23;
      } while ((plVar23 != (long *)0x0) && ((plVar23[1] & uVar15 - 1) == uVar24));
    }
    else {
      do {
        plVar3 = (long *)PTR_DAT_04379c88;
        if (plVar23[2] != 0) {
          plVar3 = (long *)(plVar23[2] + 0x58);
        }
        if ((*plVar3 == *plVar12) && ((long *)plVar23[8] == local_70)) goto LAB_00d247fc;
        plVar23 = (long *)*plVar23;
        if (plVar23 == (long *)0x0) break;
        uVar16 = plVar23[1];
        if (uVar15 <= uVar16) {
          uVar18 = 0;
          if (uVar15 != 0) {
            uVar18 = uVar16 / uVar15;
          }
          uVar16 = uVar16 - uVar18 * uVar15;
        }
      } while (uVar16 == uVar24);
    }
LAB_00d2471c:
    plVar12 = (long *)FUN_00d2571c(&local_b8,*(undefined8 *)(param_2 + 8),param_4,&local_70);
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_00d25428;
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar13;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar16 = *(ulong *)(param_2 + 0x78);
    puVar22 = *(undefined8 **)(*(long *)(param_2 + 0x70) + uVar24 * 8);
    if (puVar22 == (undefined8 *)0x0) {
      plVar23 = (long *)0x0;
LAB_00d24954:
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x10))(&local_b8,plVar12);
        local_d0 = (long *)0x0;
        local_c8 = (long *)0x0;
        FUN_0093bcac(&local_d0,&local_b8);
        if (local_b8 != (long *)0x0) {
          plVar21 = local_b8 + 1;
          do {
            iVar9 = (int)*plVar21 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar6) {
              *(int *)plVar21 = iVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 == 0) {
            local_b8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_e0 = (long *)*local_b8;
            FUN_02a44274(lVar11 + 0xd8,&local_e0);
          }
        }
        local_b8 = local_70;
        local_b0 = (long *)0x0;
        local_a8 = 0;
        FUN_0093b3f4(&local_b0,&local_d0);
        plVar23[8] = (long)local_b8;
        FUN_0093b3f4(plVar23 + 9,&local_b0);
        plVar21 = local_b0;
        if (local_b0 != (long *)0x0) {
          plVar23 = local_b0 + 1;
          do {
            iVar9 = (int)*plVar23 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar6) {
              *(int *)plVar23 = iVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 == 0) {
            local_b0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_e0 = (long *)*plVar21;
            FUN_02a44274(lVar11 + 0xd8,&local_e0);
          }
        }
        plVar21 = local_d0;
        if (local_d0 != (long *)0x0) {
          plVar23 = local_d0 + 1;
          do {
            iVar9 = (int)*plVar23 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar6) {
              *(int *)plVar23 = iVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 == 0) {
            local_d0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_e0 = (long *)*plVar21;
            lVar11 = lVar11 + 0xd8;
            goto LAB_00d250e0;
          }
        }
        goto LAB_00d250e4;
      }
    }
    else {
      plVar23 = (long *)*puVar22;
      if (plVar23 == (long *)0x0) goto LAB_00d24954;
      if ((uVar16 & uVar16 - 1) == 0) {
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (plVar23[2] != 0) {
            plVar3 = (long *)(plVar23[2] + 0x58);
          }
          plVar19 = (long *)PTR_DAT_04379c88;
          if (*param_4 != 0) {
            plVar19 = (long *)(*param_4 + 0x58);
          }
          if ((*plVar3 == *plVar19) && ((plVar23[9] == 0 || (*(int *)(plVar23[9] + 0xc) == 0))))
          goto LAB_00d24954;
          plVar23 = (long *)*plVar23;
        } while ((plVar23 != (long *)0x0) && ((plVar23[1] & uVar16 - 1) == uVar24));
      }
      else {
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (plVar23[2] != 0) {
            plVar3 = (long *)(plVar23[2] + 0x58);
          }
          plVar19 = (long *)PTR_DAT_04379c88;
          if (*param_4 != 0) {
            plVar19 = (long *)(*param_4 + 0x58);
          }
          if ((*plVar3 == *plVar19) && ((plVar23[9] == 0 || (*(int *)(plVar23[9] + 0xc) == 0))))
          goto LAB_00d24954;
          plVar23 = (long *)*plVar23;
          if (plVar23 == (long *)0x0) break;
          uVar15 = plVar23[1];
          if (uVar16 <= uVar15) {
            uVar18 = 0;
            if (uVar16 != 0) {
              uVar18 = uVar15 / uVar16;
            }
            uVar15 = uVar15 - uVar18 * uVar16;
          }
        } while (uVar15 == uVar24);
      }
    }
    (**(code **)(*plVar12 + 0x10))(&local_b8,plVar12);
    local_e0 = (long *)0x0;
    uStack_d8 = 0;
    FUN_0093bcac(&local_e0,&local_b8);
    if (local_b8 != (long *)0x0) {
      plVar23 = local_b8 + 1;
      do {
        iVar9 = (int)*plVar23 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *(int *)plVar23 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_d0 = (long *)*local_b8;
        FUN_02a44274(lVar11 + 0xd8,&local_d0);
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
    puVar22 = (undefined8 *)(param_2 + 0xa8);
    plVar23 = (long *)(**(code **)(*(long *)*puVar22 + 0x10))((long *)*puVar22,0x58,8);
    if (plVar23 == (long *)0x0) {
      (**(code **)(*(long *)*puVar22 + 0xb8))();
    }
    FUN_0093b2d4(puVar22,plVar23 + 2,&local_b8);
    uVar15 = plVar23[3];
    *plVar23 = 0;
    plVar23[1] = uVar15;
    fVar25 = (float)(*(long *)(param_2 + 200) + 1);
    uVar16 = *(ulong *)(param_2 + 0x78);
    if ((uVar16 == 0) || (*(float *)(param_2 + 0xd0) * (float)uVar16 < fVar25)) {
      uVar16 = (ulong)(uVar16 < 3 || (uVar16 & uVar16 - 1) != 0) | uVar16 << 1;
      uVar24 = (ulong)(fVar25 / *(float *)(param_2 + 0xd0));
      if (uVar24 <= uVar16) {
        uVar24 = uVar16;
      }
      FUN_0093b6f4(plVar21,uVar24);
      uVar16 = *(ulong *)(param_2 + 0x78);
    }
    plVar3 = local_80;
    uVar24 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
    uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar24 < 2) {
      uVar18 = uVar16 - 1 & uVar15;
    }
    else if (uVar15 < uVar16) {
      uVar18 = uVar15;
    }
    else {
      uVar18 = 0;
      if (uVar16 != 0) {
        uVar18 = uVar15 / uVar16;
      }
      uVar18 = uVar15 - uVar18 * uVar16;
    }
    plVar19 = *(long **)(*plVar21 + uVar18 * 8);
    if (plVar19 == (long *)0x0) {
      plVar17 = (long *)0x0;
    }
    else {
      lVar11 = plVar23[2];
      plVar2 = (long *)PTR_DAT_04379c88;
      if (lVar11 != 0) {
        plVar2 = (long *)(lVar11 + 0x58);
      }
      if (uVar24 < 2) {
        bVar6 = false;
LAB_00d24b34:
        do {
          bVar8 = bVar6;
          plVar17 = plVar19;
          plVar19 = (long *)*plVar17;
          if ((plVar19 == (long *)0x0) || ((plVar19[1] & uVar16 - 1) != uVar18)) break;
          bVar6 = bVar8;
          if (plVar19[1] == uVar15) {
            plVar4 = (long *)PTR_DAT_04379c88;
            if (plVar19[2] != 0) {
              plVar4 = (long *)(plVar19[2] + 0x58);
            }
            bVar6 = (bool)(bVar8 | *plVar4 == *plVar2);
            if (*plVar4 == *plVar2) goto LAB_00d24b34;
          }
        } while (!bVar8);
      }
      else {
        bVar6 = false;
LAB_00d24e80:
        do {
          bVar8 = bVar6;
          plVar17 = plVar19;
          plVar19 = (long *)*plVar17;
          if (plVar19 == (long *)0x0) break;
          uVar20 = plVar19[1];
          uVar7 = uVar20;
          if (uVar16 <= uVar20) {
            uVar7 = 0;
            if (uVar16 != 0) {
              uVar7 = uVar20 / uVar16;
            }
            uVar7 = uVar20 - uVar7 * uVar16;
          }
          if (uVar7 != uVar18) break;
          bVar6 = bVar8;
          if (uVar20 == uVar15) {
            plVar4 = (long *)PTR_DAT_04379c88;
            if (plVar19[2] != 0) {
              plVar4 = (long *)(plVar19[2] + 0x58);
            }
            bVar6 = (bool)(bVar8 | *plVar4 == *plVar2);
            if (*plVar4 == *plVar2) goto LAB_00d24e80;
          }
        } while (!bVar8);
      }
    }
    uVar15 = plVar23[1];
    if (uVar24 < 2) {
      uVar15 = uVar15 & uVar16 - 1;
LAB_00d24f08:
      if (plVar17 != (long *)0x0) goto LAB_00d24f58;
LAB_00d24f0c:
      plVar19 = (long *)(param_2 + 0xa0);
      *plVar23 = *plVar19;
      *plVar19 = (long)plVar23;
      *(long **)(*(long *)(param_2 + 0x70) + uVar15 * 8) = plVar19;
      if (*plVar23 != 0) {
        uVar18 = *(ulong *)(*plVar23 + 8);
        if (uVar24 < 2) {
          uVar18 = uVar18 & uVar16 - 1;
        }
        else if (uVar16 <= uVar18) {
          uVar15 = 0;
          if (uVar16 != 0) {
            uVar15 = uVar18 / uVar16;
          }
          uVar18 = uVar18 - uVar15 * uVar16;
        }
        goto LAB_00d24f88;
      }
    }
    else {
      if (uVar15 < uVar16) goto LAB_00d24f08;
      uVar18 = 0;
      if (uVar16 != 0) {
        uVar18 = uVar15 / uVar16;
      }
      uVar15 = uVar15 - uVar18 * uVar16;
      if (plVar17 == (long *)0x0) goto LAB_00d24f0c;
LAB_00d24f58:
      *plVar23 = *plVar17;
      *plVar17 = (long)plVar23;
      if (*plVar23 != 0) {
        uVar18 = *(ulong *)(*plVar23 + 8);
        if (uVar24 < 2) {
          uVar18 = uVar18 & uVar16 - 1;
        }
        else if (uVar16 <= uVar18) {
          uVar24 = 0;
          if (uVar16 != 0) {
            uVar24 = uVar18 / uVar16;
          }
          uVar18 = uVar18 - uVar24 * uVar16;
        }
        if (uVar18 != uVar15) {
LAB_00d24f88:
          *(long **)(*plVar21 + uVar18 * 8) = plVar23;
        }
      }
    }
    *(long *)(param_2 + 200) = *(long *)(param_2 + 200) + 1;
    if (local_80 != (long *)0x0) {
      plVar21 = local_80 + 1;
      do {
        iVar9 = (int)*plVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *(int *)plVar21 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_68 = (long *)*plVar3;
        FUN_02a44274(lVar11 + 0xd8,&local_68);
      }
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    plVar21 = local_c8;
    if (local_c8 != (long *)0x0) {
      plVar23 = local_c8 + 1;
      do {
        iVar9 = (int)*plVar23 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *(int *)plVar23 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        local_c8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_68 = (long *)*plVar21;
        FUN_02a44274(lVar11 + 0xd8,&local_68);
      }
    }
    plVar21 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar23 = local_e0 + 1;
      do {
        iVar9 = (int)*plVar23 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *(int *)plVar23 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        local_e0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_68 = (long *)*plVar21;
        lVar11 = lVar11 + 0xd8;
        pplVar14 = &local_68;
        goto LAB_00d250e0;
      }
    }
  }
LAB_00d250e4:
  if (*(char *)(param_2 + 0x16b) != '\0') {
    param_7 = 0;
  }
  FUN_02a763dc(plVar12,param_7);
  *(undefined8 *)(param_2 + 0x150) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x144));
  FUN_02a8f764(*(undefined8 *)(param_2 + 0x158),plVar12,param_5);
  *param_1 = plVar12;
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_00d25428:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar11 = plVar12[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  return;
}


