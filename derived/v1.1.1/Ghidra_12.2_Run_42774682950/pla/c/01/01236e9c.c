/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01236e9c; name: FUN_01236e9c
 */


void FUN_01236e9c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  plVar5 = param_1 + 3;
  lVar2 = FUN_01237038(param_1,(param_1[1] - *param_1 >> 4) * -0x3333333333333333 + 1);
  lVar1 = *param_1;
  lVar4 = param_1[1];
  local_60 = 0;
  plStack_58 = plVar5;
  if (lVar2 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,lVar2 * 0x50,8);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar5 + 0xb8))();
    }
  }
  lVar6 = local_78 + (lVar4 - lVar1 >> 4) * 0x10;
  lVar7 = local_78 + lVar2 * 0x50;
  local_70 = lVar6;
  local_60 = lVar7;
  FUN_01236698(plVar5,lVar6,param_2);
  lVar1 = lVar6 + 0x50;
  lVar4 = *param_1;
  lVar2 = param_1[1];
  local_68 = lVar1;
  if (lVar2 == lVar4) {
    local_68 = lVar4;
  }
  else {
    do {
      lVar6 = lVar6 + -0x50;
      lVar2 = lVar2 + -0x50;
      FUN_01236698(plVar5,lVar6,lVar2);
    } while (lVar4 != lVar2);
    lVar4 = *param_1;
    local_68 = param_1[1];
  }
  *param_1 = lVar6;
  param_1[1] = lVar1;
  local_60 = param_1[2];
  param_1[2] = lVar7;
  local_78 = lVar4;
  local_70 = lVar4;
  FUN_0123709c(&local_78);
  lVar1 = local_78;
  if (local_78 != 0) {
    lVar4 = local_60 - local_78;
    plVar5 = (long *)*plStack_58;
    uVar3 = FUN_02bcc75c(plVar5);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar1,lVar4,8);
    }
    else {
      FUN_02bcc824(plVar5,lVar1,lVar4,8);
    }
  }
  return;
}


