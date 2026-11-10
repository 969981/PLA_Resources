/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aa4e08; name: FUN_01aa4e08
 */


void FUN_01aa4e08(undefined4 *param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar9 = *(undefined8 *)(param_2 + 0xe8);
  uVar4 = *(undefined8 *)(param_2 + 0xf0);
  uVar10 = *(undefined8 *)(param_2 + 0xf8);
  uVar1 = *(undefined4 *)(param_2 + 0xe4);
  uVar2 = *(undefined8 *)(param_2 + 0x120);
  uVar5 = *(undefined8 *)(param_2 + 0x128);
  uVar3 = *(undefined8 *)(param_2 + 0x130);
  uVar6 = *(undefined8 *)(param_2 + 0x138);
  uVar12 = *(undefined8 *)(param_2 + 0x108);
  uVar11 = *(undefined8 *)(param_2 + 0x100);
  uVar14 = *(undefined8 *)(param_2 + 0x118);
  uVar13 = *(undefined8 *)(param_2 + 0x110);
  uVar8 = *param_3;
  uVar7 = *(undefined4 *)(param_3 + 1);
  *param_1 = *(undefined4 *)(param_2 + 0xe0);
  param_1[1] = uVar1;
  *(undefined8 *)(param_1 + 10) = uVar12;
  *(undefined8 *)(param_1 + 8) = uVar11;
  *(undefined8 *)(param_1 + 0xe) = uVar14;
  *(undefined8 *)(param_1 + 0xc) = uVar13;
  *(undefined8 *)(param_1 + 4) = uVar4;
  *(undefined8 *)(param_1 + 6) = uVar10;
  *(undefined8 *)(param_1 + 2) = uVar9;
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  *(undefined8 *)(param_1 + 0x16) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x12) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  param_1[0x1a] = uVar7;
  uVar1 = *(undefined4 *)((long)param_3 + 0x1c);
  uVar9 = *(undefined8 *)((long)param_3 + 0xc);
  *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)((long)param_3 + 0x14);
  *(undefined8 *)(param_1 + 0x1b) = uVar9;
  param_1[0x1f] = uVar1;
  uVar9 = param_3[4];
  uVar2 = param_3[5];
  uVar3 = param_3[7];
  *(undefined8 *)(param_1 + 0x24) = param_3[6];
  *(undefined8 *)(param_1 + 0x26) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  *(undefined8 *)(param_1 + 0x22) = uVar2;
  return;
}


