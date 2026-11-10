/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03190938; name: FUN_03190938
 */


void FUN_03190938(long param_1,undefined4 param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  ushort *puVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  void *__src;
  void *__src_00;
  undefined1 uVar6;
  ushort local_c8 [2];
  ushort local_c4 [2];
  undefined4 local_c0 [2];
  int local_b8 [2];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  int local_58;
  ushort local_54 [2];
  
  iVar1 = *(int *)(param_1 + 0xf8) + *(int *)(param_1 + 0x40);
  FUN_031865f0(param_3,auStack_b0,auStack_a0,auStack_90,auStack_80);
  FUN_0318f32c(param_1,auStack_b0,4);
  if (*(int *)(param_3 + 0x38) == *(int *)(param_3 + 0x3c)) {
    local_58 = *(int *)(param_3 + 0x3c);
    FUN_03190328(param_1,&local_58,param_2,param_4);
  }
  else {
    local_b8[0] = *(int *)(param_3 + 0x38);
    FUN_0318fec4(param_1,local_b8,param_2,param_4);
    local_c0[0] = *(undefined4 *)(param_3 + 0x3c);
    FUN_0318fec4(param_1,local_c0,param_2,param_4 + 4);
  }
  local_54[0] = *(ushort *)(param_3 + 0x80);
  fVar3 = (float)((uint)*(ushort *)(param_3 + 0x80) << 0x10);
  fVar4 = (float)((uint)*(ushort *)(param_3 + 0x82) << 0x10);
  local_c4[0] = *(ushort *)(param_3 + 0x82);
  __src_00 = *(void **)(param_3 + 0x40);
  __src = *(void **)(param_3 + 0x60);
  if ((fVar3 < 0.0) || (fVar4 < 0.0)) {
    local_c8[0] = FUN_03186670(param_3);
  }
  piVar5 = (int *)*param_4;
  piVar5[4] = 0x10;
  *piVar5 = iVar1;
  piVar5[1] = iVar1 + 1;
  piVar5[2] = -1;
  piVar5[3] = -1;
  uVar6 = 0x30;
  if ((*(byte *)(param_3 + 0x84) & 1) != 0) {
    uVar6 = 0x10;
  }
  *(undefined1 *)(piVar5 + 4) = uVar6;
  puVar2 = local_c8;
  if (0.0 <= fVar3) {
    puVar2 = local_54;
  }
  *(ushort *)((long)piVar5 + 0x12) = *puVar2;
  memcpy((void *)param_4[1],__src_00,((param_4[2] - (long)param_4[1]) * 0x40000000 >> 0x20) << 2);
  piVar5 = (int *)param_4[4];
  *piVar5 = iVar1 + 2;
  piVar5[1] = iVar1 + 3;
  piVar5[2] = -1;
  piVar5[3] = -1;
  piVar5[4] = 0x10;
  uVar6 = 0x30;
  if ((*(byte *)(param_3 + 0x84) & 2) != 0) {
    uVar6 = 0x10;
  }
  *(undefined1 *)(piVar5 + 4) = uVar6;
  puVar2 = local_c8;
  if (0.0 <= fVar4) {
    puVar2 = local_c4;
  }
  *(ushort *)((long)piVar5 + 0x12) = *puVar2;
  memcpy((void *)param_4[5],__src,((param_4[6] - (long)param_4[5]) * 0x40000000 >> 0x20) << 2);
  return;
}


