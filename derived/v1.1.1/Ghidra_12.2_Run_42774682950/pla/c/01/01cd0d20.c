/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd0d20; name: FUN_01cd0d20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cd0d20(long param_1,ulong *param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 uStack_90;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  if ((undefined1 *)*param_2 == &DAT_cbf29ce484222645) {
    return;
  }
  lVar8 = nn::os::GetCurrentThread();
  plVar18 = (long *)(param_1 + 0xf0);
  do {
    if (*plVar18 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*plVar18 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *plVar18 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01cd0db8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *plVar18 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01cd0db8:
  uVar15 = *(ulong *)(param_1 + 0x78);
  if (uVar15 != 0) {
    uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar11 = *param_2;
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar15 - 1 & uVar11;
    }
    else if (uVar11 < uVar15) {
      uVar17 = uVar11;
    }
    else {
      uVar17 = 0;
      if (uVar15 != 0) {
        uVar17 = uVar11 / uVar15;
      }
      uVar17 = uVar11 - uVar17 * uVar15;
    }
    plVar18 = *(long **)(*(long *)(param_1 + 0x70) + uVar17 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar18[1] == uVar11) {
            if (plVar18[2] == uVar11) goto LAB_01cd13f4;
          }
          else if ((plVar18[1] & uVar15 - 1) != uVar17) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar18[1];
          if (uVar16 == uVar11) {
            if (plVar18[2] == uVar11) goto LAB_01cd13f4;
          }
          else {
            if (uVar15 <= uVar16) {
              uVar5 = 0;
              if (uVar15 != 0) {
                uVar5 = uVar16 / uVar15;
              }
              uVar16 = uVar16 - uVar5 * uVar15;
            }
            if (uVar16 != uVar17) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
LAB_01cd0e1c:
  if (*param_3 != 0) {
    lVar8 = *(long *)(*param_3 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar18 = *(long **)(param_1 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar18;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  puVar10 = (undefined8 *)(**(code **)(*plVar18 + 0x10))(plVar18,0xf8,8);
  if (puVar10 == (undefined8 *)0x0) {
    (**(code **)(*plVar18 + 0xb8))(plVar18);
    _DAT_000000f0 = 0;
    _DAT_000000e8 = 0;
    _DAT_000000e0 = 0;
    _DAT_000000d8 = 0;
    _DAT_000000d0 = 0;
    _DAT_000000c8 = 0;
    _DAT_000000c0 = 0;
    _DAT_000000b8 = 0;
    _DAT_000000b0 = 0;
    _DAT_000000a8 = 0;
    _DAT_000000a0 = 0;
    _DAT_00000098 = 0;
    _DAT_00000090 = 0;
    _DAT_00000088 = 0;
    _DAT_00000080 = 0;
    _DAT_00000078 = 0;
    _DAT_00000070 = 0;
    _DAT_00000068 = 0;
    _DAT_00000060 = 0;
    _DAT_00000058 = 0;
    _DAT_00000050 = 0;
    _DAT_00000048 = 0;
    _DAT_00000040 = 0;
    _DAT_00000038 = 0;
    _DAT_00000030 = 0;
    _DAT_00000028 = 0;
    _DAT_00000020 = 0;
    _DAT_00000018 = 0;
    uRam0000000000000000 = 0;
    _DAT_00000010 = 0;
    _DAT_00000008 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_008a93d8();
  }
  puVar10[0x10] = 0;
  puVar10[0x1d] = 0;
  puVar10[0x1e] = 0;
  *puVar10 = 0;
  puVar10[0x1b] = 0;
  puVar10[0x1c] = 0;
  puVar10[0x19] = 0;
  puVar10[0x1a] = 0;
  puVar10[0x17] = 0;
  puVar10[0x18] = 0;
  puVar10[0x15] = 0;
  puVar10[0x16] = 0;
  puVar10[0x13] = 0;
  puVar10[0x14] = 0;
  puVar10[0x11] = 0;
  puVar10[0x12] = 0;
  puVar10[0xd] = 0;
  puVar10[0xe] = 0;
  puVar10[0xb] = 0;
  puVar10[0xc] = 0;
  puVar10[9] = 0;
  puVar10[10] = 0;
  puVar10[7] = 0;
  puVar10[8] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[0xf] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8();
LAB_01cd13f4:
  (**(code **)(**(long **)(plVar18[3] + 0x78) + 0x10))(local_78);
  local_98 = (long *)0x0;
  uStack_90 = 0;
  FUN_0087f944(&local_98,local_78);
  puVar10 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_78[0] + 1);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_a8 = (long *)*puVar10;
      FUN_02a44274(lVar8 + 0xd8,&local_a8);
    }
  }
  if (local_98 == (long *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *local_98;
  }
  (**(code **)(*(long *)*param_3 + 0x10))(local_78);
  local_a8 = (long *)0x0;
  uStack_a0 = 0;
  FUN_0087f944(&local_a8,local_78);
  puVar10 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_78[0] + 1);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_68 = *puVar10;
      FUN_02a44274(lVar12 + 0xd8,&local_68);
    }
  }
  plVar2 = local_a8;
  plVar18 = local_98;
  if (local_a8 == (long *)0x0) {
    lVar12 = 0;
  }
  else {
    plVar13 = local_a8 + 1;
    lVar12 = *local_a8;
    do {
      iVar7 = (int)*plVar13 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_78[0] = (undefined8 *)*plVar2;
      FUN_02a44274(lVar14 + 0xd8,local_78);
      plVar18 = local_98;
    }
  }
  local_98 = plVar18;
  if (plVar18 != (long *)0x0) {
    plVar2 = plVar18 + 1;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      plVar18[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_78[0] = (undefined8 *)*plVar18;
      FUN_02a44274(lVar14 + 0xd8,local_78);
    }
  }
  if (lVar12 == lVar8) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
    return;
  }
  goto LAB_01cd0e1c;
}


