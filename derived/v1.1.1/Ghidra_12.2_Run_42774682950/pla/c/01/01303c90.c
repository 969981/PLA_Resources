/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01303c90; name: FUN_01303c90
 */


ulong FUN_01303c90(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5)

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
  int iVar10;
  ulong uVar11;
  
  uVar11 = FUN_01303b30();
  if (*param_5 < *param_4) {
    uVar1 = *(undefined8 *)param_4;
    uVar5 = *(undefined8 *)(param_4 + 4);
    uVar2 = *(undefined8 *)(param_4 + 8);
    uVar6 = *(undefined8 *)(param_4 + 0xc);
    uVar3 = *(undefined8 *)(param_4 + 0x10);
    uVar7 = *(undefined8 *)(param_4 + 0x14);
    uVar4 = *(undefined8 *)(param_5 + 8);
    uVar8 = *(undefined8 *)(param_5 + 0xc);
    uVar9 = *(undefined8 *)(param_5 + 0x14);
    *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(param_4 + 0x14) = uVar9;
    *(undefined8 *)(param_4 + 8) = uVar4;
    *(undefined8 *)(param_4 + 0xc) = uVar8;
    uVar4 = *(undefined8 *)(param_5 + 4);
    *(undefined8 *)param_4 = *(undefined8 *)param_5;
    *(undefined8 *)(param_4 + 4) = uVar4;
    *(undefined8 *)param_5 = uVar1;
    *(undefined8 *)(param_5 + 4) = uVar5;
    *(undefined8 *)(param_5 + 0x10) = uVar3;
    *(undefined8 *)(param_5 + 0x14) = uVar7;
    *(undefined8 *)(param_5 + 8) = uVar2;
    *(undefined8 *)(param_5 + 0xc) = uVar6;
    iVar10 = (int)uVar11;
    if (*param_4 < *param_3) {
      uVar1 = *(undefined8 *)param_3;
      uVar5 = *(undefined8 *)(param_3 + 4);
      uVar2 = *(undefined8 *)(param_3 + 8);
      uVar6 = *(undefined8 *)(param_3 + 0xc);
      uVar3 = *(undefined8 *)(param_3 + 0x10);
      uVar7 = *(undefined8 *)(param_3 + 0x14);
      uVar4 = *(undefined8 *)(param_4 + 8);
      uVar8 = *(undefined8 *)(param_4 + 0xc);
      uVar9 = *(undefined8 *)(param_4 + 0x14);
      *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_4 + 0x10);
      *(undefined8 *)(param_3 + 0x14) = uVar9;
      *(undefined8 *)(param_3 + 8) = uVar4;
      *(undefined8 *)(param_3 + 0xc) = uVar8;
      uVar4 = *(undefined8 *)(param_4 + 4);
      *(undefined8 *)param_3 = *(undefined8 *)param_4;
      *(undefined8 *)(param_3 + 4) = uVar4;
      *(undefined8 *)param_4 = uVar1;
      *(undefined8 *)(param_4 + 4) = uVar5;
      *(undefined8 *)(param_4 + 0x10) = uVar3;
      *(undefined8 *)(param_4 + 0x14) = uVar7;
      *(undefined8 *)(param_4 + 8) = uVar2;
      *(undefined8 *)(param_4 + 0xc) = uVar6;
      if (*param_3 < *param_2) {
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
        if (*param_2 < *param_1) {
          uVar1 = *(undefined8 *)param_1;
          uVar5 = *(undefined8 *)(param_1 + 4);
          uVar11 = (ulong)(iVar10 + 4);
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
        else {
          uVar11 = (ulong)(iVar10 + 3);
        }
      }
      else {
        uVar11 = (ulong)(iVar10 + 2);
      }
    }
    else {
      uVar11 = (ulong)(iVar10 + 1);
    }
  }
  return uVar11;
}


