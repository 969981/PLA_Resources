/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b9443c; name: FUN_01b9443c
 */


void FUN_01b9443c(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined4 local_34;
  
  uVar2 = *(ulong *)(param_1 + 0x220);
  puVar1 = (undefined8 *)(param_1 + 0x230);
  local_34 = param_2;
  if (uVar2 < *(ulong *)(param_1 + 0x228)) {
    FUN_01b96a58(puVar1,uVar2,&local_34);
    *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0x220) + 4;
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x238);
    lVar9 = (long)(uVar2 - *(long *)(param_1 + 0x218)) >> 2;
    uVar2 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    if (uVar7 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = *(ulong *)(param_1 + 0x228) - *(long *)(param_1 + 0x218);
    uVar4 = lVar3 >> 1;
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    if ((ulong)(lVar3 >> 2) < uVar7 >> 1) {
      uVar7 = uVar2;
    }
    if (uVar7 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar7 << 2,4);
      if (lVar3 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))((long *)*puVar1);
      }
    }
    lVar10 = lVar3 + lVar9 * 4;
    FUN_01b96a58(puVar1,lVar10,&local_34);
    lVar5 = *(long *)(param_1 + 0x218);
    lVar9 = lVar10 + 4;
    lVar6 = *(long *)(param_1 + 0x220);
    if (lVar6 != lVar5) {
      do {
        lVar10 = lVar10 + -4;
        lVar6 = lVar6 + -4;
        FUN_01b96b30(puVar1,lVar10,lVar6);
      } while (lVar5 != lVar6);
      lVar5 = *(long *)(param_1 + 0x218);
    }
    *(long *)(param_1 + 0x220) = lVar9;
    lVar9 = *(long *)(param_1 + 0x228);
    *(long *)(param_1 + 0x218) = lVar10;
    *(ulong *)(param_1 + 0x228) = lVar3 + uVar7 * 4;
    if (lVar5 != 0) {
      plVar8 = (long *)*puVar1;
      lVar9 = lVar9 - lVar5;
      uVar2 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar2 & 1) != 0) {
        lVar3 = tpidr_el0;
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar3 + 0x38d480)) {
          FUN_02bcc824(plVar8,lVar5,lVar9,4);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x01b94628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar5,lVar9,4);
      return;
    }
  }
  return;
}


