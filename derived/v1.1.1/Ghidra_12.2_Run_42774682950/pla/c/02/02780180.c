/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02780180; name: FUN_02780180
 */


undefined8 FUN_02780180(char *param_1,char *param_2,char *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar4 = strcmp(param_2,param_1);
  iVar5 = strcmp(param_3,param_2);
  if (iVar4 < 0) {
    uVar1 = *(undefined8 *)param_1;
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if (iVar5 < 0) {
      uVar2 = *(undefined8 *)param_3;
      uVar7 = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_1 + 0x10) = uVar7;
      *(undefined8 *)param_1 = uVar2;
      *(undefined8 *)param_3 = uVar1;
      *(undefined8 *)(param_3 + 8) = uVar3;
      *(undefined8 *)(param_3 + 0x10) = uVar6;
      return 1;
    }
    uVar2 = *(undefined8 *)param_2;
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    *(undefined8 *)param_1 = uVar2;
    *(undefined8 *)(param_2 + 0x10) = uVar6;
    *(undefined8 *)param_2 = uVar1;
    *(undefined8 *)(param_2 + 8) = uVar3;
    iVar4 = strcmp(param_3,param_2);
    if (-1 < iVar4) {
      return 1;
    }
    uVar1 = *(undefined8 *)param_2;
    uVar6 = *(undefined8 *)(param_2 + 8);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined8 *)(param_3 + 8);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 8) = uVar3;
    *(undefined8 *)(param_2 + 0x10) = uVar2;
    *(undefined8 *)param_3 = uVar1;
    *(undefined8 *)(param_3 + 8) = uVar6;
    *(undefined8 *)(param_3 + 0x10) = uVar7;
  }
  else {
    if (-1 < iVar5) {
      return 0;
    }
    uVar1 = *(undefined8 *)param_2;
    uVar6 = *(undefined8 *)(param_2 + 8);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined8 *)(param_3 + 8);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 8) = uVar3;
    *(undefined8 *)(param_2 + 0x10) = uVar2;
    *(undefined8 *)(param_3 + 0x10) = uVar7;
    *(undefined8 *)param_3 = uVar1;
    *(undefined8 *)(param_3 + 8) = uVar6;
    iVar4 = strcmp(param_2,param_1);
    if (-1 < iVar4) {
      return 1;
    }
    uVar1 = *(undefined8 *)param_1;
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined8 *)param_2 = uVar1;
    *(undefined8 *)(param_2 + 8) = uVar6;
    *(undefined8 *)(param_2 + 0x10) = uVar7;
  }
  return 2;
}


