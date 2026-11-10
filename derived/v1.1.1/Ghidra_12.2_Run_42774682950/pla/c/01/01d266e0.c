/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d266e0; name: FUN_01d266e0
 */


void FUN_01d266e0(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 local_48;
  
  local_80 = (long *)*param_3;
  if (local_80 != (long *)0x0) {
    lVar16 = local_80[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_01d31824(param_1,&local_80,param_4);
  if (local_80 != (long *)0x0) {
    lVar16 = local_80[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  (**(code **)(*(long *)*param_1 + 0x10))(&local_78);
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_018fed88(&local_b0,&local_78);
  puVar2 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_78 + 1);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_48 = *puVar2;
      FUN_02a44274(lVar16 + 0xd8,&local_48);
    }
  }
  FUN_019fa21c(&local_a0,&local_b0);
  puVar2 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_b0 + 1);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      local_b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_78 = (undefined8 *)*puVar2;
      FUN_02a44274(lVar16 + 0xd8,&local_78);
    }
  }
  FUN_02be8e60(&local_78,*param_1,0);
  FUN_01d31c8c(&local_90,&local_78);
  puVar2 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_78 + 1);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_b0 = (undefined8 *)*puVar2;
      FUN_02a44274(lVar16 + 0xd8,&local_b0);
    }
  }
  uVar9 = *(ulong *)(param_2 + 0xb8);
  puVar2 = (undefined8 *)(param_2 + 200);
  if (uVar9 < *(ulong *)(param_2 + 0xc0)) {
    FUN_01c6c97c(puVar2,uVar9,&local_a0);
    *(long *)(param_2 + 0xb8) = *(long *)(param_2 + 0xb8) + 0x20;
    puVar2 = local_90;
  }
  else {
    uVar13 = *(ulong *)(param_2 + 0xd0);
    lVar16 = (long)(uVar9 - *(long *)(param_2 + 0xb0)) >> 5;
    uVar9 = lVar16 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = *(ulong *)(param_2 + 0xc0) - *(long *)(param_2 + 0xb0);
    if ((ulong)(lVar11 >> 5) < uVar13 >> 1) {
      uVar12 = lVar11 >> 4;
      uVar13 = uVar9;
      if (uVar9 <= uVar12) {
        uVar13 = uVar12;
      }
    }
    local_60 = (undefined8 *)0x0;
    puStack_58 = puVar2;
    if (uVar13 == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)(**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar13 << 5,8);
      if (puVar8 == (undefined8 *)0x0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    puVar14 = puVar8 + lVar16 * 4;
    local_78 = puVar8;
    local_70 = puVar14;
    local_60 = puVar8 + uVar13 * 4;
    FUN_01c6c97c(puVar2,puVar14,&local_a0);
    puVar3 = puVar14 + 4;
    puVar10 = *(undefined8 **)(param_2 + 0xb0);
    puVar17 = *(undefined8 **)(param_2 + 0xb8);
    local_68 = puVar3;
    if (puVar17 == puVar10) {
      local_68 = puVar10;
    }
    else {
      do {
        puVar14 = puVar14 + -4;
        puVar17 = puVar17 + -4;
        FUN_01c6ca80(puVar2,puVar14,puVar17);
      } while (puVar10 != puVar17);
      puVar10 = *(undefined8 **)(param_2 + 0xb0);
      local_68 = *(undefined8 **)(param_2 + 0xb8);
    }
    *(undefined8 **)(param_2 + 0xb0) = puVar14;
    *(undefined8 **)(param_2 + 0xb8) = puVar3;
    local_60 = *(undefined8 **)(param_2 + 0xc0);
    *(undefined8 **)(param_2 + 0xc0) = puVar8 + uVar13 * 4;
    local_78 = puVar10;
    local_70 = puVar10;
    FUN_01d31f8c(&local_78);
    puVar8 = local_78;
    puVar2 = local_90;
    if (local_78 != (undefined8 *)0x0) {
      lVar16 = (long)local_60 - (long)local_78;
      plVar15 = (long *)*puStack_58;
      uVar9 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar9 & 1) != 0) {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar15,puVar8,lVar16,8);
          puVar2 = local_90;
          goto joined_r0x01d26b80;
        }
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,puVar8,lVar16,8);
      puVar2 = local_90;
    }
  }
joined_r0x01d26b80:
  local_90 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      puVar2[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_78 = (undefined8 *)*puVar2;
      FUN_02a44274(lVar16 + 0xd8,&local_78);
    }
  }
  puVar2 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_a0 + 1);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_78 = (undefined8 *)*puVar2;
      FUN_02a44274(lVar16 + 0xd8,&local_78);
    }
  }
  return;
}


