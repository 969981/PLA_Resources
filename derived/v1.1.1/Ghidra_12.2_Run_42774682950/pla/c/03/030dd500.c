/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030dd500; name: FUN_030dd500
 */


void FUN_030dd500(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  ulong uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar19;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar20;
  undefined8 uVar21;
  float fVar26;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar27;
  undefined8 uVar24;
  undefined8 uVar25;
  float local_2a0 [6];
  char local_288 [4];
  undefined1 auStack_284 [8];
  undefined1 auStack_27c [24];
  undefined1 auStack_264 [24];
  undefined1 auStack_24c [24];
  undefined1 auStack_234 [24];
  undefined1 auStack_21c [24];
  undefined1 auStack_204 [144];
  uint local_174;
  undefined1 local_170 [32];
  undefined8 local_150 [32];
  
  local_174 = 0;
  FUN_030dd700(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38),param_3,param_4,
               local_170,param_2,param_5,auStack_264,param_1 + 0xc0,&local_174,auStack_24c,
               auStack_27c,auStack_284,local_288);
  uVar3 = local_174;
  uVar6 = (ulong)local_174;
  FUN_030de500(auStack_204,auStack_21c,auStack_234,uVar6,local_170,auStack_27c,param_3 + 4,
               param_4 + 4);
  if (local_288[0] == '\0') {
    FUN_030de930(auStack_204,auStack_21c,auStack_234,auStack_284,param_3,param_4,auStack_24c,uVar6,
                 auStack_264,local_170,param_2,local_2a0);
  }
  else {
    FUN_030de690(auStack_204,auStack_21c,uVar6,local_2a0);
  }
  if (0 < (int)uVar3) {
    fVar1 = *(float *)(param_2 + 0xd0);
    fVar2 = *(float *)(param_2 + 0xd4);
    puVar4 = local_150;
    pfVar5 = local_2a0;
    do {
      fVar7 = *pfVar5;
      if (fVar7 != 0.0 && (~(uint)fVar7 & 0x7fc00000) != 0) {
        uVar10 = NEON_fmin(CONCAT44(fVar7,fVar7),CONCAT44(fVar1,fVar1),4);
        uVar8 = NEON_fmin(CONCAT44(fVar7,fVar7),CONCAT44(fVar2,fVar2),4);
        uVar10 = NEON_fmax(uVar10,CONCAT44(-fVar1,-fVar1),4);
        uVar8 = NEON_fmax(uVar8,CONCAT44(-fVar2,-fVar2),4);
        uVar21 = param_4[5];
        uVar15 = param_4[4];
        fVar7 = (float)uVar8;
        fVar9 = (float)((ulong)uVar8 >> 0x20);
        fVar12 = (float)((ulong)param_3[5] >> 0x20);
        fVar26 = (float)((ulong)uVar21 >> 0x20);
        fVar11 = (float)((ulong)uVar10 >> 0x20);
        fVar13 = fVar11 * fVar12;
        fVar11 = fVar11 * fVar26;
        uVar22 = puVar4[-1];
        uVar8 = puVar4[-2];
        uVar23 = puVar4[1];
        uVar16 = *puVar4;
        fVar14 = (float)puVar4[-4];
        fVar19 = (float)((ulong)puVar4[-4] >> 0x20);
        fVar20 = (float)puVar4[-3];
        fVar27 = (float)((ulong)puVar4[-3] >> 0x20);
        uVar24 = param_4[3];
        uVar17 = param_4[2];
        uVar25 = param_4[1];
        uVar18 = *param_4;
        param_3[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) + fVar27 * fVar13,
                              (float)param_3[1] + fVar20 * fVar13);
        *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) + fVar19 * fVar13,
                            (float)*param_3 + fVar14 * fVar13);
        param_3[3] = CONCAT44(fVar9 * fVar12 * (float)((ulong)uVar22 >> 0x20) +
                              (float)((ulong)param_3[3] >> 0x20),
                              fVar7 * (float)param_3[5] * (float)uVar22 + (float)param_3[3]);
        param_3[2] = CONCAT44(fVar9 * (float)((ulong)param_3[4] >> 0x20) *
                              (float)((ulong)uVar8 >> 0x20) + (float)((ulong)param_3[2] >> 0x20),
                              fVar7 * (float)param_3[4] * (float)uVar8 + (float)param_3[2]);
        param_4[1] = CONCAT44((float)((ulong)uVar25 >> 0x20) - fVar27 * fVar11,
                              (float)uVar25 - fVar20 * fVar11);
        *param_4 = CONCAT44((float)((ulong)uVar18 >> 0x20) - fVar19 * fVar11,
                            (float)uVar18 - fVar14 * fVar11);
        param_4[3] = CONCAT44(fVar9 * fVar26 * (float)((ulong)uVar23 >> 0x20) +
                              (float)((ulong)uVar24 >> 0x20),
                              fVar7 * (float)uVar21 * (float)uVar23 + (float)uVar24);
        param_4[2] = CONCAT44(fVar9 * (float)((ulong)uVar15 >> 0x20) *
                              (float)((ulong)uVar16 >> 0x20) + (float)((ulong)uVar17 >> 0x20),
                              fVar7 * (float)uVar15 * (float)uVar16 + (float)uVar17);
        *param_5 = (float)uVar10 + *param_5;
      }
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 6;
      param_5 = param_5 + 1;
      pfVar5 = pfVar5 + 1;
    } while (uVar6 != 0);
  }
  return;
}


