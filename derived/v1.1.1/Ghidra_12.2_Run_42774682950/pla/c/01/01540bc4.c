/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01540bc4; name: FUN_01540bc4
 */


void FUN_01540bc4(long param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0xbc) < 0) {
    fVar1 = 0.0;
  }
  else if (*(int *)(param_1 + 0x80) < 1) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = (float)*(int *)(param_1 + 0xbc) / (float)*(int *)(param_1 + 0x80);
  }
  (**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_1 + 0x484) * 8))(fVar1);
  FUN_009c6b1c(param_1 + 0x490,param_1 + 0x4a0);
  return;
}


