/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00800160; name: FUN_00800160
 */


void FUN_00800160(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long local_28;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0x1d0))();
  plVar2 = (long *)FUN_007ecfa4();
  lVar3 = *plVar2;
  local_28 = 0;
  FUN_007ecf14(&local_28);
  *(long *)(param_1 + 0x70) = local_28 + lVar3 * iVar1;
  FUN_007ee660(param_1 + 0x80,param_2);
  *(undefined8 *)(param_1 + 0x30) = 0xd8;
  *(undefined8 *)(param_1 + 0x38) = 1;
  *(char **)(param_1 + 0x40) = "NetBackgroundProcessJob::StartDisconnectNetwork";
  return;
}


