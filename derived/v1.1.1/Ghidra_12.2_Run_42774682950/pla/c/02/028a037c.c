/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a037c; name: FUN_028a037c
 */


undefined8 FUN_028a037c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *local_120;
  undefined8 uStack_118;
  long *local_110;
  code *local_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  undefined8 *puStack_68;
  
  if ((*(byte *)(param_1 + 0x2f8) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x308) & 1) != 0) {
      return 1;
    }
    *(undefined1 *)(param_1 + 0x2f8) = 1;
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    FUN_008802f0(&local_110,param_1 + 0x58);
    local_120 = (undefined8 *)0x0;
    uStack_118 = 0;
    FUN_00aa03f0(&local_120,&local_110);
    plVar7 = local_110;
    if (local_110 != (long *)0x0) {
      plVar1 = local_110 + 1;
      do {
        iVar8 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        local_110[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_88 = *plVar7;
        FUN_02a44274(lVar10 + 0xd8,&local_88);
      }
    }
    if (((*PTR_DAT_0437add8 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437add8), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_0437ae10,PTR_DAT_0437ade0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437add8);
    }
    lVar10 = *(long *)PTR_DAT_0437ade0;
    *(long *)PTR_DAT_0437ade8 = lVar10;
    lVar10 = *(long *)(lVar10 + 0x50);
    nn::os::LockMutex((MutexType *)(lVar10 + 0x448));
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = (undefined1 *)0x0;
    puStack_f8 = (undefined1 *)0x0;
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    FUN_00aeaa8c(&local_f0,&local_120);
    local_110 = (long *)&LAB_028a427c;
    local_108 = FUN_028a4544;
    local_100 = &LAB_028a4988;
    puStack_f8 = &LAB_028a499c;
    uVar9 = *(ulong *)(lVar10 + 0x418);
    puVar2 = (undefined8 *)(lVar10 + 0x428);
    if (uVar9 < *(ulong *)(lVar10 + 0x420)) {
      FUN_00b6d82c(puVar2,uVar9,&local_110);
      *(long *)(lVar10 + 0x418) = *(long *)(lVar10 + 0x418) + 0x80;
      pcVar6 = local_108;
    }
    else {
      uVar13 = *(ulong *)(lVar10 + 0x430);
      lVar14 = (long)(uVar9 - *(long *)(lVar10 + 0x410)) >> 7;
      uVar9 = lVar14 + 1;
      if (0x7ffffffffffffffe < uVar13) {
        uVar13 = 0x7fffffffffffffff;
      }
      if (uVar13 < uVar9) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar11 = *(ulong *)(lVar10 + 0x420) - *(long *)(lVar10 + 0x410);
      if ((ulong)(lVar11 >> 7) < uVar13 >> 1) {
        uVar12 = lVar11 >> 6;
        uVar13 = uVar9;
        if (uVar9 <= uVar12) {
          uVar13 = uVar12;
        }
      }
      local_70 = 0;
      puStack_68 = puVar2;
      if (uVar13 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar13 << 7,0x10);
        if (lVar11 == 0) {
          (**(code **)(*(long *)*puVar2 + 0xb8))();
        }
      }
      lVar14 = lVar11 + lVar14 * 0x80;
      local_70 = lVar11 + uVar13 * 0x80;
      local_88 = lVar11;
      lStack_80 = lVar14;
      FUN_00b6d82c(puVar2,lVar14,&local_110);
      local_78 = lVar14 + 0x80;
      FUN_00b6d990(lVar10 + 0x410,&local_88);
      FUN_00b6da64(&local_88);
      pcVar6 = local_108;
    }
    local_108 = pcVar6;
    if (pcVar6 != (code *)0x0) {
      local_100 = (undefined1 *)0x0;
      puStack_f8 = (undefined1 *)0x0;
      local_110 = (long *)0x0;
      local_108 = (code *)0x0;
      (*pcVar6)(&local_f0);
    }
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar10 + 0x468));
    nn::os::UnlockMutex((MutexType *)(lVar10 + 0x448));
    puVar2 = local_120;
    if (local_120 != (undefined8 *)0x0) {
      piVar3 = (int *)(local_120 + 1);
      do {
        iVar8 = *piVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_120[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_110 = (long *)*puVar2;
        FUN_02a44274(lVar10 + 0xd8,&local_110);
      }
    }
  }
  return 0;
}


