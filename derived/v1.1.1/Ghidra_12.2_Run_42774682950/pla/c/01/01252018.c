/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01252018; name: FUN_01252018
 */


void FUN_01252018(long param_1,undefined4 param_2)

{
  FUN_01251398(param_1,*(undefined4 *)
                        (*(long *)(param_1 + 0x1270) + (ulong)*(byte *)(param_1 + 0x12a8) * 4));
  FUN_01246564(param_1 + 0x1268,param_2);
  FUN_01251ef0(param_1);
  *(undefined1 *)(param_1 + 0x1330) = 1;
  return;
}


