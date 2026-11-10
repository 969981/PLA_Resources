/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c444f4; name: FUN_02c444f4
 */


undefined8 FUN_02c444f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar2 = (**(code **)(**(long **)(param_3 + 8) + 0x10))(*(long **)(param_3 + 8),param_1,param_2);
  uVar3 = *(ulong *)(param_3 + 0x680);
  puVar1 = (undefined8 *)(param_3 + 0x690);
  local_78 = uVar2;
  uStack_70 = param_1;
  local_68 = param_2;
  if (uVar3 < *(ulong *)(param_3 + 0x688)) {
    FUN_02c463a0(puVar1,uVar3,&local_78);
    *(long *)(param_3 + 0x680) = *(long *)(param_3 + 0x680) + 0x18;
  }
  else {
    uVar7 = *(ulong *)(param_3 + 0x698);
    lVar6 = (long)(uVar3 - *(long *)(param_3 + 0x678)) >> 3;
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar3 = lVar6 * -0x5555555555555555 + 1;
    if (uVar7 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = (long)(*(ulong *)(param_3 + 0x688) - *(long *)(param_3 + 0x678)) >> 3;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    if ((ulong)(lVar4 * -0x5555555555555555) < uVar7 >> 1) {
      uVar7 = uVar3;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar7 * 0x18,8);
      if (lVar4 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar10 = lVar4 + lVar6 * 8;
    FUN_02c463a0(puVar1,lVar10,&local_78);
    lVar9 = *(long *)(param_3 + 0x678);
    lVar6 = lVar10 + 0x18;
    lVar11 = *(long *)(param_3 + 0x680);
    if (lVar11 != lVar9) {
      do {
        lVar10 = lVar10 + -0x18;
        lVar11 = lVar11 + -0x18;
        FUN_02c463a0(puVar1,lVar10,lVar11);
      } while (lVar9 != lVar11);
      lVar9 = *(long *)(param_3 + 0x678);
    }
    lVar11 = *(long *)(param_3 + 0x688);
    *(long *)(param_3 + 0x678) = lVar10;
    *(long *)(param_3 + 0x680) = lVar6;
    *(ulong *)(param_3 + 0x688) = lVar4 + uVar7 * 0x18;
    if (lVar9 != 0) {
      plVar8 = (long *)*puVar1;
      lVar11 = lVar11 - lVar9;
      uVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar3 & 1) != 0) {
        lVar6 = tpidr_el0;
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar8,lVar9,lVar11,8);
          return uVar2;
        }
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,lVar11,8);
    }
  }
  return uVar2;
}


