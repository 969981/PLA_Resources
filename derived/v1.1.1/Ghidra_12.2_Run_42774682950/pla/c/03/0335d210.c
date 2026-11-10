/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335d210; name: FUN_0335d210
 */


void FUN_0335d210(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar5 = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0xd);
  uVar2 = *(undefined4 *)((long)param_1 + 0x6c);
  uVar8 = param_1[1];
  uVar7 = *param_1;
  uVar10 = param_1[3];
  uVar9 = param_1[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar5 = param_2[2];
  uVar12 = param_1[5];
  uVar11 = param_1[4];
  uVar14 = param_1[7];
  uVar13 = param_1[6];
  param_1[3] = param_2[3];
  param_1[2] = uVar5;
  uVar5 = param_2[4];
  uVar16 = param_1[9];
  uVar15 = param_1[8];
  uVar18 = param_1[0xb];
  uVar17 = param_1[10];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  uVar5 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  uVar5 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  uVar5 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  uVar4 = *(undefined2 *)(param_2 + 0xe);
  param_1[0xd] = param_2[0xd];
  uVar3 = *(undefined1 *)(param_1 + 0xe);
  uVar6 = param_2[0xc];
  *(undefined2 *)(param_1 + 0xe) = uVar4;
  uVar5 = param_1[0xc];
  param_1[0xc] = uVar6;
  param_2[0xc] = uVar5;
  param_2[1] = uVar8;
  *param_2 = uVar7;
  param_2[3] = uVar10;
  param_2[2] = uVar9;
  *(undefined4 *)(param_2 + 0xd) = uVar1;
  *(undefined4 *)((long)param_2 + 0x6c) = uVar2;
  param_2[5] = uVar12;
  param_2[4] = uVar11;
  param_2[7] = uVar14;
  param_2[6] = uVar13;
  *(undefined1 *)(param_2 + 0xe) = uVar3;
  param_2[9] = uVar16;
  param_2[8] = uVar15;
  param_2[0xb] = uVar18;
  param_2[10] = uVar17;
  return;
}


