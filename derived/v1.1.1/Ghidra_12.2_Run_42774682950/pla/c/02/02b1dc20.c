/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b1dc20; name: FUN_02b1dc20
 */


void FUN_02b1dc20(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  plVar1 = param_1 + 3;
  if ((ulong)((param_1[2] - param_1[1] >> 3) * 0x6db6db6db6db6db7) < param_2) {
    lVar6 = param_1[1] - *param_1 >> 3;
    uVar7 = param_1[4];
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar2 = lVar6 * 0x6db6db6db6db6db7 + param_2;
    if (uVar7 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1 >> 3;
    local_60 = 0;
    uVar5 = lVar3 * -0x2492492492492492;
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
    if ((ulong)(lVar3 * 0x6db6db6db6db6db7) < uVar7 >> 1) {
      uVar7 = uVar2;
    }
    plStack_58 = plVar1;
    if (uVar7 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar7 * 0x38,8);
      if (local_78 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xb8))();
      }
    }
    lVar3 = local_78 + lVar6 * 8;
    lVar9 = local_78 + uVar7 * 0x38;
    lVar6 = lVar3;
    local_70 = lVar3;
    local_68 = lVar3;
    local_60 = lVar9;
    do {
      FUN_02b1e07c(plVar1,lVar6);
      lVar6 = lVar6 + 0x38;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    lVar4 = *param_1;
    lVar8 = param_1[1];
    local_68 = lVar6;
    if (lVar8 == lVar4) {
      local_68 = lVar4;
    }
    else {
      do {
        lVar3 = lVar3 + -0x38;
        lVar8 = lVar8 + -0x38;
        FUN_02b1e270(plVar1,lVar3,lVar8);
      } while (lVar4 != lVar8);
      lVar4 = *param_1;
      local_68 = param_1[1];
    }
    *param_1 = lVar3;
    param_1[1] = lVar6;
    local_60 = param_1[2];
    param_1[2] = lVar9;
    local_78 = lVar4;
    local_70 = lVar4;
    FUN_02b1ddd4(&local_78);
  }
  else {
    do {
      FUN_02b1e07c(plVar1);
      param_2 = param_2 - 1;
      param_1[1] = param_1[1] + 0x38;
    } while (param_2 != 0);
  }
  return;
}


