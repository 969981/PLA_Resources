/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314fa84; name: FUN_0314fa84
 */


void FUN_0314fa84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = *(undefined4 *)(param_1 + 0x10c);
  local_18 = *(undefined4 *)(param_1 + 0x108);
  (**(code **)(**(long **)(param_1 + 0x50) + 0x20))
            (*(long **)(param_1 + 0x50),param_1,param_2,param_3,&local_18);
  *(undefined4 *)(param_1 + 0x10c) = local_14;
  *(undefined4 *)(param_1 + 0x108) = local_18;
  return;
}


