/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01283b28; name: FUN_01283b28
 */


void FUN_01283b28(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_01290a14(*(undefined8 *)(param_1 + 0x1a8));
  if ((uVar1 & 1) != 0) {
    FUN_00d42438(*(undefined8 *)(param_1 + 0x1a8),1,1);
    FUN_00d4ba88(*(undefined8 *)(param_1 + 0x1a8),2,1);
    FUN_00d428b0(*(undefined8 *)(param_1 + 0x1a8),0);
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  return;
}


