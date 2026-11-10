/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027dc670; name: FUN_027dc670
 */


void FUN_027dc670(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_027d7f4c();
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_027dba38();
  }
  FUN_027dc6b0(param_1);
  FUN_027dc71c(param_1);
  return;
}


