/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0334bfc0; name: FUN_0334bfc0
 */


/* WARNING: Removing unreachable block (ram,0x0334c188) */

void FUN_0334bfc0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong local_80;
  undefined4 local_78;
  uint local_74;
  undefined8 local_70;
  undefined *local_68;
  uint *local_60;
  undefined4 *puStack_58;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  puVar4 = PTR_PTR_0434a080;
  if (param_2 == param_1) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x2c) & 0x3fffffff;
  uVar2 = *(uint *)(param_2 + 0x28);
  puVar12 = *(undefined8 **)(param_2 + 0x20);
  puVar11 = *(undefined8 **)(param_1 + 0x20);
  puVar5 = puVar11;
  if ((int)uVar1 < (int)uVar2) {
    uVar3 = *(uint *)(param_1 + 0x28);
    local_80 = (long)(int)uVar2 << 4;
    local_78 = 0x10;
    local_74 = uVar2;
    if ((int)uVar2 < 0) {
      local_70 = 2;
      local_68 = &DAT_0411b3a0;
      local_60 = &local_74;
      puStack_58 = &local_78;
      FUN_03320b50(0x1bd2a77e,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x53,"Array size overflow {}*{}",&local_70);
      if ((int)uVar1 <= (int)local_74) goto LAB_0334c05c;
LAB_0334c068:
      local_70 = 1;
      local_60 = &local_74;
      local_68 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_70);
    }
    else {
      if ((int)uVar2 < (int)uVar1) goto LAB_0334c068;
LAB_0334c05c:
      if (0x3fffffff < (int)local_74) goto LAB_0334c068;
    }
    uVar1 = *(uint *)(param_1 + 0x2c);
    puVar5 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_80,&local_80);
    if (0 < (int)uVar3) {
      puVar5[1] = puVar11[1];
      *puVar5 = *puVar11;
      if (uVar3 != 1) {
        puVar5[3] = puVar11[3];
        puVar5[2] = puVar11[2];
        if (uVar3 != 2) {
          puVar5[5] = puVar11[5];
          puVar5[4] = puVar11[4];
          if (uVar3 != 3) {
            lVar10 = (ulong)uVar3 - 3;
            puVar8 = puVar11 + 6;
            puVar9 = puVar5 + 6;
            do {
              puVar9[1] = puVar8[1];
              lVar10 = lVar10 + -1;
              *puVar9 = *puVar8;
              puVar8 = puVar8 + 2;
              puVar9 = puVar9 + 2;
            } while (lVar10 != 0);
          }
        }
      }
    }
    if (-1 < (int)uVar1) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4,puVar11,((ulong)uVar1 & 0x3fffffff) << 4);
    }
    if (local_80 < 0x3fffffff0) {
      uVar6 = (undefined4)(local_80 >> 4);
    }
    else {
      uVar6 = 0x3fffffff;
    }
    *(undefined4 *)(param_1 + 0x2c) = uVar6;
    *(undefined8 **)(param_1 + 0x20) = puVar5;
  }
  uVar3 = *(uint *)(param_1 + 0x28);
  uVar1 = uVar3;
  if ((int)uVar2 <= (int)uVar3) {
    uVar1 = uVar2;
  }
  if ((puVar5 == puVar12) || ((int)uVar1 < 1)) goto LAB_0334c1ec;
  if (uVar1 == 1) {
    lVar10 = 0;
LAB_0334c1cc:
    (puVar5 + lVar10 * 2)[1] = (puVar12 + lVar10 * 2)[1];
    puVar5[lVar10 * 2] = puVar12[lVar10 * 2];
  }
  else {
    lVar10 = 0;
    puVar11 = puVar12 + 2;
    puVar8 = puVar5 + 2;
    do {
      puVar8[-1] = puVar11[-1];
      puVar8[-2] = puVar11[-2];
      puVar8[1] = puVar11[1];
      lVar10 = lVar10 + 2;
      *puVar8 = *puVar11;
      puVar11 = puVar11 + 4;
      puVar8 = puVar8 + 4;
    } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar10);
    if ((uVar1 & 1) != 0) goto LAB_0334c1cc;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x20);
LAB_0334c1ec:
  if ((int)uVar3 < (int)uVar2) {
    puVar12 = puVar12 + (long)(int)uVar1 * 2;
    puVar5 = puVar5 + (long)(int)uVar1 * 2;
    uVar3 = uVar2 - uVar1 & 1;
    if (uVar2 != uVar1 + 1) {
      iVar7 = (uVar2 - uVar1) - uVar3;
      puVar11 = puVar5;
      puVar8 = puVar12;
      do {
        puVar11[1] = puVar8[1];
        *puVar11 = *puVar8;
        puVar11[3] = puVar8[3];
        puVar12 = puVar8 + 4;
        puVar5 = puVar11 + 4;
        iVar7 = iVar7 + -2;
        puVar11[2] = puVar8[2];
        puVar11 = puVar5;
        puVar8 = puVar12;
      } while (iVar7 != 0);
    }
    if (uVar3 != 0) {
      puVar5[1] = puVar12[1];
      *puVar5 = *puVar12;
    }
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  return;
}


