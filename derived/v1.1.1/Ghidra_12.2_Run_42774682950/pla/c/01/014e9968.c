/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014e9968; name: FUN_014e9968
 */


uint FUN_014e9968(long param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  if (*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x5b0) + 0x80) == 7) {
    local_14 = FUN_00d686a0();
    uVar1 = (**(code **)(param_1 + 0x90))(param_1 + 0xb0,&local_14);
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}


