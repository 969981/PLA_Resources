/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030bcad0; name: FUN_030bcad0
 */


void FUN_030bcad0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
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
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar4 = param_1[0xb];
  uVar6 = param_1[9];
  uVar13 = param_1[1];
  uVar12 = *param_1;
  uVar15 = param_1[3];
  uVar14 = param_1[2];
  uVar17 = param_1[5];
  uVar16 = param_1[4];
  uVar19 = param_1[7];
  uVar18 = param_1[6];
  uVar3 = *(undefined2 *)(param_1 + 0xf);
  uVar1 = param_1[0xc];
  uVar2 = param_1[0xd];
  uVar10 = param_1[0xe];
  uVar5 = param_1[8];
  uVar7 = param_1[10];
  uVar20 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar20;
  uVar20 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar20;
  uVar20 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar20;
  uVar20 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar20;
  uVar20 = param_2[0xc];
  uVar8 = param_2[0xd];
  uVar11 = param_2[0xe];
  *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(param_2 + 0xf);
  param_1[0xd] = uVar8;
  uVar8 = param_2[9];
  param_1[0xb] = param_2[0xb];
  param_1[9] = uVar8;
  uVar8 = param_2[8];
  uVar9 = param_2[10];
  param_1[0xe] = uVar11;
  param_1[0xc] = uVar20;
  param_1[10] = uVar9;
  param_1[8] = uVar8;
  param_2[1] = uVar13;
  *param_2 = uVar12;
  param_2[3] = uVar15;
  param_2[2] = uVar14;
  param_2[5] = uVar17;
  param_2[4] = uVar16;
  param_2[7] = uVar19;
  param_2[6] = uVar18;
  *(undefined2 *)(param_2 + 0xf) = uVar3;
  param_2[0xc] = uVar1;
  param_2[10] = uVar7;
  param_2[0xb] = uVar4;
  param_2[8] = uVar5;
  param_2[9] = uVar6;
  param_2[0xd] = uVar2;
  param_2[0xe] = uVar10;
  return;
}


