/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087dddc; name: FUN_0087dddc
 */


void FUN_0087dddc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  undefined4 uVar6;
  float fVar7;
  
  lVar1 = param_1 + 4;
  (**(code **)PTR_DAT_04378f48)();
  uVar6 = FUN_0087c06c(param_3[2]);
  (**(code **)PTR_DAT_04378f50)(param_1,uVar6);
  uVar6 = FUN_0087bfe8(param_3[1]);
  (**(code **)PTR_DAT_04378f58)(param_1,uVar6);
  uVar6 = FUN_0087bff8(*param_3);
  (**(code **)PTR_DAT_04378f60)(param_1,uVar6);
  iVar3 = *(int *)(param_3 + 0xc);
  *(float *)(param_1 + 0x20) = (float)iVar3;
  fVar7 = *(float *)(param_3 + 0x10);
  *(float *)(param_1 + 0x24) = fVar7;
  bVar5 = false;
  if ((*(float *)(param_3 + 8) == 0.0) && (bVar5 = false, !NAN(fVar7))) {
    bVar5 = fVar7 == 0.0;
  }
  *(float *)(param_1 + 0x28) = *(float *)(param_3 + 8);
  uVar6 = 7;
  if (bVar5 && iVar3 == 0) {
    uVar6 = 0;
  }
  (**(code **)PTR_DAT_04378f68)(param_1,uVar6);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  (**(code **)PTR_DAT_04378e90)(lVar1);
  (**(code **)PTR_DAT_04378e98)(lVar1,(byte)param_3[4] >> 1 & 1);
  bVar4 = param_3[0x18];
  if (bVar4 < 2) {
    bVar4 = 0;
  }
  (**(code **)PTR_DAT_04378ea0)(lVar1,bVar4);
  (**(code **)PTR_DAT_04378ea8)(lVar1,param_3[0x1a] & 1);
  bVar4 = *(byte *)(param_1 + 0x2d) & 0xfe;
  if ((*(ushort *)(param_3 + 4) & 2) != 0) {
    bVar4 = *(byte *)(param_1 + 0x2d) | 1;
  }
  *(byte *)(param_1 + 0x2d) = bVar4;
  bVar2 = bVar4 | 2;
  if ((*(ushort *)(param_3 + 4) & 4) != 0) {
    bVar2 = bVar4 & 0xfd;
  }
  *(byte *)(param_1 + 0x2d) = bVar2;
  bVar4 = bVar2 | 4;
  if ((*(ushort *)(param_3 + 4) & 1) != 0) {
    bVar4 = bVar2 & 0xfb;
  }
  *(byte *)(param_1 + 0x2d) = bVar4;
  bVar2 = bVar4 | 8;
  if (param_3[6] != '\x01') {
    bVar2 = bVar4 & 0xf7;
  }
  *(byte *)(param_1 + 0x2d) = bVar2;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return;
}


