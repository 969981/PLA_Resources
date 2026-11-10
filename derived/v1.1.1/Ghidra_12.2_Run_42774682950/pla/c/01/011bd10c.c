/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011bd10c; name: FUN_011bd10c
 */


void FUN_011bd10c(long param_1)

{
  if (*(undefined4 **)(param_1 + 0xbc8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0xbc8) = 3;
    *(undefined1 *)(*(long *)(param_1 + 0xbc8) + 0xd) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0xbc8) + 4) =
         *(undefined4 *)(*(long *)(param_1 + 0x688) + 0x828);
    *(undefined4 *)(*(long *)(param_1 + 0xbc8) + 8) =
         *(undefined4 *)(*(long *)(param_1 + 0x688) + 0x830);
    *(undefined1 *)(*(long *)(param_1 + 0xbc8) + 0xc) =
         *(undefined1 *)(*(long *)(param_1 + 0x688) + 0x820);
  }
  return;
}


