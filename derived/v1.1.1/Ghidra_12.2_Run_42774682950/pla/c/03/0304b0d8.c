/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0304b0d8; name: FUN_0304b0d8
 */


void FUN_0304b0d8(long *param_1,ulong param_2,undefined1 param_3)

{
  *(undefined1 *)
   (param_1[0x71] +
    (long)*(int *)(*(long *)(*param_1 + 0x38) + (param_2 & 0xffffff) * 0xc0 + 0x80) * 0x20 + 0xe) =
       param_3;
  return;
}


