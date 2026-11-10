/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031778ac; name: FUN_031778ac
 */


void FUN_031778ac(long param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined *puStack_78;
  undefined4 *local_70;
  undefined4 *puStack_68;
  
  lVar12 = (long)*param_2;
  lVar13 = *(long *)(param_1 + 0x38);
  lVar15 = lVar13 + lVar12 * 0xf0;
  piVar16 = (int *)(lVar15 + 200);
  iVar2 = *piVar16;
  uVar17 = (ulong)(iVar2 - 1);
  plVar14 = (long *)(lVar15 + 0xc0);
  if (0 < iVar2) {
    lVar15 = lVar13;
    while( true ) {
      lVar8 = (long)*(int *)(*plVar14 +
                            (-(uVar17 >> 0x1f & 1) & 0xfffffff000000000 | (uVar17 & 0xffffffff) << 4
                            ));
      plVar11 = (long *)(lVar15 + lVar8 * 0xf0 + 0xc0);
      lVar10 = FUN_0317ca44(plVar11,param_2);
      if (lVar10 == 0) {
        uVar6 = 0xffffffff00000000;
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = (ulong)*(uint *)(lVar10 + 4);
        uVar6 = (lVar10 - *(long *)(lVar15 + lVar8 * 0xf0 + 0xd0)) * 0x20000000;
      }
      if ((*(uint *)(lVar15 + lVar8 * 0xf0 + 0xd8) < (uint)(uVar6 >> 0x20)) ||
         (lVar15 = *(long *)(lVar15 + lVar8 * 0xf0 + 0xd0) + ((long)uVar6 >> 0x20) * 8,
         *(int *)(lVar15 + 4) != (int)(uVar7 | uVar6))) {
        lVar15 = FUN_0317ca44(plVar11,*plVar11 + ((long)((uVar7 | uVar6) << 0x20) >> 0x1c));
      }
      FUN_0317cac4(plVar11,lVar15);
      uVar17 = uVar17 + 0xffffffff;
      if ((int)uVar17 < 0) break;
      lVar15 = *(long *)(param_1 + 0x38);
    }
    iVar2 = *piVar16;
  }
  if (iVar2 != 0) {
    lVar10 = *plVar14;
    lVar15 = lVar10 + (long)iVar2 * 0x10;
    do {
      while( true ) {
        plVar11 = *(long **)(lVar15 + -8);
        lVar15 = lVar15 + -0x10;
        if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) break;
LAB_03177abc:
        if (lVar15 == lVar10) goto LAB_031778f0;
      }
      plVar1 = plVar11 + 2;
      do {
        lVar8 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 + -1 != 0) goto LAB_03177abc;
      (**(code **)(*plVar11 + 0x18))();
    } while (lVar15 != lVar10);
  }
LAB_031778f0:
  *piVar16 = 0;
  puVar9 = (uint *)(lVar13 + lVar12 * 0xf0 + 0xcc);
  uVar3 = *puVar9;
  if ((-1 < (int)uVar3) && (*plVar14 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,*plVar14,((ulong)uVar3 & 0x3fffffff) << 4);
  }
  *plVar14 = 0;
  *puVar9 = 0x80000000;
  plVar14 = (long *)(lVar13 + lVar12 * 0xf0 + 0xd0);
  lVar15 = *plVar14;
  if ((lVar15 != 0) && (*(int *)(lVar15 + 4) != -2)) {
    piVar16 = (int *)(lVar13 + lVar12 * 0xf0 + 0xd8);
    uVar17 = (long)*piVar16 + 1;
    lVar12 = tpidr_el0;
    lVar13 = *(long *)(lVar12 + 0x38d490);
    if (lVar13 == 0) {
      lVar13 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar13;
    }
    plVar11 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
    local_88 = (undefined4)uVar17;
    uStack_84 = 8;
    if ((uVar17 & 0x1ffffffff0000000) != 0) {
      local_80 = 2;
      puStack_78 = &DAT_0411b3a0;
      local_70 = &uStack_84;
      puStack_68 = &local_88;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_80);
    }
    (**(code **)(*plVar11 + 0x18))
              (plVar11,lVar15,-(uVar17 >> 0x1c & 1) & 0xffffffff00000000 | uVar17 * 8 & 0xfffffff8);
    *plVar14 = (long)&DAT_03aad864;
    *piVar16 = 0;
  }
  return;
}


