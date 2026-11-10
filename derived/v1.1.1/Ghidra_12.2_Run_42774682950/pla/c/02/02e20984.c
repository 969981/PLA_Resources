/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e20984; name: FUN_02e20984
 */


undefined8 FUN_02e20984(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*param_1 & 0xf00) == 0x100) {
    uVar1 = *param_1 >> 0xc;
    uVar2 = uVar1 & 0x63f;
    uVar3 = uVar2 - 0x603;
    if ((uVar3 < 0x3d && (1L << ((ulong)uVar3 & 0x3f) & 0x1111000000001111U) != 0) ||
       ((uVar2 < 0x10 && ((1 << (ulong)(uVar1 & 0x1f) & 0x9988U) != 0)))) {
      return 1;
    }
  }
  return 0;
}


