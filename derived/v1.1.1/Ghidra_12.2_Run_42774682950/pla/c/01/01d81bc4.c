/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d81bc4; name: FUN_01d81bc4
 */


void FUN_01d81bc4(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int *piVar4;
  char cVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  bool bVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined4 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  float fVar26;
  long *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 *local_88 [2];
  long *local_78;
  undefined8 *puStack_70;
  ulong local_68;
  
  plVar21 = *(long **)(param_1 + 0xb0);
  plVar1 = (long *)(param_1 + 0x80);
  if (plVar21 != (long *)0x0) {
    local_78 = (long *)0x0;
    puStack_70 = (undefined8 *)0x0;
    FUN_008802f0(&local_78,plVar21 + 3);
    local_68 = plVar21[5];
    if ((local_78 == (long *)0x0) || (*(int *)((long)local_78 + 0xc) == 0)) {
      plVar21 = (long *)FUN_01d8e5d4(plVar1,plVar21);
      plVar3 = local_78;
    }
    else {
      plVar21 = (long *)*plVar21;
      plVar3 = local_78;
    }
    local_78 = plVar3;
    if (plVar3 != (long *)0x0) {
      plVar2 = plVar3 + 1;
      do {
        iVar16 = (int)*plVar2 + -1;
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar15) {
          *(int *)plVar2 = iVar16;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar16 == 0) {
        plVar3[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_a0 = (undefined8 *)*plVar3;
        FUN_02a44274(lVar17 + 0xd8,&local_a0);
      }
    }
    if (plVar21 != (long *)0x0) {
      local_78 = (long *)0x0;
      puStack_70 = (undefined8 *)0x0;
      FUN_008802f0(&local_78,plVar21 + 3);
      local_68 = plVar21[5];
      if ((local_78 == (long *)0x0) || (*(int *)((long)local_78 + 0xc) == 0)) {
        plVar21 = (long *)FUN_01d8e5d4(plVar1,plVar21);
        plVar3 = local_78;
      }
      else {
        plVar21 = (long *)*plVar21;
        plVar3 = local_78;
      }
      puVar7 = PTR_DAT_04379498;
      puVar8 = PTR_DAT_043794a0;
      puVar9 = PTR_DAT_043794a8;
      puVar10 = PTR_LAB_04379590;
      local_78 = plVar3;
      puVar11 = PTR_LAB_04379590;
      puVar12 = PTR_DAT_043794a8;
      puVar13 = PTR_DAT_043794a0;
      puVar14 = PTR_DAT_04379498;
      if (plVar3 != (long *)0x0) {
        plVar2 = plVar3 + 1;
        do {
          iVar16 = (int)*plVar2 + -1;
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar15) {
            *(int *)plVar2 = iVar16;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        puVar7 = PTR_DAT_04379498;
        puVar8 = PTR_DAT_043794a0;
        puVar9 = PTR_DAT_043794a8;
        puVar10 = PTR_LAB_04379590;
        puVar11 = PTR_LAB_04379590;
        puVar12 = PTR_DAT_043794a8;
        puVar13 = PTR_DAT_043794a0;
        puVar14 = PTR_DAT_04379498;
        if (iVar16 == 0) {
          plVar3[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_a0 = (undefined8 *)*plVar3;
          FUN_02a44274(lVar17 + 0xd8,&local_a0);
          puVar7 = PTR_DAT_04379498;
          puVar8 = PTR_DAT_043794a0;
          puVar9 = PTR_DAT_043794a8;
          puVar10 = PTR_LAB_04379590;
          puVar11 = PTR_LAB_04379590;
          puVar12 = PTR_DAT_043794a8;
          puVar13 = PTR_DAT_043794a0;
          puVar14 = PTR_DAT_04379498;
        }
      }
      while( true ) {
        PTR_DAT_04379498 = puVar14;
        PTR_DAT_043794a0 = puVar13;
        PTR_DAT_043794a8 = puVar12;
        PTR_LAB_04379590 = puVar11;
        puVar11 = PTR_LAB_04379590;
        puVar12 = PTR_DAT_043794a8;
        puVar13 = PTR_DAT_043794a0;
        puVar14 = PTR_DAT_04379498;
        PTR_DAT_04379498 = puVar7;
        PTR_DAT_043794a0 = puVar8;
        PTR_DAT_043794a8 = puVar9;
        PTR_LAB_04379590 = puVar10;
        if (plVar21 == (long *)0x0) break;
        local_78 = (long *)0x0;
        puStack_70 = (undefined8 *)0x0;
        FUN_008802f0(&local_78,plVar21 + 3);
        local_68 = plVar21[5];
        if ((local_78 == (long *)0x0) || (*(int *)((long)local_78 + 0xc) == 0)) {
          plVar21 = (long *)FUN_01d8e5d4(plVar1,plVar21);
          plVar3 = local_78;
        }
        else {
          plVar21 = (long *)*plVar21;
          plVar3 = local_78;
        }
        puVar7 = PTR_DAT_04379498;
        puVar8 = PTR_DAT_043794a0;
        puVar9 = PTR_DAT_043794a8;
        puVar10 = PTR_LAB_04379590;
        local_78 = plVar3;
        if (plVar3 != (long *)0x0) {
          plVar2 = plVar3 + 1;
          do {
            iVar16 = (int)*plVar2 + -1;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar15) {
              *(int *)plVar2 = iVar16;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          puVar7 = PTR_DAT_04379498;
          puVar8 = PTR_DAT_043794a0;
          puVar9 = PTR_DAT_043794a8;
          puVar10 = PTR_LAB_04379590;
          if (iVar16 == 0) {
            plVar3[2] = 0;
            if (((*puVar14 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar14), iVar16 != 0)) {
              FUN_00100250(puVar11,puVar13,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar14);
            }
            lVar17 = *(long *)puVar13;
            *(long *)puVar12 = lVar17;
            local_a0 = (undefined8 *)*plVar3;
            FUN_02a44274(lVar17 + 0xd8,&local_a0);
            puVar7 = PTR_DAT_04379498;
            puVar8 = PTR_DAT_043794a0;
            puVar9 = PTR_DAT_043794a8;
            puVar10 = PTR_LAB_04379590;
          }
        }
      }
    }
  }
  lVar17 = nn::os::GetCurrentThread();
  plVar21 = (long *)(param_1 + 0x78);
  do {
    if (*plVar21 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar21 == 0) {
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar15) {
            *plVar21 = lVar17;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01d81d68;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar15) {
      *plVar21 = lVar17;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01d81d68:
  (**(code **)(*param_2 + 0x20))(local_88,param_2);
  if (local_88[0] == (undefined8 *)0x0) {
    uVar23 = 0;
  }
  else {
    uVar23 = (undefined4)*local_88[0];
  }
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  FUN_008802f0(&local_b0,local_88);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_008802f0(&local_a0,&local_b0);
  plVar21 = local_b0;
  local_90 = param_2;
  if (local_b0 != (long *)0x0) {
    plVar3 = local_b0 + 1;
    do {
      iVar16 = (int)*plVar3 + -1;
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar15) {
        *(int *)plVar3 = iVar16;
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
      local_78 = (long *)*plVar21;
      FUN_02a44274(lVar17 + 0xd8,&local_78);
    }
  }
  puVar22 = (undefined8 *)(param_1 + 0xb8);
  plVar21 = (long *)(**(code **)(*(long *)*puVar22 + 0x10))((long *)*puVar22,0x30,8);
  if (plVar21 == (long *)0x0) {
    (**(code **)(*(long *)*puVar22 + 0xb8))();
  }
  local_68 = local_68 & 0xffffffffffffff00;
  uVar25 = *puVar22;
  local_78 = plVar21;
  puStack_70 = puVar22;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar16 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar7 = PTR_DAT_04379528;
    if (iVar16 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar17 != 0) {
    if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar25;
    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
  }
  plVar21[3] = 0;
  *(undefined4 *)(plVar21 + 2) = uVar23;
  plVar21[4] = 0;
  FUN_008802f0(plVar21 + 3,&local_a0);
  plVar3 = local_78;
  plVar21[5] = (long)local_90;
  if (lVar17 != 0) {
    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
  }
  local_68 = CONCAT71(local_68._1_7_,1);
  iVar16 = (int)local_78[2];
  uVar18 = (ulong)iVar16;
  *local_78 = 0;
  local_78[1] = uVar18;
  uVar24 = *(ulong *)(param_1 + 0x88);
  if (uVar24 == 0) {
LAB_01d8205c:
    fVar26 = (float)(*(long *)(param_1 + 0xd8) + 1);
    if ((uVar24 == 0) || (*(float *)(param_1 + 0xe0) * (float)uVar24 < fVar26)) {
      uVar18 = (ulong)(uVar24 < 3 || (uVar24 & uVar24 - 1) != 0) | uVar24 << 1;
      uVar20 = (ulong)(fVar26 / *(float *)(param_1 + 0xe0));
      if (uVar20 <= uVar18) {
        uVar20 = uVar18;
      }
      if (uVar20 - 1 == 0) {
        uVar20 = 2;
        bVar15 = uVar24 < 3;
        uVar18 = uVar20;
        if (1 < uVar24) goto LAB_01d822d0;
LAB_01d82298:
        FUN_01d8e96c(plVar1,uVar20);
      }
      else {
        if ((uVar20 & uVar20 - 1) != 0) {
          uVar20 = std::__next_prime(uVar20);
          uVar24 = *(ulong *)(param_1 + 0x88);
        }
        bVar15 = uVar24 <= uVar20;
        uVar18 = uVar20;
        if (uVar24 < uVar20) goto LAB_01d82298;
LAB_01d822d0:
        if (!bVar15) {
          uVar20 = (ulong)((float)*(ulong *)(param_1 + 0xd8) / *(float *)(param_1 + 0xe0));
          if ((uVar24 < 3) ||
             (uVar19 = uVar24 - (uVar24 >> 1 & 0x5555555555555555),
             uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333),
             1 < (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
            uVar20 = std::__next_prime(uVar20);
          }
          else if (1 < uVar20) {
            uVar20 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar20 - 1) & 0x3f);
          }
          if (uVar20 <= uVar18) {
            uVar20 = uVar18;
          }
          if (uVar20 < uVar24) goto LAB_01d82298;
        }
      }
      uVar24 = *(ulong *)(param_1 + 0x88);
      uVar18 = plVar3[1];
    }
    uVar20 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar18 = uVar24 - 1 & uVar18;
    }
    else if (uVar24 <= uVar18) {
      uVar19 = 0;
      if (uVar24 != 0) {
        uVar19 = uVar18 / uVar24;
      }
      uVar18 = uVar18 - uVar19 * uVar24;
    }
    plVar21 = *(long **)(*plVar1 + uVar18 * 8);
    if (plVar21 == (long *)0x0) {
      plVar21 = (long *)(param_1 + 0xb0);
      *plVar3 = *plVar21;
      *plVar21 = (long)plVar3;
      *(long **)(*(long *)(param_1 + 0x80) + uVar18 * 8) = plVar21;
      if (*plVar3 != 0) {
        uVar18 = *(ulong *)(*plVar3 + 8);
        if (uVar20 < 2) {
          uVar18 = uVar18 & uVar24 - 1;
        }
        else if (uVar24 <= uVar18) {
          uVar20 = 0;
          if (uVar24 != 0) {
            uVar20 = uVar18 / uVar24;
          }
          uVar18 = uVar18 - uVar20 * uVar24;
        }
        plVar21 = (long *)(*plVar1 + uVar18 * 8);
        goto LAB_01d82108;
      }
    }
    else {
      *plVar3 = *plVar21;
LAB_01d82108:
      *plVar21 = (long)plVar3;
    }
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
  }
  else {
    uVar20 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar19 = uVar24 - 1 & uVar18;
    }
    else {
      uVar19 = uVar18;
      if (uVar24 <= uVar18) {
        uVar19 = 0;
        if (uVar24 != 0) {
          uVar19 = uVar18 / uVar24;
        }
        uVar19 = uVar18 - uVar19 * uVar24;
      }
    }
    plVar21 = *(long **)(*plVar1 + uVar19 * 8);
    if (plVar21 == (long *)0x0) goto LAB_01d8205c;
    if (uVar20 < 2) {
      do {
        plVar21 = (long *)*plVar21;
        if ((plVar21 == (long *)0x0) || ((plVar21[1] & uVar24 - 1) != uVar19)) goto LAB_01d8205c;
      } while (*(int *)(plVar21 + 2) != iVar16);
    }
    else {
      do {
        plVar21 = (long *)*plVar21;
        if (plVar21 == (long *)0x0) goto LAB_01d8205c;
        uVar20 = plVar21[1];
        if (uVar24 <= uVar20) {
          uVar6 = 0;
          if (uVar24 != 0) {
            uVar6 = uVar20 / uVar24;
          }
          uVar20 = uVar20 - uVar6 * uVar24;
        }
        if (uVar20 != uVar19) goto LAB_01d8205c;
      } while ((int)plVar21[2] != iVar16);
    }
    local_78 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      FUN_01d8e790(&puStack_70,plVar3);
      puVar22 = local_a0;
      goto joined_r0x01d82120;
    }
  }
  local_78 = (long *)0x0;
  puVar22 = local_a0;
joined_r0x01d82120:
  local_a0 = puVar22;
  if (puVar22 != (undefined8 *)0x0) {
    piVar4 = (int *)(puVar22 + 1);
    do {
      iVar16 = *piVar4;
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar15) {
        *piVar4 = iVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar16 + -1 == 0) {
      puVar22[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_78 = (long *)*puVar22;
      FUN_02a44274(lVar17 + 0xd8,&local_78);
    }
  }
  if (local_88[0] != (undefined8 *)0x0) {
    piVar4 = (int *)(local_88[0] + 1);
    do {
      iVar16 = *piVar4;
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar15) {
        *piVar4 = iVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar16 + -1 == 0) {
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
  return;
}


