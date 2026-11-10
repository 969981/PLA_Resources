/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005aa1a0; name: FUN_005aa1a0
 */


bool FUN_005aa1a0(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 - 1 & 0xff;
  uVar2 = uVar1 + 4;
  if (param_1 - 1 >> 8 != 0xfe) {
    uVar2 = uVar1;
  }
  *param_2 = uVar2;
  if (uVar2 < 7) {
    return *(ushort *)(PTR_DAT_04374f58 + (ulong)uVar2 * 2) == param_1;
  }
  return false;
}


