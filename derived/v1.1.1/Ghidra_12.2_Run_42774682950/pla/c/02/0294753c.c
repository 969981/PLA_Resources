/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294753c; name: FUN_0294753c
 */


undefined4 FUN_0294753c(long param_1,uint param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  param_2 = param_2 & 0xff;
  uVar1 = *(uint *)(param_1 + 0x110);
  uVar2 = 0;
  if (2 < uVar1) {
    uVar2 = 5;
  }
  if (uVar2 == param_2) {
    if (param_3 == '\0') {
      return 0;
    }
    param_3 = param_3 + -1;
  }
  uVar2 = 5;
  if (uVar1 < 3) {
    uVar2 = 1;
  }
  if (uVar2 == param_2) {
    if (param_3 == '\0') {
      return 1;
    }
    param_3 = param_3 + -1;
  }
  uVar2 = (uint)*(byte *)(*(long *)(param_1 + 0x58) + 0x55);
  if (uVar1 == 2) {
    if (param_2 == 1) goto LAB_029475bc;
  }
  else if (uVar1 == 1) {
    uVar4 = uVar2 - 1;
    if (uVar4 < 5) {
      if (*(uint *)(&DAT_03a7eaec + (long)(char)uVar4 * 4) == param_2) {
LAB_029475bc:
        if (param_3 == '\0') {
          return 2;
        }
        param_3 = param_3 + -1;
      }
    }
    else if (param_2 == 0) goto LAB_029475bc;
  }
  else if (param_2 == 5) goto LAB_029475bc;
  if (uVar1 == 2) {
LAB_0294765c:
    if (param_2 != 1) goto LAB_02947668;
  }
  else {
    uVar4 = 5;
    if (uVar1 == 1) {
      uVar2 = uVar2 - 1;
      if (4 < uVar2) goto LAB_0294765c;
      uVar4 = *(uint *)(&DAT_03a7eb00 + (long)(char)uVar2 * 4);
    }
    if (uVar4 != param_2) goto LAB_02947668;
  }
  if (param_3 == '\0') {
    return 3;
  }
  param_3 = param_3 + -1;
LAB_02947668:
  uVar2 = 5;
  if (uVar1 == 2) {
    uVar2 = 1;
  }
  if (uVar2 == param_2) {
    if (param_3 == '\0') {
      return 4;
    }
    param_3 = param_3 + -1;
  }
  uVar3 = 5;
  if (param_3 != '\0' || uVar2 != param_2) {
    uVar3 = 6;
  }
  return uVar3;
}


