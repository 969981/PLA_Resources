/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031772ac; name: FUN_031772ac
 */


void FUN_031772ac(long param_1,int *param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  uint *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  int *piVar17;
  int *piVar18;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined *puStack_78;
  undefined4 *local_70;
  undefined4 *puStack_68;
  
  lVar13 = (long)*param_2;
  lVar14 = *(long *)(param_1 + 0x38);
  lVar15 = lVar14 + lVar13 * 0xf0;
  plVar16 = (long *)(lVar15 + 0xa0);
  piVar18 = (int *)*plVar16;
  piVar17 = (int *)(lVar15 + 0xa8);
  iVar4 = *piVar17;
  if (iVar4 == 0) {
LAB_031772ec:
    *piVar17 = 0;
    puVar11 = (uint *)(lVar14 + lVar13 * 0xf0 + 0xac);
    uVar3 = *puVar11;
    if ((-1 < (int)uVar3) && (*plVar16 != 0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,*plVar16,((ulong)uVar3 & 0x3fffffff) << 3);
    }
    *plVar16 = 0;
    *puVar11 = 0x80000000;
    plVar16 = (long *)(lVar14 + lVar13 * 0xf0 + 0xb0);
    lVar15 = *plVar16;
    if ((lVar15 != 0) && (*(int *)(lVar15 + 4) != -2)) {
      piVar18 = (int *)(lVar14 + lVar13 * 0xf0 + 0xb8);
      uVar8 = (long)*piVar18 + 1;
      lVar13 = tpidr_el0;
      lVar14 = *(long *)(lVar13 + 0x38d490);
      if (lVar14 == 0) {
        lVar14 = FUN_0333d16c(0,1);
        *(long *)(lVar13 + 0x38d490) = lVar14;
      }
      plVar12 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
      local_88 = (undefined4)uVar8;
      uStack_84 = 8;
      if ((uVar8 & 0x1ffffffff0000000) != 0) {
        local_80 = 2;
        puStack_78 = &DAT_0411b3a0;
        local_70 = &uStack_84;
        puStack_68 = &local_88;
        FUN_03320b50(0x39ec3d88,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                     ,0x61,"Memory allocation request overflow {}*{}",&local_80);
      }
      (**(code **)(*plVar12 + 0x18))
                (plVar12,lVar15,-(uVar8 >> 0x1c & 1) & 0xffffffff00000000 | uVar8 * 8 & 0xfffffff8);
      *plVar16 = (long)&DAT_03aad864;
      *piVar18 = 0;
    }
    return;
  }
  piVar1 = piVar18 + (long)iVar4 * 2;
  lVar15 = lVar14;
  do {
    lVar2 = (long)*piVar18;
    iVar4 = piVar18[1];
    plVar12 = (long *)(lVar15 + lVar2 * 0xf0 + 0xa0);
    lVar7 = FUN_0317c8b8(plVar12,param_2);
    if (lVar7 == 0) {
      uVar8 = 0xffffffff00000000;
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (ulong)*(uint *)(lVar7 + 4);
      uVar8 = (lVar7 - *(long *)(lVar15 + lVar2 * 0xf0 + 0xb0)) * 0x20000000;
    }
    if (*(uint *)(lVar15 + lVar2 * 0xf0 + 0xb8) < (uint)(uVar8 >> 0x20)) {
LAB_03177440:
      lVar15 = FUN_0317c8b8(plVar12,*plVar12 + ((long)((uVar10 | uVar8) << 0x20) >> 0x1d));
    }
    else {
      lVar15 = *(long *)(lVar15 + lVar2 * 0xf0 + 0xb0) + ((long)uVar8 >> 0x20) * 8;
      if (*(int *)(lVar15 + 4) != (int)(uVar10 | uVar8)) goto LAB_03177440;
    }
    FUN_0317c938(plVar12,lVar15);
    plVar9 = (long *)(*(long *)(param_1 + 0x48) + (long)iVar4 * 0x18);
    *(undefined1 *)(plVar9 + 2) = 1;
    plVar12 = (long *)*plVar9;
    *plVar9 = 0;
    if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
      plVar9 = plVar12 + 2;
      do {
        lVar15 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = lVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))();
      }
    }
    piVar18 = piVar18 + 2;
    if (piVar18 == piVar1) goto LAB_031772ec;
    lVar15 = *(long *)(param_1 + 0x38);
  } while( true );
}


