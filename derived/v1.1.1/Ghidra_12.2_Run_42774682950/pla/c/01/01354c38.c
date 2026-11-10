/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01354c38; name: FUN_01354c38
 */


void FUN_01354c38(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  
  puVar6 = (undefined8 *)*param_1;
  uVar10 = ((long)param_3 - (long)param_2 >> 3) * -0x5555555555555555;
  lVar3 = param_1[2];
  lVar7 = lVar3 - (long)puVar6;
  if (uVar10 <= (ulong)((lVar7 >> 3) * -0x5555555555555555)) {
    uVar5 = (param_1[1] - (long)puVar6 >> 3) * -0x5555555555555555;
    puVar8 = (undefined8 *)((long)param_2 + (param_1[1] - (long)puVar6));
    puVar1 = puVar8;
    if (uVar10 <= uVar5) {
      puVar1 = param_3;
    }
    while (puVar1 != param_2) {
      *puVar6 = *param_2;
      puVar6[1] = param_2[1];
      puVar6[2] = param_2[2];
      puVar6 = puVar6 + 3;
      param_2 = param_2 + 3;
    }
    if (uVar10 <= uVar5) {
      param_1[1] = (long)puVar6;
      return;
    }
    if (puVar1 == param_3) {
      return;
    }
    lVar3 = param_1[1];
    do {
      FUN_01354f10(param_1 + 3,lVar3,puVar8);
      puVar8 = puVar8 + 3;
      lVar3 = param_1[1] + 0x18;
      param_1[1] = lVar3;
    } while (param_3 != puVar8);
    return;
  }
  if (puVar6 != (undefined8 *)0x0) {
    plVar9 = (long *)param_1[3];
    param_1[1] = (long)puVar6;
    uVar5 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar5 & 1) == 0) {
LAB_01354e20:
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar6,lVar7,8);
    }
    else {
      lVar3 = tpidr_el0;
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_01354e20;
      FUN_02bcc824(plVar9,puVar6,lVar7,8);
    }
    lVar3 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  uVar5 = param_1[4];
  if (0x7ffffffffffffffe < uVar5) {
    uVar5 = 0x7fffffffffffffff;
  }
  if (uVar5 < uVar10) {
LAB_01354f08:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)((lVar3 >> 3) * -0x5555555555555555) < uVar5 >> 1) {
    uVar4 = (lVar3 >> 3) * 0x5555555555555556;
    if (uVar10 <= uVar4) {
      uVar10 = uVar4;
    }
    bVar2 = uVar5 < uVar10;
    uVar5 = uVar10;
    if (bVar2) goto LAB_01354f08;
  }
  plVar9 = param_1 + 3;
  lVar3 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,uVar5 * 0x18,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)*plVar9 + 0xb8))();
  }
  *param_1 = lVar3;
  param_1[1] = lVar3;
  param_1[2] = lVar3 + uVar5 * 0x18;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    FUN_01354f10(plVar9,lVar3,param_2);
    lVar3 = param_1[1] + 0x18;
    param_1[1] = lVar3;
  }
  return;
}


