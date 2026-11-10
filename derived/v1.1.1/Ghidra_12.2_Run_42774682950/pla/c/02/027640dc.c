/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027640dc; name: FUN_027640dc
 */


void FUN_027640dc(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
    FUN_02764b24(param_1,param_2);
    return;
  }
  FUN_02764bc8(param_1 + 0x18);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x18;
  return;
}


