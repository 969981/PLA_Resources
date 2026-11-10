/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02780300; name: FUN_02780300
 */


int FUN_02780300(char *param_1,char *param_2,char *param_3,char *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar5 = FUN_02780180();
  iVar6 = strcmp(param_4,param_3);
  if (iVar6 < 0) {
    uVar1 = *(undefined8 *)param_3;
    uVar3 = *(undefined8 *)(param_3 + 8);
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    uVar2 = *(undefined8 *)(param_4 + 8);
    uVar4 = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 8) = uVar2;
    *(undefined8 *)(param_3 + 0x10) = uVar4;
    *(undefined8 *)(param_4 + 0x10) = uVar7;
    *(undefined8 *)param_4 = uVar1;
    *(undefined8 *)(param_4 + 8) = uVar3;
    iVar6 = strcmp(param_3,param_2);
    if (iVar6 < 0) {
      uVar1 = *(undefined8 *)param_2;
      uVar3 = *(undefined8 *)(param_2 + 8);
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      uVar2 = *(undefined8 *)(param_3 + 8);
      uVar4 = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 8) = uVar2;
      *(undefined8 *)(param_2 + 0x10) = uVar4;
      *(undefined8 *)(param_3 + 0x10) = uVar7;
      *(undefined8 *)param_3 = uVar1;
      *(undefined8 *)(param_3 + 8) = uVar3;
      iVar6 = strcmp(param_2,param_1);
      if (iVar6 < 0) {
        uVar1 = *(undefined8 *)param_1;
        uVar3 = *(undefined8 *)(param_1 + 8);
        iVar5 = iVar5 + 3;
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        uVar2 = *(undefined8 *)(param_2 + 8);
        uVar4 = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 8) = uVar2;
        *(undefined8 *)(param_1 + 0x10) = uVar4;
        *(undefined8 *)param_2 = uVar1;
        *(undefined8 *)(param_2 + 8) = uVar3;
        *(undefined8 *)(param_2 + 0x10) = uVar7;
      }
      else {
        iVar5 = iVar5 + 2;
      }
    }
    else {
      iVar5 = iVar5 + 1;
    }
  }
  return iVar5;
}


