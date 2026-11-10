/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e65f4; name: FUN_003e65f4
 */


int * FUN_003e65f4(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  byte *pbVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  *param_2 = 0;
  puVar3 = PTR_LAB_04373088;
  iVar2 = *param_1;
  if (iVar2 - 3U < 2) {
    pbVar4 = (byte *)(param_1 + 2);
    piVar1 = param_2 + 2;
    if ((*pbVar4 & 1) == 0) {
      pbVar4[0] = 0;
      pbVar4[1] = 0;
    }
    else {
      **(undefined1 **)(param_1 + 6) = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 6));
        param_1[2] = 0;
        param_1[3] = 0;
      }
    }
    uVar10 = *(undefined8 *)(param_2 + 4);
    uVar9 = *(undefined8 *)piVar1;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar10;
    *(undefined8 *)pbVar4 = uVar9;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    piVar1[0] = 0;
    piVar1[1] = 0;
  }
  else if (iVar2 == 5) {
    FUN_003e9ea4(param_1 + 8,param_2 + 8);
  }
  else if (iVar2 == 6) {
    plVar5 = (long *)(param_1 + 0xe);
    lVar6 = *plVar5;
    if (lVar6 != 0) {
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 == lVar6) {
        lVar7 = lVar6;
      }
      else {
        do {
          lVar8 = lVar7 + -0x50;
          FUN_003e7200(lVar7 + -0x18);
          FUN_003e9f80(lVar7 + -0x30,*(undefined8 *)(lVar7 + -0x28));
          if ((*(byte *)(lVar7 + -0x48) & 1) != 0) {
            FUN_002e2ea0(puVar3,*(undefined8 *)(lVar7 + -0x38));
          }
          lVar7 = lVar8;
        } while (lVar6 != lVar8);
        lVar7 = *plVar5;
      }
      *(long *)(param_1 + 0x10) = lVar6;
      FUN_002e2ea0(PTR_LAB_04373088,lVar7);
      *plVar5 = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
    }
    uVar9 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xe) = uVar9;
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
  }
  return param_1;
}


