/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060ff48; name: FUN_0060ff48
 */


void FUN_0060ff48(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uVar4 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar4;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar7 = param_3[5];
  uVar6 = param_3[4];
  uVar8 = param_3[6];
  uVar10 = param_3[9];
  uVar9 = param_3[8];
  param_1[7] = param_3[7];
  param_1[6] = uVar8;
  param_1[9] = uVar10;
  param_1[8] = uVar9;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  param_1[5] = uVar7;
  param_1[4] = uVar6;
  uStack_28 = *(undefined8 *)((long)param_1 + 0x2c);
  local_30 = *(undefined8 *)((long)param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 3);
  uStack_10 = (undefined4)((ulong)param_1[8] >> 0x20);
  local_14 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x3c) >> 0x20);
  if (iVar3 == -0x80000000) {
    iVar3 = *param_2;
    local_30 = *(undefined8 *)(param_2 + 1);
    uVar1 = (ulong)uStack_28 >> 0x20;
    uStack_28 = CONCAT44((int)uVar1,param_2[3]);
  }
  if (iVar2 == -0x80000000) {
    iVar2 = param_2[4];
  }
  *(int *)(param_1 + 3) = iVar2;
  *(int *)(param_1 + 4) = iVar3;
  param_1[9] = param_1[9];
  param_1[8] = CONCAT44(uStack_10,local_14);
  *(undefined8 *)((long)param_1 + 0x2c) = uStack_28;
  *(undefined8 *)((long)param_1 + 0x24) = local_30;
  *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)((long)param_1 + 0x3c);
  *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)((long)param_1 + 0x34);
  return;
}


