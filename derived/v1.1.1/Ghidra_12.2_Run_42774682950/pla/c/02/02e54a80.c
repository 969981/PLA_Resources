/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e54a80; name: FUN_02e54a80
 */


void FUN_02e54a80(float *param_1,float *param_2,uint param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if (*(long *)(param_2 + (ulong)param_3 * 0xac + 0xd8) == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x14);
    param_1[2] = param_2[0x16];
    *(undefined8 *)param_1 = uVar1;
  }
  else {
    fVar6 = param_2[1];
    fVar2 = param_2[2];
    fVar7 = param_2[(ulong)param_3 * 0xac + 0x54];
    fVar9 = param_2[(ulong)param_3 * 0xac + 0x55];
    fVar4 = param_2[(ulong)param_3 * 0xac + 0x6a] * 0.5;
    fVar12 = param_2[(ulong)param_3 * 0xac + 0x52];
    fVar14 = param_2[(ulong)param_3 * 0xac + 0x51];
    fVar15 = param_2[(ulong)param_3 * 0xac + 0x76];
    fVar16 = param_2[(ulong)param_3 * 0xac + 0x77];
    fVar13 = param_2[(ulong)param_3 * 0xac + 0x8c] * 0.5;
    fVar17 = param_2[(ulong)param_3 * 0xac + 0x73];
    fVar18 = param_2[(ulong)param_3 * 0xac + 0x74];
    fVar19 = param_2[(ulong)param_3 * 0xac + 0x98];
    fVar20 = param_2[(ulong)param_3 * 0xac + 0x99];
    fVar11 = param_2[(ulong)param_3 * 0xac + 0xae] * 0.5;
    fVar21 = param_2[(ulong)param_3 * 0xac + 0x95];
    fVar22 = param_2[(ulong)param_3 * 0xac + 0x96];
    fVar24 = param_2[(ulong)param_3 * 0xac + 0xba];
    fVar10 = param_2[(ulong)param_3 * 0xac + 0xbb];
    fVar3 = param_2[(ulong)param_3 * 0xac + 0xd0] * 0.5;
    fVar23 = param_2[(ulong)param_3 * 0xac + 0xb8];
    fVar5 = param_2[(ulong)param_3 * 0xac + 0xb7];
    fVar8 = 0.1;
    if (param_3 != 0) {
      fVar8 = -0.1;
    }
    *param_1 = (param_2[(ulong)param_3 * 0xac + 0x50] +
                fVar4 * param_2[(ulong)param_3 * 0xac + 0x53] +
                fVar13 * param_2[(ulong)param_3 * 0xac + 0x75] +
                param_2[(ulong)param_3 * 0xac + 0x72] +
                fVar11 * param_2[(ulong)param_3 * 0xac + 0x97] +
                param_2[(ulong)param_3 * 0xac + 0x94] +
                fVar3 * param_2[(ulong)param_3 * 0xac + 0xb9] +
               param_2[(ulong)param_3 * 0xac + 0xb6]) * 0.25 + fVar8 * *param_2;
    param_1[1] = (fVar14 + fVar4 * fVar7 + fVar13 * fVar15 + fVar17 + fVar11 * fVar19 + fVar21 +
                  fVar3 * fVar24 + fVar5) * 0.25 + fVar8 * fVar6;
    param_1[2] = (fVar12 + fVar4 * fVar9 + fVar13 * fVar16 + fVar18 + fVar11 * fVar20 + fVar22 +
                  fVar3 * fVar10 + fVar23) * 0.25 + fVar8 * fVar2;
  }
  return;
}


