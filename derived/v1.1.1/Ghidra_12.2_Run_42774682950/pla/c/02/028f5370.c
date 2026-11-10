/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028f5370; name: FUN_028f5370
 */


void FUN_028f5370(long param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *local_58;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  while (puVar1 != *(undefined8 **)(param_1 + 0x18)) {
    plVar5 = (long *)*puVar1;
    puVar1 = puVar1 + 1;
    if (plVar5 == param_2) {
      return;
    }
  }
  local_58 = param_2;
  (**(code **)(*param_2 + 0xb8))(param_2,param_1);
  lVar8 = *(long *)(param_1 + 0x18);
  puVar1 = (undefined8 *)(param_1 + 0x28);
  if (lVar8 != *(long *)(param_1 + 0x20)) {
    FUN_028f5970(puVar1,lVar8,&local_58);
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
    return;
  }
  uVar6 = *(ulong *)(param_1 + 0x30);
  lVar8 = lVar8 - *(long *)(param_1 + 0x10) >> 3;
  uVar2 = lVar8 + 1;
  if (0x7ffffffffffffffe < uVar6) {
    uVar6 = 0x7fffffffffffffff;
  }
  if (uVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x10);
  if ((ulong)(lVar3 >> 3) < uVar6 >> 1) {
    uVar4 = lVar3 >> 2;
    uVar6 = uVar2;
    if (uVar2 <= uVar4) {
      uVar6 = uVar4;
    }
  }
  if (uVar6 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar6 << 3,8);
    if (lVar3 == 0) {
      (**(code **)(*(long *)*puVar1 + 0xb8))();
    }
  }
  lVar9 = lVar3 + lVar8 * 8;
  FUN_028f5970(puVar1,lVar9,&local_58);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(param_1 + 0x18);
  lVar8 = lVar9 + 8;
  if (lVar10 != lVar7) {
    do {
      lVar9 = lVar9 + -8;
      lVar10 = lVar10 + -8;
      FUN_028f5898(puVar1,lVar9,lVar10);
    } while (lVar7 != lVar10);
    lVar7 = *(long *)(param_1 + 0x10);
  }
  lVar10 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x10) = lVar9;
  *(long *)(param_1 + 0x18) = lVar8;
  *(ulong *)(param_1 + 0x20) = lVar3 + uVar6 * 8;
  if (lVar7 == 0) {
    return;
  }
  plVar5 = (long *)*puVar1;
  lVar10 = lVar10 - lVar7;
  uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar2 & 1) != 0) {
    lVar8 = tpidr_el0;
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar5,lVar7,lVar10,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x028f5580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar7,lVar10,8);
  return;
}


