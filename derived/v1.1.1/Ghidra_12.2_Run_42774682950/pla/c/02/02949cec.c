/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02949cec; name: FUN_02949cec
 */


bool FUN_02949cec(uint param_1,char param_2,int param_3)

{
  int iVar1;
  
  if (4 < param_3) {
    return false;
  }
  iVar1 = 0;
  if (2 < param_1) {
    iVar1 = 5;
  }
  if (iVar1 == param_3) {
    return true;
  }
  iVar1 = 5;
  if (param_1 < 3) {
    iVar1 = 1;
  }
  if (iVar1 == param_3) {
    return true;
  }
  if (param_1 == 2) {
    if (param_3 == 1) {
      return true;
    }
  }
  else if (param_1 == 1) {
    if ((byte)(param_2 - 1U) < 5) {
      if (*(int *)(&DAT_03a7eb20 + (long)(char)(param_2 - 1U) * 4) == param_3) {
        return true;
      }
    }
    else if (param_3 == 0) {
      return true;
    }
  }
  else if (param_3 == 5) {
    return true;
  }
  if (param_1 == 2) {
LAB_02949dcc:
    iVar1 = 1;
  }
  else {
    iVar1 = 5;
    if (param_1 == 1) {
      if ((byte)(param_2 - 1U) < 5) {
        if (*(int *)(&DAT_03a7eb34 + (long)(char)(param_2 - 1U) * 4) == param_3) {
          return true;
        }
        goto LAB_02949de0;
      }
      goto LAB_02949dcc;
    }
  }
  if (iVar1 == param_3) {
    return true;
  }
LAB_02949de0:
  iVar1 = 5;
  if (param_1 == 2) {
    iVar1 = 1;
  }
  return iVar1 == param_3;
}


