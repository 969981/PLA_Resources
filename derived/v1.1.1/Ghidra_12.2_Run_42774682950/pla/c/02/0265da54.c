/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0265da54; name: FUN_0265da54
 */


void FUN_0265da54(long *param_1,undefined8 param_2)

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
    FUN_0265db84(param_1 + 3,param_1[1],param_2);
    param_1[1] = param_1[1] + 4;
    return;
  }
  plVar1 = param_1 + 3;
  lVar4 = FUN_0265dc5c(param_1,(param_1[1] - *param_1 >> 2) + 1);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar1;
  if (lVar4 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 << 2,4);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xb8))();
    }
  }
  lVar2 = local_68 + (lVar3 - lVar2 >> 2) * 4;
  local_50 = local_68 + lVar4 * 4;
  lStack_60 = lVar2;
  FUN_0265db84(plVar1,lVar2,param_2);
  local_58 = lVar2 + 4;
  FUN_0265dcac(param_1,&local_68);
  FUN_0265dd54(&local_68);
  return;
}


