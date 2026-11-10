/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050bf34; name: FUN_0050bf34
 */


void FUN_0050bf34(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *param_2 = 0;
  iVar2 = *param_1;
  if (iVar2 - 3U < 2) {
    pbVar3 = (byte *)(param_1 + 2);
    piVar1 = param_2 + 2;
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
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
    uVar5 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)piVar1;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar5;
    *(undefined8 *)pbVar3 = uVar4;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    piVar1[0] = 0;
    piVar1[1] = 0;
    return;
  }
  if (iVar2 == 5) {
    FUN_003e9ea4(param_1 + 8,param_2 + 8);
    return;
  }
  if (iVar2 == 6) {
    FUN_0050bdc4(param_1 + 0xe);
    uVar4 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xe) = uVar4;
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
  }
  return;
}


