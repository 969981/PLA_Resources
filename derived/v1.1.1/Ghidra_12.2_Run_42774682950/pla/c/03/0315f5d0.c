/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315f5d0; name: FUN_0315f5d0
 */


void FUN_0315f5d0(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  float *pfVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  uint uVar21;
  long *plVar22;
  uint uVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *puStack_70;
  uint *local_68;
  
  *(undefined4 *)(param_3 + 1) = 0;
  puVar11 = PTR_PTR_0434a080;
  plVar22 = (long *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x18);
  lVar18 = 8;
  uVar16 = 0;
  do {
    uVar26 = uVar16;
    if ((long)(int)plVar22[1] <= (long)uVar26) {
      return;
    }
    lVar24 = *plVar22;
    pfVar10 = (float *)(lVar24 + lVar18);
    lVar18 = lVar18 + 0x18;
    uVar16 = uVar26 + 1;
  } while (*pfVar10 < 0.0);
  if ((int)(uVar26 + 1) != 0) {
    uVar21 = 0;
    while( true ) {
      iVar25 = (int)uVar26;
      lVar18 = (long)iVar25;
      uVar23 = *(uint *)((long)param_3 + 0xc);
      uVar5 = uVar23 & 0x3fffffff;
      puVar15 = (undefined8 *)*param_3;
      uVar2 = uVar21 + 1;
      if ((int)uVar5 <= (int)uVar21) {
        if (0x3ffffffe < (int)uVar21) {
          FUN_032bd0a8(uVar2);
          uVar23 = *(uint *)((long)param_3 + 0xc);
          uVar5 = uVar23 & 0x3fffffff;
        }
        uVar13 = (uVar23 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar13) {
          uVar13 = 0x3fffffff;
        }
        local_7c = uVar2;
        if ((int)uVar2 <= (int)uVar13) {
          local_7c = uVar13;
        }
        local_88 = (ulong)local_7c << 5;
        if (((int)local_7c < (int)uVar5) || (0x3fffffff < (int)local_7c)) {
          local_68 = &local_7c;
          local_78 = 1;
          puStack_70 = &DAT_0411b3b8;
          FUN_03320b50(0x65816502,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                       ,0x5a,"Invalid requestedCapacity {}",&local_78);
          uVar23 = *(uint *)((long)param_3 + 0xc);
          uVar5 = uVar23 & 0x3fffffff;
        }
        puVar12 = (undefined8 *)(**(code **)(*(long *)puVar11 + 0x10))(puVar11,local_88,&local_88);
        if (0 < (int)uVar21) {
          uVar16 = (ulong)uVar21;
          puVar17 = puVar12;
          puVar20 = puVar15;
          do {
            uVar6 = *puVar20;
            uVar7 = puVar20[1];
            uVar16 = uVar16 - 1;
            puVar1 = puVar20 + 2;
            uVar8 = puVar20[3];
            puVar20 = puVar20 + 4;
            puVar17[2] = *puVar1;
            puVar17[3] = uVar8;
            *puVar17 = uVar6;
            puVar17[1] = uVar7;
            puVar17 = puVar17 + 4;
          } while (uVar16 != 0);
        }
        if (-1 < (int)uVar23) {
          (**(code **)(*(long *)puVar11 + 0x18))(puVar11,puVar15,(ulong)uVar5 << 5);
        }
        if (local_88 < 0x7ffffffe0) {
          uVar14 = (undefined4)(local_88 >> 5);
        }
        else {
          uVar14 = 0x3fffffff;
        }
        uVar21 = *(uint *)(param_3 + 1);
        *(undefined4 *)((long)param_3 + 0xc) = uVar14;
        *param_3 = puVar12;
        puVar15 = puVar12;
      }
      *(uint *)(param_3 + 1) = uVar2;
      piVar3 = (int *)(puVar15 + (long)(int)uVar21 * 4);
      piVar3[0] = -1;
      piVar3[1] = -1;
      piVar3[2] = -1;
      lVar4 = lVar24 + lVar18 * 0x18;
      lVar19 = lVar18 * 0x18 + 0x20;
      iVar9 = *(int *)(lVar4 + 0x10);
      *piVar3 = param_2;
      piVar3[1] = iVar25;
      piVar3[2] = iVar9;
      *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(lVar24 + (long)iVar25 * 0x18);
      piVar3[6] = *(int *)(lVar4 + 8);
      iVar25 = -iVar25;
      do {
        lVar18 = lVar18 + 1;
        if ((int)plVar22[1] <= lVar18) {
          return;
        }
        lVar24 = *plVar22;
        iVar25 = iVar25 + -1;
        pfVar10 = (float *)(lVar24 + lVar19);
        lVar19 = lVar19 + 0x18;
      } while (*pfVar10 < 0.0);
      if (iVar25 == 1) break;
      uVar21 = *(uint *)(param_3 + 1);
      uVar26 = (ulong)(uint)-iVar25;
    }
  }
  return;
}


