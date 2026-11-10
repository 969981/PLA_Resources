/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0193a9f4; name: FUN_0193a9f4
 */


ulong FUN_0193a9f4(long param_1,long *param_2)

{
  ulong *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  float fVar22;
  undefined8 *local_c0;
  undefined8 local_b8;
  ulong local_b0;
  ulong *local_a8 [2];
  ulong *local_98;
  undefined8 uStack_90;
  long *local_88;
  long *local_80;
  undefined8 *local_78;
  char local_70;
  undefined8 local_68;
  
  puVar9 = PTR_DAT_043794a8;
  puVar8 = PTR_DAT_043794a0;
  puVar7 = PTR_DAT_04379498;
  plVar21 = *(long **)(param_1 + 0xb0);
  plVar19 = (long *)(param_1 + 0x80);
  if (plVar21 != (long *)0x0) {
    lVar11 = tpidr_el0;
    do {
      local_98 = (ulong *)0x0;
      uStack_90 = 0;
      FUN_008802f0(&local_98,plVar21 + 3);
      local_88 = (long *)plVar21[5];
      if ((local_98 == (ulong *)0x0) || (*(int *)((long)local_98 + 0xc) == 0)) {
        plVar20 = (long *)*plVar21;
        FUN_01940608(&local_80,plVar19,plVar21);
        plVar17 = local_80;
        local_80 = (long *)0x0;
        plVar21 = plVar20;
        puVar6 = local_98;
        if (plVar17 != (long *)0x0) {
          if ((local_70 != '\0') &&
             (puVar18 = (undefined8 *)plVar17[3], puVar18 != (undefined8 *)0x0)) {
            piVar2 = (int *)(puVar18 + 1);
            do {
              iVar10 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 == 0) {
              puVar18[2] = 0;
              if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar8,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar7);
              }
              lVar12 = *(long *)puVar8;
              *(long *)puVar9 = lVar12;
              local_a8[0] = (ulong *)*puVar18;
              FUN_02a44274(lVar12 + 0xd8,local_a8);
            }
          }
          plVar20 = (long *)*local_78;
          uVar13 = (**(code **)(*plVar20 + 0xc0))();
          if ((uVar13 & 1) != 0) {
            if (*(char *)(lVar11 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar11 + 0x38d488) = 1;
              *(undefined8 *)(lVar11 + 0x38d478) = 0;
              *(undefined8 *)(lVar11 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar11 + 0x38d480)) {
              FUN_02bcc824(plVar20,plVar17,0x30,8);
              puVar6 = local_98;
              goto joined_r0x0193ab0c;
            }
          }
          (**(code **)(*plVar20 + 0x18))(plVar20,plVar17,0x30,8);
          puVar6 = local_98;
        }
      }
      else {
        plVar21 = (long *)*plVar21;
        puVar6 = local_98;
      }
joined_r0x0193ab0c:
      local_98 = puVar6;
      if (puVar6 != (ulong *)0x0) {
        puVar1 = puVar6 + 1;
        do {
          iVar10 = (int)*puVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *(int *)puVar1 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          puVar6[2] = 0;
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar8,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar7);
          }
          lVar12 = *(long *)puVar8;
          *(long *)puVar9 = lVar12;
          local_80 = (long *)*puVar6;
          FUN_02a44274(lVar12 + 0xd8,&local_80);
        }
      }
    } while (plVar21 != (long *)0x0);
  }
  lVar11 = nn::os::GetCurrentThread();
  plVar21 = (long *)(param_1 + 0x78);
  do {
    if (*plVar21 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar21 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar4) {
            *plVar21 = lVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0193ab5c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar4) {
      *plVar21 = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0193ab5c:
  (**(code **)(*param_2 + 0x20))(local_a8,param_2);
  local_b0 = 0;
  if (local_a8[0] != (ulong *)0x0) {
    local_b0 = *local_a8[0];
  }
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  FUN_008802f0(&local_c0,local_a8);
  local_98 = (ulong *)0x0;
  uStack_90 = 0;
  FUN_008802f0(&local_98,&local_c0);
  puVar18 = local_c0;
  local_88 = param_2;
  if (local_c0 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_c0 + 1);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_c0[2] = 0;
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)puVar8;
      *(long *)puVar9 = lVar11;
      local_80 = (long *)*puVar18;
      FUN_02a44274(lVar11 + 0xd8,&local_80);
    }
  }
  FUN_01940778(&local_80,plVar19,&local_b0,&local_98);
  plVar21 = local_80;
  iVar10 = (int)local_80[2];
  uVar14 = (ulong)iVar10;
  local_80[1] = uVar14;
  uVar13 = *(ulong *)(param_1 + 0x88);
  if (uVar13 != 0) {
    uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar13 - 1 & uVar14;
    }
    else {
      uVar16 = uVar14;
      if (uVar13 <= uVar14) {
        uVar16 = 0;
        if (uVar13 != 0) {
          uVar16 = uVar14 / uVar13;
        }
        uVar16 = uVar14 - uVar16 * uVar13;
      }
    }
    plVar17 = *(long **)(*plVar19 + uVar16 * 8);
    if (plVar17 != (long *)0x0) {
      if (uVar15 < 2) {
        do {
          plVar17 = (long *)*plVar17;
          if ((plVar17 == (long *)0x0) || ((plVar17[1] & uVar13 - 1) != uVar16)) goto LAB_0193ac14;
        } while ((int)plVar17[2] != iVar10);
      }
      else {
        do {
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) goto LAB_0193ac14;
          uVar15 = plVar17[1];
          if (uVar13 <= uVar15) {
            uVar5 = 0;
            if (uVar13 != 0) {
              uVar5 = uVar15 / uVar13;
            }
            uVar15 = uVar15 - uVar5 * uVar13;
          }
          if (uVar15 != uVar16) goto LAB_0193ac14;
        } while (*(int *)(plVar17 + 2) != iVar10);
      }
      local_80 = (long *)0x0;
      if (plVar21 != (long *)0x0) {
        if ((local_70 != '\0') && (puVar18 = (undefined8 *)plVar21[3], puVar18 != (undefined8 *)0x0)
           ) {
          piVar2 = (int *)(puVar18 + 1);
          do {
            iVar10 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            puVar18[2] = 0;
            if (((*puVar7 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)puVar8;
            *(long *)puVar9 = lVar11;
            local_68 = *puVar18;
            FUN_02a44274(lVar11 + 0xd8,&local_68);
          }
        }
        plVar19 = (long *)*local_78;
        uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
        if ((uVar13 & 1) != 0) {
          lVar11 = tpidr_el0;
          if (*(char *)(lVar11 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar11 + 0x38d488) = 1;
            *(undefined8 *)(lVar11 + 0x38d478) = 0;
            *(undefined8 *)(lVar11 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar11 + 0x38d480)) {
            FUN_02bcc824(plVar19,plVar21,0x30,8);
            goto LAB_0193acf8;
          }
        }
        (**(code **)(*plVar19 + 0x18))(plVar19,plVar21,0x30,8);
      }
      goto LAB_0193acf8;
    }
  }
LAB_0193ac14:
  fVar22 = (float)(*(long *)(param_1 + 0xd8) + 1);
  if ((uVar13 == 0) || (*(float *)(param_1 + 0xe0) * (float)uVar13 < fVar22)) {
    uVar13 = (ulong)(uVar13 < 3 || (uVar13 & uVar13 - 1) != 0) | uVar13 << 1;
    uVar14 = (ulong)(fVar22 / *(float *)(param_1 + 0xe0));
    if (uVar14 <= uVar13) {
      uVar14 = uVar13;
    }
    FUN_019408c8(plVar19,uVar14);
    uVar13 = *(ulong *)(param_1 + 0x88);
    uVar14 = plVar21[1];
  }
  uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
  uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar15 < 2) {
    uVar14 = uVar13 - 1 & uVar14;
  }
  else if (uVar13 <= uVar14) {
    uVar16 = 0;
    if (uVar13 != 0) {
      uVar16 = uVar14 / uVar13;
    }
    uVar14 = uVar14 - uVar16 * uVar13;
  }
  plVar17 = *(long **)(*plVar19 + uVar14 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = (long *)(param_1 + 0xb0);
    *plVar21 = *plVar17;
    *plVar17 = (long)plVar21;
    *(long **)(*(long *)(param_1 + 0x80) + uVar14 * 8) = plVar17;
    if (*plVar21 != 0) {
      uVar14 = *(ulong *)(*plVar21 + 8);
      if (uVar15 < 2) {
        uVar14 = uVar14 & uVar13 - 1;
      }
      else if (uVar13 <= uVar14) {
        uVar15 = 0;
        if (uVar13 != 0) {
          uVar15 = uVar14 / uVar13;
        }
        uVar14 = uVar14 - uVar15 * uVar13;
      }
      plVar17 = (long *)(*plVar19 + uVar14 * 8);
      goto LAB_0193af58;
    }
  }
  else {
    *plVar21 = *plVar17;
LAB_0193af58:
    *plVar17 = (long)plVar21;
  }
  *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
  local_80 = (long *)0x0;
LAB_0193acf8:
  puVar6 = local_98;
  uVar13 = local_b0;
  if (local_98 != (ulong *)0x0) {
    puVar1 = local_98 + 1;
    do {
      iVar10 = (int)*puVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *(int *)puVar1 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_98[2] = 0;
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)puVar8;
      *(long *)puVar9 = lVar11;
      local_80 = (long *)*puVar6;
      FUN_02a44274(lVar11 + 0xd8,&local_80);
    }
  }
  puVar6 = local_a8[0];
  if (local_a8[0] != (ulong *)0x0) {
    puVar1 = local_a8[0] + 1;
    do {
      iVar10 = (int)*puVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *(int *)puVar1 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_a8[0][2] = 0;
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)puVar8;
      *(long *)puVar9 = lVar11;
      local_80 = (long *)*puVar6;
      FUN_02a44274(lVar11 + 0xd8,&local_80);
    }
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
  return uVar13 & 0xffffffff;
}


