/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e06524; name: FUN_02e06524
 */


void FUN_02e06524(long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  float *pfVar2;
  ulong uVar3;
  double dVar4;
  double __x;
  double dVar5;
  double dVar6;
  
  dVar5 = 0.0;
  __x = 3.141592653589793;
  if ((param_3 & 1) == 0) {
    __x = 0.0;
  }
  uVar1 = *(uint *)(param_1 + 1) >> 1;
  uVar3 = (ulong)uVar1;
  dVar6 = 6.283185307179586 / ((double)*(uint *)(param_1 + 1) + -1.0);
  if ((param_2 & 1) == 0) {
    if (uVar1 != 0) {
      dVar5 = 0.0;
      pfVar2 = (float *)*param_1;
      do {
        dVar4 = cos(__x);
        dVar4 = 0.5 - dVar4 * 0.5;
        dVar5 = dVar5 + dVar4 * dVar4;
        __x = __x + dVar6;
        uVar3 = uVar3 - 1;
        *pfVar2 = (float)dVar4;
        pfVar2 = pfVar2 + 1;
      } while (uVar3 != 0);
    }
  }
  else if (uVar1 != 0) {
    dVar5 = 0.0;
    pfVar2 = (float *)*param_1;
    do {
      dVar4 = cos(__x);
      dVar4 = 0.5 - dVar4 * 0.5;
      dVar5 = dVar4 + dVar5;
      __x = __x + dVar6;
      uVar3 = uVar3 - 1;
      *pfVar2 = (float)SQRT(dVar4);
      pfVar2 = pfVar2 + 1;
    } while (uVar3 != 0);
  }
  *(float *)((long)param_1 + 0xc) = (float)dVar5 + (float)dVar5;
  return;
}


