/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ba1b8; name: FUN_032ba1b8
 */


void FUN_032ba1b8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = nn::os::GetThreadAvailableCoreMask();
  uVar2 = *(uint *)(param_1 + 0x248);
  uVar4 = 1L << ((ulong)uVar2 & 0x3f);
  uVar3 = *(ulong *)(param_1 + 0x240) & uVar1;
  if (uVar2 == 0xffffffff || (uVar4 & uVar1) == 0) {
    if (uVar3 != 0) {
      uVar1 = uVar3;
    }
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = uVar3 | uVar4;
  }
  nn::os::SetThreadCoreMask((ThreadType *)(param_1 + 0x78),uVar2,uVar1);
  return;
}


