/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f544c; name: FUN_030f544c
 */


void FUN_030f544c(long param_1,long param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  
  uVar14 = *(undefined8 *)(param_2 + 0xa0);
  param_3[1] = *(undefined8 *)(param_2 + 0xa8);
  *param_3 = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0xa0);
  param_3[3] = *(undefined8 *)(param_2 + 0xa8);
  param_3[2] = uVar14;
  plVar2 = (long *)FUN_030f5640(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  iVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2,param_3);
  iVar8 = *(int *)(param_1 + 0x54);
  if ((iVar8 != -1) && (iVar1 = iVar8, (param_4 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  }
  if (((param_4 & 1) == 0) && (iVar1 != *(int *)(param_1 + 0x28))) {
    FUN_030f53bc(param_1,iVar1,param_2,param_3);
  }
  if (iVar1 == *(int *)(param_1 + 0x2c)) {
    plVar2 = (long *)FUN_030f5640(*(undefined8 *)(param_1 + 0x20),iVar1);
    (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2,param_3);
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    uVar7 = param_3[1];
    uVar17 = *param_3;
    fVar4 = (float)uVar17;
    fVar5 = (float)((ulong)uVar17 >> 0x20);
    fVar6 = (float)uVar7;
    fVar3 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
    uVar14 = CONCAT44(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6,fVar3);
    uVar11 = NEON_frsqrte(uVar14,4);
    fVar10 = (float)uVar11;
    fVar12 = (float)((ulong)uVar11 >> 0x20);
    uVar11 = NEON_frsqrts(uVar14,CONCAT44(fVar12 * fVar12,fVar10 * fVar10),4);
    fVar10 = fVar10 * (float)uVar11;
    fVar12 = fVar12 * (float)((ulong)uVar11 >> 0x20);
    uVar14 = NEON_frsqrts(uVar14,CONCAT44(fVar12 * fVar12,fVar10 * fVar10),4);
    iVar8 = -(uint)(fVar3 <= 0.0);
    fVar3 = fVar3 * (float)uVar14 * fVar10;
    fVar3 = (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                            CONCAT12((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                     CONCAT11((byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                              SUB41(fVar3,0) & ~(byte)iVar8)));
    if (*(float *)(param_1 + 0x38) < fVar3) {
      fVar3 = *(float *)(param_1 + 0x38) / fVar3;
      uVar17 = CONCAT44(fVar5 * fVar3,fVar4 * fVar3);
      uVar7 = CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar3,fVar6 * fVar3);
      param_3[1] = uVar7;
      *param_3 = uVar17;
    }
    uVar11 = param_3[3];
    uVar14 = param_3[2];
    fVar3 = (float)((ulong)uVar14 >> 0x20);
    fVar4 = (float)((ulong)uVar11 >> 0x20);
    fVar12 = *(float *)(param_2 + 0x8c);
    fVar5 = ((float)uVar17 - (float)uVar14) * fVar12;
    fVar6 = ((float)((ulong)uVar17 >> 0x20) - fVar3) * fVar12;
    fVar10 = ((float)uVar7 - (float)uVar11) * fVar12;
    fVar9 = fVar5 * fVar5 + fVar6 * fVar6 + fVar10 * fVar10;
    uVar17 = CONCAT44(fVar5 * fVar5 + fVar6 * fVar6 + fVar10 * fVar10,fVar9);
    uVar15 = NEON_frsqrte(uVar17,4);
    fVar13 = (float)uVar15;
    fVar16 = (float)((ulong)uVar15 >> 0x20);
    uVar15 = NEON_frsqrts(uVar17,CONCAT44(fVar16 * fVar16,fVar13 * fVar13),4);
    fVar13 = fVar13 * (float)uVar15;
    fVar16 = fVar16 * (float)((ulong)uVar15 >> 0x20);
    uVar17 = NEON_frsqrts(uVar17,CONCAT44(fVar16 * fVar16,fVar13 * fVar13),4);
    iVar8 = -(uint)(fVar9 <= 0.0);
    fVar9 = (float)uVar17 * fVar13 * fVar9;
    fVar9 = (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                            CONCAT12((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                     CONCAT11((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                              SUB41(fVar9,0) & ~(byte)iVar8))) /
            *(float *)(param_1 + 0x34);
    param_3[1] = uVar11;
    *param_3 = uVar14;
    if ((fVar9 <= 1.0) || (*(int *)(param_1 + 0x28) == 1)) {
      fVar9 = *(float *)(param_1 + 0x3c) * *(float *)(param_2 + 0x88);
    }
    else {
      fVar9 = (*(float *)(param_1 + 0x3c) * *(float *)(param_2 + 0x88)) / fVar9;
    }
    param_3[1] = CONCAT44(fVar4 + ((float)((ulong)uVar7 >> 0x20) - fVar4) * fVar12 * fVar9,
                          (float)uVar11 + fVar10 * fVar9);
    *param_3 = CONCAT44(fVar3 + fVar6 * fVar9,(float)uVar14 + fVar5 * fVar9);
  }
  if ((param_4 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
    uVar17 = *(undefined8 *)(param_2 + 0x68);
    uVar14 = *(undefined8 *)(param_2 + 0x60);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    *(undefined8 *)(param_1 + 0x48) = uVar17;
    *(undefined8 *)(param_1 + 0x40) = uVar14;
  }
  return;
}


