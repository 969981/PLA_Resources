/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c142b4; name: FUN_01c142b4
 */


void FUN_01c142b4(long *param_1,undefined8 *param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  long *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  char cVar5;
  char cVar6;
  undefined1 auVar7 [16];
  byte *pbVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  undefined2 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  long *local_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 local_120;
  ulong uStack_118;
  undefined4 local_110;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined4 local_c0;
  long *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  ulong uStack_88;
  undefined4 local_80;
  long local_70 [2];
  
  piVar16 = (int *)FUN_01e4b314(param_2,param_3);
  puVar10 = PTR_DAT_0437a258;
  puVar9 = PTR_DAT_0437a250;
  if (piVar16 == (int *)0x0) {
    return;
  }
  if (*(long *)(piVar16 + 2) == 0) {
    return;
  }
  if (*(int *)(*(long *)(piVar16 + 2) + 0xc) == 0) {
    return;
  }
  lVar20 = *(long *)(piVar16 + 2);
  if ((lVar20 != 0) && (*(int *)(lVar20 + 0xc) != 0)) {
    piVar3 = (int *)(lVar20 + 0xc);
    iVar13 = *(int *)(lVar20 + 0xc);
    do {
      plVar17 = *(long **)(lVar20 + 0x10);
      if (((*puVar9 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar9), iVar15 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar15 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar15 != 0)) {
            uVar22 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar22;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar10 = PTR_DAT_043795e0;
        __cxa_guard_release(puVar9);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) goto LAB_01c14330;
        if (plVar17 == (long *)puVar10) break;
        plVar17 = (long *)*plVar17;
      }
      iVar15 = *piVar3;
      if (iVar15 == iVar13) {
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = iVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar20 = *(long *)(lVar20 + 0x18);
          if (lVar20 != 0) {
            lVar21 = *(long *)(lVar20 + 8);
            piVar3 = (int *)(lVar21 + 0xc);
            cVar5 = *(char *)(lVar20 + 0x1b0);
            do {
              iVar13 = *piVar3;
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar11) {
                *piVar3 = iVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar11 = iVar13 == 1;
            if (bVar11) {
              *(undefined8 *)(lVar21 + 0x18) = 0;
            }
            if (cVar5 != '\0') {
              if (bVar11) {
                    /* WARNING: Could not recover jumptable at 0x01c14a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*(long *)(lVar20 + -0x50) + 0x20))();
                return;
              }
              return;
            }
            if (bVar11) {
              (**(code **)(*(long *)(lVar20 + -0x50) + 0x20))();
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar15;
    } while (iVar15 != 0);
  }
LAB_01c14330:
  if (*piVar16 != 0xc) {
    return;
  }
  plVar17 = *(long **)*param_2;
  puVar4 = (undefined8 *)(*param_3 + 0x10);
  if (*(int *)((undefined8 *)*param_2 + 4) != 0) {
    puVar4 = (undefined8 *)(*param_3 + 8);
  }
  uVar22 = *puVar4;
  iVar13 = (**(code **)(*plVar17 + 0xf8))(plVar17,uVar22);
  if (iVar13 == 0) {
    return;
  }
  lVar20 = (**(code **)(**(long **)*param_2 + 0x180))(*(long **)*param_2,uVar22);
  if (param_1[0x4a] == 0) {
    return;
  }
  if (*(long *)(piVar16 + 6) == 0) {
    return;
  }
  pauVar1 = (undefined1 (*) [16])(lVar20 + 0x30);
  uVar22 = *(undefined8 *)*pauVar1;
  auVar7 = *pauVar1;
  auVar23 = *pauVar1;
  FUN_01b7e59c(&local_b0,*(long *)(piVar16 + 6));
  plVar17 = local_b0;
  if (local_b0 == (long *)0x0) {
    return;
  }
  plVar18 = (long *)(**(code **)local_b0[10])(local_b0 + 10);
  pbVar8 = PTR_DAT_0437a670;
  puVar4 = (undefined8 *)PTR_DAT_0437a678;
  if (((*PTR_DAT_0437ae88 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_0437ae88), pbVar8 = PTR_DAT_0437a670,
     puVar4 = (undefined8 *)PTR_DAT_0437a678, iVar13 != 0)) {
    if (((*PTR_DAT_043795d8 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar13 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
        uVar19 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar19;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_043795d8);
    }
    *(undefined **)PTR_DAT_0437ae90 = PTR_DAT_043795e0;
    __cxa_guard_release(PTR_DAT_0437ae88);
    pbVar8 = PTR_DAT_0437a670;
    puVar4 = (undefined8 *)PTR_DAT_0437a678;
  }
  for (; PTR_DAT_0437a670 = pbVar8, PTR_DAT_0437a678 = (undefined *)puVar4, plVar18 != (long *)0x0;
      plVar18 = (long *)*plVar18) {
    if (plVar18 == (long *)PTR_DAT_0437ae90) {
      local_e8 = (undefined8 *)0x0;
      uStack_e0 = 0;
      local_f0._0_4_ = 0;
      local_f0._4_4_ = 0;
      local_c0._1_3_ = (uint3)(local_c0 >> 8) & 0xff;
      local_c0 = (uint)local_c0._1_3_ << 8;
      local_d0 = 0;
      uStack_c8 = 0;
      lVar20 = param_1[0x46];
      if ((lVar20 == 0) || (*(int *)(lVar20 + 0xc) == 0)) goto LAB_01c14420;
      piVar16 = (int *)(lVar20 + 0xc);
      iVar13 = *(int *)(lVar20 + 0xc);
      goto LAB_01c14ae8;
    }
  }
  goto LAB_01c146f4;
  while (iVar13 = iVar15, iVar15 != 0) {
LAB_01c14ae8:
    plVar18 = *(long **)(lVar20 + 0x10);
    if (((*pbVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar8), iVar15 != 0)) {
      if (((*PTR_DAT_0437a598 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar15 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar15 != 0)) {
          uVar19 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar19;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_0437a588 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_0437a598);
      }
      *puVar4 = PTR_DAT_0437a588;
      __cxa_guard_release(pbVar8);
    }
    while( true ) {
      if (plVar18 == (long *)0x0) goto LAB_01c14420;
      if (plVar18 == puVar4) break;
      plVar18 = (long *)*plVar18;
    }
    iVar15 = *piVar16;
    if (iVar15 == iVar13) {
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar11) {
        *piVar16 = iVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        lVar20 = *(long *)(lVar20 + 0x18);
        if (lVar20 != 0) {
          local_f0._4_4_ = *(undefined4 *)(lVar20 + 0xac);
          lVar21 = *(long *)(lVar20 + 8);
          piVar16 = (int *)(lVar21 + 0xc);
          do {
            iVar13 = *piVar16;
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar11) {
              *piVar16 = iVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar21 + 0x18) = 0;
            (**(code **)(*(long *)(lVar20 + -0x50) + 0x20))();
          }
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
LAB_01c14420:
  uVar14 = FUN_01b75988(plVar17);
  local_f0 = (long *)CONCAT44(local_f0._4_4_,uVar14);
  (**(code **)(*param_1 + 0x18))(&local_b0,param_1);
  local_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  FUN_019f8740(&local_100,&local_b0);
  plVar18 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar2 = local_b0 + 1;
    do {
      iVar13 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *(int *)plVar2 = iVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 == 0) {
      local_b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_70[0] = *plVar18;
      FUN_02a44274(lVar20 + 0xd8,local_70);
    }
  }
  FUN_019f8a40((ulong)&local_f0 | 8,&local_100);
  puVar4 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    piVar16 = (int *)(local_100 + 1);
    do {
      iVar13 = *piVar16;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar11) {
        *piVar16 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      local_100[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_b0 = (long *)*puVar4;
      FUN_02a44274(lVar20 + 0xd8,&local_b0);
    }
  }
  auVar23 = NEON_ext(auVar23,auVar7,8,1);
  uStack_c8 = (ulong)auVar23._0_4_;
  local_c0 = CONCAT31(local_c0._1_3_,(char)plVar17[199]) ^ 1;
  local_d0 = uVar22;
  uVar12 = FUN_01b75890(plVar17);
  local_130 = 0;
  local_c0 = CONCAT22(uVar12,(undefined2)local_c0);
  local_140 = local_f0;
  local_138 = (undefined8 *)0x0;
  FUN_00d04054((ulong)&local_140 | 8,(ulong)&local_f0 | 8);
  local_120 = local_d0;
  uStack_118 = uStack_c8;
  local_b0 = local_140;
  local_a8 = (undefined8 *)0x0;
  local_110 = local_c0;
  local_a0 = 0;
  FUN_00d04054((ulong)&local_b0 | 8,(ulong)&local_140 | 8);
  local_90 = local_120;
  uStack_88 = uStack_118;
  local_80 = local_110;
  local_100 = (undefined8 *)CONCAT71(local_100._1_7_,1);
  (*(code *)param_1[0x4a])(param_1 + 0x4e,&local_b0,&local_100);
  puVar4 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    piVar16 = (int *)(local_a8 + 1);
    do {
      iVar13 = *piVar16;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar11) {
        *piVar16 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_100 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar20 + 0xd8,&local_100);
    }
  }
  puVar4 = local_138;
  if (local_138 != (undefined8 *)0x0) {
    piVar16 = (int *)(local_138 + 1);
    do {
      iVar13 = *piVar16;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar11) {
        *piVar16 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      local_138[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_b0 = (long *)*puVar4;
      FUN_02a44274(lVar20 + 0xd8,&local_b0);
    }
  }
  puVar4 = local_e8;
  if (local_e8 != (undefined8 *)0x0) {
    piVar16 = (int *)(local_e8 + 1);
    do {
      iVar13 = *piVar16;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar11) {
        *piVar16 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      local_e8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_b0 = (long *)*puVar4;
      FUN_02a44274(lVar20 + 0xd8,&local_b0);
    }
  }
LAB_01c146f4:
  lVar20 = plVar17[0xb];
  piVar16 = (int *)(lVar20 + 0xc);
  do {
    iVar13 = *piVar16;
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(piVar16,0x10);
    if (bVar11) {
      *piVar16 = iVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar13 + -1 == 0) {
    *(undefined8 *)(lVar20 + 0x18) = 0;
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  return;
}


