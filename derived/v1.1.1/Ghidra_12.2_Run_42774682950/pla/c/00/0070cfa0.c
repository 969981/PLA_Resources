/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070cfa0; name: FUN_0070cfa0
 */


int FUN_0070cfa0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_2;
  lVar3 = *param_1;
  lVar2 = *param_3;
  if (lVar5 < lVar3) {
    if (lVar2 < lVar5) {
      *param_1 = lVar2;
      iVar1 = 1;
    }
    else {
      *param_1 = lVar5;
      *param_2 = lVar3;
      lVar5 = *param_3;
      if (lVar3 <= lVar5) {
        iVar1 = 1;
        lVar4 = *param_4;
        if (lVar4 < lVar5) goto LAB_0070d0ec;
        goto LAB_0070d038;
      }
      iVar1 = 2;
      *param_2 = lVar5;
    }
    *param_3 = lVar3;
    lVar4 = *param_4;
    lVar5 = lVar3;
    if (lVar4 < lVar3) goto LAB_0070d0ec;
  }
  else if (lVar2 < lVar5) {
    *param_2 = lVar2;
    *param_3 = lVar5;
    lVar2 = *param_1;
    if (*param_2 < lVar2) {
      *param_1 = *param_2;
      iVar1 = 2;
      *param_2 = lVar2;
      lVar5 = *param_3;
      lVar4 = *param_4;
      if (lVar4 < lVar5) {
LAB_0070d0ec:
        *param_3 = lVar4;
        *param_4 = lVar5;
        lVar5 = *param_2;
        if (*param_3 < lVar5) {
          *param_2 = *param_3;
          *param_3 = lVar5;
          lVar5 = *param_1;
          if (*param_2 < lVar5) {
            iVar1 = iVar1 + 3;
            *param_1 = *param_2;
            *param_2 = lVar5;
            lVar5 = *param_5;
            lVar2 = *param_4;
            if (lVar2 <= lVar5) {
              return iVar1;
            }
          }
          else {
            iVar1 = iVar1 + 2;
            lVar5 = *param_5;
            lVar2 = *param_4;
            if (lVar2 <= lVar5) {
              return iVar1;
            }
          }
        }
        else {
          iVar1 = iVar1 + 1;
          lVar5 = *param_5;
          lVar2 = *param_4;
          if (lVar2 <= lVar5) {
            return iVar1;
          }
        }
        goto LAB_0070d048;
      }
    }
    else {
      iVar1 = 1;
      lVar4 = *param_4;
      if (lVar4 < lVar5) goto LAB_0070d0ec;
    }
  }
  else {
    iVar1 = 0;
    lVar4 = *param_4;
    lVar5 = lVar2;
    if (lVar4 < lVar2) goto LAB_0070d0ec;
  }
LAB_0070d038:
  lVar5 = *param_5;
  lVar2 = *param_4;
  if (lVar2 <= lVar5) {
    return iVar1;
  }
LAB_0070d048:
  *param_4 = lVar5;
  *param_5 = lVar2;
  lVar5 = *param_3;
  if (lVar5 <= *param_4) {
    return iVar1 + 1;
  }
  *param_3 = *param_4;
  *param_4 = lVar5;
  lVar5 = *param_2;
  if (lVar5 <= *param_3) {
    return iVar1 + 2;
  }
  *param_2 = *param_3;
  *param_3 = lVar5;
  lVar5 = *param_1;
  if (*param_2 < lVar5) {
    *param_1 = *param_2;
    *param_2 = lVar5;
    return iVar1 + 4;
  }
  return iVar1 + 3;
}


