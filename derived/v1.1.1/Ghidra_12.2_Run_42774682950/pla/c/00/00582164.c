/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00582164; name: FUN_00582164
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00582164(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  ulong uVar4;
  size_t sVar5;
  long lVar6;
  long *plVar7;
  byte *pbVar8;
  long lVar9;
  undefined1 auVar10 [16];
  long local_d0 [14];
  
  lVar6 = *(long *)(param_1 + 0x20);
  lVar9 = *(long *)(param_1 + 0x28);
  lVar1 = lVar9 - lVar6;
  if (lVar1 == 0) {
    FUN_00586a88((long *)(param_1 + 0x20),1);
    lVar9 = *(long *)(param_1 + 0x28);
  }
  else if (1 < (ulong)((lVar1 >> 4) * -0x5555555555555555)) {
    lVar9 = lVar6 + 0x30;
    *(long *)(param_1 + 0x28) = lVar9;
  }
  *(int *)(lVar9 + -0x30) = (int)*param_2;
  *(undefined2 *)(lVar9 + -8) = 0;
  plVar7 = (long *)(param_1 + 8);
  *(long *)(param_1 + 0x10) = *plVar7;
  if ((ulong)((*(long *)(param_1 + 0x18) - *plVar7 >> 4) * -0x5555555555555555) < 0xc) {
    lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x240);
    pvVar3 = *(void **)(param_1 + 8);
    sVar5 = *(long *)(param_1 + 0x10) - (long)pvVar3;
    if (0 < (long)sVar5) {
      memcpy((void *)(lVar1 - sVar5),pvVar3,sVar5);
      pvVar3 = (void *)*plVar7;
    }
    *(void **)(param_1 + 8) = (void *)(lVar1 - sVar5);
    *(long *)(param_1 + 0x10) = lVar1;
    *(long *)(param_1 + 0x18) = lVar1 + 0x240;
    if (pvVar3 != (void *)0x0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
  }
  local_d0[9] = _UNK_03a33ff0;
  local_d0[8] = _DAT_03a33fe8;
  local_d0[0xb] = _UNK_03a34000;
  local_d0[10] = _DAT_03a33ff8;
  local_d0[7] = _UNK_03a33fe0;
  local_d0[6] = _DAT_03a33fd8;
  local_d0[1] = _UNK_03a33fb0;
  local_d0[0] = _DAT_03a33fa8;
  local_d0[3] = _UNK_03a33fc0;
  local_d0[2] = _DAT_03a33fb8;
  lVar6 = -0x800000000000000;
  lVar1 = 8;
  local_d0[0xc] = DAT_03a34008;
  local_d0[5] = _UNK_03a33fd0;
  local_d0[4] = _DAT_03a33fc8;
  while( true ) {
    plVar2 = (long *)FUN_0058256c(plVar7,*(undefined8 *)(param_1 + 0x10));
    *plVar2 = lVar6;
    *(undefined1 *)(plVar2 + 1) = 0;
    auVar10 = FUN_00586060(0x7b2,1,1,0,lVar6 / 0x3c,lVar6 % 0x3c);
    lVar6 = auVar10._8_8_;
    auVar10 = FUN_00586060(auVar10._0_8_,(long)auVar10[8],(lVar6 << 0x30) >> 0x38,
                           (lVar6 << 0x28) >> 0x38,
                           (long)*(int *)(lVar9 + -0x30) / 0x3c + ((lVar6 << 0x20) >> 0x38),
                           (long)*(int *)(lVar9 + -0x30) % 0x3c + ((lVar6 << 0x18) >> 0x38));
    uVar4 = auVar10._8_8_;
    plVar2[2] = auVar10._0_8_;
    plVar2[3] = uVar4 & 0xffffffffff;
    auVar10 = FUN_00586060(auVar10._0_8_,(long)auVar10[8],(long)(uVar4 << 0x30) >> 0x38,
                           (long)(uVar4 << 0x28) >> 0x38,(long)(uVar4 << 0x20) >> 0x38,
                           ((long)(uVar4 << 0x18) >> 0x38) + -1);
    plVar2[4] = auVar10._0_8_;
    plVar2[5] = auVar10._8_8_ & 0xffffffffff;
    if (lVar1 == 0x68) break;
    lVar6 = *(long *)((long)local_d0 + lVar1);
    lVar1 = lVar1 + 8;
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_00580ad0(local_d0,param_2);
  pbVar8 = (byte *)(param_1 + 0x40);
  if ((*pbVar8 & 1) == 0) {
    pbVar8[0] = 0;
    pbVar8[1] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x50));
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
  }
  *(long *)(param_1 + 0x50) = local_d0[2];
  *(long *)(param_1 + 0x48) = local_d0[1];
  *(long *)pbVar8 = local_d0[0];
  FUN_002e6bd4(pbVar8,1,0);
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x70) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  auVar10 = FUN_00586060(0x7b2,1,1,0,0x222222222222222,7);
  lVar1 = auVar10._8_8_;
  auVar10 = FUN_00586060(auVar10._0_8_,(long)auVar10[8],(lVar1 << 0x30) >> 0x38,
                         (lVar1 << 0x28) >> 0x38,
                         (long)*(int *)(lVar9 + -0x30) / 0x3c + ((lVar1 << 0x20) >> 0x38),
                         (long)*(int *)(lVar9 + -0x30) % 0x3c + ((lVar1 << 0x18) >> 0x38));
  *(long *)(lVar9 + -0x28) = auVar10._0_8_;
  *(ulong *)(lVar9 + -0x20) = auVar10._8_8_ & 0xffffffffff;
  auVar10 = FUN_00586060(0x7b2,1,1,0,0xfdddddddddddddde,0xfffffffffffffff8);
  lVar1 = auVar10._8_8_;
  auVar10 = FUN_00586060(auVar10._0_8_,(long)auVar10[8],(lVar1 << 0x30) >> 0x38,
                         (lVar1 << 0x28) >> 0x38,
                         (long)*(int *)(lVar9 + -0x30) / 0x3c + ((lVar1 << 0x20) >> 0x38),
                         (long)*(int *)(lVar9 + -0x30) % 0x3c + ((lVar1 << 0x18) >> 0x38));
  *(long *)(lVar9 + -0x18) = auVar10._0_8_;
  *(ulong *)(lVar9 + -0x10) = auVar10._8_8_ & 0xffffffffff;
  lVar9 = *(long *)(param_1 + 0x10);
  pvVar3 = *(void **)(param_1 + 8);
  lVar1 = lVar9 - (long)pvVar3;
  if ((ulong)((lVar1 >> 4) * -0x5555555555555555) <
      (ulong)((*(long *)(param_1 + 0x18) - (long)pvVar3 >> 4) * -0x5555555555555555)) {
    if (lVar1 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_002e2e80(PTR_FUN_04373078,lVar1);
      pvVar3 = *(void **)(param_1 + 8);
      lVar9 = *(long *)(param_1 + 0x10);
    }
    lVar6 = lVar6 + (lVar1 >> 4) * 0x10;
    sVar5 = lVar9 - (long)pvVar3;
    if (0 < (long)sVar5) {
      memcpy((void *)(lVar6 - sVar5),pvVar3,sVar5);
      pvVar3 = (void *)*plVar7;
    }
    *(void **)(param_1 + 8) = (void *)(lVar6 - sVar5);
    *(long *)(param_1 + 0x10) = lVar6;
    *(long *)(param_1 + 0x18) = lVar6;
    if (pvVar3 != (void *)0x0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
  }
  return 1;
}


