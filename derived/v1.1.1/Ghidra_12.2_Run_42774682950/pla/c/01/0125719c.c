/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0125719c; name: FUN_0125719c
 */


void FUN_0125719c(long param_1,undefined4 param_2)

{
  FUN_012553fc(param_1,*(undefined4 *)
                        (*(long *)(param_1 + 0x13e0) + (ulong)*(byte *)(param_1 + 0x1418) * 4));
  FUN_01246564(param_1 + 0x13d8,param_2);
  FUN_01257150(param_1);
  *(undefined1 *)(param_1 + 0x1490) = 1;
  return;
}


