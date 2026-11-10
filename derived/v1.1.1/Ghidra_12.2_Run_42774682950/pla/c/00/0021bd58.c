/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021bd58; name: FUN_0021bd58
 */


float FUN_0021bd58(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + 0xc));
    fVar2 = *(float *)(param_1 + 0xc) * fVar2;
    fVar1 = *(float *)(param_1 + 0xc) * (float)(int)*(short *)(param_2 + 8);
  }
  else {
    fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + 0xc));
    fVar2 = *(float *)(param_1 + 0x20);
    fVar1 = (fVar2 - *(float *)(param_1 + 0xc) * fVar1) * 0.5 +
            *(float *)(param_1 + 0xc) * (float)(int)*(short *)(param_2 + 8);
  }
  FUN_0021bdfc(fVar1 + *(float *)(param_1 + 0x14),param_1);
  *(float *)(param_1 + 0x14) = fVar2 + *(float *)(param_1 + 0x14);
  return fVar2;
}


