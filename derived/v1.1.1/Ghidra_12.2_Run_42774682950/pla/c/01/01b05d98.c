/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b05d98; name: FUN_01b05d98
 */


ulong FUN_01b05d98(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  ulong *puVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  float fVar24;
  long *local_b0;
  undefined8 uStack_a8;
  ulong *local_a0;
  undefined8 uStack_98;
  long *local_90;
  ulong *local_88 [2];
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  ulong local_58;
  
  plVar23 = *(long **)(param_1 + 0xb0);
  plVar1 = (long *)(param_1 + 0x80);
  if (plVar23 != (long *)0x0) {
    local_78 = (long *)0x0;
    uStack_70 = 0;
    FUN_008802f0(&local_78,plVar23 + 3);
    local_68 = plVar23[5];
    if ((local_78 == (long *)0x0) || (*(int *)((long)local_78 + 0xc) == 0)) {
      plVar23 = (long *)FUN_01b23c1c(plVar1,plVar23);
      plVar22 = local_78;
    }
    else {
      plVar23 = (long *)*plVar23;
      plVar22 = local_78;
    }
    local_78 = plVar22;
    if (plVar22 != (long *)0x0) {
      plVar2 = plVar22 + 1;
      do {
        iVar16 = (int)*plVar2 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar16;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar16 == 0) {
        plVar22[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_a0 = (ulong *)*plVar22;
        FUN_02a44274(lVar17 + 0xd8,&local_a0);
      }
    }
    if (plVar23 != (long *)0x0) {
      local_78 = (long *)0x0;
      uStack_70 = 0;
      FUN_008802f0(&local_78,plVar23 + 3);
      local_68 = plVar23[5];
      if ((local_78 == (long *)0x0) || (*(int *)((long)local_78 + 0xc) == 0)) {
        plVar23 = (long *)FUN_01b23c1c(plVar1,plVar23);
        plVar22 = local_78;
      }
      else {
        plVar23 = (long *)*plVar23;
        plVar22 = local_78;
      }
      puVar8 = PTR_DAT_04379498;
      puVar9 = PTR_DAT_043794a0;
      puVar10 = PTR_DAT_043794a8;
      puVar11 = PTR_LAB_04379590;
      local_78 = plVar22;
      puVar12 = PTR_LAB_04379590;
      puVar13 = PTR_DAT_043794a8;
      puVar14 = PTR_DAT_043794a0;
      puVar15 = PTR_DAT_04379498;
      if (plVar22 != (long *)0x0) {
        plVar2 = plVar22 + 1;
        do {
          iVar16 = (int)*plVar2 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar16;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        puVar8 = PTR_DAT_04379498;
        puVar9 = PTR_DAT_043794a0;
        puVar10 = PTR_DAT_043794a8;
        puVar11 = PTR_LAB_04379590;
        puVar12 = PTR_LAB_04379590;
        puVar13 = PTR_DAT_043794a8;
        puVar14 = PTR_DAT_043794a0;
        puVar15 = PTR_DAT_04379498;
        if (iVar16 == 0) {
          plVar22[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_a0 = (ulong *)*plVar22;
          FUN_02a44274(lVar17 + 0xd8,&local_a0);
          puVar8 = PTR_DAT_04379498;
          puVar9 = PTR_DAT_043794a0;
          puVar10 = PTR_DAT_043794a8;
          puVar11 = PTR_LAB_04379590;
          puVar12 = PTR_LAB_04379590;
          puVar13 = PTR_DAT_043794a8;
          puVar14 = PTR_DAT_043794a0;
          puVar15 = PTR_DAT_04379498;
        }
      }
      while (PTR_DAT_04379498 = puVar15, PTR_DAT_043794a0 = puVar14, PTR_DAT_043794a8 = puVar13,
            PTR_LAB_04379590 = puVar12, puVar12 = PTR_LAB_04379590, puVar13 = PTR_DAT_043794a8,
            puVar14 = PTR_DAT_043794a0, puVar15 = PTR_DAT_04379498, PTR_DAT_04379498 = puVar8,
            PTR_DAT_043794a0 = puVar9, PTR_DAT_043794a8 = puVar10, PTR_LAB_04379590 = puVar11,
            plVar23 != (long *)0x0) {
        local_78 = (long *)0x0;
        uStack_70 = 0;
        FUN_008802f0(&local_78,plVar23 + 3);
        local_68 = plVar23[5];
        if ((local_78 == (long *)0x0) || (*(int *)((long)local_78 + 0xc) == 0)) {
          plVar23 = (long *)FUN_01b23c1c(plVar1,plVar23);
          plVar22 = local_78;
        }
        else {
          plVar23 = (long *)*plVar23;
          plVar22 = local_78;
        }
        puVar8 = PTR_DAT_04379498;
        puVar9 = PTR_DAT_043794a0;
        puVar10 = PTR_DAT_043794a8;
        puVar11 = PTR_LAB_04379590;
        local_78 = plVar22;
        if (plVar22 != (long *)0x0) {
          plVar2 = plVar22 + 1;
          do {
            iVar16 = (int)*plVar2 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = iVar16;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          puVar8 = PTR_DAT_04379498;
          puVar9 = PTR_DAT_043794a0;
          puVar10 = PTR_DAT_043794a8;
          puVar11 = PTR_LAB_04379590;
          if (iVar16 == 0) {
            plVar22[2] = 0;
            if (((*puVar15 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar15), iVar16 != 0)) {
              FUN_00100250(puVar12,puVar14,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar15);
            }
            lVar17 = *(long *)puVar14;
            *(long *)puVar13 = lVar17;
            local_a0 = (ulong *)*plVar22;
            FUN_02a44274(lVar17 + 0xd8,&local_a0);
            puVar8 = PTR_DAT_04379498;
            puVar9 = PTR_DAT_043794a0;
            puVar10 = PTR_DAT_043794a8;
            puVar11 = PTR_LAB_04379590;
          }
        }
      }
    }
  }
  lVar17 = nn::os::GetCurrentThread();
  plVar23 = (long *)(param_1 + 0x78);
  do {
    if (*plVar23 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar23 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *plVar23 = lVar17;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01b05f3c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar6) {
      *plVar23 = lVar17;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01b05f3c:
  (**(code **)(*param_2 + 0x20))(local_88,param_2);
  local_58 = 0;
  if (local_88[0] != (ulong *)0x0) {
    local_58 = *local_88[0];
  }
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  FUN_008802f0(&local_b0,local_88);
  local_a0 = (ulong *)0x0;
  uStack_98 = 0;
  FUN_008802f0(&local_a0,&local_b0);
  plVar23 = local_b0;
  local_90 = param_2;
  if (local_b0 != (long *)0x0) {
    plVar22 = local_b0 + 1;
    do {
      iVar16 = (int)*plVar22 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = iVar16;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar16 == 0) {
      local_b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_78 = (long *)*plVar23;
      FUN_02a44274(lVar17 + 0xd8,&local_78);
    }
  }
  FUN_01b23fb4(&local_78,plVar1,&local_58,&local_a0);
  plVar23 = local_78;
  iVar16 = (int)local_78[2];
  uVar19 = (ulong)iVar16;
  local_78[1] = uVar19;
  uVar18 = *(ulong *)(param_1 + 0x88);
  if (uVar18 != 0) {
    uVar20 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar21 = uVar18 - 1 & uVar19;
    }
    else {
      uVar21 = uVar19;
      if (uVar18 <= uVar19) {
        uVar21 = 0;
        if (uVar18 != 0) {
          uVar21 = uVar19 / uVar18;
        }
        uVar21 = uVar19 - uVar21 * uVar18;
      }
    }
    plVar22 = *(long **)(*plVar1 + uVar21 * 8);
    if (plVar22 != (long *)0x0) {
      if (uVar20 < 2) {
        do {
          plVar22 = (long *)*plVar22;
          if ((plVar22 == (long *)0x0) || ((plVar22[1] & uVar18 - 1) != uVar21)) goto LAB_01b06198;
        } while ((int)plVar22[2] != iVar16);
      }
      else {
        do {
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) goto LAB_01b06198;
          uVar20 = plVar22[1];
          if (uVar18 <= uVar20) {
            uVar7 = 0;
            if (uVar18 != 0) {
              uVar7 = uVar20 / uVar18;
            }
            uVar20 = uVar20 - uVar7 * uVar18;
          }
          if (uVar20 != uVar21) goto LAB_01b06198;
        } while (*(int *)(plVar22 + 2) != iVar16);
      }
      local_78 = (long *)0x0;
      if (plVar23 != (long *)0x0) {
        FUN_01b23dd8(&uStack_70,plVar23);
      }
      goto LAB_01b062a4;
    }
  }
LAB_01b06198:
  fVar24 = (float)(*(long *)(param_1 + 0xd8) + 1);
  if ((uVar18 == 0) || (*(float *)(param_1 + 0xe0) * (float)uVar18 < fVar24)) {
    uVar18 = (ulong)(uVar18 < 3 || (uVar18 & uVar18 - 1) != 0) | uVar18 << 1;
    uVar19 = (ulong)(fVar24 / *(float *)(param_1 + 0xe0));
    if (uVar19 <= uVar18) {
      uVar19 = uVar18;
    }
    FUN_01b24104(plVar1,uVar19);
    uVar18 = *(ulong *)(param_1 + 0x88);
    uVar19 = plVar23[1];
  }
  uVar20 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
  uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
  uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar20 < 2) {
    uVar19 = uVar18 - 1 & uVar19;
  }
  else if (uVar18 <= uVar19) {
    uVar21 = 0;
    if (uVar18 != 0) {
      uVar21 = uVar19 / uVar18;
    }
    uVar19 = uVar19 - uVar21 * uVar18;
  }
  plVar22 = *(long **)(*plVar1 + uVar19 * 8);
  if (plVar22 == (long *)0x0) {
    plVar22 = (long *)(param_1 + 0xb0);
    *plVar23 = *plVar22;
    *plVar22 = (long)plVar23;
    *(long **)(*(long *)(param_1 + 0x80) + uVar19 * 8) = plVar22;
    if (*plVar23 != 0) {
      uVar19 = *(ulong *)(*plVar23 + 8);
      if (uVar20 < 2) {
        uVar19 = uVar19 & uVar18 - 1;
      }
      else if (uVar18 <= uVar19) {
        uVar20 = 0;
        if (uVar18 != 0) {
          uVar20 = uVar19 / uVar18;
        }
        uVar19 = uVar19 - uVar20 * uVar18;
      }
      plVar22 = (long *)(*plVar1 + uVar19 * 8);
      goto LAB_01b06290;
    }
  }
  else {
    *plVar23 = *plVar22;
LAB_01b06290:
    *plVar22 = (long)plVar23;
  }
  *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
  local_78 = (long *)0x0;
LAB_01b062a4:
  uVar18 = local_58;
  puVar4 = local_a0;
  if (local_a0 != (ulong *)0x0) {
    puVar3 = local_a0 + 1;
    do {
      iVar16 = (int)*puVar3 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar6) {
        *(int *)puVar3 = iVar16;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar16 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_78 = (long *)*puVar4;
      FUN_02a44274(lVar17 + 0xd8,&local_78);
    }
  }
  if (local_88[0] != (ulong *)0x0) {
    puVar4 = local_88[0] + 1;
    do {
      iVar16 = (int)*puVar4 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar6) {
        *(int *)puVar4 = iVar16;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar16 == 0) {
      local_88[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_78 = (long *)*local_88[0];
      FUN_02a44274(lVar17 + 0xd8,&local_78);
    }
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
  return uVar18 & 0xffffffff;
}


