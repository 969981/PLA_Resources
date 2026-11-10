/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f9f9e4; name: FUN_02f9f9e4
 */


long FUN_02f9f9e4(long *param_1,undefined8 *param_2,uint param_3,uint *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  uVar11 = *param_4;
  local_7c = (uVar11 & 0x3fffffff) << 1;
  if (0x3ffffffe < local_7c) {
    local_7c = 0x3fffffff;
  }
  if (local_7c < 0x21) {
    local_7c = 0x20;
  }
  uVar2 = uVar11 & 0x3fffffff;
  local_88 = (ulong)local_7c << 6;
  if (local_7c < uVar2) {
    local_78 = 1;
    puStack_68 = &local_7c;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_78);
    uVar11 = *param_4;
    uVar2 = uVar11 & 0x3fffffff;
  }
  lVar7 = (**(code **)(*param_1 + 0x10))(param_1,local_88,&local_88);
  puVar6 = PTR_PTR_0434a080;
  if (0 < (int)param_3) {
    uVar9 = (ulong)param_3;
    puVar13 = (undefined8 *)(lVar7 + 8);
    puVar10 = param_2;
    uVar12 = uVar9;
    do {
      puVar13[-1] = 0;
      *puVar13 = 0x8000000000000000;
      if (*(int *)((long)puVar10 + 0xc) < 0) {
        FUN_032bcf84(puVar6,puVar10,2);
      }
      puVar13[-1] = *puVar10;
      *(undefined4 *)puVar13 = *(undefined4 *)(puVar10 + 1);
      *(undefined4 *)((long)puVar13 + 4) = *(undefined4 *)((long)puVar10 + 0xc);
      uVar3 = puVar10[4];
      uVar4 = puVar10[5];
      uVar5 = *(undefined4 *)(puVar10 + 6);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar13[2] = puVar10[3];
      puVar13[3] = uVar3;
      *(undefined4 *)(puVar13 + 5) = uVar5;
      puVar13[4] = uVar4;
      puVar1 = puVar10 + 2;
      uVar12 = uVar12 - 1;
      puVar10 = puVar10 + 8;
      puVar13[1] = *puVar1;
      puVar13 = puVar13 + 8;
    } while (uVar12 != 0);
    puVar8 = (uint *)((long)param_2 + 0xc);
    do {
      puVar8[-1] = 0;
      if ((-1 < (int)*puVar8) && (*(long *)(puVar8 + -3) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x18))
                  (puVar6,*(long *)(puVar8 + -3),(*puVar8 & 0x3fffffff) << 1);
      }
      puVar8[-3] = 0;
      puVar8[-2] = 0;
      uVar9 = uVar9 - 1;
      *puVar8 = 0x80000000;
      puVar8 = puVar8 + 0x10;
    } while (uVar9 != 0);
  }
  if (-1 < (int)uVar11) {
    (**(code **)(*param_1 + 0x18))(param_1,param_2,(ulong)uVar2 << 6);
  }
  if (local_88 < 0xfffffffc0) {
    uVar11 = (uint)(local_88 >> 6);
  }
  else {
    uVar11 = 0x3fffffff;
  }
  *param_4 = uVar11;
  return lVar7;
}


