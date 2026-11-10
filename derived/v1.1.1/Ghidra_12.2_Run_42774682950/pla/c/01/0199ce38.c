/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0199ce38; name: FUN_0199ce38
 */


void FUN_0199ce38(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0xa0) == 0) {
    return;
  }
  FUN_02605ea4(*(long *)(param_1 + 0xa0),param_2 & 1);
  return;
}


