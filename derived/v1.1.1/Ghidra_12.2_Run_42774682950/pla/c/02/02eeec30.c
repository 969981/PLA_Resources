/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eeec30; name: FUN_02eeec30
 */


int FUN_02eeec30(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar2 = 0;
  uVar3 = (uint)((ulong)DAT_0440a190 >> 0x21);
  if (uVar1 != 0) {
    uVar2 = uVar3 / uVar1;
  }
  return uVar3 - uVar2 * uVar1;
}


