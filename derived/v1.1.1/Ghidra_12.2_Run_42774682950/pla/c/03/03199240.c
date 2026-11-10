/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03199240; name: FUN_03199240
 */


void FUN_03199240(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((int)(*(uint *)(param_1 + 0xdc) & 0x3fffffff) < param_2) {
    uVar5 = FUN_03192160(PTR_PTR_0434a080,param_2,*(undefined8 *)(param_1 + 0xd0),
                         *(undefined4 *)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd0) = uVar5;
  }
  uVar7 = iVar2 + param_2;
  if (*(int *)(param_1 + 0xd8) != param_2) {
    *(int *)(param_1 + 0xd8) = param_2;
  }
  puVar4 = PTR_PTR_0434a080;
  uVar6 = *(uint *)(param_1 + 0x10c);
  if ((int)(uVar6 & 0x3fffffff) < (int)uVar7) {
    uVar5 = *(undefined8 *)(param_1 + 0x100);
    uVar1 = *(undefined4 *)(param_1 + 0x108);
    if (0x3fffffff < (int)uVar7) {
      FUN_032bd0a8(uVar7);
      uVar6 = *(uint *)(param_1 + 0x10c);
    }
    uVar6 = (uVar6 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar6) {
      uVar6 = 0x3fffffff;
    }
    uVar3 = uVar7;
    if ((int)uVar7 <= (int)uVar6) {
      uVar3 = uVar6;
    }
    uVar5 = FUN_032bd1d4(puVar4,uVar3,1,uVar5,uVar1,(uint *)(param_1 + 0x10c));
    *(undefined8 *)(param_1 + 0x100) = uVar5;
  }
  if (*(uint *)(param_1 + 0x108) != uVar7) {
    *(uint *)(param_1 + 0x108) = uVar7;
  }
  uVar6 = *(int *)(param_1 + 0x50) * param_2;
  uVar7 = *(uint *)(param_1 + 0x14c);
  if ((int)(uVar7 & 0x3fffffff) < (int)uVar6) {
    uVar5 = *(undefined8 *)(param_1 + 0x140);
    uVar1 = *(undefined4 *)(param_1 + 0x148);
    if (0x3fffffff < (int)uVar6) {
      FUN_032bd0a8(uVar6);
      uVar7 = *(uint *)(param_1 + 0x14c);
    }
    uVar7 = (uVar7 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uVar3 = uVar6;
    if ((int)uVar6 <= (int)uVar7) {
      uVar3 = uVar7;
    }
    uVar5 = FUN_032bd1d4(puVar4,uVar3,4,uVar5,uVar1,(uint *)(param_1 + 0x14c));
    *(undefined8 *)(param_1 + 0x140) = uVar5;
  }
  if (*(uint *)(param_1 + 0x148) != uVar6) {
    *(uint *)(param_1 + 0x148) = uVar6;
  }
  return;
}


