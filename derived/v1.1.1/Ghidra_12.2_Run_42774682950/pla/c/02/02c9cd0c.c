/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c9cd0c; name: FUN_02c9cd0c
 */


void FUN_02c9cd0c(long param_1,uint param_2,undefined8 *param_3)

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
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  uVar1 = *param_3;
  uVar6 = param_3[1];
  uVar12 = param_3[2];
  uVar2 = param_3[3];
  uVar7 = param_3[4];
  lVar11 = *(long *)(param_1 + 0x80) + (ulong)param_2 * 0x58;
  uVar3 = param_3[5];
  uVar8 = param_3[6];
  uVar4 = param_3[9];
  uVar9 = param_3[10];
  uVar5 = param_3[7];
  uVar10 = param_3[8];
  *(undefined1 *)(*(long *)(param_1 + 0x80) + (ulong)param_2 + 0x8c8) = 1;
  *(undefined8 *)(lVar11 + 0x8e0) = uVar1;
  *(undefined8 *)(lVar11 + 0x8f0) = uVar12;
  *(undefined8 *)(lVar11 + 0x8e8) = uVar6;
  *(undefined8 *)(lVar11 + 0x910) = uVar8;
  *(undefined8 *)(lVar11 + 0x908) = uVar3;
  *(undefined8 *)(lVar11 + 0x900) = uVar7;
  *(undefined8 *)(lVar11 + 0x8f8) = uVar2;
  *(undefined8 *)(lVar11 + 0x930) = uVar9;
  *(undefined8 *)(lVar11 + 0x928) = uVar4;
  *(undefined8 *)(lVar11 + 0x920) = uVar10;
  *(undefined8 *)(lVar11 + 0x918) = uVar5;
  *(undefined **)(lVar11 + 0x8e0) = PTR_LAB_04372fe0;
  return;
}


