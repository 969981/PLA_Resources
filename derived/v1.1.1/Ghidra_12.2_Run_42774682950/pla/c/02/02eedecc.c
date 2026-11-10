/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eedecc; name: FUN_02eedecc
 */


uint FUN_02eedecc(ushort *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1[1] - (uint)*param_1;
  if ((uVar1 & 0xffff) == 0) {
    return (uint)*param_1;
  }
  DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
  return (int)((double)(uint)((ulong)DAT_0440a190 >> 0x21) *
               (double)(int)(short)uVar1 * 4.656612875245797e-10 + 0.5) + (uint)*param_1;
}


