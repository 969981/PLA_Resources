/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bf82c; name: FUN_032bf82c
 */


undefined8 * FUN_032bf82c(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 uVar10;
  
  lVar3 = *param_1;
  puVar6 = (undefined8 *)param_1[1];
  iVar7 = *(int *)(puVar6 + 0xb) + -1;
  if (*(int *)(puVar6 + 0xb) < 1) {
    lVar5 = puVar6[1];
    (**(code **)(*(long *)*puVar6 + 0x20))((long *)*puVar6,lVar5,6);
    *(undefined4 *)(puVar6 + 0xb) = 5;
    puVar6 = (undefined8 *)(lVar5 + 0x28);
  }
  else {
    *(int *)(puVar6 + 0xb) = iVar7;
    puVar6 = (undefined8 *)(puVar6[1] + (long)iVar7 * 8);
  }
  puVar6 = (undefined8 *)*puVar6;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined4 *)((long)puVar6 + 4) = *(undefined4 *)(lVar3 + 0x18);
  puVar4 = PTR_PTR_0434a080;
  iVar7 = *(int *)(lVar3 + 0x18);
  puVar9 = (uint *)(lVar3 + 0x1c);
  uVar8 = *puVar9;
  uVar1 = iVar7 + 1;
  if (iVar7 < (int)(uVar8 & 0x3fffffff)) {
    lVar5 = *(long *)(lVar3 + 0x10);
  }
  else {
    uVar10 = *(undefined8 *)(lVar3 + 0x10);
    if (0x3ffffffe < iVar7) {
      FUN_032bd0a8(uVar1);
      uVar8 = *puVar9;
    }
    uVar8 = (uVar8 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar8) {
      uVar8 = 0x3fffffff;
    }
    uVar2 = uVar1;
    if ((int)uVar1 <= (int)uVar8) {
      uVar2 = uVar8;
    }
    lVar5 = FUN_032bd1d4(puVar4,uVar2,8,uVar10,iVar7,puVar9);
    *(long *)(lVar3 + 0x10) = lVar5;
    iVar7 = *(int *)(lVar3 + 0x18);
  }
  *(undefined8 **)(lVar5 + (long)iVar7 * 8) = puVar6;
  *(uint *)(lVar3 + 0x18) = uVar1;
  puVar9 = (uint *)param_1[2];
  lVar3 = param_1[3];
  uVar1 = *(uint *)((long)param_1 + 0x1c);
  *(undefined8 **)(puVar9 + 2) = puVar6;
  *puVar9 = *puVar9 & 0xffff0000 | uVar1 & 0xffff;
  *puVar9 = *puVar9 & 0xffff | (int)lVar3 << 0x10;
  *(uint *)(*param_1 + 8) = *(int *)(*param_1 + 8) + uVar1;
  param_1[2] = (long)puVar6;
  param_1[3] = 0;
  return puVar6 + 4;
}


