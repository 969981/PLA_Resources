/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad3d48; name: FUN_00ad3d48
 */


void FUN_00ad3d48(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 undefined4 param_5,long *param_6,undefined8 param_7)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long **pplVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  byte bVar21;
  byte bVar22;
  long *plVar23;
  undefined8 *puVar24;
  long *plVar25;
  ulong uVar26;
  float fVar27;
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
  
  pplVar13 = &local_e0;
  local_70 = param_6;
  if (param_6 == (long *)0x0) {
    local_70 = *(long **)(param_2 + 8);
  }
  lVar10 = nn::os::GetCurrentThread();
  plVar23 = (long *)(param_2 + 0x150);
  do {
    if (*plVar23 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x144));
        while (*plVar23 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *plVar23 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00ad3dcc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar6) {
      *plVar23 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00ad3dcc:
  uVar14 = *(ulong *)(param_2 + 0x78);
  uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
  uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
  uVar26 = param_4[1];
  uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  plVar23 = (long *)(param_2 + 0x70);
  if (uVar15 < 2) {
    uVar26 = uVar14 - 1 & uVar26;
  }
  else if (uVar14 <= uVar26) {
    uVar18 = 0;
    if (uVar14 != 0) {
      uVar18 = uVar26 / uVar14;
    }
    uVar26 = uVar26 - uVar18 * uVar14;
  }
  puVar24 = *(undefined8 **)(*plVar23 + uVar26 * 8);
  if (puVar24 == (undefined8 *)0x0) {
    plVar25 = (long *)0x0;
LAB_00ad4250:
    if (plVar25 == (long *)0x0) goto LAB_00ad3e90;
    lVar10 = plVar25[9];
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
      piVar1 = (int *)(lVar10 + 0xc);
      puVar16 = PTR_DAT_04379d28;
      iVar8 = *(int *)(lVar10 + 0xc);
      do {
        plVar23 = *(long **)(lVar10 + 0x10);
        if (((*PTR_DAT_04379d20 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379d20), puVar16 = PTR_DAT_04379d28, iVar9 != 0))
        {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar12;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_04379d20);
          puVar16 = PTR_DAT_04379d28;
        }
        while( true ) {
          if (plVar23 == (long *)0x0) goto LAB_00ad425c;
          if (plVar23 == (long *)puVar16) break;
          plVar23 = (long *)*plVar23;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar8) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            if (*(long *)(lVar10 + 0x18) != 0) {
              plVar11 = (long *)(*(long *)(lVar10 + 0x18) + -0x50);
              goto LAB_00ad43a0;
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
LAB_00ad425c:
    plVar11 = (long *)FUN_00ad4eb0(&local_b8,*(undefined8 *)(param_2 + 8),param_4,&local_70);
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00ad4af8;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    (**(code **)(*plVar11 + 0x10))(&local_b8,plVar11);
    local_d0 = (long *)0x0;
    local_c8 = (long *)0x0;
    FUN_0093bcac(&local_d0,&local_b8);
    plVar23 = local_b8;
    if (local_b8 != (long *)0x0) {
      plVar3 = local_b8 + 1;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_e0 = (long *)*plVar23;
        FUN_02a44274(lVar10 + 0xd8,&local_e0);
      }
    }
    FUN_0093b3f4(plVar25 + 9,&local_d0);
    plVar23 = local_d0;
    if (local_d0 != (long *)0x0) {
      plVar25 = local_d0 + 1;
      do {
        iVar8 = (int)*plVar25 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar6) {
          *(int *)plVar25 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != 0) goto LAB_00ad43a0;
      local_d0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_b8 = (long *)*plVar23;
      lVar10 = lVar10 + 0xd8;
      pplVar13 = &local_b8;
LAB_00ad439c:
      FUN_02a44274(lVar10,pplVar13);
    }
  }
  else {
    plVar25 = (long *)*puVar24;
    if (plVar25 == (long *)0x0) goto LAB_00ad4250;
    if (*param_4 == 0) {
      plVar11 = (long *)PTR_DAT_04379c88;
    }
    else {
      plVar11 = (long *)(*param_4 + 0x58);
    }
    if (uVar15 < 2) {
      do {
        plVar3 = (long *)PTR_DAT_04379c88;
        if (plVar25[2] != 0) {
          plVar3 = (long *)(plVar25[2] + 0x58);
        }
        if ((*plVar3 == *plVar11) && ((long *)plVar25[8] == local_70)) goto LAB_00ad4250;
        plVar25 = (long *)*plVar25;
      } while ((plVar25 != (long *)0x0) && ((plVar25[1] & uVar14 - 1) == uVar26));
    }
    else {
      do {
        plVar3 = (long *)PTR_DAT_04379c88;
        if (plVar25[2] != 0) {
          plVar3 = (long *)(plVar25[2] + 0x58);
        }
        if ((*plVar3 == *plVar11) && ((long *)plVar25[8] == local_70)) goto LAB_00ad4250;
        plVar25 = (long *)*plVar25;
        if (plVar25 == (long *)0x0) break;
        uVar15 = plVar25[1];
        if (uVar14 <= uVar15) {
          uVar18 = 0;
          if (uVar14 != 0) {
            uVar18 = uVar15 / uVar14;
          }
          uVar15 = uVar15 - uVar18 * uVar14;
        }
      } while (uVar15 == uVar26);
    }
LAB_00ad3e90:
    plVar11 = (long *)FUN_00ad4eb0(&local_b8,*(undefined8 *)(param_2 + 8),param_4,&local_70);
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00ad4af8;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar15 = *(ulong *)(param_2 + 0x78);
    plVar25 = *(long **)(*(long *)(param_2 + 0x70) + uVar26 * 8);
    if (plVar25 == (long *)0x0) {
      plVar25 = (long *)0x0;
LAB_00ad3ef4:
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x10))(&local_b8,plVar11);
        local_d0 = (long *)0x0;
        local_c8 = (long *)0x0;
        FUN_0093bcac(&local_d0,&local_b8);
        if (local_b8 != (long *)0x0) {
          plVar23 = local_b8 + 1;
          do {
            iVar8 = (int)*plVar23 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar6) {
              *(int *)plVar23 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 == 0) {
            local_b8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_e0 = (long *)*local_b8;
            FUN_02a44274(lVar10 + 0xd8,&local_e0);
          }
        }
        local_b8 = local_70;
        local_b0 = (long *)0x0;
        local_a8 = 0;
        FUN_0093b3f4(&local_b0,&local_d0);
        plVar25[8] = (long)local_b8;
        FUN_0093b3f4(plVar25 + 9,&local_b0);
        plVar23 = local_b0;
        if (local_b0 != (long *)0x0) {
          plVar25 = local_b0 + 1;
          do {
            iVar8 = (int)*plVar25 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar6) {
              *(int *)plVar25 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 == 0) {
            local_b0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_e0 = (long *)*plVar23;
            FUN_02a44274(lVar10 + 0xd8,&local_e0);
          }
        }
        plVar23 = local_d0;
        if (local_d0 != (long *)0x0) {
          plVar25 = local_d0 + 1;
          do {
            iVar8 = (int)*plVar25 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar6) {
              *(int *)plVar25 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 == 0) {
            local_d0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_e0 = (long *)*plVar23;
            lVar10 = lVar10 + 0xd8;
            goto LAB_00ad439c;
          }
        }
        goto LAB_00ad43a0;
      }
    }
    else {
      plVar25 = (long *)*plVar25;
      if (plVar25 == (long *)0x0) goto LAB_00ad3ef4;
      if ((uVar15 & uVar15 - 1) == 0) {
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (plVar25[2] != 0) {
            plVar3 = (long *)(plVar25[2] + 0x58);
          }
          plVar19 = (long *)PTR_DAT_04379c88;
          if (*param_4 != 0) {
            plVar19 = (long *)(*param_4 + 0x58);
          }
          if ((*plVar3 == *plVar19) && ((plVar25[9] == 0 || (*(int *)(plVar25[9] + 0xc) == 0))))
          goto LAB_00ad3ef4;
          plVar25 = (long *)*plVar25;
        } while ((plVar25 != (long *)0x0) && ((plVar25[1] & uVar15 - 1) == uVar26));
      }
      else {
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (plVar25[2] != 0) {
            plVar3 = (long *)(plVar25[2] + 0x58);
          }
          plVar19 = (long *)PTR_DAT_04379c88;
          if (*param_4 != 0) {
            plVar19 = (long *)(*param_4 + 0x58);
          }
          if ((*plVar3 == *plVar19) && ((plVar25[9] == 0 || (*(int *)(plVar25[9] + 0xc) == 0))))
          goto LAB_00ad3ef4;
          plVar25 = (long *)*plVar25;
          if (plVar25 == (long *)0x0) break;
          uVar14 = plVar25[1];
          if (uVar15 <= uVar14) {
            uVar18 = 0;
            if (uVar15 != 0) {
              uVar18 = uVar14 / uVar15;
            }
            uVar14 = uVar14 - uVar18 * uVar15;
          }
        } while (uVar14 == uVar26);
      }
    }
    (**(code **)(*plVar11 + 0x10))(&local_b8,plVar11);
    local_e0 = (long *)0x0;
    uStack_d8 = 0;
    FUN_0093bcac(&local_e0,&local_b8);
    if (local_b8 != (long *)0x0) {
      plVar25 = local_b8 + 1;
      do {
        iVar8 = (int)*plVar25 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar6) {
          *(int *)plVar25 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_d0 = (long *)*local_b8;
        FUN_02a44274(lVar10 + 0xd8,&local_d0);
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
    puVar24 = (undefined8 *)(param_2 + 0xa8);
    plVar25 = (long *)(**(code **)(*(long *)*puVar24 + 0x10))((long *)*puVar24,0x58,8);
    if (plVar25 == (long *)0x0) {
      (**(code **)(*(long *)*puVar24 + 0xb8))();
    }
    FUN_0093b2d4(puVar24,plVar25 + 2,&local_b8);
    uVar14 = plVar25[3];
    *plVar25 = 0;
    plVar25[1] = uVar14;
    fVar27 = (float)(*(long *)(param_2 + 200) + 1);
    uVar15 = *(ulong *)(param_2 + 0x78);
    if ((uVar15 == 0) || (*(float *)(param_2 + 0xd0) * (float)uVar15 < fVar27)) {
      uVar15 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
      uVar26 = (ulong)(fVar27 / *(float *)(param_2 + 0xd0));
      if (uVar26 <= uVar15) {
        uVar26 = uVar15;
      }
      FUN_0093b6f4(plVar23,uVar26);
      uVar15 = *(ulong *)(param_2 + 0x78);
    }
    plVar3 = local_80;
    uVar26 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
    uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar26 < 2) {
      uVar18 = uVar15 - 1 & uVar14;
    }
    else if (uVar14 < uVar15) {
      uVar18 = uVar14;
    }
    else {
      uVar18 = 0;
      if (uVar15 != 0) {
        uVar18 = uVar14 / uVar15;
      }
      uVar18 = uVar14 - uVar18 * uVar15;
    }
    plVar19 = *(long **)(*plVar23 + uVar18 * 8);
    if (plVar19 == (long *)0x0) {
      plVar17 = (long *)0x0;
    }
    else {
      lVar10 = plVar25[2];
      plVar2 = (long *)PTR_DAT_04379c88;
      if (lVar10 != 0) {
        plVar2 = (long *)(lVar10 + 0x58);
      }
      if (uVar26 < 2) {
        bVar22 = 0;
LAB_00ad4480:
        do {
          bVar21 = bVar22;
          plVar17 = plVar19;
          plVar19 = (long *)*plVar17;
          if ((plVar19 == (long *)0x0) || ((plVar19[1] & uVar15 - 1) != uVar18)) break;
          if (plVar19[1] == uVar14) {
            plVar4 = (long *)PTR_DAT_04379c88;
            if (plVar19[2] != 0) {
              plVar4 = (long *)(plVar19[2] + 0x58);
            }
            bVar22 = bVar21 | *plVar4 == *plVar2;
            if (*plVar4 == *plVar2) goto LAB_00ad4480;
          }
          else {
            bVar22 = bVar21;
          }
        } while ((bool)(bVar21 ^ 1));
      }
      else {
        bVar22 = 0;
LAB_00ad4864:
        do {
          bVar21 = bVar22;
          plVar17 = plVar19;
          plVar19 = (long *)*plVar17;
          if (plVar19 == (long *)0x0) break;
          uVar20 = plVar19[1];
          uVar7 = uVar20;
          if (uVar15 <= uVar20) {
            uVar7 = 0;
            if (uVar15 != 0) {
              uVar7 = uVar20 / uVar15;
            }
            uVar7 = uVar20 - uVar7 * uVar15;
          }
          if (uVar7 != uVar18) break;
          if (uVar20 == uVar14) {
            plVar4 = (long *)PTR_DAT_04379c88;
            if (plVar19[2] != 0) {
              plVar4 = (long *)(plVar19[2] + 0x58);
            }
            bVar22 = bVar21 | *plVar4 == *plVar2;
            if (*plVar4 == *plVar2) goto LAB_00ad4864;
          }
          else {
            bVar22 = bVar21;
          }
        } while ((bool)(bVar21 ^ 1));
      }
    }
    uVar14 = plVar25[1];
    if (uVar26 < 2) {
      uVar14 = uVar14 & uVar15 - 1;
LAB_00ad40b4:
      if (plVar17 != (long *)0x0) goto LAB_00ad4810;
LAB_00ad40b8:
      plVar19 = (long *)(param_2 + 0xa0);
      *plVar25 = *plVar19;
      *plVar19 = (long)plVar25;
      *(long **)(*(long *)(param_2 + 0x70) + uVar14 * 8) = plVar19;
      if (*plVar25 != 0) {
        uVar18 = *(ulong *)(*plVar25 + 8);
        if (uVar26 < 2) {
          uVar18 = uVar18 & uVar15 - 1;
        }
        else if (uVar15 <= uVar18) {
          uVar14 = 0;
          if (uVar15 != 0) {
            uVar14 = uVar18 / uVar15;
          }
          uVar18 = uVar18 - uVar14 * uVar15;
        }
        goto LAB_00ad40ec;
      }
    }
    else {
      if (uVar14 < uVar15) goto LAB_00ad40b4;
      uVar18 = 0;
      if (uVar15 != 0) {
        uVar18 = uVar14 / uVar15;
      }
      uVar14 = uVar14 - uVar18 * uVar15;
      if (plVar17 == (long *)0x0) goto LAB_00ad40b8;
LAB_00ad4810:
      *plVar25 = *plVar17;
      *plVar17 = (long)plVar25;
      if (*plVar25 != 0) {
        uVar18 = *(ulong *)(*plVar25 + 8);
        if (uVar26 < 2) {
          uVar18 = uVar18 & uVar15 - 1;
        }
        else if (uVar15 <= uVar18) {
          uVar26 = 0;
          if (uVar15 != 0) {
            uVar26 = uVar18 / uVar15;
          }
          uVar18 = uVar18 - uVar26 * uVar15;
        }
        if (uVar18 != uVar14) {
LAB_00ad40ec:
          *(long **)(*plVar23 + uVar18 * 8) = plVar25;
        }
      }
    }
    *(long *)(param_2 + 200) = *(long *)(param_2 + 200) + 1;
    if (local_80 != (long *)0x0) {
      plVar23 = local_80 + 1;
      do {
        iVar8 = (int)*plVar23 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *(int *)plVar23 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_68 = (long *)*plVar3;
        FUN_02a44274(lVar10 + 0xd8,&local_68);
      }
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    plVar23 = local_c8;
    if (local_c8 != (long *)0x0) {
      plVar25 = local_c8 + 1;
      do {
        iVar8 = (int)*plVar25 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar6) {
          *(int *)plVar25 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        local_c8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_68 = (long *)*plVar23;
        FUN_02a44274(lVar10 + 0xd8,&local_68);
      }
    }
    plVar23 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar25 = local_e0 + 1;
      do {
        iVar8 = (int)*plVar25 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar6) {
          *(int *)plVar25 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        local_e0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_68 = (long *)*plVar23;
        lVar10 = lVar10 + 0xd8;
        pplVar13 = &local_68;
        goto LAB_00ad439c;
      }
    }
  }
LAB_00ad43a0:
  if (*(char *)(param_2 + 0x16b) != '\0') {
    param_7 = 0;
  }
  FUN_02a763dc(plVar11,param_7);
  *(undefined8 *)(param_2 + 0x150) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x144));
  FUN_02a8f764(*(undefined8 *)(param_2 + 0x158),plVar11,param_5);
  *param_1 = plVar11;
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_00ad4af8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar10 = plVar11[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  return;
}


