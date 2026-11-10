/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03285e6c; name: FUN_03285e6c
 */


void FUN_03285e6c(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  if (0 < param_2) {
    do {
      lVar2 = *param_1;
      uVar1 = param_2 - 1;
      pfVar3 = (float *)(lVar2 + (long)((int)uVar1 >> 1) * 0x10 + 8);
      fVar7 = *pfVar3;
      pfVar4 = (float *)(lVar2 + (long)param_2 * 0x10 + 8);
      fVar8 = *pfVar4;
      if (fVar8 < fVar7) {
        return;
      }
      lVar5 = ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x10;
      uVar6 = *(undefined8 *)(lVar2 + (long)param_2 * 0x10);
      *(undefined8 *)(lVar2 + (long)param_2 * 0x10) = *(undefined8 *)(lVar2 + lVar5);
      *pfVar4 = fVar7;
      *(undefined8 *)(lVar2 + lVar5) = uVar6;
      *pfVar3 = fVar8;
      param_2 = (int)uVar1 >> 1;
    } while (1 < (int)uVar1);
  }
  return;
}


