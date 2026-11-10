/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315bc90; name: FUN_0315bc90
 */


void FUN_0315bc90(int *param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint *puVar8;
  int local_48 [2];
  
  FUN_0315bed8(local_48);
  puVar5 = PTR_PTR_0434a080;
  if (local_48[0] != -1) goto LAB_0315bccc;
  uVar7 = *(uint *)(param_2 + 0xbc);
  uVar3 = *(uint *)(param_2 + 0xb8);
  uVar1 = uVar3 + param_3;
  if ((int)(uVar7 & 0x3fffffff) < (int)uVar1) {
    uVar6 = *(undefined8 *)(param_2 + 0xb0);
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar7 = *(uint *)(param_2 + 0xbc);
    }
    uVar7 = (uVar7 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uVar4 = uVar1;
    if ((int)uVar1 <= (int)uVar7) {
      uVar4 = uVar7;
    }
    uVar6 = FUN_032bd1d4(puVar5,uVar4,4,uVar6,uVar3);
    uVar7 = *(uint *)(param_2 + 0xb8);
    *(undefined8 *)(param_2 + 0xb0) = uVar6;
    if ((int)uVar1 <= (int)uVar7) goto LAB_0315be6c;
LAB_0315bd1c:
    *(uint *)(param_2 + 0xb8) = uVar1;
    memset((void *)(*(long *)(param_2 + 0xb0) + (long)(int)uVar7 * 4),0,
           (ulong)(uVar1 + ~uVar7) * 4 + 4);
  }
  else {
    uVar7 = uVar3;
    if ((int)uVar3 < (int)uVar1) goto LAB_0315bd1c;
LAB_0315be6c:
    if ((int)uVar1 < (int)uVar7) {
      *(uint *)(param_2 + 0xb8) = uVar1;
    }
  }
  param_3 = *(int *)(param_2 + 0x98) + param_3;
  if ((int)(*(uint *)(param_2 + 0x9c) & 0x3fffffff) < param_3) {
    uVar6 = FUN_0315c8fc(puVar5,param_3,*(undefined8 *)(param_2 + 0x90));
    *(undefined8 *)(param_2 + 0x90) = uVar6;
  }
  puVar8 = (uint *)(param_2 + 0xac);
  uVar7 = *puVar8;
  uVar1 = *(int *)(param_2 + 0x58) * uVar1;
  *(int *)(param_2 + 0x98) = param_3;
  if ((int)(uVar7 & 0x3fffffff) < (int)uVar1) {
    uVar6 = *(undefined8 *)(param_2 + 0xa0);
    uVar2 = *(undefined4 *)(param_2 + 0xa8);
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar7 = *puVar8;
    }
    uVar7 = (uVar7 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uVar4 = uVar1;
    if ((int)uVar1 <= (int)uVar7) {
      uVar4 = uVar7;
    }
    uVar6 = FUN_032bd1d4(puVar5,uVar4,4,uVar6,uVar2,puVar8);
    *(undefined8 *)(param_2 + 0xa0) = uVar6;
  }
  uVar7 = *(uint *)(param_2 + 0xa8);
  if ((int)uVar7 < (int)uVar1) {
    *(uint *)(param_2 + 0xa8) = uVar1;
    memset((void *)(*(long *)(param_2 + 0xa0) + (long)(int)uVar7 * 4),0,
           (ulong)(uVar1 + ~uVar7) * 4 + 4);
  }
  else if ((int)uVar1 < (int)uVar7) {
    *(uint *)(param_2 + 0xa8) = uVar1;
  }
  local_48[0] = *(int *)(param_2 + 0x30) + uVar3;
LAB_0315bccc:
  *param_1 = local_48[0];
  return;
}


