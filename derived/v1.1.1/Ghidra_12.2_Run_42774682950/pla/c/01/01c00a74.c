/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c00a74; name: FUN_01c00a74
 */


void FUN_01c00a74(long param_1)

{
  ulong uVar1;
  
  FUN_01a568a4();
  uVar1 = FUN_01a5badc(param_1,param_1 + 0x1350);
  if ((uVar1 & 0xff) != 0) {
    *(int *)(param_1 + 0x16d8) = (int)(uVar1 >> 0x20);
  }
  return;
}


