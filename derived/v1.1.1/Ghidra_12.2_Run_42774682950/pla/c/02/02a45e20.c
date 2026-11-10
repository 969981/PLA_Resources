/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a45e20; name: FUN_02a45e20
 */


void FUN_02a45e20(long *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  lVar7 = param_1[1];
  plVar6 = param_1 + 3;
  if ((ulong)(param_1[2] - lVar7 >> 3) < param_2) {
    uVar5 = param_1[4];
    lVar7 = lVar7 - *param_1 >> 3;
    uVar2 = lVar7 + param_2;
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1;
    uVar4 = lVar3 >> 2;
    local_60 = 0;
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    if ((ulong)(lVar3 >> 3) < uVar5 >> 1) {
      uVar5 = uVar2;
    }
    plStack_58 = plVar6;
    if (uVar5 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar5 << 3,8);
      if (local_78 == 0) {
        (**(code **)(*(long *)*plVar6 + 0xb8))();
      }
    }
    lVar7 = local_78 + lVar7 * 8;
    local_60 = local_78 + uVar5 * 8;
    local_70 = lVar7;
    local_68 = lVar7;
    do {
      FUN_02a4607c(plVar6,lVar7,param_3);
      lVar7 = lVar7 + 8;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    local_68 = lVar7;
    FUN_01e8445c(param_1,&local_78);
    lVar7 = local_78;
    if (local_68 - local_70 != 0) {
      local_68 = local_68 + ((local_68 - local_70) - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
    if (local_78 != 0) {
      lVar3 = local_60 - local_78;
      plVar6 = (long *)*plStack_58;
      uVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar2 & 1) != 0) {
        lVar1 = tpidr_el0;
        if (*(char *)(lVar1 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar1 + 0x38d488) = 1;
          *(undefined8 *)(lVar1 + 0x38d478) = 0;
          *(undefined8 *)(lVar1 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar1 + 0x38d480)) {
          FUN_02bcc824(plVar6,lVar7,lVar3,8);
          return;
        }
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,lVar3,8);
    }
  }
  else {
    do {
      FUN_02a4607c(plVar6,lVar7,param_3);
      lVar7 = param_1[1] + 8;
      param_2 = param_2 - 1;
      param_1[1] = lVar7;
    } while (param_2 != 0);
  }
  return;
}


