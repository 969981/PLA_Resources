/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef8e64; name: FUN_02ef8e64
 */


void FUN_02ef8e64(int param_1,long param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  float fVar14;
  
  if (param_3 != 0) {
    uVar12 = (ulong)param_3;
    lVar3 = param_4;
    puVar13 = (undefined4 *)(param_2 + 8);
    uVar9 = uVar12;
    do {
      FUN_02ef9108(*puVar13,-(float)puVar13[-2],puVar13[-1],param_1 + 1,param_3,lVar3);
      uVar9 = uVar9 - 1;
      lVar3 = lVar3 + 4;
      puVar13 = puVar13 + 4;
    } while (uVar9 != 0);
    uVar1 = (param_1 + 2) * (param_1 + 2);
    if (uVar1 != 0) {
      lVar3 = 0;
      uVar4 = 0;
      iVar5 = 1;
      do {
        fVar14 = (float)(&DAT_03a9f3b8)[iVar5 - 1] * (float)(&DAT_03a9f3b8)[iVar5 - 1];
        if (uVar12 - 1 < 3) {
          lVar7 = 0;
        }
        else {
          lVar7 = 0;
          do {
            uVar9 = lVar3 + lVar7;
            lVar7 = lVar7 + 4;
            lVar10 = (uVar9 & 0xffffffff) * 4;
            iVar8 = (int)uVar9;
            lVar2 = (ulong)(iVar8 + 1) * 4;
            *(float *)(param_4 + lVar10) = fVar14 * *(float *)(param_4 + lVar10);
            lVar10 = (ulong)(iVar8 + 2) * 4;
            *(float *)(param_4 + lVar2) = fVar14 * *(float *)(param_4 + lVar2);
            lVar2 = (ulong)(iVar8 + 3) * 4;
            *(float *)(param_4 + lVar10) = fVar14 * *(float *)(param_4 + lVar10);
            *(float *)(param_4 + lVar2) = fVar14 * *(float *)(param_4 + lVar2);
          } while (uVar12 - (uVar12 & 3) != lVar7);
        }
        if ((param_3 & 3) != 0) {
          uVar6 = (int)lVar3 + (int)lVar7;
          uVar9 = uVar12 & 3;
          do {
            uVar11 = (ulong)uVar6;
            uVar6 = uVar6 + 1;
            uVar9 = uVar9 - 1;
            *(float *)(param_4 + uVar11 * 4) = fVar14 * *(float *)(param_4 + uVar11 * 4);
          } while (uVar9 != 0);
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + uVar12;
        uVar6 = 0;
        if (iVar5 * iVar5 != 0) {
          uVar6 = uVar4 / (uint)(iVar5 * iVar5);
        }
        iVar5 = uVar6 + iVar5;
      } while (uVar4 != uVar1);
    }
  }
  return;
}


