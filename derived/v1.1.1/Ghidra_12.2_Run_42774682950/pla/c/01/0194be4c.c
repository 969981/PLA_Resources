/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0194be4c; name: FUN_0194be4c
 */


void FUN_0194be4c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  if (param_1[1] != param_1[2]) {
    FUN_0194bf80(param_1 + 3,param_1[1],param_2);
    param_1[1] = param_1[1] + 8;
    return;
  }
  plVar1 = param_1 + 3;
  lVar4 = FUN_0194c0a8(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar1;
  if (lVar4 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 << 3,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xb8))();
    }
  }
  lVar2 = local_68 + (lVar3 - lVar2 >> 3) * 8;
  local_50 = local_68 + lVar4 * 8;
  lStack_60 = lVar2;
  FUN_0194bf80(plVar1,lVar2,param_2);
  local_58 = lVar2 + 8;
  FUN_0194c0f8(param_1,&local_68);
  FUN_0194c1a0(&local_68);
  return;
}


