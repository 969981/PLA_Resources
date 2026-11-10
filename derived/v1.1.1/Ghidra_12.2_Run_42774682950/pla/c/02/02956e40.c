/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02956e40; name: FUN_02956e40
 */


int FUN_02956e40(int param_1,uint param_2)

{
  short *psVar1;
  uint uVar2;
  
  uVar2 = param_1 - 1;
  if ((0x33 < uVar2) || ((0xfc005011973ffU >> ((ulong)uVar2 & 0x3f) & 1) == 0)) {
    return -1;
  }
  psVar1 = (short *)(&DAT_03a7ee7a + *(long *)(&DAT_03a7ef40 + (long)(int)uVar2 * 8) * 8);
  if ((param_2 & 1) == 0) {
    psVar1 = (short *)(&DAT_03a7ee78 + *(long *)(&DAT_03a7ef40 + (long)(int)uVar2 * 8) * 8);
  }
  if (*psVar1 < 0) {
    return (int)*(short *)(&DAT_03a7ee78 + *(long *)(&DAT_03a7ef40 + (long)(int)uVar2 * 8) * 8);
  }
  return (int)*psVar1;
}


