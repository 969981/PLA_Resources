/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e1dd48; name: FUN_02e1dd48
 */


void FUN_02e1dd48(float param_1,float param_2,uint *param_3,uint param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = (double)NEON_ucvtf((ulong)param_3[0x12]);
  dVar2 = (dVar3 * -1.7269388197455346) / ((double)param_4 * (double)param_1);
  dVar1 = 1.0 - (double)param_2 * (double)param_2;
  if (1.0 < dVar2 * dVar1) {
    dVar1 = 1.0 / dVar2;
  }
  dVar5 = 1.0 / ((double)param_4 * (double)param_1);
  dVar2 = (double)NEON_ucvtf((ulong)*param_3);
  dVar6 = dVar2 * -3.0 * dVar5;
  dVar2 = exp2(dVar6 * 3.321928094887362);
  dVar4 = 0.5756462732485116 -
          (double)(float)SQRT(1.0 - dVar1) * (double)(float)SQRT(1.0 - dVar1) * 0.5756462732485116;
  dVar1 = (double)NEON_fminnm(dVar4 * dVar6,0x3feff7ced916872b);
  dVar6 = (double)NEON_ucvtf((ulong)param_3[6]);
  param_3[0x19] = (uint)(float)(dVar2 - dVar2 * dVar1);
  param_3[0x1a] = (uint)-(float)dVar1;
  dVar2 = dVar6 * -3.0 * dVar5;
  dVar1 = exp2(dVar2 * 3.321928094887362);
  dVar2 = (double)NEON_fminnm(dVar4 * dVar2,0x3feff7ced916872b);
  param_3[0x1c] = (uint)(float)(dVar1 - dVar1 * dVar2);
  param_3[0x1d] = (uint)-(float)dVar2;
  dVar1 = (double)NEON_ucvtf((ulong)param_3[0xc]);
  dVar2 = dVar1 * -3.0 * dVar5;
  dVar1 = exp2(dVar2 * 3.321928094887362);
  dVar2 = (double)NEON_fminnm(dVar4 * dVar2,0x3feff7ced916872b);
  param_3[0x1f] = (uint)(float)(dVar1 - dVar1 * dVar2);
  param_3[0x20] = (uint)-(float)dVar2;
  dVar5 = dVar3 * -3.0 * dVar5;
  dVar1 = exp2(dVar5 * 3.321928094887362);
  dVar2 = (double)NEON_fminnm(dVar4 * dVar5,0x3feff7ced916872b);
  param_3[0x22] = (uint)(float)(dVar1 - dVar1 * dVar2);
  param_3[0x23] = (uint)-(float)dVar2;
  return;
}


