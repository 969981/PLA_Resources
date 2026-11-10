/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfde74; name: FUN_02dfde74
 */


undefined8 FUN_02dfde74(long param_1)

{
  if (*(uint *)(param_1 + 0x28) < 4) {
    *(undefined **)(param_1 + 0x20) = (&PTR_DAT_042a49a8)[(int)*(uint *)(param_1 + 0x28)];
  }
  if (*(uint *)(param_1 + 0x68) < 4) {
    *(undefined **)(param_1 + 0x60) = (&PTR_DAT_042a49a8)[(int)*(uint *)(param_1 + 0x68)];
  }
  if ((*(long *)(param_1 + 0x20) == 0) || (*(long *)(param_1 + 0x60) == 0)) {
    return 0;
  }
  FUN_02dfea94();
  return 1;
}


