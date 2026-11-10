/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6bb3c; name: FUN_02f6bb3c
 */


/* WARNING: Removing unreachable block (ram,0x02f6bcfc) */

void FUN_02f6bb3c(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong local_80 [2];
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  uVar13 = *(uint *)(param_1 + 0x28);
  uVar12 = *(uint *)(param_1 + 0x2c);
  uVar2 = uVar12 & 0x3fffffff;
  lVar11 = *(long *)(param_1 + 0x20);
  uVar1 = uVar13 + 1;
  lVar4 = lVar11;
  if ((int)uVar13 < (int)uVar2) goto LAB_02f6bb7c;
  if (0x3ffffffe < (int)uVar13) {
    FUN_032bd0a8(uVar1);
    uVar12 = *(uint *)(param_1 + 0x2c);
    uVar2 = uVar12 & 0x3fffffff;
  }
  puVar3 = PTR_PTR_0434a080;
  uVar5 = (uVar12 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar5) {
    uVar5 = 0x3fffffff;
  }
  local_54 = uVar1;
  if ((int)uVar1 <= (int)uVar5) {
    local_54 = uVar5;
  }
  local_80[0] = (ulong)local_54 << 7;
  if (((int)local_54 < (int)uVar2) || (0x3fffffff < (int)local_54)) {
    local_80[1] = 1;
    puStack_68 = &local_54;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_80 + 1);
    uVar12 = *(uint *)(param_1 + 0x2c);
    uVar2 = uVar12 & 0x3fffffff;
  }
  lVar4 = (**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_80[0],local_80);
  if (0 < (int)uVar13) {
    if (uVar13 == 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      puVar9 = (undefined8 *)(lVar4 + 0x80);
      puVar10 = (undefined8 *)(lVar11 + 0x80);
      do {
        uVar7 = puVar10[-1];
        lVar8 = lVar8 + 2;
        puVar9[-3] = puVar10[-3];
        puVar9[-1] = uVar7;
        uVar7 = puVar10[-5];
        puVar9[-7] = puVar10[-7];
        puVar9[-5] = uVar7;
        uVar7 = puVar10[-9];
        puVar9[-0xb] = puVar10[-0xb];
        puVar9[-9] = uVar7;
        uVar7 = puVar10[-0xd];
        puVar9[-0xf] = puVar10[-0xf];
        puVar9[-0xd] = uVar7;
        uVar7 = puVar10[-0x10];
        puVar9[-0xe] = puVar10[-0xe];
        puVar9[-0x10] = uVar7;
        uVar7 = puVar10[-0xc];
        puVar9[-10] = puVar10[-10];
        puVar9[-0xc] = uVar7;
        uVar7 = puVar10[-8];
        puVar9[-6] = puVar10[-6];
        puVar9[-8] = uVar7;
        uVar7 = puVar10[-4];
        puVar9[-2] = puVar10[-2];
        puVar9[-4] = uVar7;
        uVar7 = puVar10[0xf];
        puVar9[0xd] = puVar10[0xd];
        puVar9[0xf] = uVar7;
        uVar7 = puVar10[0xb];
        puVar9[9] = puVar10[9];
        puVar9[0xb] = uVar7;
        uVar7 = puVar10[7];
        puVar9[5] = puVar10[5];
        puVar9[7] = uVar7;
        uVar7 = puVar10[3];
        puVar9[1] = puVar10[1];
        puVar9[3] = uVar7;
        uVar7 = *puVar10;
        puVar9[2] = puVar10[2];
        *puVar9 = uVar7;
        uVar7 = puVar10[4];
        puVar9[6] = puVar10[6];
        puVar9[4] = uVar7;
        uVar7 = puVar10[8];
        puVar9[10] = puVar10[10];
        puVar9[8] = uVar7;
        uVar7 = puVar10[0xc];
        puVar9[0xe] = puVar10[0xe];
        puVar9[0xc] = uVar7;
        puVar9 = puVar9 + 0x20;
        puVar10 = puVar10 + 0x20;
      } while ((ulong)uVar13 - ((ulong)uVar13 & 1) != lVar8);
      if ((uVar13 & 1) == 0) goto LAB_02f6beb4;
    }
    puVar9 = (undefined8 *)(lVar4 + lVar8 * 0x80);
    puVar10 = (undefined8 *)(lVar11 + lVar8 * 0x80);
    uVar7 = puVar10[0xf];
    puVar9[0xd] = puVar10[0xd];
    puVar9[0xf] = uVar7;
    uVar7 = puVar10[0xb];
    puVar9[9] = puVar10[9];
    puVar9[0xb] = uVar7;
    uVar7 = puVar10[7];
    puVar9[5] = puVar10[5];
    puVar9[7] = uVar7;
    uVar7 = puVar10[3];
    puVar9[1] = puVar10[1];
    puVar9[3] = uVar7;
    uVar7 = *puVar10;
    puVar9[2] = puVar10[2];
    *puVar9 = uVar7;
    uVar7 = puVar10[4];
    puVar9[6] = puVar10[6];
    puVar9[4] = uVar7;
    uVar7 = puVar10[8];
    puVar9[10] = puVar10[10];
    puVar9[8] = uVar7;
    uVar7 = puVar10[0xc];
    puVar9[0xe] = puVar10[0xe];
    puVar9[0xc] = uVar7;
  }
LAB_02f6beb4:
  if (-1 < (int)uVar12) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,lVar11,(ulong)uVar2 << 7);
  }
  if (local_80[0] < 0x1fffffff80) {
    uVar6 = (undefined4)(local_80[0] >> 7);
  }
  else {
    uVar6 = 0x3fffffff;
  }
  uVar13 = *(uint *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(long *)(param_1 + 0x20) = lVar4;
LAB_02f6bb7c:
  uVar7 = param_2[0xf];
  puVar9 = (undefined8 *)(lVar4 + (long)(int)uVar13 * 0x80);
  puVar9[0xd] = param_2[0xd];
  puVar9[0xf] = uVar7;
  uVar7 = param_2[0xb];
  puVar9[9] = param_2[9];
  puVar9[0xb] = uVar7;
  uVar7 = param_2[7];
  puVar9[5] = param_2[5];
  puVar9[7] = uVar7;
  uVar7 = param_2[3];
  puVar9[1] = param_2[1];
  puVar9[3] = uVar7;
  uVar7 = *param_2;
  puVar9[2] = param_2[2];
  *puVar9 = uVar7;
  uVar7 = param_2[4];
  puVar9[6] = param_2[6];
  puVar9[4] = uVar7;
  uVar7 = param_2[8];
  puVar9[10] = param_2[10];
  puVar9[8] = uVar7;
  uVar7 = param_2[0xc];
  puVar9[0xe] = param_2[0xe];
  puVar9[0xc] = uVar7;
  *(uint *)(param_1 + 0x28) = uVar1;
  *(uint *)(param_1 + 0xc) = uVar1;
  return;
}


