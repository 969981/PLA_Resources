/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022d63c; name: FUN_0022d63c
 */


void FUN_0022d63c(long param_1,undefined4 param_2)

{
  if (*(long *)(param_1 + 200) != 0) {
    FUN_0021d124(*(long *)(param_1 + 200),param_2);
  }
  if (*(long *)(param_1 + 0xd0) == 0) {
    return;
  }
  FUN_0021d124(*(long *)(param_1 + 0xd0),param_2);
  return;
}


