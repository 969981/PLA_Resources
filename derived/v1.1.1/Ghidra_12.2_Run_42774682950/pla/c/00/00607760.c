/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00607760; name: FUN_00607760
 */


undefined8 FUN_00607760(long *param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  byte *__s;
  
  switch(*(undefined1 *)*param_2) {
  case 0:
    return 0;
  case 1:
    iVar2 = (int)param_1[3];
    if ((iVar2 < 0) && (*(int *)(param_1 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar6 = (undefined4 *)(param_1[1] + (long)iVar2);
    }
    else {
      puVar6 = (undefined4 *)*param_1;
      *param_1 = (long)(puVar6 + 2);
    }
    uVar1 = *puVar6;
    puVar4 = &DAT_0388ad61;
    goto LAB_00607890;
  case 2:
    iVar2 = (int)param_1[3];
    if ((iVar2 < 0) && (*(int *)(param_1 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)iVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    uVar5 = *puVar8;
    puVar4 = &DAT_038aa48e;
    break;
  case 3:
    iVar2 = (int)param_1[3];
    if ((iVar2 < 0) && (*(int *)(param_1 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)iVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    uVar5 = *puVar8;
    puVar4 = &DAT_038da3fb;
    break;
  case 4:
    iVar2 = (int)param_1[3];
    if ((iVar2 < 0) && (*(int *)(param_1 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar6 = (undefined4 *)(param_1[1] + (long)iVar2);
    }
    else {
      puVar6 = (undefined4 *)*param_1;
      *param_1 = (long)(puVar6 + 2);
    }
    uVar1 = *puVar6;
    puVar4 = &DAT_038aa9b2;
LAB_00607890:
    FUN_00607af0(param_3,puVar4,uVar1);
    goto LAB_00607a48;
  case 5:
    iVar2 = (int)param_1[3];
    if ((iVar2 < 0) && (*(int *)(param_1 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)iVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    uVar5 = *puVar8;
    puVar4 = &DAT_03996eaf;
    break;
  case 6:
    iVar2 = (int)param_1[3];
    if ((iVar2 < 0) && (*(int *)(param_1 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)iVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    uVar5 = *puVar8;
    puVar4 = &DAT_0395f3c4;
    break;
  case 7:
    iVar2 = *(int *)((long)param_1 + 0x1c);
    if ((iVar2 < 0) && (*(int *)((long)param_1 + 0x1c) = iVar2 + 0x10, iVar2 + 0x10 < 1)) {
      puVar8 = (undefined8 *)(param_1[2] + (long)iVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    FUN_00607af0(*puVar8,param_3,&DAT_039a2ba4);
    goto LAB_00607a48;
  case 8:
    iVar2 = *(int *)((long)param_1 + 0x1c);
    if ((iVar2 < 0) && (*(int *)((long)param_1 + 0x1c) = iVar2 + 0x10, iVar2 + 0x10 < 1)) {
      puVar8 = (undefined8 *)(param_1[2] + (long)iVar2);
    }
    else {
      puVar8 = (undefined8 *)(*param_1 + 0xfU & 0xfffffffffffffff0);
      *param_1 = (long)(puVar8 + 2);
    }
    FUN_00607af0(*puVar8,param_3,&DAT_039aa831);
    goto LAB_00607a48;
  case 9:
    iVar2 = (int)param_1[3];
    if ((iVar2 < 0) && (*(int *)(param_1 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)iVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    __s = (byte *)*puVar8;
    sVar3 = strlen((char *)__s);
    goto LAB_00607a08;
  case 10:
    iVar2 = (int)param_1[3];
    if ((iVar2 < 0) && (*(int *)(param_1 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)iVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    pbVar7 = (byte *)*puVar8;
    sVar3 = *(size_t *)(pbVar7 + 8);
    __s = *(byte **)(pbVar7 + 0x10);
    if ((*pbVar7 & 1) == 0) {
      __s = pbVar7 + 1;
      sVar3 = (ulong)(*pbVar7 >> 1);
    }
LAB_00607a08:
    FUN_002e4094(param_3,__s,sVar3);
    goto LAB_00607a48;
  case 0xb:
    iVar2 = (int)param_1[3];
    if ((iVar2 < 0) && (*(int *)(param_1 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)iVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    uVar5 = *puVar8;
    puVar4 = &DAT_03952e05;
    break;
  default:
    FUN_002e4094(param_3,"[Invalid CheckArgType]",0x16);
    return 0;
  }
  FUN_00607af0(param_3,puVar4,uVar5);
LAB_00607a48:
  *param_2 = *param_2 + 1;
  return 1;
}


