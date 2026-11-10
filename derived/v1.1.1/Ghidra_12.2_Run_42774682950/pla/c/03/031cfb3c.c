/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cfb3c; name: FUN_031cfb3c
 */


long FUN_031cfb3c(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  void *__dest;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  ulong local_c0;
  ulong local_98;
  ulong local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined *local_78;
  ulong *local_70;
  undefined4 *puStack_68;
  
  uVar10 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar8 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar8) {
    uVar8 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar8) {
    param_2 = uVar8;
  }
  FUN_032bd100(param_2,0x20,*param_5,&local_98);
  uVar8 = *param_5;
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_98,&local_98);
  puVar4 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    lVar13 = 0;
    uVar11 = uVar10;
    do {
      puVar1 = (undefined8 *)(lVar5 + lVar13);
      *puVar1 = 0;
      puVar1[1] = 0x8000000000000000;
      puVar2 = (undefined8 *)(param_3 + lVar13);
      if (*(int *)((long)puVar2 + 0xc) < 0) {
        local_84 = 4;
        iVar3 = (int)puVar2[1];
        local_90 = (long)iVar3 << 2;
        if (iVar3 < 0) {
          local_80 = 2;
          local_78 = &DAT_0411b3a0;
          local_70 = puVar2 + 1;
          puStack_68 = &local_84;
          FUN_03320b50(0x77a36e5f,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                       ,0x27,"Array size overflow {}*{}",&local_80);
          iVar3 = *(int *)(puVar2 + 1);
        }
        if (iVar3 == 0) {
          *(undefined4 *)((long)puVar2 + 0xc) = 0;
          *(undefined8 *)(param_3 + lVar13) = 0;
        }
        else {
          __dest = (void *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_90,&local_90);
          if (__dest != (void *)0x0) {
            local_c0 = local_90 >> 2;
            if (0x3ffffffe < local_c0) {
              local_c0 = 0x3fffffff;
            }
            memcpy(__dest,*(void **)(param_3 + lVar13),local_90);
            *(void **)(param_3 + lVar13) = __dest;
            *(int *)((long)puVar2 + 0xc) = (int)local_c0;
          }
        }
      }
      *puVar1 = *puVar2;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
      *(undefined4 *)((long)puVar1 + 0xc) = *(undefined4 *)((long)puVar2 + 0xc);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar1[2] = puVar2[2];
      lVar13 = lVar13 + 0x20;
      uVar11 = uVar11 - 1;
      *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(puVar2 + 3);
      puVar2[2] = &DAT_03aad864;
      *(undefined4 *)(puVar2 + 3) = 0;
    } while (uVar11 != 0);
    lVar13 = tpidr_el0;
    piVar12 = (int *)(param_3 + 0xc);
    do {
      lVar7 = *(long *)(piVar12 + 1);
      if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
        uVar11 = (long)piVar12[3] + 1;
        lVar9 = *(long *)(lVar13 + 0x38d490);
        if (lVar9 == 0) {
          lVar9 = FUN_0333d16c(0,1);
          *(long *)(lVar13 + 0x38d490) = lVar9;
        }
        plVar6 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
        local_90 = CONCAT44(local_90._4_4_,8);
        local_84 = (undefined4)uVar11;
        if ((uVar11 & 0x1ffffffff0000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_70 = &local_90;
          puStack_68 = &local_84;
          FUN_03320b50(0x39ec3d88,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x61,"Memory allocation request overflow {}*{}",&local_80);
        }
        (**(code **)(*plVar6 + 0x18))
                  (plVar6,lVar7,-(uVar11 >> 0x1c & 1) & 0xffffffff00000000 | uVar11 * 8 & 0xfffffff8
                  );
        *(undefined **)(piVar12 + 1) = &DAT_03aad864;
        piVar12[3] = 0;
      }
      piVar12[-1] = 0;
      if ((-1 < *piVar12) && (*(long *)(piVar12 + -3) != 0)) {
        (**(code **)(*(long *)puVar4 + 0x18))(puVar4,*(long *)(piVar12 + -3),*piVar12 << 2);
      }
      piVar12[-3] = 0;
      piVar12[-2] = 0;
      uVar10 = uVar10 - 1;
      *piVar12 = -0x80000000;
      piVar12 = piVar12 + 8;
    } while (uVar10 != 0);
  }
  if (-1 < (int)uVar8) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar8 & 0x3fffffff) << 5);
  }
  if (local_98 < 0x7ffffffe0) {
    uVar8 = (uint)(local_98 >> 5);
  }
  else {
    uVar8 = 0x3fffffff;
  }
  *param_5 = uVar8;
  return lVar5;
}


