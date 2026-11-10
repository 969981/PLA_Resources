/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d7638; name: FUN_001d7638
 */


void FUN_001d7638(long param_1,long *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  void *__dest;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  void *pvVar16;
  ulong uVar17;
  uint uVar18;
  undefined4 local_6c;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  
  iVar7 = *(int *)(param_1 + 0x48) * 8;
  iVar14 = *(int *)(param_1 + 8) + 0x1f;
  iVar3 = *(int *)(param_1 + 8) + 0x3e;
  if (-1 < iVar14) {
    iVar3 = iVar14;
  }
  if ((int)*(uint *)((long)param_2 + 0xc) < 0) {
    uVar18 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
    if ((int)uVar18 <= (int)*(uint *)(param_2 + 1)) {
      uVar18 = *(uint *)(param_2 + 1);
    }
    lVar13 = 0;
    if (*param_2 != 0) {
      lVar13 = *param_2 + (long)param_2;
    }
    lVar11 = tpidr_el0;
    lVar12 = *(long *)(lVar11 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar12;
    }
    plVar10 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar13,(ulong)uVar18 << 2);
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((iVar3 >> 5) + iVar7 == 0) {
    local_6c = 0;
    lVar13 = 0;
  }
  else {
    local_6c = 0;
    uVar18 = (iVar3 >> 5) + iVar7;
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    if ((int)uVar18 < 1) {
      lVar13 = 0;
      *(uint *)(param_2 + 1) = uVar18;
    }
    else {
      uVar8 = uVar18 - 1 | (int)(uVar18 - 1) >> 0x10;
      uVar8 = uVar8 | (int)uVar8 >> 8;
      uVar8 = uVar8 | (int)uVar8 >> 4;
      uVar8 = uVar8 | (int)uVar8 >> 2;
      uVar8 = (uVar8 | (int)uVar8 >> 1) + 1;
      if ((int)uVar8 < (int)uVar18) {
        local_58 = 0;
        local_68 = 0;
        puStack_60 = PTR_DAT_04372528;
        FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                     "Capacity reservation overflow",&local_68);
      }
      lVar13 = tpidr_el0;
      lVar11 = *(long *)(lVar13 + 0x38d490);
      if (lVar11 == 0) {
        lVar11 = FUN_0333d16c(0,1);
        *(long *)(lVar13 + 0x38d490) = lVar11;
      }
      plVar10 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
      __dest = (void *)(**(code **)(*plVar10 + 0x10))
                                 (plVar10,-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 |
                                          (ulong)uVar8 << 2,0);
      pvVar16 = (void *)0x0;
      if (*param_2 != 0) {
        pvVar16 = (void *)(*param_2 + (long)param_2);
      }
      memcpy(__dest,pvVar16,(long)(int)param_2[1] << 2);
      if ((int)*(uint *)((long)param_2 + 0xc) < 0) {
        uVar2 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
        if ((int)uVar2 <= (int)*(uint *)(param_2 + 1)) {
          uVar2 = *(uint *)(param_2 + 1);
        }
        lVar11 = 0;
        if (*param_2 != 0) {
          lVar11 = *param_2 + (long)param_2;
        }
        lVar12 = *(long *)(lVar13 + 0x38d490);
        if (lVar12 == 0) {
          lVar12 = FUN_0333d16c(0,1);
          *(long *)(lVar13 + 0x38d490) = lVar12;
        }
        plVar10 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,(ulong)uVar2 << 2);
      }
      lVar13 = 0;
      if (__dest != (void *)0x0) {
        lVar13 = (long)__dest - (long)param_2;
      }
      *(uint *)(param_2 + 1) = uVar18;
      *(uint *)((long)param_2 + 0xc) = uVar8 | 0x80000000;
      *param_2 = lVar13;
      pvVar16 = (void *)(lVar13 + (long)param_2);
      uVar17 = (ulong)uVar18;
      do {
        memcpy(pvVar16,&local_6c,4);
        uVar17 = uVar17 - 1;
        pvVar16 = (void *)((long)pvVar16 + 4);
      } while (uVar17 != 0);
      lVar13 = *param_2;
    }
  }
  iVar14 = *(int *)(param_1 + 0x48);
  lVar11 = 0;
  if (lVar13 != 0) {
    lVar11 = lVar13 + (long)param_2;
  }
  if (iVar14 < 1) {
    lVar11 = lVar11 + (long)(iVar14 << 3) * 4;
  }
  else {
    plVar10 = (long *)(param_1 + 0x40);
    lVar15 = *plVar10;
    lVar12 = 0;
    cVar5 = *(char *)((long)plVar10 + lVar15 + 0x59);
    while( true ) {
      if (cVar5 != '\0') {
        lVar11 = lVar11 + (long)((int)lVar12 << 3) * 4;
        uVar18 = 0;
        uVar17 = 0;
        do {
          uVar9 = uVar17 >> 4;
          uVar8 = (int)uVar17 + 1;
          uVar17 = (ulong)uVar8;
          lVar13 = uVar9 * 4;
          uVar2 = uVar18 & 0x1e;
          uVar18 = uVar18 + 2;
          *(uint *)(lVar11 + lVar13) = *(uint *)(lVar11 + lVar13) | 3 << (ulong)uVar2;
          lVar15 = *plVar10;
        } while (uVar8 < *(byte *)((long)plVar10 + lVar12 * 0x60 + lVar15 + 0x59));
        iVar14 = *(int *)(param_1 + 0x48);
        lVar13 = *param_2;
      }
      lVar12 = lVar12 + 1;
      lVar11 = 0;
      if (lVar13 != 0) {
        lVar11 = lVar13 + (long)param_2;
      }
      if (iVar14 <= lVar12) break;
      cVar5 = *(char *)((long)plVar10 + lVar12 * 0x60 + lVar15 + 0x59);
    }
    lVar11 = lVar11 + (long)(iVar14 << 3) * 4;
    if (0 < iVar14) {
      iVar14 = 0;
      lVar15 = 0x5c;
      lVar12 = 1;
      while( true ) {
        lVar4 = 0;
        if (lVar13 != 0) {
          lVar4 = lVar13 + (long)param_2;
        }
        piVar1 = (int *)(lVar4 + (long)iVar14 * 4);
        uVar6 = *(ushort *)((long)plVar10 + lVar15 + *(long *)(param_1 + 0x40));
        uVar17 = (ulong)(uVar6 >> 3) & 0x1ffc;
        *(uint *)(lVar11 + uVar17) =
             (uint)(((((((piVar1[1] != 0 || *piVar1 != 0) || piVar1[2] != 0) || piVar1[3] != 0) ||
                      piVar1[4] != 0) || piVar1[5] != 0) || piVar1[6] != 0) || piVar1[7] != 0) <<
             (ulong)(uVar6 & 0x1f) |
             *(uint *)(lVar11 + uVar17) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
        if (*(int *)(param_1 + 0x48) <= lVar12) break;
        lVar13 = *param_2;
        lVar12 = lVar12 + 1;
        iVar14 = iVar14 + 8;
        lVar15 = lVar15 + 0x60;
      }
    }
  }
  FUN_001d7cc0(param_1,lVar11);
  return;
}


