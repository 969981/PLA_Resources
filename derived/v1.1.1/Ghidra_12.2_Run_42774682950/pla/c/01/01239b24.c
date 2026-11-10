/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01239b24; name: FUN_01239b24
 */


void FUN_01239b24(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
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
  
  uVar5 = param_1[4];
  lVar3 = param_1[1] - *param_1 >> 4;
  if (0x7ffffffffffffffe < uVar5) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar1 = lVar3 * -0x3333333333333333 + 1;
  if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = param_1[2] - *param_1 >> 4;
  uVar4 = lVar2 * -0x6666666666666666;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  plVar7 = param_1 + 3;
  local_60 = 0;
  if ((ulong)(lVar2 * -0x3333333333333333) < uVar5 >> 1) {
    uVar5 = uVar1;
  }
  plStack_58 = plVar7;
  if (uVar5 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar5 * 0x50,8);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar7 + 0xb8))();
    }
  }
  lVar8 = local_78 + lVar3 * 0x10;
  lVar9 = local_78 + uVar5 * 0x50;
  local_70 = lVar8;
  local_60 = lVar9;
  FUN_01236698(plVar7,lVar8,param_2);
  lVar3 = lVar8 + 0x50;
  lVar2 = *param_1;
  lVar6 = param_1[1];
  local_68 = lVar3;
  if (lVar6 == lVar2) {
    local_68 = lVar2;
  }
  else {
    do {
      lVar8 = lVar8 + -0x50;
      lVar6 = lVar6 + -0x50;
      FUN_01236698(plVar7,lVar8,lVar6);
    } while (lVar2 != lVar6);
    lVar2 = *param_1;
    local_68 = param_1[1];
  }
  *param_1 = lVar8;
  param_1[1] = lVar3;
  local_60 = param_1[2];
  param_1[2] = lVar9;
  local_78 = lVar2;
  local_70 = lVar2;
  FUN_01239cf0(&local_78);
  lVar3 = local_78;
  if (local_78 != 0) {
    lVar2 = local_60 - local_78;
    plVar7 = (long *)*plStack_58;
    uVar5 = FUN_02bcc75c(plVar7);
    if ((uVar5 & 1) == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar3,lVar2,8);
    }
    else {
      FUN_02bcc824(plVar7,lVar3,lVar2,8);
    }
  }
  return;
}


