/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02764868; name: FUN_02764868
 */


void FUN_02764868(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  plVar1 = param_1 + 3;
  lVar4 = FUN_02764964(param_1,(param_1[1] - *param_1 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  local_50 = 0;
  local_68 = 0;
  plStack_48 = plVar1;
  if (lVar4 != 0) {
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 * 0x68,8);
  }
  puVar5 = (undefined8 *)(local_68 + (lVar3 - lVar2 >> 3) * 8);
  local_50 = local_68 + lVar4 * 0x68;
  *puVar5 = &PTR_FUN_0426b9d8;
  puStack_60 = puVar5;
  FUN_02762fb0(puVar5 + 1,param_2 + 8);
  FUN_027644dc(puVar5 + 5,param_2 + 0x28);
  FUN_02762fb0(puVar5 + 9,param_2 + 0x48);
  local_58 = puVar5 + 0xd;
  FUN_027649e0(param_1,&local_68);
  FUN_02764ab0(&local_68);
  return;
}


