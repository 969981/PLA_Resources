/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c363fc; name: FUN_01c363fc
 */


void FUN_01c363fc(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  char cVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 uVar21;
  float fVar22;
  long *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 *local_88 [2];
  long *local_78;
  undefined8 *puStack_70;
  ulong local_68;
  
  puVar10 = PTR_LAB_04379590;
  puVar9 = PTR_DAT_043794a8;
  puVar8 = PTR_DAT_043794a0;
  puVar7 = PTR_DAT_04379498;
  plVar19 = *(long **)(param_1 + 0xb0);
  plVar1 = (long *)(param_1 + 0x80);
  while (plVar19 != (long *)0x0) {
    local_78 = (long *)0x0;
    puStack_70 = (undefined8 *)0x0;
    FUN_008802f0(&local_78,plVar19 + 3);
    local_68 = plVar19[5];
    if ((local_78 == (long *)0x0) || (uVar14 = FUN_02a43a8c(), (uVar14 & 1) != 0)) {
      plVar19 = (long *)FUN_0184077c(plVar1,plVar19);
      plVar2 = local_78;
    }
    else {
      plVar19 = (long *)*plVar19;
      plVar2 = local_78;
    }
    local_78 = plVar2;
    if (plVar2 != (long *)0x0) {
      plVar4 = plVar2 + 1;
      do {
        iVar12 = (int)*plVar4 + -1;
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar11) {
          *(int *)plVar4 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        plVar2[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
          FUN_00100250(puVar10,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar7);
        }
        lVar13 = *(long *)puVar8;
        *(long *)puVar9 = lVar13;
        local_a0 = (undefined8 *)*plVar2;
        FUN_02a44274(lVar13 + 0xd8,&local_a0);
      }
    }
  }
  lVar13 = nn::os::GetCurrentThread();
  plVar19 = (long *)(param_1 + 0x78);
  do {
    if (*plVar19 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar19 == 0) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar11) {
            *plVar19 = lVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01c36478;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar11) {
      *plVar19 = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01c36478:
  (**(code **)(*param_2 + 0x20))(local_88,param_2);
  if (local_88[0] == (undefined8 *)0x0) {
    uVar18 = 0;
  }
  else {
    uVar18 = (undefined4)*local_88[0];
  }
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  FUN_008802f0(&local_b0,local_88);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_008802f0(&local_a0,&local_b0);
  plVar19 = local_b0;
  local_90 = param_2;
  if (local_b0 != (long *)0x0) {
    plVar2 = local_b0 + 1;
    do {
      iVar12 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *(int *)plVar2 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      local_b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_78 = (long *)*plVar19;
      FUN_02a44274(lVar13 + 0xd8,&local_78);
    }
  }
  puVar17 = (undefined8 *)(param_1 + 0xb8);
  plVar19 = (long *)(**(code **)(*(long *)*puVar17 + 0x10))((long *)*puVar17,0x30,8);
  if (plVar19 == (long *)0x0) {
    (**(code **)(*(long *)*puVar17 + 0xb8))();
  }
  local_68 = local_68 & 0xffffffffffffff00;
  uVar21 = *puVar17;
  local_78 = plVar19;
  puStack_70 = puVar17;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar12 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar7 = PTR_DAT_04379528;
    if (iVar12 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar13 != 0) {
    if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar21;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  }
  plVar19[3] = 0;
  *(undefined4 *)(plVar19 + 2) = uVar18;
  plVar19[4] = 0;
  FUN_008802f0(plVar19 + 3,&local_a0);
  plVar2 = local_78;
  plVar19[5] = (long)local_90;
  if (lVar13 != 0) {
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  }
  local_68 = CONCAT71(local_68._1_7_,1);
  iVar12 = (int)local_78[2];
  uVar14 = (ulong)iVar12;
  *local_78 = 0;
  local_78[1] = uVar14;
  uVar20 = *(ulong *)(param_1 + 0x88);
  if (uVar20 == 0) {
LAB_01c365dc:
    fVar22 = (float)(*(long *)(param_1 + 0xd8) + 1);
    if ((uVar20 == 0) || (*(float *)(param_1 + 0xe0) * (float)uVar20 < fVar22)) {
      uVar14 = (ulong)(uVar20 < 3 || (uVar20 & uVar20 - 1) != 0) | uVar20 << 1;
      uVar16 = (ulong)(fVar22 / *(float *)(param_1 + 0xe0));
      if (uVar16 <= uVar14) {
        uVar16 = uVar14;
      }
      if (uVar16 - 1 == 0) {
        uVar16 = 2;
LAB_01c36638:
        bVar11 = uVar20 <= uVar16;
        uVar14 = uVar16;
        if (uVar20 < uVar16) goto LAB_01c36648;
LAB_01c36978:
        if (!bVar11) {
          uVar14 = (ulong)((float)*(ulong *)(param_1 + 0xd8) / *(float *)(param_1 + 0xe0));
          if ((uVar20 < 3) ||
             (uVar15 = uVar20 - (uVar20 >> 1 & 0x5555555555555555),
             uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333),
             1 < (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
            uVar14 = std::__next_prime(uVar14);
          }
          else if (1 < uVar14) {
            uVar14 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar14 - 1) & 0x3f);
          }
          if (uVar14 <= uVar16) {
            uVar14 = uVar16;
          }
          if (uVar14 < uVar20) goto LAB_01c36648;
        }
      }
      else {
        if ((uVar16 & uVar16 - 1) == 0) goto LAB_01c36638;
        uVar16 = std::__next_prime(uVar16);
        uVar20 = *(ulong *)(param_1 + 0x88);
        bVar11 = uVar20 <= uVar16;
        uVar14 = uVar16;
        if (uVar16 <= uVar20) goto LAB_01c36978;
LAB_01c36648:
        FUN_01c38464(plVar1,uVar14);
      }
      uVar20 = *(ulong *)(param_1 + 0x88);
      uVar14 = plVar2[1];
    }
    uVar16 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar14 = uVar20 - 1 & uVar14;
    }
    else if (uVar20 <= uVar14) {
      uVar15 = 0;
      if (uVar20 != 0) {
        uVar15 = uVar14 / uVar20;
      }
      uVar14 = uVar14 - uVar15 * uVar20;
    }
    plVar19 = *(long **)(*plVar1 + uVar14 * 8);
    if (plVar19 == (long *)0x0) {
      plVar19 = (long *)(param_1 + 0xb0);
      *plVar2 = *plVar19;
      *plVar19 = (long)plVar2;
      *(long **)(*(long *)(param_1 + 0x80) + uVar14 * 8) = plVar19;
      if (*plVar2 != 0) {
        uVar14 = *(ulong *)(*plVar2 + 8);
        if (uVar16 < 2) {
          uVar14 = uVar14 & uVar20 - 1;
        }
        else if (uVar20 <= uVar14) {
          uVar16 = 0;
          if (uVar20 != 0) {
            uVar16 = uVar14 / uVar20;
          }
          uVar14 = uVar14 - uVar16 * uVar20;
        }
        plVar19 = (long *)(*plVar1 + uVar14 * 8);
        goto LAB_01c36a0c;
      }
    }
    else {
      *plVar2 = *plVar19;
LAB_01c36a0c:
      *plVar19 = (long)plVar2;
    }
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
  }
  else {
    uVar16 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar15 = uVar20 - 1 & uVar14;
    }
    else {
      uVar15 = uVar14;
      if (uVar20 <= uVar14) {
        uVar15 = 0;
        if (uVar20 != 0) {
          uVar15 = uVar14 / uVar20;
        }
        uVar15 = uVar14 - uVar15 * uVar20;
      }
    }
    plVar19 = *(long **)(*plVar1 + uVar15 * 8);
    if (plVar19 == (long *)0x0) goto LAB_01c365dc;
    if (uVar16 < 2) {
      do {
        plVar19 = (long *)*plVar19;
        if ((plVar19 == (long *)0x0) || ((plVar19[1] & uVar20 - 1) != uVar15)) goto LAB_01c365dc;
      } while (*(int *)(plVar19 + 2) != iVar12);
    }
    else {
      do {
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) goto LAB_01c365dc;
        uVar16 = plVar19[1];
        if (uVar20 <= uVar16) {
          uVar6 = 0;
          if (uVar20 != 0) {
            uVar6 = uVar16 / uVar20;
          }
          uVar16 = uVar16 - uVar6 * uVar20;
        }
        if (uVar16 != uVar15) goto LAB_01c365dc;
      } while ((int)plVar19[2] != iVar12);
    }
    local_78 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      FUN_01c38288(&puStack_70,plVar2);
      puVar17 = local_a0;
      goto joined_r0x01c36930;
    }
  }
  local_78 = (long *)0x0;
  puVar17 = local_a0;
joined_r0x01c36930:
  local_a0 = puVar17;
  if (puVar17 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar17 + 1);
    do {
      iVar12 = *piVar3;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar11) {
        *piVar3 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_78 = (long *)*puVar17;
      FUN_02a44274(lVar13 + 0xd8,&local_78);
    }
  }
  if (local_88[0] != (undefined8 *)0x0) {
    piVar3 = (int *)(local_88[0] + 1);
    do {
      iVar12 = *piVar3;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar11) {
        *piVar3 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
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
  return;
}


