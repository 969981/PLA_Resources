/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01303940; name: FUN_01303940
 */


undefined8 FUN_01303940(ushort *param_1,ushort *param_2,ushort *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ushort uVar10;
  
  uVar10 = *param_2;
  if (uVar10 < *param_1) {
    if (*param_3 < uVar10) {
      uVar1 = *(undefined8 *)param_1;
      uVar5 = *(undefined8 *)(param_1 + 4);
      uVar2 = *(undefined8 *)(param_1 + 8);
      uVar6 = *(undefined8 *)(param_1 + 0xc);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      uVar7 = *(undefined8 *)(param_1 + 0x14);
      uVar4 = *(undefined8 *)(param_3 + 8);
      uVar8 = *(undefined8 *)(param_3 + 0xc);
      uVar9 = *(undefined8 *)(param_3 + 0x14);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_1 + 0x14) = uVar9;
      *(undefined8 *)(param_1 + 8) = uVar4;
      *(undefined8 *)(param_1 + 0xc) = uVar8;
      uVar4 = *(undefined8 *)(param_3 + 4);
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      *(undefined8 *)(param_1 + 4) = uVar4;
      *(undefined8 *)param_3 = uVar1;
      *(undefined8 *)(param_3 + 4) = uVar5;
      *(undefined8 *)(param_3 + 0x10) = uVar3;
      *(undefined8 *)(param_3 + 0x14) = uVar7;
      *(undefined8 *)(param_3 + 8) = uVar2;
      *(undefined8 *)(param_3 + 0xc) = uVar6;
      return 1;
    }
    uVar1 = *(undefined8 *)param_1;
    uVar5 = *(undefined8 *)(param_1 + 4);
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0xc);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x14);
    uVar4 = *(undefined8 *)(param_2 + 8);
    uVar8 = *(undefined8 *)(param_2 + 0xc);
    uVar9 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x14) = uVar9;
    *(undefined8 *)(param_1 + 8) = uVar4;
    *(undefined8 *)(param_1 + 0xc) = uVar8;
    uVar4 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 4) = uVar4;
    *(undefined8 *)param_2 = uVar1;
    *(undefined8 *)(param_2 + 4) = uVar5;
    *(undefined8 *)(param_2 + 0x10) = uVar3;
    *(undefined8 *)(param_2 + 0x14) = uVar7;
    *(undefined8 *)(param_2 + 8) = uVar2;
    *(undefined8 *)(param_2 + 0xc) = uVar6;
    if (*param_2 <= *param_3) {
      return 1;
    }
    uVar1 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)(param_2 + 4);
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 0xc);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar7 = *(undefined8 *)(param_2 + 0x14);
    uVar4 = *(undefined8 *)(param_3 + 8);
    uVar8 = *(undefined8 *)(param_3 + 0xc);
    uVar9 = *(undefined8 *)(param_3 + 0x14);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x14) = uVar9;
    *(undefined8 *)(param_2 + 8) = uVar4;
    *(undefined8 *)(param_2 + 0xc) = uVar8;
    uVar4 = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 4) = uVar4;
    *(undefined8 *)param_3 = uVar1;
    *(undefined8 *)(param_3 + 4) = uVar5;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
    *(undefined8 *)(param_3 + 0x14) = uVar7;
    *(undefined8 *)(param_3 + 8) = uVar2;
    *(undefined8 *)(param_3 + 0xc) = uVar6;
  }
  else {
    if (uVar10 <= *param_3) {
      return 0;
    }
    uVar1 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)(param_2 + 4);
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 0xc);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar7 = *(undefined8 *)(param_2 + 0x14);
    uVar4 = *(undefined8 *)(param_3 + 8);
    uVar8 = *(undefined8 *)(param_3 + 0xc);
    uVar9 = *(undefined8 *)(param_3 + 0x14);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x14) = uVar9;
    *(undefined8 *)(param_2 + 8) = uVar4;
    *(undefined8 *)(param_2 + 0xc) = uVar8;
    uVar4 = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 4) = uVar4;
    *(undefined8 *)param_3 = uVar1;
    *(undefined8 *)(param_3 + 4) = uVar5;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
    *(undefined8 *)(param_3 + 0x14) = uVar7;
    *(undefined8 *)(param_3 + 8) = uVar2;
    *(undefined8 *)(param_3 + 0xc) = uVar6;
    if (*param_1 <= *param_2) {
      return 1;
    }
    uVar1 = *(undefined8 *)param_1;
    uVar5 = *(undefined8 *)(param_1 + 4);
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0xc);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x14);
    uVar4 = *(undefined8 *)(param_2 + 8);
    uVar8 = *(undefined8 *)(param_2 + 0xc);
    uVar9 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x14) = uVar9;
    *(undefined8 *)(param_1 + 8) = uVar4;
    *(undefined8 *)(param_1 + 0xc) = uVar8;
    uVar4 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 4) = uVar4;
    *(undefined8 *)param_2 = uVar1;
    *(undefined8 *)(param_2 + 4) = uVar5;
    *(undefined8 *)(param_2 + 0x10) = uVar3;
    *(undefined8 *)(param_2 + 0x14) = uVar7;
    *(undefined8 *)(param_2 + 8) = uVar2;
    *(undefined8 *)(param_2 + 0xc) = uVar6;
  }
  return 2;
}


