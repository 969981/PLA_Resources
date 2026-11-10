/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03044250; name: FUN_03044250
 */


void FUN_03044250(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined2 uStack_18;
  undefined4 uStack_16;
  
  uVar1 = *(undefined4 *)(param_1 + 5);
  uVar8 = param_1[4];
  uVar12 = param_1[1];
  uVar11 = *param_1;
  uVar14 = param_1[3];
  uVar13 = param_1[2];
  uVar9 = *(undefined8 *)((long)param_1 + 0x3a);
  uVar2 = *(undefined4 *)(param_1 + 6);
  uVar5 = *(undefined1 *)((long)param_1 + 0x34);
  uVar7 = *(undefined2 *)(param_1 + 7);
  uStack_18 = (undefined2)((ulong)param_1[8] >> 0x10);
  uStack_16 = (undefined4)((ulong)param_1[8] >> 0x20);
  uVar3 = *(undefined4 *)(param_1 + 9);
  uVar6 = *(undefined1 *)((long)param_1 + 0x4c);
  uVar10 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar10;
  uVar10 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar10;
  uVar10 = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  param_1[4] = uVar10;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x34) = *(undefined1 *)((long)param_2 + 0x34);
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  uVar10 = *(undefined8 *)((long)param_2 + 0x3c);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)((long)param_2 + 0x44);
  *(undefined8 *)((long)param_1 + 0x3c) = uVar10;
  uVar4 = *(undefined4 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x4c) = *(undefined1 *)((long)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 9) = uVar4;
  param_2[1] = uVar12;
  *param_2 = uVar11;
  param_2[3] = uVar14;
  param_2[2] = uVar13;
  *(undefined4 *)(param_2 + 5) = uVar1;
  param_2[4] = uVar8;
  *(undefined4 *)(param_2 + 6) = uVar2;
  *(undefined1 *)((long)param_2 + 0x34) = uVar5;
  *(undefined2 *)(param_2 + 7) = uVar7;
  *(undefined4 *)((long)param_2 + 0x44) = uStack_16;
  *(ulong *)((long)param_2 + 0x3c) = CONCAT26(uStack_18,(int6)((ulong)uVar9 >> 0x10));
  *(undefined1 *)((long)param_2 + 0x4c) = uVar6;
  *(undefined4 *)(param_2 + 9) = uVar3;
  return;
}


