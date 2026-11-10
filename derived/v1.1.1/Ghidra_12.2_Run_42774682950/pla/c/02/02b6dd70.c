/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6dd70; name: FUN_02b6dd70
 */


int FUN_02b6dd70(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = FUN_02b6dc20();
  if (*param_5 == *param_4) {
    sVar1 = *(short *)(param_5 + 6);
    sVar2 = *(short *)(param_4 + 6);
    if (sVar1 == sVar2) {
      sVar1 = *(short *)(param_5 + 2);
      sVar2 = *(short *)(param_4 + 2);
    }
    if (sVar2 <= sVar1) {
      return iVar3;
    }
  }
  else if (*param_4 <= *param_5) {
    return iVar3;
  }
  uVar4 = *(undefined8 *)param_4;
  *(undefined8 *)param_4 = *(undefined8 *)param_5;
  *(undefined8 *)param_5 = uVar4;
  if (*param_4 == *param_3) {
    sVar1 = *(short *)(param_4 + 6);
    sVar2 = *(short *)(param_3 + 6);
    if (sVar1 == sVar2) {
      sVar1 = *(short *)(param_4 + 2);
      sVar2 = *(short *)(param_3 + 2);
    }
    if (sVar2 <= sVar1) {
      return iVar3 + 1;
    }
  }
  else if (*param_3 <= *param_4) {
    return iVar3 + 1;
  }
  uVar4 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = *(undefined8 *)param_4;
  *(undefined8 *)param_4 = uVar4;
  if (*param_3 == *param_2) {
    sVar1 = *(short *)(param_3 + 6);
    sVar2 = *(short *)(param_2 + 6);
    if (sVar1 == sVar2) {
      sVar1 = *(short *)(param_3 + 2);
      sVar2 = *(short *)(param_2 + 2);
    }
    if (sVar2 <= sVar1) {
      return iVar3 + 2;
    }
  }
  else if (*param_2 <= *param_3) {
    return iVar3 + 2;
  }
  uVar4 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = uVar4;
  if (*param_2 == *param_1) {
    sVar1 = *(short *)(param_2 + 6);
    sVar2 = *(short *)(param_1 + 6);
    if (sVar1 == sVar2) {
      sVar1 = *(short *)(param_2 + 2);
      sVar2 = *(short *)(param_1 + 2);
    }
    if (sVar2 <= sVar1) {
      return iVar3 + 3;
    }
  }
  else if (*param_1 <= *param_2) {
    return iVar3 + 3;
  }
  uVar4 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = uVar4;
  return iVar3 + 4;
}


