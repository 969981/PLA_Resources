/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe9298; name: FUN_02fe9298
 */


void FUN_02fe9298(long param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = param_2[0xf];
  local_38 = param_2[0xd];
  local_48 = param_2[0xb];
  local_58 = param_2[9];
  local_68 = param_2[7];
  local_78 = param_2[5];
  local_80 = param_2[4];
  local_70 = param_2[6];
  local_60 = param_2[8];
  local_50 = param_2[10];
  local_40 = param_2[0xc];
  local_30 = param_2[0xe];
  fVar4 = (float)*param_2 * (float)*(undefined8 *)(param_1 + 0x30) +
          (float)*(undefined8 *)(param_1 + 0x20);
  fVar5 = (float)((ulong)*param_2 >> 0x20) * (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20)
          + (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  fVar7 = (float)param_2[1] * (float)*(undefined8 *)(param_1 + 0x38) +
          (float)*(undefined8 *)(param_1 + 0x28);
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  fVar6 = (float)puVar2[4];
  fVar9 = (float)((ulong)puVar2[4] >> 0x20);
  fVar11 = (float)puVar2[5];
  fVar14 = (float)((ulong)puVar2[5] >> 0x20);
  local_a0 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) +
                      fVar9 * fVar7 +
                      (float)((ulong)*puVar2 >> 0x20) * fVar4 +
                      (float)((ulong)puVar2[2] >> 0x20) * fVar5,
                      (float)puVar2[6] +
                      fVar6 * fVar7 + (float)*puVar2 * fVar4 + (float)puVar2[2] * fVar5);
  uStack_98 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) +
                       fVar14 * fVar7 +
                       (float)((ulong)puVar2[1] >> 0x20) * fVar4 +
                       (float)((ulong)puVar2[3] >> 0x20) * fVar5,
                       (float)puVar2[7] +
                       fVar11 * fVar7 + (float)puVar2[1] * fVar4 + (float)puVar2[3] * fVar5);
  fVar4 = (float)param_2[2] * (float)*(undefined8 *)(param_1 + 0x40);
  fVar7 = (float)((ulong)param_2[2] >> 0x20) *
          (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  fVar8 = (float)param_2[3] * (float)*(undefined8 *)(param_1 + 0x48);
  fVar5 = fVar6 * fVar8 + (float)*puVar2 * fVar4 + (float)puVar2[2] * fVar7;
  fVar6 = fVar9 * fVar8 +
          (float)((ulong)*puVar2 >> 0x20) * fVar4 + (float)((ulong)puVar2[2] >> 0x20) * fVar7;
  fVar9 = fVar11 * fVar8 + (float)puVar2[1] * fVar4 + (float)puVar2[3] * fVar7;
  uVar10 = CONCAT44(fVar5 * fVar5 + fVar6 * fVar6 + fVar9 * fVar9,
                    fVar5 * fVar5 + fVar6 * fVar6 + fVar9 * fVar9);
  uVar12 = NEON_frsqrte(uVar10,4);
  fVar11 = (float)uVar12;
  fVar13 = (float)((ulong)uVar12 >> 0x20);
  uVar12 = NEON_frsqrts(uVar10,CONCAT44(fVar13 * fVar13,fVar11 * fVar11),4);
  fVar11 = fVar11 * (float)uVar12;
  fVar13 = fVar13 * (float)((ulong)uVar12 >> 0x20);
  uVar10 = NEON_frsqrts(uVar10,CONCAT44(fVar13 * fVar13,fVar11 * fVar11),4);
  fVar11 = (float)uVar10 * fVar11;
  fVar13 = (float)((ulong)uVar10 >> 0x20) * fVar13;
  local_90 = CONCAT44(fVar6 * fVar13,fVar5 * fVar11);
  uStack_88 = CONCAT44((fVar14 * fVar8 +
                       (float)((ulong)puVar2[1] >> 0x20) * fVar4 +
                       (float)((ulong)puVar2[3] >> 0x20) * fVar7) * fVar13,fVar9 * fVar11);
  (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(*(long **)(param_1 + 0x58),&local_a0);
  lVar3 = *(long *)(param_1 + 0x58);
  uVar10 = NEON_fmin(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(lVar3 + 0x10),4);
  *(undefined8 *)(param_1 + 0x10) = uVar10;
  if (*(char *)(param_1 + 0x18) == '\0') {
    bVar1 = *(char *)(lVar3 + 0x18) != '\0';
  }
  else {
    bVar1 = true;
  }
  *(bool *)(param_1 + 0x18) = bVar1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar3 + 0xc);
  return;
}


