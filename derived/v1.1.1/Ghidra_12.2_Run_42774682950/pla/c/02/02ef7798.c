/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef7798; name: FUN_02ef7798
 */


undefined4 FUN_02ef7798(long param_1,long *param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar6 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if ((param_3 & 1) != 0) {
    uVar6 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x28);
  }
  if ((param_4 & 1) != 0) {
    uVar6 = *(int *)(param_1 + 0x38) + uVar6;
  }
  if ((param_3 & 1) != 0) {
    uVar6 = *(int *)(param_1 + 0x58) + uVar6;
  }
  if (*(uint *)((long)param_2 + 0xc) < uVar6) {
    uVar2 = *(uint *)((long)param_2 + 0xc) + uVar6;
    lVar8 = (*DAT_0442d148)(0,*param_2,(ulong)uVar2 * 0x68);
    if (lVar8 == 0) {
      return 0x501502f9;
    }
    *param_2 = lVar8;
    *(uint *)((long)param_2 + 0xc) = uVar2;
    param_3 = param_3 & 0xffffffff;
    param_4 = param_4 & 0xffffffff;
  }
  else if (uVar6 == 0) goto LAB_02ef77d0;
  lVar8 = *param_2;
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x34) = 0x3f8000003f800000;
    *(undefined8 *)(lVar8 + 0x2c) = 0x3f80000000000000;
    *(undefined8 *)(lVar8 + 0x24) = 0;
    *(undefined8 *)(lVar8 + 0x3c) = 0;
    *(undefined8 *)(lVar8 + 0x44) = 0;
    *(undefined4 *)(lVar8 + 0x4c) = 0xffffffff;
    *(undefined8 *)(lVar8 + 0x60) = 0;
    *(undefined8 *)(lVar8 + 0x50) = 0;
    *(undefined8 *)(lVar8 + 0x58) = 0x3f8000003f800000;
  }
  if (uVar6 != 1) {
    lVar8 = 0xcc;
    lVar9 = (ulong)uVar6 - 1;
    do {
      lVar3 = *param_2 + lVar8;
      lVar9 = lVar9 + -1;
      lVar8 = lVar8 + 0x68;
      *(undefined8 *)(lVar3 + -0x40) = 0;
      *(undefined8 *)(lVar3 + -0x38) = 0x3f80000000000000;
      *(undefined8 *)(lVar3 + -0x30) = 0x3f8000003f800000;
      *(undefined8 *)(lVar3 + -0x28) = 0;
      *(undefined8 *)(lVar3 + -0x20) = 0;
      *(undefined4 *)(lVar3 + -0x18) = 0xffffffff;
      *(undefined8 *)(lVar3 + -0x14) = 0;
      *(undefined8 *)(lVar3 + -0xc) = 0x3f8000003f800000;
      *(undefined8 *)(lVar3 + -4) = 0;
    } while (lVar9 != 0);
  }
LAB_02ef77d0:
  *(uint *)(param_2 + 1) = uVar6;
  puVar7 = (undefined8 *)*param_2;
  if ((param_3 & 1) == 0) {
    uVar13 = 0x501502f9;
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar13 = 0x501502f9;
    }
    else {
      uVar13 = 0x501502f9;
      puVar10 = *(undefined8 **)(param_1 + 0x20);
      do {
        uVar5 = *puVar10;
        uVar11 = puVar10[2];
        uVar12 = *(undefined4 *)((long)puVar10 + 0x24);
        puVar7[1] = puVar10[1];
        puVar7[2] = uVar11;
        *puVar7 = uVar5;
        uVar5 = puVar10[3];
        uVar11 = puVar10[4];
        uVar4 = puVar10[6];
        uVar13 = NEON_fminnm(uVar12,uVar13);
        puVar7[5] = puVar10[5];
        puVar7[6] = uVar4;
        puVar7[3] = uVar5;
        puVar7[4] = uVar11;
        uVar5 = puVar10[7];
        uVar11 = puVar10[8];
        puVar1 = puVar10 + 9;
        uVar4 = puVar10[10];
        puVar10 = puVar10 + 0xd;
        puVar7[9] = *puVar1;
        puVar7[10] = uVar4;
        puVar7[7] = uVar5;
        puVar7[8] = uVar11;
        puVar7 = puVar7 + 0xd;
      } while (puVar10 !=
               (undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 0x68));
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      puVar10 = *(undefined8 **)(param_1 + 0x40);
      do {
        uVar5 = *puVar10;
        uVar11 = puVar10[2];
        uVar12 = *(undefined4 *)((long)puVar10 + 0x24);
        puVar7[1] = puVar10[1];
        puVar7[2] = uVar11;
        *puVar7 = uVar5;
        uVar5 = puVar10[3];
        uVar11 = puVar10[4];
        uVar4 = puVar10[6];
        uVar13 = NEON_fminnm(uVar12,uVar13);
        puVar7[5] = puVar10[5];
        puVar7[6] = uVar4;
        puVar7[3] = uVar5;
        puVar7[4] = uVar11;
        uVar5 = puVar10[7];
        uVar11 = puVar10[8];
        puVar1 = puVar10 + 9;
        uVar4 = puVar10[10];
        puVar10 = puVar10 + 0xd;
        puVar7[9] = *puVar1;
        puVar7[10] = uVar4;
        puVar7[7] = uVar5;
        puVar7[8] = uVar11;
        puVar7 = puVar7 + 0xd;
      } while (puVar10 !=
               (undefined8 *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(param_1 + 0x48) * 0x68));
    }
  }
  if (((param_4 & 1) != 0) && (*(int *)(param_1 + 0x38) != 0)) {
    puVar10 = *(undefined8 **)(param_1 + 0x30);
    do {
      uVar5 = *puVar10;
      uVar11 = puVar10[2];
      uVar12 = *(undefined4 *)((long)puVar10 + 0x24);
      puVar7[1] = puVar10[1];
      puVar7[2] = uVar11;
      *puVar7 = uVar5;
      uVar5 = puVar10[3];
      uVar11 = puVar10[4];
      uVar4 = puVar10[6];
      uVar13 = NEON_fminnm(uVar12,uVar13);
      puVar7[5] = puVar10[5];
      puVar7[6] = uVar4;
      puVar7[3] = uVar5;
      puVar7[4] = uVar11;
      uVar5 = puVar10[7];
      uVar11 = puVar10[8];
      puVar1 = puVar10 + 9;
      uVar4 = puVar10[10];
      puVar10 = puVar10 + 0xd;
      puVar7[9] = *puVar1;
      puVar7[10] = uVar4;
      puVar7[7] = uVar5;
      puVar7[8] = uVar11;
      puVar7 = puVar7 + 0xd;
    } while (puVar10 !=
             (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 0x68));
  }
  if ((param_3 & 1) == 0) {
    local_30 = 0;
    uStack_28 = 0;
    if (*(int *)(*(long *)(param_1 + 8) + 0x40) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = **(undefined8 **)(*(long *)(param_1 + 8) + 0x38);
    }
    FUN_02ef0df0(uVar5,param_2,auStack_38);
  }
  else if (*(int *)(param_1 + 0x58) != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x50);
    do {
      uVar5 = *puVar10;
      uVar11 = puVar10[2];
      puVar7[1] = puVar10[1];
      puVar7[2] = uVar11;
      *puVar7 = uVar5;
      uVar5 = puVar10[3];
      uVar11 = puVar10[4];
      uVar4 = puVar10[6];
      puVar7[5] = puVar10[5];
      puVar7[6] = uVar4;
      puVar7[3] = uVar5;
      puVar7[4] = uVar11;
      uVar5 = puVar10[7];
      uVar11 = puVar10[8];
      puVar1 = puVar10 + 9;
      uVar4 = puVar10[10];
      puVar10 = puVar10 + 0xd;
      puVar7[9] = *puVar1;
      puVar7[10] = uVar4;
      puVar7[7] = uVar5;
      puVar7[8] = uVar11;
      puVar7 = puVar7 + 0xd;
    } while (puVar10 !=
             (undefined8 *)(*(long *)(param_1 + 0x50) + (ulong)*(uint *)(param_1 + 0x58) * 0x68));
  }
  return uVar13;
}


