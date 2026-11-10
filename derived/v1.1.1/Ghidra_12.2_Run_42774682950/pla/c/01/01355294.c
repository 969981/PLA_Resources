/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01355294; name: FUN_01355294
 */


void FUN_01355294(long *param_1,long param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  
  lVar7 = param_1[2];
  lVar4 = *param_1;
  uVar5 = (param_3 - param_2 >> 4) * -0x5555555555555555;
  if (uVar5 <= (ulong)((lVar7 - lVar4 >> 4) * -0x5555555555555555)) {
    lVar4 = param_1[1] - lVar4 >> 4;
    if (uVar5 <= (ulong)(lVar4 * -0x5555555555555555)) {
      uVar3 = FUN_01355640(param_2,param_3);
      FUN_013555c4(param_1,uVar3);
      return;
    }
    lVar4 = param_2 + lVar4 * 0x10;
    FUN_01355640(param_2,lVar4);
    if (lVar4 == param_3) {
      return;
    }
    FUN_00b0de58(param_1 + 3,param_1[1],lVar4);
    lVar7 = param_1[1] + 0x30;
    param_1[1] = lVar7;
    while (lVar4 = lVar4 + 0x30, lVar4 != param_3) {
      FUN_00b0de58(param_1 + 3,lVar7,lVar4);
      lVar7 = param_1[1] + 0x30;
      param_1[1] = lVar7;
    }
    return;
  }
  if (lVar4 != 0) {
    FUN_013555c4(param_1,lVar4);
    lVar7 = *param_1;
    lVar4 = param_1[2];
    plVar9 = (long *)param_1[3];
    uVar8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar8 & 1) == 0) {
LAB_01355440:
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,lVar4 - lVar7,8);
    }
    else {
      lVar1 = tpidr_el0;
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_01355440;
      FUN_02bcc824(plVar9,lVar7,lVar4 - lVar7,8);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    lVar7 = 0;
    *param_1 = 0;
  }
  uVar8 = param_1[4];
  if (0x7ffffffffffffffe < uVar8) {
    uVar8 = 0x7fffffffffffffff;
  }
  if (uVar8 < uVar5) {
LAB_013555bc:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)((lVar7 >> 4) * -0x5555555555555555) < uVar8 >> 1) {
    uVar6 = (lVar7 >> 4) * 0x5555555555555556;
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    bVar2 = uVar8 < uVar5;
    uVar8 = uVar5;
    if (bVar2) goto LAB_013555bc;
  }
  plVar9 = param_1 + 3;
  lVar4 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,uVar8 * 0x30,8);
  if (lVar4 == 0) {
    (**(code **)(*(long *)*plVar9 + 0xb8))();
  }
  *param_1 = lVar4;
  param_1[1] = lVar4;
  param_1[2] = lVar4 + uVar8 * 0x30;
  if (param_2 != param_3) {
    FUN_00b0de58(plVar9,lVar4,param_2);
    lVar4 = param_1[1] + 0x30;
    param_1[1] = lVar4;
    while (param_2 = param_2 + 0x30, param_2 != param_3) {
      FUN_00b0de58(plVar9,lVar4,param_2);
      lVar4 = param_1[1] + 0x30;
      param_1[1] = lVar4;
    }
  }
  return;
}


