/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d0af0; name: FUN_004d0af0
 */


void FUN_004d0af0(long param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_004d0a90((ulong *)(param_1 + 0x1790),param_2 + 1);
  uVar1 = (uint)uVar2;
  if ((int)uVar1 < 1) {
    if (-uVar1 < 0x40) {
      *param_2 = *param_2 | 1L << ((ulong)-uVar1 & 0x3f);
    }
    return;
  }
  if (uVar1 < 0x40) {
    uVar2 = *param_2 << (uVar2 & 0x3f) | 1;
  }
  else {
    uVar2 = 1;
  }
  *param_2 = uVar2;
  param_2[1] = *(ulong *)(param_1 + 0x1790);
  return;
}


