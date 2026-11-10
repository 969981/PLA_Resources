/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5caf8; name: FUN_00d5caf8
 */


void FUN_00d5caf8(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x6e0) = *(undefined4 *)(param_1 + 0x6e4);
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x6e0);
  *(undefined4 *)(param_1 + 0x6e0) = 0;
  *(undefined4 *)(param_1 + 0x6e4) = uVar1;
  return;
}


