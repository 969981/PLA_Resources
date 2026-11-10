/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e8ca50; name: FUN_00e8ca50
 */


void FUN_00e8ca50(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  uVar2 = *(ulong *)(param_1 + 0x80);
  puVar1 = (undefined8 *)(param_1 + 0x90);
  if (uVar2 < *(ulong *)(param_1 + 0x88)) {
    FUN_00e8db8c(puVar1,uVar2,param_2);
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 8;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x98);
    lVar8 = (long)(uVar2 - *(long *)(param_1 + 0x78)) >> 3;
    uVar2 = lVar8 + 1;
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = *(ulong *)(param_1 + 0x88) - *(long *)(param_1 + 0x78);
    uVar4 = lVar3 >> 2;
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    if ((ulong)(lVar3 >> 3) < uVar5 >> 1) {
      uVar5 = uVar2;
    }
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar5 << 3,8);
      if (lVar3 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))((long *)*puVar1);
      }
    }
    lVar9 = lVar3 + lVar8 * 8;
    FUN_00e8db8c(puVar1,lVar9,param_2);
    plVar7 = *(long **)(param_1 + 0x78);
    plVar6 = *(long **)(param_1 + 0x80);
    lVar8 = lVar9 + 8;
    if (plVar6 == plVar7) {
      plVar6 = plVar7;
    }
    else {
      do {
        lVar9 = lVar9 + -8;
        plVar6 = plVar6 + -1;
        FUN_00e8dc78(puVar1,lVar9,plVar6);
      } while (plVar7 != plVar6);
      plVar7 = *(long **)(param_1 + 0x78);
      plVar6 = *(long **)(param_1 + 0x80);
    }
    *(long *)(param_1 + 0x78) = lVar9;
    *(long *)(param_1 + 0x80) = lVar8;
    lVar8 = *(long *)(param_1 + 0x88);
    *(ulong *)(param_1 + 0x88) = lVar3 + uVar5 * 8;
    while (plVar6 != plVar7) {
      plVar6 = plVar6 + -1;
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x20))();
      }
    }
    if (plVar7 != (long *)0x0) {
      plVar6 = (long *)*puVar1;
      lVar8 = lVar8 - (long)plVar7;
      uVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar2 & 1) != 0) {
        lVar3 = tpidr_el0;
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar3 + 0x38d480)) {
          FUN_02bcc824(plVar6,plVar7,lVar8,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00e8cc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,lVar8,8);
      return;
    }
  }
  return;
}


