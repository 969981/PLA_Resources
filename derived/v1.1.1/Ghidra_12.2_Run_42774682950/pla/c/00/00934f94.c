/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00934f94; name: FUN_00934f94
 */


bool FUN_00934f94(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 0x68) + 0x98) + 0x110);
  lVar1 = 3;
  if (0x17 < param_2) {
    lVar1 = (ulong)(param_2 < 0x1e) << 2;
  }
  lVar2 = 1;
  if (0x11 < param_2) {
    lVar2 = lVar1;
  }
  lVar1 = 2;
  if (0xb < param_2) {
    lVar1 = lVar2;
  }
  lVar2 = 0;
  if (5 < param_2) {
    lVar2 = lVar1;
  }
  if (uVar3 < 3) {
    return (&PTR_DAT_041c22d8)[(int)uVar3][lVar2] == '\0';
  }
  return false;
}


