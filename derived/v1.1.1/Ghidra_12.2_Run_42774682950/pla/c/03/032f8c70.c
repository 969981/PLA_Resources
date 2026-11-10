/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f8c70; name: FUN_032f8c70
 */


void FUN_032f8c70(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  uVar4 = FUN_032fc11c();
  if (*(uint *)(param_1 + 1) == uVar4) {
    uVar14 = *(uint *)((long)param_1 + 0xc);
    uVar15 = uVar14 & 0x3fffffff;
    puVar13 = (undefined8 *)*param_1;
    uVar1 = uVar4 + 1;
    puVar5 = puVar13;
    if ((int)uVar15 <= (int)uVar4) {
      if (0x3ffffffe < (int)uVar4) {
        FUN_032bd0a8(uVar1);
        uVar14 = *(uint *)((long)param_1 + 0xc);
        uVar15 = uVar14 & 0x3fffffff;
      }
      puVar3 = PTR_PTR_0434a080;
      uVar6 = (uVar14 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar6) {
        uVar6 = 0x3fffffff;
      }
      local_7c = uVar1;
      if ((int)uVar1 <= (int)uVar6) {
        local_7c = uVar6;
      }
      local_88 = (ulong)local_7c * 0x18;
      if (((int)local_7c < (int)uVar15) || (0x3fffffff < (int)local_7c)) {
        local_78 = 1;
        puStack_68 = &local_7c;
        local_70 = &DAT_0411b3b8;
        FUN_03320b50(0x65816502,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x5a,"Invalid requestedCapacity {}",&local_78);
        uVar14 = *(uint *)((long)param_1 + 0xc);
        uVar15 = uVar14 & 0x3fffffff;
      }
      puVar5 = (undefined8 *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_88,&local_88);
      if (0 < (int)uVar4) {
        uVar2 = *puVar13;
        uVar8 = puVar13[2];
        puVar5[1] = puVar13[1];
        puVar5[2] = uVar8;
        uVar9 = (ulong)uVar4;
        *puVar5 = uVar2;
        if (uVar9 != 1) {
          uVar2 = puVar13[3];
          uVar8 = puVar13[5];
          puVar5[4] = puVar13[4];
          puVar5[5] = uVar8;
          puVar5[3] = uVar2;
          if (uVar9 != 2) {
            uVar2 = puVar13[6];
            uVar8 = puVar13[8];
            puVar5[7] = puVar13[7];
            puVar5[8] = uVar8;
            puVar5[6] = uVar2;
            if (uVar9 != 3) {
              uVar2 = puVar13[9];
              uVar8 = puVar13[0xb];
              puVar5[10] = puVar13[10];
              puVar5[0xb] = uVar8;
              puVar5[9] = uVar2;
              if (uVar9 != 4) {
                uVar2 = puVar13[0xc];
                uVar8 = puVar13[0xe];
                puVar5[0xd] = puVar13[0xd];
                puVar5[0xe] = uVar8;
                puVar5[0xc] = uVar2;
                if (uVar9 != 5) {
                  uVar2 = puVar13[0xf];
                  lVar10 = uVar9 - 6;
                  uVar8 = puVar13[0x11];
                  puVar5[0x10] = puVar13[0x10];
                  puVar5[0x11] = uVar8;
                  puVar5[0xf] = uVar2;
                  if (lVar10 != 0) {
                    puVar11 = puVar13 + 0x12;
                    puVar12 = puVar5 + 0x12;
                    do {
                      uVar2 = *puVar11;
                      lVar10 = lVar10 + -1;
                      uVar8 = puVar11[2];
                      puVar12[1] = puVar11[1];
                      puVar12[2] = uVar8;
                      *puVar12 = uVar2;
                      puVar11 = puVar11 + 3;
                      puVar12 = puVar12 + 3;
                    } while (lVar10 != 0);
                  }
                }
              }
            }
          }
        }
      }
      if (-1 < (int)uVar14) {
        (**(code **)(*(long *)puVar3 + 0x18))(puVar3,puVar13,(ulong)uVar15 * 0x18);
      }
      uVar4 = *(uint *)(param_1 + 1);
      *param_1 = (long)puVar5;
      uVar7 = 0x3fffffff;
      if (local_88 < 0x5ffffffe8) {
        uVar7 = (undefined4)(local_88 / 0x18);
      }
      *(undefined4 *)((long)param_1 + 0xc) = uVar7;
    }
    uVar2 = param_2[1];
    puVar5 = puVar5 + (long)(int)uVar4 * 3;
    *puVar5 = *param_2;
    puVar5[1] = uVar2;
    puVar5[2] = *param_3;
    *(uint *)(param_1 + 1) = uVar1;
  }
  else {
    *(undefined8 *)(*param_1 + (long)(int)uVar4 * 0x18 + 0x10) = *param_3;
  }
  return;
}


