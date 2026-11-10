/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f127f4; name: FUN_02f127f4
 */


/* WARNING: Removing unreachable block (ram,0x02f128a0) */

void FUN_02f127f4(undefined8 param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  
  FUN_02f12908();
  if (param_2 != 0) {
    uVar1 = (ulong)param_2;
    uVar2 = uVar1 & 3;
    if (uVar1 - 1 < 3) {
      fVar5 = 0.0;
      lVar3 = 0;
    }
    else {
      fVar5 = 0.0;
      lVar3 = 0;
      pfVar4 = (float *)(param_3 + 8);
      do {
        fVar5 = pfVar4[1] + pfVar4[-2] + fVar5 + pfVar4[-1] + *pfVar4;
        lVar3 = lVar3 + 4;
        pfVar4 = pfVar4 + 4;
      } while (uVar1 - uVar2 != lVar3);
    }
    if ((param_2 & 3) != 0) {
      pfVar4 = (float *)(param_3 + lVar3 * 4);
      do {
        fVar5 = *pfVar4 + fVar5;
        uVar2 = uVar2 - 1;
        pfVar4 = pfVar4 + 1;
      } while (uVar2 != 0);
    }
    if (fVar5 == 0.0) {
      fVar5 = 1.0;
    }
    else {
      fVar5 = 1.0 / fVar5;
    }
    if (param_2 == 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      do {
        pfVar4 = (float *)(param_3 + lVar3 * 4);
        lVar3 = lVar3 + 2;
        *pfVar4 = SQRT(*pfVar4 * fVar5);
        pfVar4[1] = SQRT(pfVar4[1] * fVar5);
      } while (uVar1 - (uVar1 & 1) != lVar3);
      if ((param_2 & 1) == 0) {
        return;
      }
    }
    *(float *)(param_3 + lVar3 * 4) = SQRT(*(float *)(param_3 + lVar3 * 4) * fVar5);
  }
  return;
}


