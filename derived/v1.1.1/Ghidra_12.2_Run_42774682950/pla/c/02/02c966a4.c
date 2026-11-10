/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c966a4; name: FUN_02c966a4
 */


void FUN_02c966a4(float param_1,float param_2,float param_3,undefined8 param_4,undefined8 *param_5,
                 uint param_6,undefined4 *param_7,int param_8)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fStack_24;
  
  uVar8 = param_5[1];
  uVar12 = *param_7;
  param_5[1] = uVar8;
  *param_5 = CONCAT44((int)((ulong)*param_5 >> 0x20),uVar12);
  uVar7 = CONCAT44(param_7[1],uVar12);
  param_5[1] = uVar8;
  *param_5 = uVar7;
  fVar6 = 0.0;
  param_5[1] = (ulong)(uint)param_7[2];
  *param_5 = uVar7;
  if ((int)param_6 < 9) {
    if (param_8 == 0) {
      if (1.1920929e-07 < param_3) {
        fVar6 = param_1 / param_3;
      }
    }
    else if (1.1920929e-07 < param_2) {
      fVar6 = modff(param_1 / param_2,&fStack_24);
    }
    if ((param_6 != 1) && ((float)param_7[3] <= fVar6)) {
      puVar1 = param_7 + ((long)(int)param_6 + -1) * 4;
      if ((float)puVar1[3] <= fVar6) {
        uVar8 = param_5[1];
        uVar12 = *puVar1;
        param_5[1] = uVar8;
        *param_5 = CONCAT44((int)((ulong)*param_5 >> 0x20),uVar12);
        uVar7 = CONCAT44(puVar1[1],uVar12);
        param_5[1] = uVar8;
        *param_5 = uVar7;
        param_5[1] = (ulong)(uint)puVar1[2];
        *param_5 = uVar7;
      }
      else if (0 < (int)param_6) {
        uVar3 = 0;
        lVar5 = -0x100000000;
        pfVar4 = (float *)(param_7 + 7);
        do {
          if ((ulong)param_6 - 1 == uVar3) {
            return;
          }
          fVar9 = *pfVar4;
          uVar3 = uVar3 + 1;
          lVar5 = lVar5 + 0x100000000;
          pfVar4 = pfVar4 + 4;
        } while (fVar9 <= fVar6);
        puVar2 = (undefined8 *)((long)param_7 + (lVar5 >> 0x1c));
        uVar7 = *puVar2;
        fVar11 = (float)param_7[(uVar3 & 0xffffffff) * 4 + 3] - *(float *)((long)puVar2 + 0xc);
        fVar9 = *(float *)(puVar2 + 1);
        if (1.1920929e-07 < fVar11) {
          uVar8 = *(undefined8 *)(param_7 + (uVar3 & 0xffffffff) * 4);
          fVar6 = fVar6 - *(float *)((long)puVar2 + 0xc);
          fVar11 = 1.0 / fVar11;
          fVar10 = (float)((ulong)uVar7 >> 0x20);
          uVar7 = CONCAT44(fVar10 + ((float)((ulong)uVar8 >> 0x20) - fVar10) * fVar11 * fVar6,
                           (float)uVar7 + ((float)uVar8 - (float)uVar7) * fVar11 * fVar6);
          fVar9 = fVar9 + (*(float *)((long)(param_7 + (uVar3 & 0xffffffff) * 4) + 8) - fVar9) *
                          fVar11 * fVar6;
        }
        param_5[1] = (ulong)(uint)fVar9;
        *param_5 = uVar7;
      }
    }
  }
  return;
}


