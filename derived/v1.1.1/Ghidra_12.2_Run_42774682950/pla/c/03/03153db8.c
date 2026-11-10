/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03153db8; name: FUN_03153db8
 */


void FUN_03153db8(long param_1)

{
  if (*(long *)(param_1 + 0xf0) != 0) {
    FUN_032d647c();
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN_032d647c();
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x84)) && (*(long *)(param_1 + 0x78) != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,*(long *)(param_1 + 0x78),0x20,
                 *(uint *)(param_1 + 0x84) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0x80000000;
  return;
}


