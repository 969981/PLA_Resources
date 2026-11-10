/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dff2fc; name: FUN_02dff2fc
 */


void FUN_02dff2fc(long param_1,float *param_2,uint param_3)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_02dff52c(param_1,param_2,param_3 << 1);
  fVar7 = *(float *)(param_1 + 0x14);
  uVar4 = *(uint *)(param_1 + 0x10);
  if (param_3 != 0) {
    pfVar2 = param_2;
    do {
      uVar4 = uVar4 + 1 & 0xffff;
      lVar1 = param_1 + (long)*(int *)(&DAT_03a97f20 +
                                      (ulong)((uVar4 & -uVar4) * 0x77cb531 >> 0x1b) * 4) * 4;
      fVar5 = *(float *)(lVar1 + 0x18);
      fVar6 = pfVar2[param_3];
      *(float *)(lVar1 + 0x18) = fVar6;
      fVar7 = (fVar7 - fVar5) + fVar6;
      pfVar3 = pfVar2 + 1;
      *pfVar2 = (*pfVar2 + fVar7) * 0.14705883;
      pfVar2 = pfVar3;
    } while (pfVar3 < param_2 + param_3);
  }
  FUN_02dff570(param_1 + 4,param_2,param_3);
  *(uint *)(param_1 + 0x10) = uVar4;
  *(float *)(param_1 + 0x14) = fVar7;
  return;
}


