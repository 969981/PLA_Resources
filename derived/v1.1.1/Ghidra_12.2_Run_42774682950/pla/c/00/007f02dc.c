/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f02dc; name: FUN_007f02dc
 */


void FUN_007f02dc(long param_1,byte param_2)

{
  short sVar1;
  ushort uVar2;
  
  param_1 = param_1 + (ulong)param_2 * 2;
  uVar2 = *(ushort *)(param_1 + 0x18);
  sVar1 = uVar2 + 2;
  if ((uVar2 + 1 & 0x10000) == 0) {
    sVar1 = uVar2 + 1;
  }
  *(short *)(param_1 + 0x18) = sVar1;
  return;
}


