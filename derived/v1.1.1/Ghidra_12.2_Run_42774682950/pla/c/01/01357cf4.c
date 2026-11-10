/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01357cf4; name: FUN_01357cf4
 */


void FUN_01357cf4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  plVar8 = param_1 + 3;
  if ((ulong)((param_1[2] - param_1[1] >> 4) * -0x71c71c71c71c71c7) < param_2) {
    lVar5 = param_1[1] - *param_1 >> 4;
    uVar6 = param_1[4];
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar1 = lVar5 * -0x71c71c71c71c71c7 + param_2;
    if (uVar6 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1 >> 4;
    local_60 = 0;
    uVar4 = lVar3 * 0x1c71c71c71c71c72;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if ((ulong)(lVar3 * -0x71c71c71c71c71c7) < uVar6 >> 1) {
      uVar6 = uVar1;
    }
    plStack_58 = plVar8;
    if (uVar6 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar6 * 0x90,0x10);
      if (local_78 == 0) {
        (**(code **)(*(long *)*plVar8 + 0xb8))();
      }
    }
    lVar3 = local_78 + lVar5 * 0x10;
    lVar9 = local_78 + uVar6 * 0x90;
    lVar5 = lVar3;
    local_70 = lVar3;
    local_68 = lVar3;
    local_60 = lVar9;
    do {
      FUN_01357fa0(plVar8,lVar5);
      lVar5 = lVar5 + 0x90;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    lVar2 = *param_1;
    lVar7 = param_1[1];
    local_68 = lVar5;
    if (lVar7 == lVar2) {
      local_68 = lVar2;
    }
    else {
      do {
        lVar3 = lVar3 + -0x90;
        lVar7 = lVar7 + -0x90;
        FUN_009af634(plVar8,lVar3,lVar7);
      } while (lVar2 != lVar7);
      lVar2 = *param_1;
      local_68 = param_1[1];
    }
    *param_1 = lVar3;
    param_1[1] = lVar5;
    local_60 = param_1[2];
    param_1[2] = lVar9;
    local_78 = lVar2;
    local_70 = lVar2;
    FUN_013580ac(&local_78);
    lVar5 = local_78;
    if (local_78 != 0) {
      lVar3 = local_60 - local_78;
      plVar8 = (long *)*plStack_58;
      uVar6 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar6 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar8,lVar5,lVar3,0x10);
          return;
        }
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar5,lVar3,0x10);
    }
  }
  else {
    do {
      FUN_01357fa0(plVar8);
      param_2 = param_2 - 1;
      param_1[1] = param_1[1] + 0x90;
    } while (param_2 != 0);
  }
  return;
}


