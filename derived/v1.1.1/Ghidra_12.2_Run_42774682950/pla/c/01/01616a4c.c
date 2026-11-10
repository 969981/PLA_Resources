/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01616a4c; name: FUN_01616a4c
 */


void FUN_01616a4c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  plVar1 = param_1 + 3;
  lVar4 = FUN_01616c28(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  local_60 = 0;
  plStack_58 = plVar1;
  if (lVar4 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 << 3,4);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xb8))();
    }
  }
  lVar2 = local_78 + (lVar3 - lVar2 >> 3) * 8;
  local_60 = local_78 + lVar4 * 8;
  lStack_70 = lVar2;
  FUN_01616b3c(plVar1,lVar2,param_2,param_3);
  local_68 = lVar2 + 8;
  FUN_01616c78(param_1,&local_78);
  FUN_01616d20(&local_78);
  return;
}


