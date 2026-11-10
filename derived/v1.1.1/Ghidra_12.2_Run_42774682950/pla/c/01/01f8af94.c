/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f8af94; name: FUN_01f8af94
 */


void FUN_01f8af94(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  
  puVar4 = (undefined4 *)param_1[1];
  if (puVar4 < (undefined4 *)param_1[2]) {
    *puVar4 = *param_2;
    param_1[1] = param_1[1] + 4;
    return;
  }
  lVar9 = (long)puVar4 - *param_1 >> 2;
  uVar1 = lVar9 + 1;
  if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = param_1[2] - *param_1;
  if ((ulong)(lVar2 >> 2) < 0x1fffffffffffffff) {
    uVar3 = lVar2 >> 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if (uVar1 == 0) {
      lVar2 = 0;
      goto LAB_01f8b03c;
    }
  }
  else {
    uVar1 = 0x3fffffffffffffff;
  }
  lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 << 2,4);
  if (lVar2 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_01f8b03c:
  puVar4 = (undefined4 *)(lVar2 + lVar9 * 4);
  puVar5 = puVar4 + 1;
  *puVar4 = *param_2;
  puVar8 = (undefined4 *)*param_1;
  puVar6 = (undefined4 *)param_1[1];
  if (puVar6 != puVar8) {
    do {
      puVar6 = puVar6 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar6;
    } while (puVar8 != puVar6);
    puVar8 = (undefined4 *)*param_1;
  }
  *param_1 = (long)puVar4;
  param_1[1] = (long)puVar5;
  lVar9 = param_1[2];
  param_1[2] = lVar2 + uVar1 * 4;
  if (puVar8 == (undefined4 *)0x0) {
    return;
  }
  plVar7 = (long *)param_1[3];
  uVar1 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar1 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar7,puVar8,lVar9 - (long)puVar8,4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01f8b0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7,puVar8,lVar9 - (long)puVar8,4);
  return;
}


