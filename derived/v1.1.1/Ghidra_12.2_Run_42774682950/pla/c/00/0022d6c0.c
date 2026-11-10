/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022d6c0; name: FUN_0022d6c0
 */


void FUN_0022d6c0(long param_1,undefined4 param_2)

{
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 200) + 0x30) = param_2;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x30) = param_2;
  }
  return;
}


