/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ded674; name: FUN_02ded674
 */


undefined8 FUN_02ded674(long param_1,uint param_2,int *param_3)

{
  undefined8 uVar1;
  uint local_28;
  uint local_24;
  
  if (param_2 < *(uint *)(param_1 + 0x24)) {
    local_28 = param_2;
    FUN_02ded8e0(param_1 + 0x58,param_2,&local_28,&local_24);
    uVar1 = 1;
    *(ulong *)(param_1 + 0x108) = *(long *)(param_1 + 0x110) + (ulong)local_24;
    *(uint *)(param_1 + 0x28) = local_28;
    *param_3 = param_2 - local_28;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


