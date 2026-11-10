/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a7d65c; name: FUN_01a7d65c
 */


ulong FUN_01a7d65c(long param_1,long *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int *piVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  float fVar22;
  long *local_b8;
  undefined8 uStack_b0;
  ulong *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  ulong local_90;
  ulong *local_88 [2];
  long *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_58;
  
  puVar11 = PTR_LAB_04379590;
  puVar10 = PTR_DAT_043794a8;
  puVar9 = PTR_DAT_043794a0;
  puVar8 = PTR_DAT_04379498;
  plVar21 = *(long **)(param_1 + 0xb0);
  plVar20 = (long *)(param_1 + 0x80);
  while (plVar21 != (long *)0x0) {
    local_78 = (long *)0x0;
    local_70 = (undefined8 *)0x0;
    FUN_008802f0(&local_78,plVar21 + 3);
    local_68 = plVar21[5];
    if ((local_78 == (long *)0x0) || (*(int *)((long)local_78 + 0xc) == 0)) {
      plVar21 = (long *)FUN_01a6b3e4(plVar20,plVar21);
      plVar18 = local_78;
    }
    else {
      plVar21 = (long *)*plVar21;
      plVar18 = local_78;
    }
    local_78 = plVar18;
    if (plVar18 != (long *)0x0) {
      plVar4 = plVar18 + 1;
      do {
        iVar12 = (int)*plVar4 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *(int *)plVar4 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        plVar18[2] = 0;
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
          FUN_00100250(puVar11,puVar9,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar8);
        }
        lVar13 = *(long *)puVar9;
        *(long *)puVar10 = lVar13;
        local_a8 = (ulong *)*plVar18;
        FUN_02a44274(lVar13 + 0xd8,&local_a8);
      }
    }
  }
  lVar13 = nn::os::GetCurrentThread();
  plVar21 = (long *)(param_1 + 0x78);
  do {
    if (*plVar21 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar21 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar6) {
            *plVar21 = lVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01a7d6d8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar6) {
      *plVar21 = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01a7d6d8:
  (**(code **)(*param_2 + 0x20))(local_88,param_2);
  local_90 = 0;
  if (local_88[0] != (ulong *)0x0) {
    local_90 = *local_88[0];
  }
  local_b8 = (long *)0x0;
  uStack_b0 = 0;
  FUN_008802f0(&local_b8,local_88);
  local_a8 = (ulong *)0x0;
  uStack_a0 = 0;
  FUN_008802f0(&local_a8,&local_b8);
  plVar21 = local_b8;
  local_98 = param_2;
  if (local_b8 != (long *)0x0) {
    plVar18 = local_b8 + 1;
    do {
      iVar12 = (int)*plVar18 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      local_b8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_78 = (long *)*plVar21;
      FUN_02a44274(lVar13 + 0xd8,&local_78);
    }
  }
  FUN_01aa47bc(&local_78,plVar20,&local_90,&local_a8);
  plVar21 = local_78;
  iVar12 = (int)local_78[2];
  uVar15 = (ulong)iVar12;
  local_78[1] = uVar15;
  uVar14 = *(ulong *)(param_1 + 0x88);
  if (uVar14 != 0) {
    uVar16 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar14 - 1 & uVar15;
    }
    else {
      uVar17 = uVar15;
      if (uVar14 <= uVar15) {
        uVar17 = 0;
        if (uVar14 != 0) {
          uVar17 = uVar15 / uVar14;
        }
        uVar17 = uVar15 - uVar17 * uVar14;
      }
    }
    plVar18 = *(long **)(*plVar20 + uVar17 * 8);
    if (plVar18 != (long *)0x0) {
      if (uVar16 < 2) {
        do {
          plVar18 = (long *)*plVar18;
          if ((plVar18 == (long *)0x0) || ((plVar18[1] & uVar14 - 1) != uVar17)) goto LAB_01a7d7a8;
        } while (*(int *)(plVar18 + 2) != iVar12);
      }
      else {
        do {
          plVar18 = (long *)*plVar18;
          if (plVar18 == (long *)0x0) goto LAB_01a7d7a8;
          uVar16 = plVar18[1];
          if (uVar14 <= uVar16) {
            uVar7 = 0;
            if (uVar14 != 0) {
              uVar7 = uVar16 / uVar14;
            }
            uVar16 = uVar16 - uVar7 * uVar14;
          }
          if (uVar16 != uVar17) goto LAB_01a7d7a8;
        } while ((int)plVar18[2] != iVar12);
      }
      local_78 = (long *)0x0;
      if (plVar21 != (long *)0x0) {
        if (((char)local_68 != '\0') &&
           (puVar19 = (undefined8 *)plVar21[3], puVar19 != (undefined8 *)0x0)) {
          piVar3 = (int *)(puVar19 + 1);
          do {
            iVar12 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = iVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar12 + -1 == 0) {
            puVar19[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_58 = *puVar19;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
          }
        }
        plVar20 = (long *)*local_70;
        uVar14 = (**(code **)(*plVar20 + 0xc0))(plVar20);
        if ((uVar14 & 1) != 0) {
          lVar13 = tpidr_el0;
          if (*(char *)(lVar13 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar13 + 0x38d488) = 1;
            *(undefined8 *)(lVar13 + 0x38d478) = 0;
            *(undefined8 *)(lVar13 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar13 + 0x38d480)) {
            FUN_02bcc824(plVar20,plVar21,0x30,8);
            goto LAB_01a7d884;
          }
        }
        (**(code **)(*plVar20 + 0x18))(plVar20,plVar21,0x30,8);
      }
      goto LAB_01a7d884;
    }
  }
LAB_01a7d7a8:
  fVar22 = (float)(*(long *)(param_1 + 0xd8) + 1);
  if ((uVar14 == 0) || (*(float *)(param_1 + 0xe0) * (float)uVar14 < fVar22)) {
    uVar14 = (ulong)(uVar14 < 3 || (uVar14 & uVar14 - 1) != 0) | uVar14 << 1;
    uVar15 = (ulong)(fVar22 / *(float *)(param_1 + 0xe0));
    if (uVar15 <= uVar14) {
      uVar15 = uVar14;
    }
    FUN_01aa490c(plVar20,uVar15);
    uVar14 = *(ulong *)(param_1 + 0x88);
    uVar15 = plVar21[1];
  }
  uVar16 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar16 < 2) {
    uVar15 = uVar14 - 1 & uVar15;
  }
  else if (uVar14 <= uVar15) {
    uVar17 = 0;
    if (uVar14 != 0) {
      uVar17 = uVar15 / uVar14;
    }
    uVar15 = uVar15 - uVar17 * uVar14;
  }
  plVar18 = *(long **)(*plVar20 + uVar15 * 8);
  if (plVar18 == (long *)0x0) {
    plVar18 = (long *)(param_1 + 0xb0);
    *plVar21 = *plVar18;
    *plVar18 = (long)plVar21;
    *(long **)(*(long *)(param_1 + 0x80) + uVar15 * 8) = plVar18;
    if (*plVar21 != 0) {
      uVar15 = *(ulong *)(*plVar21 + 8);
      if (uVar16 < 2) {
        uVar15 = uVar15 & uVar14 - 1;
      }
      else if (uVar14 <= uVar15) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = uVar15 / uVar14;
        }
        uVar15 = uVar15 - uVar16 * uVar14;
      }
      plVar18 = (long *)(*plVar20 + uVar15 * 8);
      goto LAB_01a7dc0c;
    }
  }
  else {
    *plVar21 = *plVar18;
LAB_01a7dc0c:
    *plVar18 = (long)plVar21;
  }
  *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
  local_78 = (long *)0x0;
LAB_01a7d884:
  uVar14 = local_90;
  puVar2 = local_a8;
  if (local_a8 != (ulong *)0x0) {
    puVar1 = local_a8 + 1;
    do {
      iVar12 = (int)*puVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *(int *)puVar1 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_78 = (long *)*puVar2;
      FUN_02a44274(lVar13 + 0xd8,&local_78);
    }
  }
  if (local_88[0] != (ulong *)0x0) {
    puVar2 = local_88[0] + 1;
    do {
      iVar12 = (int)*puVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *(int *)puVar2 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      local_88[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_78 = (long *)*local_88[0];
      FUN_02a44274(lVar13 + 0xd8,&local_78);
    }
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
  return uVar14 & 0xffffffff;
}


