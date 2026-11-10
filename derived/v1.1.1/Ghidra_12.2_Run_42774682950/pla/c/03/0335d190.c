/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335d190; name: FUN_0335d190
 */


void FUN_0335d190(long param_1,uint param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  if (0 < (int)param_2) {
    uVar5 = 0;
    lVar6 = param_1;
    do {
      pfVar2 = (float *)(param_1 + uVar5 * 8);
      fVar3 = *pfVar2;
      fVar4 = pfVar2[1];
      if (uVar5 == 0) {
        iVar7 = 0;
      }
      else {
        lVar8 = 0;
        lVar9 = -8;
        do {
          if (fVar3 <= *(float *)(lVar6 + lVar9)) break;
          puVar1 = (undefined8 *)(lVar6 + lVar9);
          lVar9 = lVar9 + -8;
          *(undefined8 *)(lVar6 + lVar8 * 8) = *puVar1;
          lVar8 = lVar8 + -1;
        } while (0 < (long)(uVar5 + lVar8));
        iVar7 = (int)uVar5 + (int)lVar8;
      }
      pfVar2 = (float *)(param_1 + (long)iVar7 * 8);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
      *pfVar2 = fVar3;
      pfVar2[1] = fVar4;
    } while (uVar5 != param_2);
  }
  return;
}


