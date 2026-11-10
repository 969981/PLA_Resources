/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e0a5c0; name: FUN_01e0a5c0
 */


int FUN_01e0a5c0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  lVar4 = *param_2;
  lVar3 = *param_1;
  lVar2 = *param_3;
  fVar5 = *(float *)(lVar4 + 0x330);
  if (fVar5 < *(float *)(lVar3 + 0x330)) {
    if (*(float *)(lVar2 + 0x330) < fVar5) {
      *param_1 = lVar2;
      iVar1 = 1;
    }
    else {
      *param_1 = lVar4;
      *param_2 = lVar3;
      lVar2 = *param_3;
      if (*(float *)(lVar3 + 0x330) <= *(float *)(lVar2 + 0x330)) {
        iVar1 = 1;
        goto LAB_01e0a65c;
      }
      iVar1 = 2;
      *param_2 = lVar2;
    }
    *param_3 = lVar3;
    lVar2 = lVar3;
  }
  else if (fVar5 <= *(float *)(lVar2 + 0x330)) {
    iVar1 = 0;
  }
  else {
    *param_2 = lVar2;
    *param_3 = lVar4;
    lVar2 = *param_1;
    if (*(float *)(*param_2 + 0x330) < *(float *)(lVar2 + 0x330)) {
      *param_1 = *param_2;
      iVar1 = 2;
      *param_2 = lVar2;
      lVar2 = *param_3;
    }
    else {
      iVar1 = 1;
      lVar2 = lVar4;
    }
  }
LAB_01e0a65c:
  if (*(float *)(*param_4 + 0x330) < *(float *)(lVar2 + 0x330)) {
    *param_3 = *param_4;
    *param_4 = lVar2;
    lVar2 = *param_2;
    if (*(float *)(lVar2 + 0x330) <= *(float *)(*param_3 + 0x330)) {
      return iVar1 + 1;
    }
    *param_2 = *param_3;
    *param_3 = lVar2;
    lVar2 = *param_1;
    if (*(float *)(lVar2 + 0x330) <= *(float *)(*param_2 + 0x330)) {
      return iVar1 + 2;
    }
    iVar1 = iVar1 + 3;
    *param_1 = *param_2;
    *param_2 = lVar2;
  }
  return iVar1;
}


