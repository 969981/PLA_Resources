/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec2eb8; name: FUN_02ec2eb8
 */


void FUN_02ec2eb8(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float __y;
  
  lVar6 = *(long *)(param_1 + 0x60);
  if (lVar6 == 0) goto LAB_02ec2f48;
  fVar8 = *(float *)(lVar6 + 0x24);
  uVar7 = *(undefined8 *)(lVar6 + 0x30);
  uVar1 = *(undefined4 *)(lVar6 + 0x28);
  iVar2 = *(int *)(lVar6 + 0x2c);
  uVar5 = *(undefined4 *)(lVar6 + 0x20);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar6 + 0x18);
  *(undefined4 *)(param_1 + 0xd0) = uVar5;
  *(float *)(param_1 + 0xd4) = fVar8;
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  *(int *)(param_1 + 0xdc) = iVar2;
  *(undefined8 *)(param_1 + 0xe0) = uVar7;
  if (iVar2 == 0) {
    __y = 6.2831855;
LAB_02ec2f24:
    fVar8 = fmodf(fVar8,__y);
    *(float *)(param_1 + 0xd4) = fVar8;
  }
  else if (iVar2 != 5) {
    __y = 1.0;
    goto LAB_02ec2f24;
  }
  if (*(char *)(param_1 + 0xe8) != '\0') {
    FUN_02ec0ed8((undefined8 *)(param_1 + 200),48000,param_1 + 0xb4);
    *(undefined1 *)(param_1 + 0xe8) = 0;
  }
LAB_02ec2f48:
  param_2[6] = *(undefined4 *)(param_1 + 0xa8);
  param_2[7] = *(undefined4 *)(param_1 + 0xac);
  param_2[8] = *(undefined4 *)(param_1 + 0xb0);
  param_2[9] = *(undefined4 *)(param_1 + 0xb4);
  param_2[10] = *(undefined4 *)(param_1 + 0xb8);
  param_2[0xb] = *(undefined4 *)(param_1 + 0xbc);
  param_2[0xc] = *(undefined4 *)(param_1 + 0xc0);
  uVar7 = *(undefined8 *)(param_1 + 200);
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  uVar4 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_2 + 0x14) = uVar4;
  *(undefined8 *)(param_2 + 0xe) = uVar7;
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  *param_2 = *(undefined4 *)(param_1 + 0x78);
  param_2[3] = *(undefined4 *)(param_1 + 0x70);
  param_2[2] = *(undefined4 *)(param_1 + 0x6c);
  param_2[1] = *(undefined4 *)(param_1 + 0x68);
  param_2[4] = *(undefined4 *)(param_1 + 0x80);
  param_2[5] = *(undefined4 *)(param_1 + 0x88);
  return;
}


