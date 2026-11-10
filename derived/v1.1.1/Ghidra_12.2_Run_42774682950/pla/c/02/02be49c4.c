/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02be49c4; name: FUN_02be49c4
 */


/* WARNING: Removing unreachable block (ram,0x02be4c18) */

void FUN_02be49c4(long param_1,undefined8 param_2,long *param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  if (*(long *)(param_1 + 0x28) == *param_3) {
    return;
  }
  if (param_4 == 1) {
    plVar12 = *(long **)(param_1 + 0x18);
    iVar4 = *(int *)(param_1 + 0x20);
    plVar10 = plVar12;
    if (iVar4 != 0) {
      lVar11 = (long)iVar4 * 0x30;
      while (*plVar10 != *param_3) {
        plVar10 = plVar10 + 6;
        lVar11 = lVar11 + -0x30;
        if (lVar11 == 0) {
          return;
        }
      }
    }
    if (plVar10 == plVar12 + (long)iVar4 * 6) {
      return;
    }
    if ((plVar10 + 6 != plVar12 + (long)iVar4 * 6) &&
       (plVar12 = plVar12 + (long)(iVar4 + -1) * 6, plVar12 != plVar10)) {
      lVar11 = plVar12[5];
      plVar10[3] = plVar12[3];
      plVar10[5] = lVar11;
      plVar10[1] = plVar12[1];
      *plVar10 = *plVar12;
      lVar11 = plVar12[2];
      plVar10[4] = plVar12[4];
      plVar10[2] = lVar11;
    }
    *(int *)(param_1 + 0x20) = iVar4 + -1;
    pcVar9 = *(code **)(param_1 + 0xb0);
    goto joined_r0x02be4b48;
  }
  if (param_4 == 0) {
    uVar19 = *(uint *)(param_1 + 0x20);
    uVar18 = *(uint *)(param_1 + 0x24);
    uVar7 = uVar18 & 0x3fffffff;
    puVar17 = *(undefined8 **)(param_1 + 0x18);
    uVar1 = uVar19 + 1;
    puVar6 = puVar17;
    if ((int)uVar7 <= (int)uVar19) {
      if (0x3ffffffe < (int)uVar19) {
        FUN_032bd0a8(uVar1);
        uVar18 = *(uint *)(param_1 + 0x24);
        uVar7 = uVar18 & 0x3fffffff;
      }
      puVar5 = PTR_PTR_0434a080;
      uVar13 = (uVar18 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar13) {
        uVar13 = 0x3fffffff;
      }
      local_54 = uVar1;
      if ((int)uVar1 <= (int)uVar13) {
        local_54 = uVar13;
      }
      local_80 = (ulong)local_54 * 0x30;
      if (((int)local_54 < (int)uVar7) || (0x3fffffff < (int)local_54)) {
        local_78 = 1;
        puStack_68 = &local_54;
        local_70 = &DAT_0411b3b8;
        FUN_03320b50(0x65816502,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x5a,"Invalid requestedCapacity {}",&local_78);
        uVar18 = *(uint *)(param_1 + 0x24);
        uVar7 = uVar18 & 0x3fffffff;
      }
      puVar6 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_80,&local_80);
      if (0 < (int)uVar19) {
        if (uVar19 == 1) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          puVar15 = puVar17;
          puVar16 = puVar6;
          do {
            uVar14 = puVar15[5];
            lVar11 = lVar11 + 2;
            puVar16[3] = puVar15[3];
            puVar16[5] = uVar14;
            puVar16[1] = puVar15[1];
            *puVar16 = *puVar15;
            uVar14 = puVar15[2];
            puVar16[4] = puVar15[4];
            puVar16[2] = uVar14;
            puVar16[7] = puVar15[7];
            uVar14 = puVar15[8];
            uVar2 = puVar15[9];
            uVar3 = puVar15[0xb];
            puVar16[10] = puVar15[10];
            puVar16[0xb] = uVar3;
            puVar16[8] = uVar14;
            puVar16[9] = uVar2;
            puVar16[6] = puVar15[6];
            puVar16 = puVar16 + 0xc;
            puVar15 = puVar15 + 0xc;
          } while ((ulong)uVar19 - ((ulong)uVar19 & 1) != lVar11);
          if ((uVar19 & 1) == 0) goto LAB_02be4cd4;
        }
        puVar16 = puVar6 + lVar11 * 6;
        puVar15 = puVar17 + lVar11 * 6;
        uVar14 = puVar15[5];
        puVar16[3] = puVar15[3];
        puVar16[5] = uVar14;
        puVar16[1] = puVar15[1];
        *puVar16 = *puVar15;
        uVar14 = puVar15[2];
        puVar16[4] = puVar15[4];
        puVar16[2] = uVar14;
      }
LAB_02be4cd4:
      if (-1 < (int)uVar18) {
        (**(code **)(*(long *)puVar5 + 0x18))(puVar5,puVar17,(ulong)uVar7 * 0x30);
      }
      if (local_80 < 0xbffffffd0) {
        uVar8 = (undefined4)(local_80 / 0x30);
      }
      else {
        uVar8 = 0x3fffffff;
      }
      uVar19 = *(uint *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x24) = uVar8;
      *(undefined8 **)(param_1 + 0x18) = puVar6;
    }
    lVar11 = param_3[5];
    plVar10 = puVar6 + (long)(int)uVar19 * 6;
    plVar10[3] = param_3[3];
    plVar10[5] = lVar11;
    plVar10[1] = param_3[1];
    *plVar10 = *param_3;
    lVar11 = param_3[2];
    plVar10[4] = param_3[4];
    plVar10[2] = lVar11;
    *(uint *)(param_1 + 0x20) = uVar1;
  }
  pcVar9 = *(code **)(param_1 + 0xb0);
joined_r0x02be4b48:
  if (pcVar9 != (code *)0x0) {
    local_80 = CONCAT44(local_80._4_4_,param_4);
    local_78 = param_2;
    (*pcVar9)(param_1 + 0xd0,&local_78,param_3,&local_80);
  }
  return;
}


