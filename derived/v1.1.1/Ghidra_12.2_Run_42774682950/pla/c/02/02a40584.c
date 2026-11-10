/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a40584; name: FUN_02a40584
 */


void FUN_02a40584(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78 [2];
  undefined8 *local_68;
  
  local_80 = param_2;
  lVar10 = nn::os::GetCurrentThread();
  plVar18 = (long *)(param_1 + 0xb0);
  do {
    if (*plVar18 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa4));
        while (*plVar18 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *plVar18 = lVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02a405f4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *plVar18 = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02a405f4:
  lVar10 = *(long *)(param_1 + 0x70);
  puVar1 = (undefined8 *)(param_1 + 0x80);
  if (lVar10 == *(long *)(param_1 + 0x78)) {
    uVar17 = *(ulong *)(param_1 + 0x88);
    lVar10 = lVar10 - *(long *)(param_1 + 0x68) >> 3;
    uVar12 = lVar10 + 1;
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x68);
    if ((ulong)(lVar14 >> 3) < uVar17 >> 1) {
      uVar15 = lVar14 >> 2;
      uVar17 = uVar12;
      if (uVar12 <= uVar15) {
        uVar17 = uVar15;
      }
    }
    if (uVar17 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar17 << 3,8);
      if (lVar14 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar10 = lVar14 + lVar10 * 8;
    FUN_02a41c18(puVar1,lVar10,&local_80);
    puVar6 = PTR_DAT_04379528;
    puVar5 = PTR_DAT_04379520;
    lVar19 = *(long *)(param_1 + 0x68);
    lVar21 = *(long *)(param_1 + 0x70);
    lVar22 = lVar10;
    if (lVar21 != lVar19) {
      do {
        uVar20 = *puVar1;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          FUN_008a62a4(puVar6);
          FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
        if (lVar11 == 0) {
          *(undefined8 *)(lVar22 + -8) = *(undefined8 *)(lVar21 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar20;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          *(undefined8 *)(lVar22 + -8) = *(undefined8 *)(lVar21 + -8);
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        }
        lVar21 = lVar21 + -8;
        lVar22 = lVar22 + -8;
      } while (lVar19 != lVar21);
      lVar19 = *(long *)(param_1 + 0x68);
    }
    *(long *)(param_1 + 0x68) = lVar22;
    *(long *)(param_1 + 0x70) = lVar10 + 8;
    lVar10 = *(long *)(param_1 + 0x78);
    *(ulong *)(param_1 + 0x78) = lVar14 + uVar17 * 8;
    if (lVar19 != 0) {
      plVar18 = (long *)*puVar1;
      lVar10 = lVar10 - lVar19;
      uVar12 = (**(code **)(*plVar18 + 0xc0))(plVar18);
      if ((uVar12 & 1) != 0) {
        lVar14 = tpidr_el0;
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar14 + 0x38d480)) {
          FUN_02bcc824(plVar18,lVar19,lVar10,8);
          goto LAB_02a40820;
        }
      }
      (**(code **)(*plVar18 + 0x18))(plVar18,lVar19,lVar10,8);
    }
  }
  else {
    FUN_02a41c18(puVar1,lVar10,&local_80);
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 8;
  }
LAB_02a40820:
  puVar1 = local_80;
  (**(code **)(*(long *)(param_1 + 0x48) + 0x20))(local_78);
  local_a0 = (undefined8 *)0x0;
  local_98 = 0;
  FUN_00db6f14(&local_a0,local_78);
  puVar8 = local_78[0];
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  if (local_78[0] != (undefined8 *)0x0) {
    piVar2 = (int *)(local_78[0] + 1);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar6;
      *(long *)puVar7 = lVar10;
      local_68 = (undefined8 *)*puVar8;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  do {
    uVar20 = local_98;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(&local_98,0x10);
    if (bVar4) {
      local_98 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar13 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar13;
  FUN_02a44e0c(&local_68,uVar13,uVar20);
  puVar8 = local_a0;
  local_a0 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar8 + 1);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      puVar8[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar6;
      *(long *)puVar7 = lVar10;
      local_78[0] = (undefined8 *)*puVar8;
      FUN_02a44274(lVar10 + 0xd8,local_78);
    }
  }
  puVar8 = local_90;
  local_90 = (undefined8 *)0x0;
  if (local_68 == (undefined8 *)0x0) {
    if (puVar8 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar8 + 1);
      do {
        iVar9 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 1) {
        puVar8[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)puVar6;
        *(long *)puVar7 = lVar10;
        local_78[0] = (undefined8 *)*puVar8;
        FUN_02a44274(lVar10 + 0xd8,local_78);
      }
    }
    uVar20 = 0;
  }
  else {
    puVar16 = local_68;
    if (puVar8 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar8 + 1);
      do {
        iVar9 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        puVar8[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)puVar6;
        *(long *)puVar7 = lVar10;
        local_78[0] = (undefined8 *)*puVar8;
        FUN_02a44274(lVar10 + 0xd8,local_78);
      }
      puVar16 = local_68;
    }
    local_68 = (undefined8 *)0x0;
    local_90 = puVar16;
  }
  puVar8 = local_68;
  local_88 = uVar20;
  if (local_68 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_68 + 1);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      local_68[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar6;
      *(long *)puVar7 = lVar10;
      local_78[0] = (undefined8 *)*puVar8;
      FUN_02a44274(lVar10 + 0xd8,local_78);
    }
  }
  (**(code **)*puVar1)(puVar1,&local_90);
  puVar1 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_90 + 1);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      local_90[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar6;
      *(long *)puVar7 = lVar10;
      local_78[0] = (undefined8 *)*puVar1;
      FUN_02a44274(lVar10 + 0xd8,local_78);
    }
  }
  puVar1 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_a0 + 1);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      local_a0[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar6;
      *(long *)puVar7 = lVar10;
      local_78[0] = (undefined8 *)*puVar1;
      FUN_02a44274(lVar10 + 0xd8,local_78);
    }
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xa4));
  return;
}


