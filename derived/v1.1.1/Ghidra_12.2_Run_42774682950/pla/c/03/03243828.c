/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03243828; name: FUN_03243828
 */


undefined8 FUN_03243828(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  void *__dest;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  undefined4 *local_98;
  undefined8 local_90;
  int local_88;
  int local_84;
  ulong local_80;
  undefined *local_78;
  int *local_70;
  int *local_68;
  
  puVar4 = PTR_PTR_0434a080;
  local_98 = (undefined4 *)0x0;
  local_90 = 0x8000000000000000;
  iVar1 = *(int *)(param_2 + 1);
  puVar9 = (undefined4 *)*param_2;
  lVar3 = tpidr_el0;
  local_88 = iVar1;
  if (iVar1 < 1) {
    local_98 = (undefined4 *)0x0;
    local_90 = -0x8000000000000000;
  }
  else {
    local_84 = 0x30;
    if (((ulong)((long)iVar1 * 3) >> 0x1b & 0x1ffffffff) != 0) {
      local_70 = &local_84;
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_68 = &local_88;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_80);
    }
    local_80 = -((ulong)((uint)(iVar1 * 3) >> 0x1b) & 1) & 0xffffffff00000000 |
               ((ulong)(uint)(iVar1 * 3) & 0xfffffff) << 4;
    local_98 = (undefined4 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_80,&local_80);
    iVar14 = 0;
    if (local_84 != 0) {
      iVar14 = (int)local_80 / local_84;
    }
    iVar10 = 0;
    local_90 = CONCAT44(iVar14,iVar1);
    puVar11 = local_98;
    do {
      *puVar11 = *puVar9;
      puVar11[2] = puVar9[2];
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0x8000000000000000;
      iVar14 = puVar9[6];
      puVar8 = *(undefined4 **)(puVar9 + 4);
      local_88 = iVar14;
      if (iVar14 < 1) {
        *(undefined8 *)(puVar11 + 4) = 0;
        *(undefined8 *)(puVar11 + 6) = 0x8000000000000000;
      }
      else {
        local_84 = 0x68;
        if ((ulong)((long)iVar14 * 0x68) >> 0x1f != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = (long)iVar14 * 0x6800000000 >> 0x20;
        puVar5 = (undefined4 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_80,&local_80);
        *(undefined4 **)(puVar11 + 4) = puVar5;
        iVar2 = 0;
        if (local_84 != 0) {
          iVar2 = (int)local_80 / local_84;
        }
        puVar11[6] = iVar14;
        puVar11[7] = iVar2;
        do {
          *puVar5 = *puVar8;
          FUN_031cf1bc(puVar5 + 2,puVar8 + 2);
          iVar14 = iVar14 + -1;
          puVar8 = puVar8 + 0x1a;
          puVar5 = puVar5 + 0x1a;
        } while (iVar14 != 0);
      }
      if (*(int *)(*(long *)(puVar9 + 8) + 4) == -2) {
        *(undefined **)(puVar11 + 8) = &DAT_03aad864;
        puVar11[10] = 0;
      }
      else {
        puVar11[10] = puVar9[10];
        iVar14 = puVar9[10];
        lVar12 = *(long *)(lVar3 + 0x38d490);
        if (lVar12 == 0) {
          lVar12 = FUN_0333d16c(0,1);
          *(long *)(lVar3 + 0x38d490) = lVar12;
        }
        __dest = (void *)FUN_032cf2d8(*(undefined8 *)(*(long *)(lVar12 + 8) + 0x58),8,iVar14 + 1);
        *(void **)(puVar11 + 8) = __dest;
        memcpy(__dest,*(void **)(puVar9 + 8),(long)(int)puVar9[10] * 8 + 8);
      }
      iVar10 = iVar10 + 1;
      puVar9 = puVar9 + 0xc;
      puVar11 = puVar11 + 0xc;
    } while (iVar10 != iVar1);
  }
  FUN_0324ca78(param_1,&local_98);
  puVar9 = local_98;
  if ((int)local_90 == 0) {
LAB_03243bec:
    lVar3 = local_90;
    uVar6 = (ulong)local_90._4_4_;
    local_90 = (ulong)local_90._4_4_ << 0x20;
    if ((-1 < lVar3) && (local_98 != (undefined4 *)0x0)) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_98,(uVar6 & 0x3fffffff) * 0x30);
    }
    return 1;
  }
  puVar11 = local_98 + (long)(int)local_90 * 0xc;
  lVar12 = *(long *)(puVar11 + -4);
  if (lVar12 != 0) goto LAB_03243b1c;
  do {
    iVar1 = puVar11[-6];
    puVar8 = puVar11;
    while( true ) {
      if (iVar1 != 0) {
        lVar7 = *(long *)(puVar8 + -8);
        lVar12 = (long)iVar1 * 0x68;
        do {
          FUN_031cd728(lVar7 + -0x60 + lVar12);
          lVar12 = lVar12 + -0x68;
        } while (lVar12 != 0);
      }
      puVar11 = puVar8 + -0xc;
      puVar8[-6] = 0;
      if ((-1 < (int)puVar8[-5]) && (*(long *)(puVar8 + -8) != 0)) {
        (**(code **)(*(long *)puVar4 + 0x18))
                  (puVar4,*(long *)(puVar8 + -8),((ulong)(uint)puVar8[-5] & 0x3fffffff) * 0x68);
      }
      *(undefined8 *)(puVar8 + -8) = 0;
      puVar8[-5] = 0x80000000;
      if (puVar11 == puVar9) goto LAB_03243bec;
      lVar12 = *(long *)(puVar8 + -0x10);
      if (lVar12 == 0) break;
LAB_03243b1c:
      if (*(int *)(lVar12 + 4) == -2) break;
      uVar6 = (long)(int)puVar11[-2] + 1;
      lVar7 = *(long *)(lVar3 + 0x38d490);
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar3 + 0x38d490) = lVar7;
      }
      plVar13 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
      local_88 = (int)uVar6;
      local_84 = 8;
      if ((uVar6 & 0x1ffffffff0000000) != 0) {
        local_78 = &DAT_0411b3a0;
        local_80 = 2;
        local_68 = &local_88;
        local_70 = &local_84;
        FUN_03320b50(0x39ec3d88,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                     ,0x61,"Memory allocation request overflow {}*{}",&local_80);
      }
      (**(code **)(*plVar13 + 0x18))
                (plVar13,lVar12,-(uVar6 >> 0x1c & 1) & 0xffffffff00000000 | uVar6 * 8 & 0xfffffff8);
      *(undefined **)(puVar11 + -4) = &DAT_03aad864;
      puVar11[-2] = 0;
      iVar1 = puVar11[-6];
      puVar8 = puVar11;
    }
  } while( true );
}


