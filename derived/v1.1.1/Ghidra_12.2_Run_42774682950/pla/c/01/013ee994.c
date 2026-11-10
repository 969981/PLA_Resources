/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ee994; name: FUN_013ee994
 */


void FUN_013ee994(long *param_1)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0xb6) =
       (uint)(*(int *)((long)param_1 + 0x5b4) == 0 || *(int *)((long)param_1 + 0x5b4) == 3);
  uVar1 = (**(code **)(*param_1 + 0xb0))();
  *(uint *)((long)param_1 + 0x5ac) = ~uVar1 & 1;
  FUN_013ee930(param_1);
  return;
}


