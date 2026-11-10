/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ee80c; name: FUN_003ee80c
 */


void FUN_003ee80c(int *param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = 0;
  pbVar2 = (byte *)(param_1 + 2);
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  pbVar2[4] = 0;
  pbVar2[5] = 0;
  pbVar2[6] = 0;
  pbVar2[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  piVar3 = param_1 + 10;
  piVar3[0] = 0;
  piVar3[1] = 0;
  *(int **)(param_1 + 8) = piVar3;
  piVar3 = param_1 + 0xe;
  piVar3[0] = 0;
  piVar3[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  iVar1 = *param_1;
  if (iVar1 - 3U < 2) {
    piVar3 = param_2 + 2;
    if ((*pbVar2 & 1) == 0) {
      pbVar2[0] = 0;
      pbVar2[1] = 0;
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
    uVar4 = *(undefined8 *)piVar3;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar5;
    *(undefined8 *)pbVar2 = uVar4;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    piVar3[0] = 0;
    piVar3[1] = 0;
  }
  else if (iVar1 == 5) {
                    /* try { // try from 003ee8c0 to 003ee8c7 has its CatchHandler @ 003ee928 */
    FUN_003e9ea4(param_1 + 8,param_2 + 8);
  }
  else if (iVar1 == 6) {
    FUN_003ee784(piVar3,param_2 + 0xe);
    return;
  }
  return;
}


