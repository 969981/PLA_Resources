/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032be688; name: FUN_032be688
 */


void FUN_032be688(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  uint *puVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  
  iVar7 = *(int *)(param_2 + 0xb) + -1;
  if (*(int *)(param_2 + 0xb) < 1) {
    lVar6 = param_2[1];
    (**(code **)(*(long *)*param_2 + 0x20))((long *)*param_2,lVar6,6);
    *(undefined4 *)(param_2 + 0xb) = 5;
    puVar4 = (undefined8 *)(lVar6 + 0x28);
  }
  else {
    *(int *)(param_2 + 0xb) = iVar7;
    puVar4 = (undefined8 *)(param_2[1] + (long)iVar7 * 8);
  }
  puVar4 = (undefined8 *)*puVar4;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)((long)puVar4 + 4) = *(undefined4 *)(param_1 + 0x18);
  puVar3 = PTR_PTR_0434a080;
  iVar7 = *(int *)(param_1 + 0x18);
  puVar5 = (uint *)(param_1 + 0x1c);
  uVar8 = *puVar5;
  uVar1 = iVar7 + 1;
  if (iVar7 < (int)(uVar8 & 0x3fffffff)) {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    if (0x3ffffffe < iVar7) {
      FUN_032bd0a8(uVar1);
      uVar8 = *puVar5;
    }
    uVar8 = (uVar8 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar8) {
      uVar8 = 0x3fffffff;
    }
    uVar2 = uVar1;
    if ((int)uVar1 <= (int)uVar8) {
      uVar2 = uVar8;
    }
    lVar6 = FUN_032bd1d4(puVar3,uVar2,8,uVar9,iVar7,puVar5);
    *(long *)(param_1 + 0x10) = lVar6;
    iVar7 = *(int *)(param_1 + 0x18);
  }
  *(undefined8 **)(lVar6 + (long)iVar7 * 8) = puVar4;
  *(uint *)(param_1 + 0x18) = uVar1;
  return;
}


