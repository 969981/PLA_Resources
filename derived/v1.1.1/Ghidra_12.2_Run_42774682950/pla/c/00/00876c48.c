/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00876c48; name: FUN_00876c48
 */


void FUN_00876c48(undefined1 *param_1)

{
  *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) & 0xfffe;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return;
}


