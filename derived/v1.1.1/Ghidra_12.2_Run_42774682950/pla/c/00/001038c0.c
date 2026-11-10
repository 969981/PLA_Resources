/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001038c0; name: FUN_001038c0
 */


long FUN_001038c0(uint param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  if (0x1ffff < param_2) {
    lVar1 = 0x20000;
  }
  lVar2 = 0x20000;
  if (0 < param_2) {
    lVar2 = lVar1;
  }
  lVar1 = 0;
  if ((param_1 | 2) != 0xb) {
    lVar1 = lVar2;
  }
  return lVar1 + lVar2 * 2 + 0xd020;
}


