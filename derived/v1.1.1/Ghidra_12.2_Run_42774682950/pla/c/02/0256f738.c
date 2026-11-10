/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0256f738; name: FUN_0256f738
 */


void FUN_0256f738(long param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x440) = 0xc61c4000c61c4000;
    return;
  }
  *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_1 + 0x454);
  return;
}


