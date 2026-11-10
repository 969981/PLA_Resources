/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01137084; name: FUN_01137084
 */


void FUN_01137084(long param_1,int param_2,undefined1 param_3)

{
  if (param_2 - 1U < 6) {
    *(undefined1 *)(param_1 + (ulong)(param_2 - 1U) * 0x10 + 0x7f) = param_3;
  }
  return;
}


