/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333f1a4; name: FUN_0333f1a4
 */


void FUN_0333f1a4(uint param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar1 = param_1 & 0x7fffffff;
  if (uVar1 < 0x477fe001) {
    uVar2 = uVar1 + 0xc8000000;
    if (uVar1 >> 0x17 < 0x71) {
      uVar2 = (param_1 & 0x7fffff | 0x800000) >> (ulong)(0x71 - (uVar1 >> 0x17) & 0x1f);
    }
    uVar3 = (ushort)(uVar2 + (uVar2 >> 0xd & 1) + 0xfff >> 0xd) & 0x7fff;
  }
  else {
    uVar3 = 0x7c00;
    if ((param_1 & 0x7fffff) != 0 && (~param_1 & 0x7f800000) == 0) {
      uVar3 = 0x7fff;
    }
  }
  *param_2 = uVar3 | (ushort)(param_1 >> 0x10) & 0x8000;
  return;
}


