/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00559da4; name: FUN_00559da4
 */


undefined8
FUN_00559da4(char *param_1,long *param_2,long *param_3,int param_4,int param_5,long *param_6,
            char *param_7,long param_8)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  byte bVar11;
  undefined1 auStack_68 [8];
  long local_60;
  long lStack_58;
  long local_48;
  
  *param_7 = '\0';
  lStack_58 = param_3[1];
  local_60 = *param_3;
  if (local_60 == 0) {
    lStack_58 = param_2[1];
    local_60 = *param_2;
  }
  cVar2 = *param_1;
  cVar3 = param_1[1];
  cVar1 = cVar2;
  cVar4 = cVar3;
  if (param_1[2] != '\0') {
    cVar1 = cVar3;
    cVar4 = cVar2;
  }
  if ((cVar1 != '\0') && (local_60 != *param_2)) {
    return 0;
  }
  if ((cVar4 != '\0') && (local_60 + lStack_58 != *param_2 + param_2[1])) {
    return 0;
  }
  bVar5 = param_5 == 2;
  if (bVar5) {
LAB_00559e74:
    bVar11 = 1;
    param_5 = 1;
  }
  else {
    if (param_5 == 3) {
      bVar6 = param_8 == 0;
      bVar11 = 0;
      goto LAB_00559e9c;
    }
    if (cVar3 != '\0') goto LAB_00559e74;
    bVar11 = 0;
  }
  if (param_6 == (long *)0x0) {
    bVar6 = (bool)(bVar11 ^ 1);
    if (bVar11 == 0) {
      param_5 = 1;
    }
  }
  else {
    bVar6 = false;
  }
LAB_00559e9c:
  uVar7 = FUN_00559ca0(param_1,param_5);
  uVar8 = FUN_00559aa0(uVar7,param_2,&local_60,param_4 == 1 || (bVar5 || cVar2 != '\0'),bVar6,
                       param_1[2] == '\0',param_7,&local_48,param_8);
  if (*param_7 != '\0') {
    pcVar9 = (code *)FUN_005504b0();
    (*pcVar9)(auStack_68);
    return 0;
  }
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  if (bVar11 != 0) {
    lVar10 = *param_2 + param_2[1];
    if (param_1[2] != '\0') {
      lVar10 = *param_2;
    }
    if (local_48 != lVar10) {
      return 0;
    }
  }
  if (param_6 != (long *)0x0) {
    if (param_1[2] == '\0') {
      lVar10 = *param_2;
    }
    else {
      lVar10 = local_48;
      local_48 = *param_2 + param_2[1];
    }
    *param_6 = lVar10;
    param_6[1] = local_48 - lVar10;
  }
  return 1;
}


