/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fb4400; name: FUN_02fb4400
 */


void FUN_02fb4400(long *param_1,int param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 local_8 [8];
  
  uVar15 = param_1[3];
  lVar13 = param_1[2];
  uVar12 = param_1[5];
  lVar10 = param_1[4];
  if (param_2 != 0) {
    lVar9 = 0;
    do {
      fVar11 = (float)((ulong)lVar10 >> 0x20);
      fVar14 = (float)((ulong)lVar13 >> 0x20);
      fVar16 = ((float)lVar10 - (float)lVar13) * 0.0044247787;
      fVar17 = (fVar11 - fVar14) * 0.0044247787;
      fVar18 = ((float)uVar12 - (float)uVar15) * 0.0044247787;
      iVar5 = *(int *)((ulong)local_8 |
                      (ulong)((int)((int)lVar9 +
                                   (*(byte *)((long)param_1 + (long)(int)lVar9 * 4 + *param_1 + 3) &
                                   0xfe)) <= param_2) << 2);
      lVar9 = (long)iVar5;
      pbVar1 = (byte *)((long)param_1 + lVar9 * 4 + *param_1);
      bVar6 = *pbVar1 >> 4;
      bVar2 = *pbVar1 & 0xf;
      bVar7 = pbVar1[1] >> 4;
      bVar3 = pbVar1[1] & 0xf;
      bVar8 = pbVar1[2] >> 4;
      bVar4 = pbVar1[2] & 0xf;
      lVar13 = CONCAT44(fVar14 + (float)(byte)(bVar7 * bVar7) * fVar17,
                        (float)lVar13 + (float)(byte)(bVar6 * bVar6) * fVar16);
      uVar15 = (ulong)(uint)((float)uVar15 + (float)(byte)(bVar8 * bVar8) * fVar18);
      lVar10 = CONCAT44(fVar11 - (float)(byte)(bVar3 * bVar3) * fVar17,
                        (float)lVar10 - (float)(byte)(bVar2 * bVar2) * fVar16);
      uVar12 = (ulong)(uint)((float)uVar12 - (float)(byte)(bVar4 * bVar4) * fVar18);
    } while (iVar5 != param_2);
  }
  param_3[1] = uVar15;
  *param_3 = lVar13;
  param_3[3] = uVar12;
  param_3[2] = lVar10;
  return;
}


