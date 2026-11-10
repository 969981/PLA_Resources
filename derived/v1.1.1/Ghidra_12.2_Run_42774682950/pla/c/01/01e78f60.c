/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e78f60; name: FUN_01e78f60
 */


void FUN_01e78f60(long *param_1,undefined8 param_2)

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
  
  plVar1 = param_1 + 3;
  lVar4 = FUN_01e79174(param_1,(param_1[1] - *param_1 >> 6) + 1);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar1;
  if (lVar4 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 << 6,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xb8))();
    }
  }
  lVar2 = local_68 + (lVar3 - lVar2 >> 6) * 0x40;
  local_50 = local_68 + lVar4 * 0x40;
  lStack_60 = lVar2;
  FUN_01e79040(plVar1,lVar2,param_2);
  local_58 = lVar2 + 0x40;
  FUN_01e791c4(param_1,&local_68);
  FUN_01e7936c(&local_68);
  return;
}


