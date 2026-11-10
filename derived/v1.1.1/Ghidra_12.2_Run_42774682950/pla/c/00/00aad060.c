/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aad060; name: FUN_00aad060
 */


void FUN_00aad060(float param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  ulong uVar2;
  float fVar3;
  
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
  uVar2 = (ulong)((fVar3 / *(float *)PTR_FloatPi_04372cf0) * param_1);
  pfVar1 = (float *)(PTR_SinCosSampleTable_04372ce8 + (uVar2 >> 0x18 & 0xff) * 0x10);
  fVar3 = (float)((uint)uVar2 & 0xffffff) * 5.9604645e-08;
  *param_2 = pfVar1[1] + pfVar1[3] * fVar3;
  *param_3 = *pfVar1 + pfVar1[2] * fVar3;
  return;
}


