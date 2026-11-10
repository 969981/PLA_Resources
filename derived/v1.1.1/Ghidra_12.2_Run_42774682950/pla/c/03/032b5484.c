/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b5484; name: FUN_032b5484
 */


float FUN_032b5484(uint param_1)

{
  long lVar1;
  float fVar2;
  
  if (*(char *)((long)&DAT_04440a5d + (ulong)param_1 * 0x38 + 7) == '\0') {
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(&DAT_04440a40 + (ulong)param_1 * 0xe));
    return fVar2;
  }
  lVar1 = (ulong)param_1 * 0x38;
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(&DAT_04440a40 + (ulong)param_1 * 0xe));
  return fVar2 / (float)((uint)*(byte *)((long)&DAT_04440a40 + lVar1 + 3) *
                         (uint)*(byte *)((long)&DAT_04440a40 + lVar1 + 2) *
                        (uint)(byte)(&DAT_04440a44)[lVar1]);
}


