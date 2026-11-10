/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025accdc; name: FUN_025accdc
 */


void FUN_025accdc(long param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  if (0x17 < uVar1) {
LAB_025ace24:
                    /* WARNING: Subroutine does not return */
    FUN_025ad8d0();
  }
  dVar4 = *(double *)(param_1 + 0x70);
  if (((param_2 < 1) && (param_3 < 1)) && (param_4 < 1)) {
    dVar2 = 0.0;
  }
  else {
    dVar2 = ((double)param_3 / 60.0) * 60.0 + (double)(uint)(param_2 * 0x3c) +
            (((double)param_4 / 60.0) * 60.0) / 60.0;
  }
  *(double *)(param_1 + 0x70) = dVar2;
  *(int *)(param_1 + 0x78) = param_2;
  FUN_019ed768(*(undefined8 *)(param_1 + 0xb8));
  if (0x17 < *(uint *)(param_1 + 0x78)) goto LAB_025ace24;
  if (*(int *)(&DAT_03a7d720 + (long)(int)*(uint *)(param_1 + 0x78) * 4) !=
      *(int *)(&DAT_03a7d720 + (long)(int)uVar1 * 4)) {
    if (*(int *)(param_1 + 0xc0) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    else {
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
    }
  }
  if ((param_5 & 1) != 0) {
    dVar3 = *(double *)(param_1 + 0xb0);
    dVar2 = *(double *)(param_1 + 0x70);
    if (dVar4 < dVar3) {
      if (dVar3 <= dVar2) goto LAB_025acdb0;
    }
    else if (dVar2 < dVar3) {
      return;
    }
    if (dVar2 < dVar4) {
LAB_025acdb0:
      FUN_025ace34(param_1,*(int *)(param_1 + 0xa0) + 1);
      return;
    }
  }
  return;
}


