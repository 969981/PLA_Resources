/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b313b0; name: FUN_01b313b0
 */


ulong FUN_01b313b0(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  long *plVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  float fVar25;
  long *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 *local_88 [2];
  long *local_78;
  undefined8 *puStack_70;
  ulong local_68;
  
  uVar14 = *(ulong *)(param_1 + 0x27f8);
  if ((uVar14 == 0) || (*param_2 == 0)) {
    return uVar14;
  }
  plVar16 = (long *)(*param_2 + 0x68);
  plVar22 = *(long **)(uVar14 + 0xb0);
  plVar1 = (long *)(uVar14 + 0x80);
  if (plVar22 != (long *)0x0) {
    local_78 = (long *)0x0;
    puStack_70 = (undefined8 *)0x0;
    FUN_008802f0(&local_78,plVar22 + 3);
    local_68 = plVar22[5];
    if ((local_78 == (long *)0x0) || (*(int *)((long)local_78 + 0xc) == 0)) {
      plVar22 = (long *)FUN_01b36298(plVar1,plVar22);
    }
    else {
      plVar22 = (long *)*plVar22;
    }
    plVar7 = local_78;
    puVar11 = PTR_DAT_043794a8;
    puVar10 = PTR_DAT_043794a0;
    puVar9 = PTR_DAT_04379498;
    puVar8 = PTR_LAB_04379590;
    puVar12 = PTR_LAB_04379590;
    if (local_78 != (long *)0x0) {
      plVar3 = local_78 + 1;
      do {
        iVar13 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar13;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      puVar8 = PTR_LAB_04379590;
      puVar12 = PTR_LAB_04379590;
      if (iVar13 == 0) {
        local_78[2] = 0;
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar10;
        *(long *)puVar11 = lVar15;
        local_a0 = (undefined8 *)*plVar7;
        FUN_02a44274(lVar15 + 0xd8,&local_a0);
        puVar8 = PTR_LAB_04379590;
        puVar12 = PTR_LAB_04379590;
      }
    }
    while (PTR_LAB_04379590 = puVar12, puVar12 = PTR_LAB_04379590, PTR_LAB_04379590 = puVar8,
          plVar22 != (long *)0x0) {
      local_78 = (long *)0x0;
      puStack_70 = (undefined8 *)0x0;
      FUN_008802f0(&local_78,plVar22 + 3);
      local_68 = plVar22[5];
      if ((local_78 == (long *)0x0) || (*(int *)((long)local_78 + 0xc) == 0)) {
        plVar22 = (long *)FUN_01b36298(plVar1,plVar22);
        plVar7 = local_78;
      }
      else {
        plVar22 = (long *)*plVar22;
        plVar7 = local_78;
      }
      puVar8 = PTR_LAB_04379590;
      local_78 = plVar7;
      if (plVar7 != (long *)0x0) {
        plVar3 = plVar7 + 1;
        do {
          iVar13 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        puVar8 = PTR_LAB_04379590;
        if (iVar13 == 0) {
          plVar7[2] = 0;
          if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
            FUN_00100250(puVar12,puVar10,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar9);
          }
          lVar15 = *(long *)puVar10;
          *(long *)puVar11 = lVar15;
          local_a0 = (undefined8 *)*plVar7;
          FUN_02a44274(lVar15 + 0xd8,&local_a0);
          puVar8 = PTR_LAB_04379590;
        }
      }
    }
  }
  lVar15 = nn::os::GetCurrentThread();
  plVar22 = (long *)(uVar14 + 0x78);
  do {
    if (*plVar22 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(uVar14 + 0x6c));
        while (*plVar22 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar5) {
            *plVar22 = lVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01b31448;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar5) {
      *plVar22 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01b31448:
  (**(code **)(*plVar16 + 0x20))(local_88,plVar16);
  if (local_88[0] == (undefined8 *)0x0) {
    uVar21 = 0;
  }
  else {
    uVar21 = (uint)*local_88[0];
  }
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  FUN_008802f0(&local_b0,local_88);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_008802f0(&local_a0,&local_b0);
  plVar22 = local_b0;
  local_90 = plVar16;
  if (local_b0 != (long *)0x0) {
    plVar16 = local_b0 + 1;
    do {
      iVar13 = (int)*plVar16 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *(int *)plVar16 = iVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 == 0) {
      local_b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_78 = (long *)*plVar22;
      FUN_02a44274(lVar15 + 0xd8,&local_78);
    }
  }
  puVar23 = (undefined8 *)(uVar14 + 0xb8);
  plVar16 = (long *)(**(code **)(*(long *)*puVar23 + 0x10))((long *)*puVar23,0x30,8);
  if (plVar16 == (long *)0x0) {
    (**(code **)(*(long *)*puVar23 + 0xb8))();
  }
  local_68 = local_68 & 0xffffffffffffff00;
  uVar24 = *puVar23;
  local_78 = plVar16;
  puStack_70 = puVar23;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar13 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar15 != 0) {
    if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar24;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
  }
  plVar16[3] = 0;
  *(uint *)(plVar16 + 2) = uVar21;
  plVar16[4] = 0;
  FUN_008802f0(plVar16 + 3,&local_a0);
  plVar22 = local_78;
  plVar16[5] = (long)local_90;
  if (lVar15 != 0) {
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
  }
  local_68 = CONCAT71(local_68._1_7_,1);
  iVar13 = (int)local_78[2];
  uVar18 = (ulong)iVar13;
  *local_78 = 0;
  local_78[1] = uVar18;
  uVar17 = *(ulong *)(uVar14 + 0x88);
  if (uVar17 == 0) {
LAB_01b315f8:
    fVar25 = (float)(*(long *)(uVar14 + 0xd8) + 1);
    if ((uVar17 == 0) || (*(float *)(uVar14 + 0xe0) * (float)uVar17 < fVar25)) {
      uVar17 = (ulong)(uVar17 < 3 || (uVar17 & uVar17 - 1) != 0) | uVar17 << 1;
      uVar18 = (ulong)(fVar25 / *(float *)(uVar14 + 0xe0));
      if (uVar18 <= uVar17) {
        uVar18 = uVar17;
      }
      FUN_01b37f18(plVar1,uVar18);
      uVar17 = *(ulong *)(uVar14 + 0x88);
      uVar18 = plVar22[1];
    }
    uVar19 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar18 = uVar17 - 1 & uVar18;
    }
    else if (uVar17 <= uVar18) {
      uVar20 = 0;
      if (uVar17 != 0) {
        uVar20 = uVar18 / uVar17;
      }
      uVar18 = uVar18 - uVar20 * uVar17;
    }
    plVar16 = *(long **)(*plVar1 + uVar18 * 8);
    if (plVar16 == (long *)0x0) {
      plVar16 = (long *)(uVar14 + 0xb0);
      *plVar22 = *plVar16;
      *plVar16 = (long)plVar22;
      *(long **)(*(long *)(uVar14 + 0x80) + uVar18 * 8) = plVar16;
      if (*plVar22 != 0) {
        uVar18 = *(ulong *)(*plVar22 + 8);
        if (uVar19 < 2) {
          uVar18 = uVar18 & uVar17 - 1;
        }
        else if (uVar17 <= uVar18) {
          uVar19 = 0;
          if (uVar17 != 0) {
            uVar19 = uVar18 / uVar17;
          }
          uVar18 = uVar18 - uVar19 * uVar17;
        }
        plVar16 = (long *)(*plVar1 + uVar18 * 8);
        goto LAB_01b31998;
      }
    }
    else {
      *plVar22 = *plVar16;
LAB_01b31998:
      *plVar16 = (long)plVar22;
    }
    *(long *)(uVar14 + 0xd8) = *(long *)(uVar14 + 0xd8) + 1;
  }
  else {
    uVar19 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar20 = uVar17 - 1 & uVar18;
    }
    else {
      uVar20 = uVar18;
      if (uVar17 <= uVar18) {
        uVar20 = 0;
        if (uVar17 != 0) {
          uVar20 = uVar18 / uVar17;
        }
        uVar20 = uVar18 - uVar20 * uVar17;
      }
    }
    plVar16 = *(long **)(*plVar1 + uVar20 * 8);
    if (plVar16 == (long *)0x0) goto LAB_01b315f8;
    if (uVar19 < 2) {
      do {
        plVar16 = (long *)*plVar16;
        if ((plVar16 == (long *)0x0) || ((plVar16[1] & uVar17 - 1) != uVar20)) goto LAB_01b315f8;
      } while (*(int *)(plVar16 + 2) != iVar13);
    }
    else {
      do {
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) goto LAB_01b315f8;
        uVar19 = plVar16[1];
        if (uVar17 <= uVar19) {
          uVar6 = 0;
          if (uVar17 != 0) {
            uVar6 = uVar19 / uVar17;
          }
          uVar19 = uVar19 - uVar6 * uVar17;
        }
        if (uVar19 != uVar20) goto LAB_01b315f8;
      } while ((int)plVar16[2] != iVar13);
    }
    local_78 = (long *)0x0;
    if (plVar22 != (long *)0x0) {
      FUN_01b3645c(&puStack_70,plVar22);
      puVar23 = local_a0;
      goto joined_r0x01b3169c;
    }
  }
  local_78 = (long *)0x0;
  puVar23 = local_a0;
joined_r0x01b3169c:
  local_a0 = puVar23;
  if (puVar23 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar23 + 1);
    do {
      iVar13 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      puVar23[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_78 = (long *)*puVar23;
      FUN_02a44274(lVar15 + 0xd8,&local_78);
    }
  }
  if (local_88[0] != (undefined8 *)0x0) {
    piVar2 = (int *)(local_88[0] + 1);
    do {
      iVar13 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      local_88[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_78 = (long *)*local_88[0];
      FUN_02a44274(lVar15 + 0xd8,&local_78);
    }
  }
  *(undefined8 *)(uVar14 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(uVar14 + 0x6c));
  return (ulong)uVar21;
}


