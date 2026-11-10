/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042c770; name: FUN_0042c770
 */


void FUN_0042c770(long *param_1,long param_2)

{
  if (*param_1 != 0) {
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
      FUN_0040c1e0();
    }
    else {
      FUN_0040c140();
    }
    *param_1 = 0;
  }
  return;
}


