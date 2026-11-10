/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303ea98; name: FUN_0303ea98
 */


void FUN_0303ea98(float param_1,float param_2,long param_3,undefined8 *param_4,int param_5,
                 int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *(int *)(param_3 + 0x70) = param_5;
  *(int *)(param_3 + 0x78) = param_6;
  *(float *)(param_3 + 0x74) = 1.0 / (float)param_5;
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  *(float *)(param_3 + 0x7c) = 1.0 / (float)param_6;
  uVar9 = CONCAT44(param_1,param_1);
  fVar5 = 1.0 / param_1;
  *(undefined8 *)(param_3 + 0x10) = uVar9;
  *(ulong *)(param_3 + 0x18) = CONCAT44(fVar5,fVar5);
  if ((float)uVar8 == 0.0) {
    uVar8 = NEON_fmov(0x3f800000,4);
  }
  else {
    uVar10 = NEON_frecpe(uVar8,4);
    uVar11 = NEON_frecps(uVar8,uVar10,4);
    fVar3 = (float)uVar10 * (float)uVar11;
    fVar1 = (float)((ulong)uVar10 >> 0x20) * (float)((ulong)uVar11 >> 0x20);
    uVar8 = NEON_frecps(uVar8,CONCAT44(fVar1,fVar3),4);
    uVar8 = CONCAT44(param_1 * fVar1 * (float)((ulong)uVar8 >> 0x20),param_1 * fVar3 * (float)uVar8)
    ;
  }
  *(undefined8 *)(param_3 + 0x28) = uVar8;
  if (param_1 <= param_2) {
    uVar9 = CONCAT44(param_2,param_2);
  }
  fVar1 = (1.0 / (float)param_5) * param_1;
  uVar8 = NEON_scvtf(CONCAT44(param_5,param_5),4);
  *(undefined8 *)(param_3 + 0x30) = uVar9;
  *(ulong *)(param_3 + 0x38) = CONCAT44(fVar1,fVar1);
  fVar3 = fVar5 * (float)uVar8;
  *(ulong *)(param_3 + 0x40) = CONCAT44(fVar5 * (float)((ulong)uVar8 >> 0x20),fVar3);
  uVar9 = *param_4;
  *(ulong *)(param_3 + 0x98) =
       CONCAT44((float)((ulong)param_4[1] >> 0x20) * fVar1,(float)param_4[1] * fVar1);
  *(ulong *)(param_3 + 0x90) = CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar1,(float)uVar9 * fVar1);
  fVar5 = (float)*param_4 * param_1;
  fVar1 = (float)((ulong)*param_4 >> 0x20) * param_1;
  param_1 = (float)param_4[1] * param_1;
  fVar2 = fVar5 * fVar5 + fVar1 * fVar1 + param_1 * param_1;
  uVar9 = CONCAT44(fVar5 * fVar5 + fVar1 * fVar1 + param_1 * param_1,fVar2);
  uVar8 = NEON_frsqrte(uVar9,4);
  fVar6 = (float)uVar8;
  fVar7 = (float)((ulong)uVar8 >> 0x20);
  uVar8 = NEON_frsqrts(uVar9,CONCAT44(fVar7 * fVar7,fVar6 * fVar6),4);
  fVar6 = fVar6 * (float)uVar8;
  fVar7 = fVar7 * (float)((ulong)uVar8 >> 0x20);
  uVar9 = NEON_frsqrts(uVar9,CONCAT44(fVar7 * fVar7,fVar6 * fVar6),4);
  iVar4 = -(uint)(fVar2 <= 0.0);
  fVar2 = fVar2 * (float)uVar9 * fVar6;
  fVar6 = -(fVar3 * *(float *)(param_3 + 0xec));
  *(ulong *)(param_3 + 0xa8) =
       CONCAT44(CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                         CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10),
                                  CONCAT11((byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar4 >> 8),
                                           SUB41(fVar2,0) & ~(byte)iVar4))),param_1);
  *(ulong *)(param_3 + 0xa0) = CONCAT44(fVar1,fVar5);
  fVar3 = *(float *)(param_3 + 0xe4) * fVar3;
  *(ulong *)(param_3 + 0xd0) = CONCAT44(fVar3,fVar3);
  *(ulong *)(param_3 + 0xd8) = CONCAT44(fVar6,fVar6);
  fVar5 = (float)*param_4;
  fVar1 = (float)((ulong)*param_4 >> 0x20);
  fVar5 = fVar5 * fVar5;
  fVar1 = fVar1 * fVar1;
  fVar2 = (float)param_4[1] * (float)param_4[1];
  fVar3 = fVar5 + fVar1 + fVar2;
  uVar9 = CONCAT44(fVar5 + fVar1 + fVar2,fVar3);
  uVar8 = NEON_frsqrte(uVar9,4);
  fVar5 = (float)uVar8;
  fVar1 = (float)((ulong)uVar8 >> 0x20);
  uVar8 = NEON_frsqrts(uVar9,CONCAT44(fVar1 * fVar1,fVar5 * fVar5),4);
  fVar5 = fVar5 * (float)uVar8;
  fVar1 = fVar1 * (float)((ulong)uVar8 >> 0x20);
  uVar9 = NEON_frsqrts(uVar9,CONCAT44(fVar1 * fVar1,fVar5 * fVar5),4);
  iVar4 = -(uint)(fVar3 <= 0.0);
  fVar3 = fVar3 * (float)uVar9 * fVar5;
  fVar5 = (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                          CONCAT12((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10),
                                   CONCAT11((byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar4 >> 8),
                                            SUB41(fVar3,0) & ~(byte)iVar4)));
  if (fVar5 == 0.0) {
    *(undefined4 *)(param_3 + 0x80) = 0x411cf5c3;
    return;
  }
  *(float *)(param_3 + 0x80) = fVar5;
  return;
}


