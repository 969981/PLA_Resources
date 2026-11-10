/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03046fdc; name: FUN_03046fdc
 */


void FUN_03046fdc(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  undefined *puVar6;
  long lVar7;
  undefined2 *puVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  undefined2 *puVar14;
  uint uVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  short *psVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  iVar11 = (param_2 + 1) * param_2;
  lVar9 = tpidr_el0;
  iVar2 = iVar11 * 2;
  if (iVar11 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(lVar9 + 0x38d490);
    if (lVar13 == 0) {
      lVar13 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar13;
    }
    lVar7 = *(long *)(lVar13 + 8);
    uVar10 = (ulong)(int)(iVar2 + 0x7fU & 0xffffff80);
    if (uVar10 <= *(ulong *)(lVar7 + 0x10)) {
      lVar13 = *(long *)(lVar7 + 0x18);
      uVar10 = lVar13 + uVar10;
      if (uVar10 <= *(ulong *)(lVar7 + 0x20)) {
        *(ulong *)(lVar7 + 0x18) = uVar10;
        goto joined_r0x03047308;
      }
    }
    lVar13 = FUN_032ce670();
  }
joined_r0x03047308:
  if ((int)param_2 < 1) {
    uVar22 = 0;
  }
  else {
    iVar11 = 0;
    uVar15 = 0;
    uVar10 = 0;
    uVar24 = param_2;
    do {
      uVar22 = param_2 - uVar15 & 3;
      iVar23 = (int)uVar10;
      if (~uVar15 + param_2 < 3) {
        uVar19 = 0;
        uVar20 = (ulong)iVar23;
        uVar1 = uVar15;
      }
      else {
        uVar19 = 0;
        psVar21 = (short *)(lVar13 + 4 + (long)iVar23 * 2);
        do {
          uVar5 = (ushort)uVar19;
          sVar4 = (short)iVar11 + uVar5;
          psVar21[-2] = uVar5 & 0xfc | sVar4 * 0x100;
          psVar21[1] = (uVar5 + 3 & 0xff | sVar4 * 0x100) + 0x300;
          uVar19 = uVar19 + 4;
          psVar21[-1] = (uVar5 + 1 & 0xfd | sVar4 * 0x100) + 0x100;
          *psVar21 = (uVar5 + 2 & 0xfe | sVar4 * 0x100) + 0x200;
          psVar21 = psVar21 + 4;
        } while (uVar24 - (uVar24 & 3) != (int)uVar19);
        uVar20 = uVar19 + (long)iVar23;
        uVar10 = uVar20;
        uVar1 = iVar11 + (int)uVar19;
      }
      for (; uVar22 != 0; uVar22 = uVar22 - 1) {
        uVar3 = (int)uVar19 + 1;
        uVar10 = uVar20 + 1;
        *(ushort *)(lVar13 + uVar20 * 2) = (ushort)uVar19 & 0xff | (ushort)(uVar1 << 8);
        uVar19 = (ulong)uVar3;
        uVar20 = uVar10;
        uVar1 = uVar3 + uVar15;
      }
      uVar22 = (uint)uVar10;
      uVar15 = uVar15 + 1;
      uVar24 = uVar24 - 1;
      iVar11 = iVar11 + 1;
    } while (uVar15 != param_2);
    uVar24 = *(uint *)(param_1 + 0x14);
    uVar15 = uVar24 & 0x3fffffff;
    if ((int)uVar15 < (int)uVar22) {
      puVar16 = *(undefined2 **)(param_1 + 8);
      uVar1 = *(uint *)(param_1 + 0x10);
      uVar19 = (ulong)uVar1;
      if (0x3fffffff < (int)uVar22) {
        FUN_032bd0a8(uVar10 & 0xffffffff);
        uVar24 = *(uint *)(param_1 + 0x14);
        uVar15 = uVar24 & 0x3fffffff;
      }
      puVar6 = PTR_PTR_0434a080;
      uVar3 = (uVar24 & 0x3fffffff) << 1;
      uVar18 = uVar3;
      if (0x3ffffffe < uVar3) {
        uVar18 = 0x3fffffff;
      }
      local_7c = uVar22;
      if ((int)uVar22 <= (int)uVar18) {
        local_7c = uVar18;
      }
      local_88 = (ulong)(local_7c << 1);
      if (((int)local_7c < (int)uVar15) || (0x3fffffff < (int)local_7c)) {
        local_78 = 1;
        puStack_68 = &local_7c;
        local_70 = &DAT_0411b3b8;
        FUN_03320b50(0x65816502,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x5a,"Invalid requestedCapacity {}",&local_78);
        uVar24 = *(uint *)(param_1 + 0x14);
        uVar3 = (uVar24 & 0x3fffffff) << 1;
      }
      puVar8 = (undefined2 *)(**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_88,&local_88);
      if (0 < (int)uVar1) {
        puVar14 = puVar8;
        puVar17 = puVar16;
        do {
          uVar19 = uVar19 - 1;
          *puVar14 = *puVar17;
          puVar14 = puVar14 + 1;
          puVar17 = puVar17 + 1;
        } while (uVar19 != 0);
      }
      if (-1 < (int)uVar24) {
        (**(code **)(*(long *)puVar6 + 0x18))(puVar6,puVar16,uVar3);
      }
      if (local_88 < 0x7ffffffe) {
        uVar12 = (undefined4)(local_88 >> 1);
      }
      else {
        uVar12 = 0x3fffffff;
      }
      *(undefined4 *)(param_1 + 0x14) = uVar12;
      *(undefined2 **)(param_1 + 8) = puVar8;
    }
  }
  if (*(uint *)(param_1 + 0x10) != uVar22) {
    *(uint *)(param_1 + 0x10) = uVar22;
  }
  FUN_03046c78(param_2,uVar22,lVar13,*(undefined8 *)(param_1 + 8));
  lVar7 = *(long *)(lVar9 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar7;
  }
  lVar9 = *(long *)(lVar7 + 8);
  uVar10 = (ulong)(int)(iVar2 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar9 + 0x10) < uVar10) || (*(long *)(lVar9 + 0x18) != lVar13 + uVar10)) ||
     (*(long *)(lVar9 + 0x28) == lVar13)) {
    FUN_032cedf0(lVar9,lVar13);
  }
  else {
    *(long *)(lVar9 + 0x18) = lVar13;
  }
  return;
}


