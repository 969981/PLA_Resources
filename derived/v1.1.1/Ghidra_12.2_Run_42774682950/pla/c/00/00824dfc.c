/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00824dfc; name: FUN_00824dfc
 */


void FUN_00824dfc(long param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask(*(ThreadType **)(param_1 + 0xd0),-1,(ulong)uVar1);
  return;
}


