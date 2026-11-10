/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a22a0; name: FUN_031a22a0
 */


void FUN_031a22a0(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  
  param_2 = param_2 & 0xffffffff;
  do {
    while( true ) {
      iVar8 = (int)param_2;
      uVar1 = (int)(iVar8 + param_3) >> 1;
      fVar10 = *(float *)(param_1 +
                         (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3));
      uVar2 = (ulong)param_3;
      do {
        pfVar3 = (float *)(param_1 + (long)(int)param_2 * 8);
        param_2 = (ulong)(int)param_2;
        if (*pfVar3 < fVar10) {
          pfVar3 = (float *)(param_1 + param_2 * 8);
          do {
            pfVar3 = pfVar3 + 2;
            param_2 = param_2 + 1;
          } while (*pfVar3 < fVar10);
        }
        pfVar4 = (float *)(param_1 + (long)(int)uVar2 * 8);
        uVar6 = (ulong)(int)uVar2;
        if (fVar10 < *pfVar4) {
          pfVar4 = (float *)(param_1 + uVar6 * 8);
          do {
            pfVar4 = pfVar4 + -2;
            uVar6 = uVar6 - 1;
          } while (fVar10 < *pfVar4);
        }
        uVar2 = uVar6 & 0xffffffff;
        iVar5 = (int)uVar6;
        iVar9 = (int)param_2;
        if (iVar9 <= iVar5) {
          if (iVar5 != iVar9) {
            uVar7 = *(undefined8 *)pfVar4;
            *(undefined8 *)pfVar4 = *(undefined8 *)pfVar3;
            *(undefined8 *)pfVar3 = uVar7;
          }
          uVar2 = (ulong)(iVar5 - 1);
          param_2 = (ulong)(iVar9 + 1);
        }
        iVar5 = (int)param_2;
      } while (iVar5 <= (int)uVar2);
      if ((int)uVar2 <= iVar8) break;
      FUN_031a22a0(param_1);
      if ((int)param_3 <= iVar5) {
        return;
      }
    }
  } while (iVar5 < (int)param_3);
  return;
}


