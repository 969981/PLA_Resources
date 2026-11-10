/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0123738c; name: FUN_0123738c
 */


undefined4 FUN_0123738c(long param_1,long param_2)

{
  undefined4 *puVar1;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    for (puVar1 = *(undefined4 **)(param_1 + 0x98); puVar1 != *(undefined4 **)(param_1 + 0xa0);
        puVar1 = puVar1 + 4) {
      if (*(long *)(puVar1 + 2) == param_2) {
        return *puVar1;
      }
    }
  }
  return 0;
}


