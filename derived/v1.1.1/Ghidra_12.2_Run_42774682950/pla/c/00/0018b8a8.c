/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0018b8a8; name: FUN_0018b8a8
 */


void FUN_0018b8a8(long param_1,long param_2,long param_3,undefined8 param_4,ulong param_5,
                 uint param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  
  if (((param_5 & 1) == 0) && (FUN_0333e7e4(param_2), param_3 != 0)) {
    *(undefined4 *)(param_3 + 8) = 0;
  }
  puVar7 = (uint *)(param_2 + 0x34);
  uVar3 = *puVar7;
  iVar4 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)PTR_PTR_04372408;
  uVar1 = iVar4 + iVar2;
  if ((int)(uVar3 & 0x3fffffff) < (int)uVar1) {
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar3 = *puVar7;
    }
    uVar3 = (uVar3 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar3) {
      uVar3 = 0x3fffffff;
    }
    if ((int)uVar1 <= (int)uVar3) {
      uVar1 = uVar3;
    }
    uVar5 = FUN_032bd1d4(uVar6,uVar1,0x10,uVar5,iVar2,puVar7);
    *(undefined8 *)(param_2 + 0x28) = uVar5;
    iVar4 = *(int *)(param_1 + 0x30);
  }
  puVar7 = (uint *)(param_2 + 0x24);
  uVar3 = *puVar7;
  iVar2 = *(int *)(param_2 + 0x20);
  uVar1 = iVar4 * 3 + iVar2;
  if ((int)(uVar3 & 0x3fffffff) < (int)uVar1) {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar3 = *puVar7;
    }
    uVar3 = (uVar3 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar3) {
      uVar3 = 0x3fffffff;
    }
    if ((int)uVar1 <= (int)uVar3) {
      uVar1 = uVar3;
    }
    uVar6 = FUN_032bd1d4(uVar6,uVar1,0x10,uVar5,iVar2,puVar7);
    *(undefined8 *)(param_2 + 0x18) = uVar6;
  }
  if (0 < *(int *)(param_1 + 0x48)) {
    iVar4 = 0;
    do {
      FUN_001a5e00(param_1,iVar4,param_2,param_3,param_4,1,0,param_7);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x48));
  }
  if ((param_6 & 1) == 0) {
    return;
  }
  FUN_032916ec(0,param_2);
  return;
}


