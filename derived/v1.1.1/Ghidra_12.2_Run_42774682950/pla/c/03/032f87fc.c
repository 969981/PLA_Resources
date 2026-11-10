/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f87fc; name: FUN_032f87fc
 */


void FUN_032f87fc(undefined1 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  uint *puVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  ulong local_78;
  uint local_6c;
  undefined8 local_68;
  undefined *local_60;
  uint *puStack_58;
  
  puVar5 = PTR_PTR_0434a080;
  uVar22 = *(uint *)(param_1 + 0x14);
  uVar24 = uVar22 & 0x3fffffff;
  uVar3 = *(uint *)(param_2 + 1);
  if ((int)uVar24 < (int)uVar3) {
    puVar17 = *(undefined8 **)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 0x10);
    uVar21 = (ulong)uVar4;
    if (0x3fffffff < (int)uVar3) {
      FUN_032bd0a8(uVar3);
      uVar22 = *(uint *)(param_1 + 0x14);
      uVar24 = uVar22 & 0x3fffffff;
    }
    uVar9 = (uVar22 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
    local_6c = uVar3;
    if ((int)uVar3 <= (int)uVar9) {
      local_6c = uVar9;
    }
    local_78 = (ulong)local_6c * 0x38;
    if (((int)local_6c < (int)uVar24) || (0x3fffffff < (int)local_6c)) {
      local_68 = 1;
      puStack_58 = &local_6c;
      local_60 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_68);
      uVar22 = *(uint *)(param_1 + 0x14);
      uVar24 = uVar22 & 0x3fffffff;
    }
    puVar8 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_78,&local_78);
    if (0 < (int)uVar4) {
      puVar12 = puVar8;
      puVar14 = puVar17;
      do {
        uVar19 = *puVar14;
        uVar21 = uVar21 - 1;
        uVar15 = puVar14[2];
        puVar12[1] = puVar14[1];
        puVar12[2] = uVar15;
        *puVar12 = uVar19;
        uVar19 = puVar14[3];
        uVar15 = puVar14[4];
        puVar1 = puVar14 + 5;
        uVar2 = puVar14[6];
        puVar14 = puVar14 + 7;
        puVar12[5] = *puVar1;
        puVar12[6] = uVar2;
        puVar12[3] = uVar19;
        puVar12[4] = uVar15;
        puVar12 = puVar12 + 7;
      } while (uVar21 != 0);
    }
    if (-1 < (int)uVar22) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,puVar17,(ulong)uVar24 * 0x38);
    }
    if (local_78 < 0xdffffffc8) {
      uVar10 = (undefined4)(local_78 / 0x38);
    }
    else {
      uVar10 = 0x3fffffff;
    }
    *(undefined4 *)(param_1 + 0x14) = uVar10;
    *(undefined8 **)(param_1 + 8) = puVar8;
  }
  if (*(uint *)(param_1 + 0x10) != uVar3) {
    *(uint *)(param_1 + 0x10) = uVar3;
  }
  iVar7 = (int)param_2[1];
  if (iVar7 != 0) {
    plVar18 = (long *)*param_2;
    iVar6 = (**(code **)(*plVar18 + 0x20))(plVar18);
    uVar24 = iVar6 + 0xfU & 0xfffffff0;
    if (iVar7 != 1) {
      iVar6 = (**(code **)(plVar18[7] + 0x20))(plVar18 + 7);
      uVar24 = (iVar6 + 0xfU & 0xfffffff0) + uVar24;
      if (iVar7 != 2) {
        lVar16 = (long)iVar7 * 0x38 + -0x70;
        plVar18 = plVar18 + 0xe;
        do {
          iVar7 = (**(code **)(*plVar18 + 0x20))(plVar18);
          uVar24 = (iVar7 + 0xfU & 0xfffffff0) + uVar24;
          lVar16 = lVar16 + -0x38;
          plVar18 = plVar18 + 7;
        } while (lVar16 != 0);
      }
    }
    if (uVar24 == 0) {
      lVar16 = 0;
    }
    else {
      puVar20 = (uint *)(param_1 + 0x24);
      uVar22 = *puVar20;
      if ((int)(uVar22 & 0x3fffffff) < (int)uVar24) {
        uVar19 = *(undefined8 *)(param_1 + 0x18);
        uVar10 = *(undefined4 *)(param_1 + 0x20);
        if (0x3fffffff < (int)uVar24) {
          FUN_032bd0a8(uVar24);
          uVar22 = *puVar20;
        }
        uVar22 = (uVar22 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar22) {
          uVar22 = 0x3fffffff;
        }
        uVar3 = uVar24;
        if ((int)uVar24 <= (int)uVar22) {
          uVar3 = uVar22;
        }
        uVar19 = FUN_032bd1d4(puVar5,uVar3,1,uVar19,uVar10,puVar20);
        *(undefined8 *)(param_1 + 0x18) = uVar19;
      }
      uVar22 = *(uint *)(param_1 + 0x20);
      if ((int)uVar22 < (int)uVar24) {
        *(uint *)(param_1 + 0x20) = uVar24;
        memset((void *)(*(long *)(param_1 + 0x18) + (long)(int)uVar22),0,
               (ulong)(uVar24 + ~uVar22) + 1);
      }
      else if ((int)uVar24 < (int)uVar22) {
        *(uint *)(param_1 + 0x20) = uVar24;
      }
      lVar16 = *(long *)(param_1 + 0x18);
    }
    if (0 < (int)param_2[1]) {
      plVar18 = (long *)*param_2;
      uVar19 = *(undefined8 *)(param_1 + 8);
      iVar7 = (**(code **)(*plVar18 + 0x20))(plVar18);
      (**(code **)(*plVar18 + 0x18))(plVar18,uVar19,lVar16,lVar16 + iVar7);
      if (1 < (int)param_2[1]) {
        lVar16 = lVar16 + ((long)iVar7 + 0xfU & 0xfffffffffffffff0);
        lVar11 = *(long *)(param_1 + 8);
        plVar18 = (long *)(*param_2 + 0x38);
        iVar7 = (**(code **)(*plVar18 + 0x20))(plVar18);
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar11 + 0x38,lVar16,lVar16 + iVar7);
        if (2 < (int)param_2[1]) {
          lVar11 = 2;
          lVar16 = lVar16 + ((long)iVar7 + 0xfU & 0xfffffffffffffff0);
          lVar23 = 0x70;
          do {
            plVar18 = (long *)(*param_2 + lVar23);
            lVar13 = *(long *)(param_1 + 8);
            iVar7 = (**(code **)(*plVar18 + 0x20))(plVar18);
            (**(code **)(*plVar18 + 0x18))(plVar18,lVar13 + lVar23,lVar16,lVar16 + iVar7);
            lVar16 = lVar16 + ((long)iVar7 + 0xfU & 0xfffffffffffffff0);
            lVar11 = lVar11 + 1;
            lVar23 = lVar23 + 0x38;
          } while (lVar11 < (int)param_2[1]);
        }
      }
    }
  }
  *param_1 = 1;
  return;
}


