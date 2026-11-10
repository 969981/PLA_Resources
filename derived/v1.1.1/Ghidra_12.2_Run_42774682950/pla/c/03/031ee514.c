/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ee514; name: FUN_031ee514
 */


long FUN_031ee514(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  void *__dest;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  undefined8 uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong local_98;
  ulong local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined *local_78;
  ulong *local_70;
  undefined4 *puStack_68;
  
  uVar11 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar12 = *param_5;
  uVar4 = (uVar12 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar4) {
    uVar4 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar4) {
    param_2 = uVar4;
  }
  uVar4 = uVar12 & 0x3fffffff;
  local_98 = (ulong)param_2 << 6;
  local_90 = CONCAT44(local_90._4_4_,param_2);
  if ((int)param_2 < (int)uVar4 || 0x3fffffff < (int)param_2) {
    local_80 = 1;
    local_70 = &local_90;
    local_78 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_80);
    uVar12 = *param_5;
    uVar4 = uVar12 & 0x3fffffff;
  }
  lVar3 = (**(code **)(*param_1 + 0x10))(param_1,local_98,&local_98);
  puVar2 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    uVar5 = uVar11;
    piVar6 = (int *)(param_3 + 0x3c);
    piVar7 = (int *)(lVar3 + 0x3c);
    do {
      *(undefined8 *)(piVar7 + -0xd) = *(undefined8 *)(piVar6 + -0xd);
      *(undefined8 *)(piVar7 + -0xf) = *(undefined8 *)(piVar6 + -0xf);
      uVar8 = *(undefined8 *)(piVar6 + -9);
      *(undefined8 *)(piVar7 + -5) = *(undefined8 *)(piVar6 + -5);
      uVar10 = *(undefined8 *)(piVar6 + -0xb);
      *(undefined8 *)(piVar7 + -7) = *(undefined8 *)(piVar6 + -7);
      *(undefined8 *)(piVar7 + -9) = uVar8;
      *(undefined8 *)(piVar7 + -0xb) = uVar10;
      piVar7[-3] = 0;
      piVar7[-2] = 0;
      piVar7[-1] = 0;
      piVar7[0] = -0x80000000;
      if (*piVar6 < 0) {
        local_84 = 4;
        puVar9 = (ulong *)(piVar6 + -1);
        iVar1 = (int)*puVar9;
        local_90 = (long)iVar1 << 2;
        if (iVar1 < 0) {
          local_80 = 2;
          local_78 = &DAT_0411b3a0;
          local_70 = puVar9;
          puStack_68 = &local_84;
          FUN_03320b50(0x77a36e5f,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                       ,0x27,"Array size overflow {}*{}",&local_80);
          iVar1 = (int)*puVar9;
        }
        if (iVar1 == 0) {
          *piVar6 = 0;
          piVar6[-3] = 0;
          piVar6[-2] = 0;
        }
        else {
          __dest = (void *)(**(code **)(*(long *)puVar2 + 0x10))(puVar2,local_90,&local_90);
          if (__dest != (void *)0x0) {
            uVar13 = local_90 >> 2;
            if (0x3ffffffe < uVar13) {
              uVar13 = 0x3fffffff;
            }
            memcpy(__dest,*(void **)(piVar6 + -3),local_90);
            *(void **)(piVar6 + -3) = __dest;
            *piVar6 = (int)uVar13;
          }
        }
      }
      *(undefined8 *)(piVar7 + -3) = *(undefined8 *)(piVar6 + -3);
      piVar7[-1] = piVar6[-1];
      *piVar7 = *piVar6;
      uVar5 = uVar5 - 1;
      piVar6[-3] = 0;
      piVar6[-2] = 0;
      piVar6[-1] = 0;
      piVar6[0] = 0;
      piVar6 = piVar6 + 0x10;
      piVar7 = piVar7 + 0x10;
    } while (uVar5 != 0);
    piVar6 = (int *)(param_3 + 0x3c);
    do {
      piVar6[-1] = 0;
      if ((-1 < *piVar6) && (*(long *)(piVar6 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x18))(puVar2,*(long *)(piVar6 + -3),*piVar6 << 2);
      }
      piVar6[-3] = 0;
      piVar6[-2] = 0;
      uVar11 = uVar11 - 1;
      *piVar6 = -0x80000000;
      piVar6 = piVar6 + 0x10;
    } while (uVar11 != 0);
  }
  if (-1 < (int)uVar12) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar4 << 6);
  }
  if (local_98 < 0xfffffffc0) {
    uVar12 = (uint)(local_98 >> 6);
  }
  else {
    uVar12 = 0x3fffffff;
  }
  *param_5 = uVar12;
  return lVar3;
}


