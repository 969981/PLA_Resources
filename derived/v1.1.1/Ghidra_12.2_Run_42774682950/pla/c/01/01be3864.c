/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01be3864; name: FUN_01be3864
 */


void FUN_01be3864(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  lVar4 = param_1[1];
  plVar7 = param_1 + 3;
  if (lVar4 == param_1[2]) {
    uVar5 = param_1[4];
    lVar4 = lVar4 - *param_1 >> 4;
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar1 = lVar4 * 0x6db6db6db6db6db7 + 1;
    if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = param_1[2] - *param_1 >> 4;
    local_60 = 0;
    uVar3 = lVar2 * -0x2492492492492492;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if ((ulong)(lVar2 * 0x6db6db6db6db6db7) < uVar5 >> 1) {
      uVar5 = uVar1;
    }
    plStack_58 = plVar7;
    if (uVar5 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar5 * 0x70,8);
      if (local_78 == 0) {
        (**(code **)(*(long *)*plVar7 + 0xb8))((long *)*plVar7);
      }
    }
    lVar8 = local_78 + lVar4 * 0x10;
    lVar9 = local_78 + uVar5 * 0x70;
    local_70 = lVar8;
    local_60 = lVar9;
    FUN_00b14700(plVar7,lVar8,param_2);
    lVar4 = lVar8 + 0x70;
    lVar2 = *param_1;
    lVar6 = param_1[1];
    local_68 = lVar4;
    if (lVar6 == lVar2) {
      local_68 = lVar2;
    }
    else {
      do {
        lVar8 = lVar8 + -0x70;
        lVar6 = lVar6 + -0x70;
        FUN_00b14700(plVar7,lVar8,lVar6);
      } while (lVar2 != lVar6);
      lVar2 = *param_1;
      local_68 = param_1[1];
    }
    *param_1 = lVar8;
    param_1[1] = lVar4;
    local_60 = param_1[2];
    param_1[2] = lVar9;
    local_78 = lVar2;
    local_70 = lVar2;
    FUN_01be70b8(&local_78);
    lVar4 = local_78;
    if (local_78 != 0) {
      lVar2 = local_60 - local_78;
      plVar7 = (long *)*plStack_58;
      uVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar5 & 1) != 0) {
        lVar6 = tpidr_el0;
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar7,lVar4,lVar2,8);
          return;
        }
      }
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar4,lVar2,8);
    }
  }
  else {
    FUN_00b14700(plVar7,lVar4,param_2);
    param_1[1] = param_1[1] + 0x70;
  }
  return;
}


