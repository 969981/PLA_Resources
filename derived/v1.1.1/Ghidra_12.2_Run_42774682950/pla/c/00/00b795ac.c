/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b795ac; name: FUN_00b795ac
 */


void FUN_00b795ac(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  plVar1 = param_1 + 3;
  lVar3 = FUN_00b797c8(param_1,(param_1[1] - *param_1 >> 5) + 1);
  lVar2 = *param_1;
  lVar6 = param_1[1];
  local_50 = 0;
  lVar4 = 0;
  plStack_48 = plVar1;
  if ((lVar3 != 0) &&
     (lVar4 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar3 << 5,8), lVar4 == 0)) {
    (**(code **)(*(long *)*plVar1 + 0xb8))((long *)*plVar1);
  }
  lVar6 = lVar4 + (lVar6 - lVar2 >> 5) * 0x20;
  lVar3 = lVar4 + lVar3 * 0x20;
  local_68 = lVar4;
  local_60 = lVar6;
  local_50 = lVar3;
  FUN_00b796e4(plVar1,lVar6,param_2);
  lVar2 = lVar6 + 0x20;
  lVar4 = *param_1;
  lVar5 = param_1[1];
  local_58 = lVar2;
  if (lVar5 == lVar4) {
    local_68 = lVar4;
  }
  else {
    do {
      lVar6 = lVar6 + -0x20;
      lVar5 = lVar5 + -0x20;
      FUN_00b796e4(plVar1,lVar6,lVar5);
    } while (lVar4 != lVar5);
    local_68 = *param_1;
    lVar4 = param_1[1];
  }
  *param_1 = lVar6;
  param_1[1] = lVar2;
  local_50 = param_1[2];
  param_1[2] = lVar3;
  local_60 = local_68;
  local_58 = lVar4;
  FUN_00b79818(&local_68);
  return;
}


