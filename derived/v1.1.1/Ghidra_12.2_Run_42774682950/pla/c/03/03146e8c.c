/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03146e8c; name: FUN_03146e8c
 */


void FUN_03146e8c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar4 = PTR_PTR_0434a080;
  puVar8 = (uint *)(param_1 + 0x3c);
  uVar6 = *puVar8;
  iVar7 = *(int *)(param_1 + 0x38);
  uVar2 = iVar7 + 1;
  if (iVar7 < (int)(uVar6 & 0x3fffffff)) {
    lVar5 = *(long *)(param_1 + 0x30);
    iVar13 = iVar7;
  }
  else {
    uVar15 = *(undefined8 *)(param_1 + 0x30);
    if (0x3ffffffe < iVar7) {
      FUN_032bd0a8(uVar2,param_2,param_3,uVar15);
      uVar6 = *puVar8;
    }
    uVar6 = (uVar6 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar6) {
      uVar6 = 0x3fffffff;
    }
    uVar3 = uVar2;
    if ((int)uVar2 <= (int)uVar6) {
      uVar3 = uVar6;
    }
    lVar5 = FUN_032bd1d4(puVar4,uVar3,0x10,uVar15,iVar7,puVar8);
    iVar13 = *(int *)(param_1 + 0x38);
    *(long *)(param_1 + 0x30) = lVar5;
  }
  puVar1 = (undefined8 *)(lVar5 + (long)iVar13 * 0x10);
  puVar1[1] = param_2[1];
  *puVar1 = *param_2;
  *(uint *)(param_1 + 0x38) = uVar2;
  if (iVar7 == 0) {
    puVar8 = (uint *)(param_1 + 0x4c);
    uVar6 = *puVar8;
    iVar7 = *(int *)(param_1 + 0x48);
    uVar2 = iVar7 + 1;
    if (iVar7 < (int)(uVar6 & 0x3fffffff)) {
      lVar5 = *(long *)(param_1 + 0x40);
    }
    else {
      uVar15 = *(undefined8 *)(param_1 + 0x40);
      if (0x3ffffffe < iVar7) {
        FUN_032bd0a8(uVar2);
        uVar6 = *puVar8;
      }
      uVar6 = (uVar6 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar6) {
        uVar6 = 0x3fffffff;
      }
      uVar3 = uVar2;
      if ((int)uVar2 <= (int)uVar6) {
        uVar3 = uVar6;
      }
      lVar5 = FUN_032bd1d4(puVar4,uVar3,4,uVar15,iVar7,puVar8);
      iVar7 = *(int *)(param_1 + 0x48);
      *(long *)(param_1 + 0x40) = lVar5;
    }
    *(undefined4 *)(lVar5 + (long)iVar7 * 4) = 0;
    *(uint *)(param_1 + 0x48) = uVar2;
  }
  else {
    puVar8 = (uint *)(param_1 + 0x4c);
    uVar6 = *puVar8;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)(iVar7 + -1) * 0x10);
    uVar15 = *puVar1;
    iVar7 = *(int *)(param_1 + 0x48);
    fVar9 = (float)*param_2 - (float)uVar15;
    fVar11 = (float)((ulong)*param_2 >> 0x20) - (float)((ulong)uVar15 >> 0x20);
    fVar12 = (float)param_2[1] - (float)puVar1[1];
    lVar5 = *(long *)(param_1 + 0x40);
    fVar9 = fVar9 * fVar9;
    fVar11 = fVar11 * fVar11;
    fVar12 = fVar12 * fVar12;
    fVar10 = fVar12 + fVar9 + fVar11;
    uVar15 = CONCAT44(fVar12 + fVar9 + fVar11,fVar10);
    uVar14 = NEON_frsqrte(uVar15,4);
    fVar9 = (float)uVar14;
    fVar11 = (float)((ulong)uVar14 >> 0x20);
    uVar14 = NEON_frsqrts(uVar15,CONCAT44(fVar11 * fVar11,fVar9 * fVar9),4);
    fVar9 = fVar9 * (float)uVar14;
    fVar11 = fVar11 * (float)((ulong)uVar14 >> 0x20);
    uVar15 = NEON_frsqrts(uVar15,CONCAT44(fVar11 * fVar11,fVar9 * fVar9),4);
    iVar13 = -(uint)(fVar10 <= 0.0);
    fVar10 = fVar10 * (float)uVar15 * fVar9;
    fVar9 = *(float *)(lVar5 + (long)(iVar7 + -1) * 4);
    uVar2 = iVar7 + 1;
    if ((int)(uVar6 & 0x3fffffff) <= iVar7) {
      if (0x3ffffffe < iVar7) {
        FUN_032bd0a8(uVar2);
        uVar6 = *puVar8;
      }
      uVar6 = (uVar6 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar6) {
        uVar6 = 0x3fffffff;
      }
      uVar3 = uVar2;
      if ((int)uVar2 <= (int)uVar6) {
        uVar3 = uVar6;
      }
      lVar5 = FUN_032bd1d4(puVar4,uVar3,4,lVar5,iVar7,puVar8);
      iVar7 = *(int *)(param_1 + 0x48);
      *(long *)(param_1 + 0x40) = lVar5;
    }
    *(float *)(lVar5 + (long)iVar7 * 4) =
         fVar9 + (float)CONCAT13((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                                 CONCAT12((byte)((uint)fVar10 >> 0x10) &
                                          ~(byte)((uint)iVar13 >> 0x10),
                                          CONCAT11((byte)((uint)fVar10 >> 8) &
                                                   ~(byte)((uint)iVar13 >> 8),
                                                   SUB41(fVar10,0) & ~(byte)iVar13)));
    *(uint *)(param_1 + 0x48) = uVar2;
  }
  return;
}


