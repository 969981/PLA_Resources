/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a3af64; name: FUN_01a3af64
 */


void FUN_01a3af64(long param_1,byte param_2)

{
  if (*(byte *)(param_1 + 0x3ea) != (param_2 & 1)) {
    if ((param_2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x3ea) = 1;
      return;
    }
    *(undefined1 *)(param_1 + 0x3ea) = 0;
    *(undefined4 *)(param_1 + 0x3ec) = 0;
    *(undefined1 *)(param_1 + 0x3f0) = 0;
    *(undefined4 *)(param_1 + 0x3f4) = 0;
  }
  return;
}


