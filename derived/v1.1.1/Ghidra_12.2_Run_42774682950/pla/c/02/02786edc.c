/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02786edc; name: FUN_02786edc
 */


ulong FUN_02786edc(ulong param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  iVar2 = FUN_02786d20(3);
  if (iVar2 == 0) {
    uVar1 = (int)param_1 - 0x6c4;
    if (((uVar1 & 0xffff) < 0xb) && ((0x7dfU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar3 = 0x65c0000;
    }
    else {
      uVar3 = (param_1 & 0xffff) << 0x10;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
  }
  return uVar3 | uVar4;
}


