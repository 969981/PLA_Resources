/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03154104; name: FUN_03154104
 */


long FUN_03154104(long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_PTR_0434a080;
  uVar5 = *(uint *)(param_1 + 0x34);
  iVar1 = *(int *)(param_1 + 0x30);
  uVar6 = iVar1 + *(int *)(param_1 + 0x38) * param_2;
  if ((int)(uVar5 & 0x3fffffff) < (int)uVar6) {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    if (0x3fffffff < (int)uVar6) {
      FUN_032bd0a8(uVar6);
      uVar5 = *(uint *)(param_1 + 0x34);
    }
    uVar5 = (uVar5 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar5) {
      uVar5 = 0x3fffffff;
    }
    uVar4 = uVar6;
    if ((int)uVar6 <= (int)uVar5) {
      uVar4 = uVar5;
    }
    uVar8 = FUN_032bd1d4(puVar2,uVar4,4,uVar8,iVar1);
    *(undefined8 *)(param_1 + 0x28) = uVar8;
  }
  puVar7 = (uint *)(param_1 + 0x24);
  uVar4 = *puVar7;
  *(uint *)(param_1 + 0x30) = uVar6;
  iVar1 = *(int *)(param_1 + 0x20);
  uVar5 = iVar1 + param_2;
  if ((int)(uVar4 & 0x3fffffff) < (int)uVar5) {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    if (0x3fffffff < (int)uVar5) {
      FUN_032bd0a8(uVar5);
      uVar4 = *puVar7;
    }
    uVar6 = (uVar4 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar6) {
      uVar6 = 0x3fffffff;
    }
    uVar4 = uVar5;
    if ((int)uVar5 <= (int)uVar6) {
      uVar4 = uVar6;
    }
    lVar3 = FUN_032bd1d4(puVar2,uVar4,0x90,uVar8,iVar1,puVar7);
    *(long *)(param_1 + 0x18) = lVar3;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(uint *)(param_1 + 0x20) = uVar5;
  return lVar3 + (long)iVar1 * 0x90;
}


