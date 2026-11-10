/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01306a5c; name: FUN_01306a5c
 */


float FUN_01306a5c(long param_1,float *param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = 999999.0;
  fVar6 = *param_2;
  lVar4 = 0;
  cVar1 = *(char *)(param_1 + 0xb0);
  pfVar5 = (float *)(param_1 + 0xc0);
  uVar2 = 0xffffffff;
  while( true ) {
    uVar3 = uVar2;
    if ((cVar1 != '\0') && (*(char *)((long)pfVar5 + -6) == param_3)) {
      fVar7 = param_2[1] - *pfVar5;
      fVar7 = (fVar6 - pfVar5[-1]) * (fVar6 - pfVar5[-1]) + fVar7 * fVar7;
      uVar3 = (uint)lVar4;
      if (fVar8 <= fVar7) {
        uVar3 = uVar2;
        fVar7 = fVar8;
      }
      fVar8 = fVar7;
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == 100) break;
    cVar1 = *(char *)(pfVar5 + 0x30);
    pfVar5 = pfVar5 + 0x34;
    uVar2 = uVar3;
  }
  if ((fVar8 < 900.0) && (uVar3 != 0xffffffff)) {
    if (99 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01306bb0();
    }
    param_1 = param_1 + (long)(int)uVar3 * 0xd0;
    pfVar5 = (float *)(param_1 + 0xbc);
    fVar7 = *pfVar5;
    fVar6 = fVar6 - fVar7;
    fVar8 = param_2[1] - *(float *)(param_1 + 0xc0);
    fVar8 = fVar6 * fVar6 + fVar8 * fVar8;
    if (fVar8 < 0.010000001) {
      fVar6 = fVar7 + -21.213196;
    }
    else {
      fVar7 = SQRT(fVar8);
      if (NAN(fVar7)) {
        fVar7 = sqrtf(fVar8);
      }
      fVar6 = *pfVar5 + (fVar6 * 30.0) / fVar7;
    }
  }
  return fVar6;
}


