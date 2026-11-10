/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319bb18; name: FUN_0319bb18
 */


long FUN_0319bb18(long *param_1,uint param_2,undefined8 *param_3,uint param_4,uint *param_5)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  ulong local_88;
  int local_7c;
  undefined8 local_78;
  undefined *local_70;
  int *piStack_68;
  
  uVar4 = (ulong)param_4;
  uVar5 = (ulong)param_2;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(uVar5);
  }
  uVar8 = *param_5;
  uVar3 = (uVar8 & 0x3fffffff) * 2;
  if (uVar3 < 0x3fffffff) {
    if ((int)uVar3 < (int)param_2) goto LAB_0319bb74;
  }
  else {
    uVar3 = 0x3fffffff;
    if (0x3fffffff < (int)param_2) goto LAB_0319bb74;
  }
  uVar5 = (ulong)uVar3;
LAB_0319bb74:
  uVar3 = uVar8 & 0x3fffffff;
  local_7c = (int)uVar5;
  local_88 = uVar5 << 4;
  if ((local_7c < (int)uVar3) || (0x3fffffff < local_7c)) {
    local_78 = 1;
    piStack_68 = &local_7c;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_78);
    uVar8 = *param_5;
    uVar3 = uVar8 & 0x3fffffff;
  }
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_88,&local_88);
  puVar1 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    puVar6 = param_3;
    uVar5 = uVar4;
    puVar9 = (undefined4 *)(lVar2 + 0xc);
    do {
      *(undefined8 *)(puVar9 + -3) = 0;
      *(undefined8 *)(puVar9 + -1) = 0x8000000000000000;
      if (*(int *)((long)puVar6 + 0xc) < 0) {
        FUN_032bcf84(puVar1,puVar6,8);
      }
      *(undefined8 *)(puVar9 + -3) = *puVar6;
      puVar9[-1] = *(undefined4 *)(puVar6 + 1);
      uVar5 = uVar5 - 1;
      *puVar9 = *(undefined4 *)((long)puVar6 + 0xc);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = puVar6 + 2;
      puVar9 = puVar9 + 4;
    } while (uVar5 != 0);
    puVar7 = (uint *)((long)param_3 + 0xc);
    do {
      puVar7[-1] = 0;
      if ((-1 < (int)*puVar7) && (*(long *)(puVar7 + -3) != 0)) {
        (**(code **)(*(long *)puVar1 + 0x18))
                  (puVar1,*(long *)(puVar7 + -3),((ulong)*puVar7 & 0x3fffffff) << 3);
      }
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      uVar4 = uVar4 - 1;
      *puVar7 = 0x80000000;
      puVar7 = puVar7 + 4;
    } while (uVar4 != 0);
  }
  if (-1 < (int)uVar8) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar3 << 4);
  }
  if (local_88 < 0x3fffffff0) {
    uVar8 = (uint)(local_88 >> 4);
  }
  else {
    uVar8 = 0x3fffffff;
  }
  *param_5 = uVar8;
  return lVar2;
}


