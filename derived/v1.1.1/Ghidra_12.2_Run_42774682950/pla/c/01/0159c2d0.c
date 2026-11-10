/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0159c2d0; name: FUN_0159c2d0
 */


void FUN_0159c2d0(long param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  long *local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  
  memcpy((void *)(param_1 + 0x100),*(void **)(param_1 + 0x90),0x100);
  FUN_01559fc0(&local_60,(void *)(param_1 + 0x100));
  plVar2 = (long *)*param_2;
  *param_2 = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_60;
  local_60 = (long *)0x0;
  *param_2 = (long)plVar2;
  param_2[1] = local_58;
  param_2[2] = local_50;
  plVar2 = (long *)param_2[4];
  param_2[3] = local_48;
  param_2[4] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  lVar1 = local_40;
  local_40 = 0;
  param_2[4] = lVar1;
  *(undefined4 *)(param_2 + 5) = local_38;
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if ((param_3 & 1) != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 0x100;
  }
  return;
}


