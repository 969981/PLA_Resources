/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f024c0; name: FUN_02f024c0
 */


void FUN_02f024c0(long param_1)

{
  undefined4 local_18;
  uint uStack_14;
  
  local_18 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x7c);
  uStack_14 = *(uint *)(*(long *)(param_1 + 0x18) + 0x2a3) >> 0x1c & 7;
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x28))
            (*(long **)(param_1 + 0xa0),param_1 + 0x38,param_1 + 0x24,&local_18);
  return;
}


