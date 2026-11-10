/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9cc08; name: FUN_02e9cc08
 */


void FUN_02e9cc08(long param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x180) & 0xfffe;
  uVar2 = uVar1 | 4;
  if ((param_2 & 1) == 0) {
    uVar2 = uVar1;
  }
  *(ushort *)(param_1 + 0x180) = uVar2;
  return;
}


