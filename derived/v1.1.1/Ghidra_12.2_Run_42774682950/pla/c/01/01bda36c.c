/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bda36c; name: FUN_01bda36c
 */


void FUN_01bda36c(long *param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  uVar3 = param_3 - param_2 >> 5;
  lVar2 = param_1[2];
  lVar6 = *param_1;
  if (uVar3 <= (ulong)(lVar2 - lVar6 >> 5)) {
    uVar5 = param_1[1] - lVar6 >> 5;
    if (uVar3 <= uVar5) {
      lVar6 = FUN_01bda700(param_2,param_3,lVar6);
      lVar2 = param_1[1];
      while (lVar2 != lVar6) {
        plVar8 = (long *)(lVar2 + -8);
        lVar2 = lVar2 + -0x20;
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 0x20))();
        }
      }
      param_1[1] = lVar6;
      return;
    }
    lVar2 = param_2 + uVar5 * 0x20;
    FUN_01bda700(param_2,lVar2,lVar6);
    if (lVar2 == param_3) {
      return;
    }
    plVar8 = param_1 + 3;
    FUN_00da822c(plVar8,param_1[1],lVar2);
    lVar6 = param_1[1];
    param_1[1] = lVar6 + 0x20;
    if (lVar2 + 0x20 == param_3) {
      return;
    }
    FUN_00da822c(plVar8,lVar6 + 0x20,lVar2 + 0x20);
    lVar6 = param_1[1] + 0x20;
    param_1[1] = lVar6;
    for (lVar2 = lVar2 + 0x40; lVar2 != param_3; lVar2 = lVar2 + 0x20) {
      FUN_00da822c(plVar8,lVar6,lVar2);
      lVar6 = param_1[1] + 0x20;
      param_1[1] = lVar6;
    }
    return;
  }
  if (lVar6 != 0) {
    lVar4 = param_1[1];
    lVar7 = lVar6;
    if (lVar4 != lVar6) {
      do {
        plVar8 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x20;
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 0x20))();
        }
      } while (lVar6 != lVar4);
      lVar7 = *param_1;
      lVar2 = param_1[2];
    }
    plVar8 = (long *)param_1[3];
    param_1[1] = lVar6;
    uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar5 & 1) == 0) {
LAB_01bda5c4:
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar7,lVar2 - lVar7,8);
    }
    else {
      lVar6 = tpidr_el0;
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_01bda5c4;
      FUN_02bcc824(plVar8,lVar7,lVar2 - lVar7,8);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    lVar2 = 0;
    *param_1 = 0;
  }
  uVar5 = param_1[4];
  if (0x7ffffffffffffffe < uVar5) {
    uVar5 = 0x7fffffffffffffff;
  }
  if (uVar5 < uVar3) {
LAB_01bda6a0:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(lVar2 >> 5) < uVar5 >> 1) {
    if (uVar3 <= (ulong)(lVar2 >> 4)) {
      uVar3 = lVar2 >> 4;
    }
    bVar1 = uVar5 < uVar3;
    uVar5 = uVar3;
    if (bVar1) goto LAB_01bda6a0;
  }
  plVar8 = param_1 + 3;
  lVar2 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar5 << 5,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)*plVar8 + 0xb8))();
  }
  param_1[2] = lVar2 + uVar5 * 0x20;
  *param_1 = lVar2;
  param_1[1] = lVar2;
  if (param_2 != param_3) {
    FUN_00da822c(plVar8,lVar2,param_2);
    param_1[1] = param_1[1] + 0x20;
    if (param_2 + 0x20 != param_3) {
      FUN_00da822c(plVar8);
      lVar2 = param_1[1] + 0x20;
      param_1[1] = lVar2;
      for (param_2 = param_2 + 0x40; param_2 != param_3; param_2 = param_2 + 0x20) {
        FUN_00da822c(plVar8,lVar2,param_2);
        lVar2 = param_1[1] + 0x20;
        param_1[1] = lVar2;
      }
    }
  }
  return;
}


