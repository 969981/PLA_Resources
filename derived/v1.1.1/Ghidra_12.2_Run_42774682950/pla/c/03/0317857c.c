/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317857c; name: FUN_0317857c
 */


void FUN_0317857c(long param_1,undefined4 param_2,long param_3,long param_4)

{
  int *piVar1;
  uint uVar2;
  long *plVar3;
  char cVar4;
  ushort uVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  long lVar18;
  int iVar19;
  ushort uVar20;
  long *plVar21;
  int iVar22;
  uint *puVar23;
  ushort uVar24;
  long *local_88;
  int local_80 [2];
  int local_78 [2];
  
  iVar22 = *(int *)(param_3 + 0x30);
  if (iVar22 == *(int *)(param_3 + 0x34)) {
    lVar16 = (long)*(int *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x40) < 1) {
      lVar15 = -1;
    }
    else {
      lVar18 = 0;
      lVar15 = -1;
      plVar12 = *(long **)(param_1 + 0x38);
      do {
        if ((*(int *)((long)plVar12 + 0x1c) == iVar22) && (*plVar12 != 0)) {
          lVar15 = lVar18 >> 0x20;
          break;
        }
        lVar18 = lVar18 + 0x100000000;
        lVar16 = lVar16 + -1;
        plVar12 = plVar12 + 0x1e;
      } while (lVar16 != 0);
    }
    FUN_0318bc68((*(long **)(param_1 + 0x38))[lVar15 * 0x1e],param_2,param_3);
    return;
  }
  iVar11 = *(int *)(param_1 + 0x40);
  plVar12 = *(long **)(param_1 + 0x38);
  if (iVar11 < 1) {
    lVar16 = 0xffffffff;
  }
  else {
    lVar16 = 0;
    plVar21 = plVar12;
    do {
      if ((*(int *)((long)plVar21 + 0x1c) == iVar22) && (*plVar21 != 0)) goto LAB_03178654;
      lVar16 = lVar16 + 1;
      plVar21 = plVar21 + 0x1e;
    } while (iVar11 != lVar16);
    lVar16 = 0xffffffff;
  }
LAB_03178654:
  iVar22 = (int)lVar16;
  if (iVar11 < 1) {
    lVar16 = -1;
    iVar19 = -1;
  }
  else {
    lVar16 = 0;
    iVar19 = -1;
    plVar21 = plVar12;
    do {
      if ((*(int *)((long)plVar21 + 0x1c) == *(int *)(param_3 + 0x34)) && (*plVar21 != 0)) {
        iVar19 = (int)lVar16;
        goto LAB_031786ac;
      }
      lVar16 = lVar16 + 1;
      plVar21 = plVar21 + 0x1e;
    } while (iVar11 != lVar16);
    lVar16 = -1;
  }
LAB_031786ac:
  uVar20 = *(ushort *)(param_3 + 0x80);
  uVar24 = *(ushort *)(param_3 + 0x82);
  lVar15 = plVar12[(long)iVar22 * 0x1e];
  lVar18 = (long)iVar22;
  lVar16 = plVar12[(long)(int)lVar16 * 0x1e];
  local_80[0] = iVar19;
  local_78[0] = iVar22;
  if (((float)((uint)uVar20 << 0x10) < 0.0) || ((float)((uint)uVar24 << 0x10) < 0.0)) {
    uVar7 = FUN_03186710(lVar15 + 0x60,lVar16 + 0x60,param_3);
    uVar5 = uVar7;
    if (0.0 <= (float)((uint)uVar20 << 0x10)) {
      uVar5 = uVar20;
    }
    uVar20 = uVar5;
    if ((float)((uint)uVar24 << 0x10) < 0.0) {
      uVar24 = uVar7;
    }
  }
  FUN_0318bd3c(lVar15,param_2,param_3,uVar20,param_4);
  FUN_0318bd3c(lVar16,param_2,param_3,uVar24,param_4 + 0x20);
  lVar15 = *(long *)(param_1 + 0x38);
  plVar12 = (long *)(lVar15 + lVar18 * 0xf0 + 0xa0);
  lVar16 = FUN_0317c8b8(plVar12,local_80);
  if ((lVar16 == 0) ||
     (uVar13 = (ulong)*(uint *)(lVar16 + 4) |
               (lVar16 - *(long *)(lVar15 + lVar18 * 0xf0 + 0xb0)) * 0x20000000, (int)uVar13 < 0)) {
    iVar11 = *(int *)(param_1 + 0x50);
    lVar16 = tpidr_el0;
    lVar14 = *(long *)(lVar16 + 0x38d490);
    if (lVar14 == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar16 + 0x38d490) = lVar14;
    }
    plVar21 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
    plVar21 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x38,0);
    *plVar21 = (long)&PTR_LAB_0430a690;
    plVar21[1] = 0xffffffff;
    plVar21[4] = 0;
    plVar21[5] = 0;
    plVar21[2] = 1;
    plVar21[6] = -0x8000000000000000;
    *(int *)(plVar21 + 3) = iVar22;
    *(int *)((long)plVar21 + 0x1c) = iVar19;
    iVar10 = *(int *)(param_1 + 0x50);
    lVar16 = *(long *)(param_1 + 0x48);
    iVar22 = iVar10 + 1;
    if ((int)(*(uint *)(param_1 + 0x54) & 0x3fffffff) <= iVar10) {
      lVar16 = FUN_0317a650(PTR_PTR_0434a080,iVar22);
      iVar10 = *(int *)(param_1 + 0x50);
      *(long *)(param_1 + 0x48) = lVar16;
    }
    puVar9 = (undefined8 *)(lVar16 + (long)iVar10 * 0x18);
    *(int *)(param_1 + 0x50) = iVar22;
    *puVar9 = 0;
    puVar9[1] = 0;
    *(undefined1 *)(puVar9 + 2) = 1;
    local_88 = plVar21;
    FUN_03178344(puVar9,&local_88);
    if ((local_88 != (long *)0x0) && (local_88[1] != 0)) {
      plVar3 = local_88 + 2;
      do {
        lVar16 = *plVar3;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(*local_88 + 0x18))();
      }
    }
    plVar3 = (long *)(lVar15 + (long)iVar19 * 0xf0 + 0xa0);
    uVar8 = FUN_0317c494(plVar12,local_80);
    puVar23 = (uint *)(lVar15 + lVar18 * 0xf0 + 0xa8);
    if (*puVar23 == uVar8) {
      uVar2 = uVar8 + 1;
      lVar16 = *plVar12;
      if ((int)(*(uint *)(lVar15 + lVar18 * 0xf0 + 0xac) & 0x3fffffff) <= (int)uVar8) {
        lVar16 = FUN_0317c57c(PTR_PTR_0434a080,uVar2);
        *plVar12 = lVar16;
        uVar8 = *puVar23;
      }
      piVar1 = (int *)(lVar16 + (long)(int)uVar8 * 8);
      *piVar1 = local_80[0];
      piVar1[1] = iVar11;
      *puVar23 = uVar2;
    }
    else {
      *(int *)(*plVar12 + ((long)((ulong)uVar8 << 0x20) >> 0x1d) + 4) = iVar11;
    }
    uVar8 = FUN_0317c494(plVar3,local_78);
    puVar23 = (uint *)(lVar15 + (long)iVar19 * 0xf0 + 0xa8);
    if (*puVar23 == uVar8) {
      uVar2 = uVar8 + 1;
      lVar16 = *plVar3;
      if ((int)(*(uint *)(lVar15 + (long)iVar19 * 0xf0 + 0xac) & 0x3fffffff) <= (int)uVar8) {
        lVar16 = FUN_0317c57c(PTR_PTR_0434a080,uVar2);
        *plVar3 = lVar16;
        uVar8 = *puVar23;
      }
      piVar1 = (int *)(lVar16 + (long)(int)uVar8 * 8);
      *piVar1 = local_78[0];
      piVar1[1] = iVar11;
      *puVar23 = uVar2;
    }
    else {
      *(int *)(*plVar3 + ((long)((ulong)uVar8 << 0x20) >> 0x1d) + 4) = iVar11;
    }
  }
  else {
    puVar9 = (undefined8 *)
             (*(long *)(param_1 + 0x48) +
             (long)*(int *)(*plVar12 + ((long)(uVar13 << 0x20) >> 0x1d) + 4) * 0x18);
    if (*(char *)(puVar9 + 2) == '\x01') {
      plVar21 = (long *)*puVar9;
    }
    else {
      plVar21 = (long *)FUN_0317cc14();
    }
  }
  iVar11 = (int)plVar21[6];
  lVar16 = plVar21[5];
  iVar22 = iVar11 + 1;
  if ((int)(*(uint *)((long)plVar21 + 0x34) & 0x3fffffff) <= iVar11) {
    lVar16 = FUN_0317d168(PTR_PTR_0434a080,iVar22);
    iVar11 = (int)plVar21[6];
    plVar21[5] = lVar16;
  }
  *(int *)(plVar21 + 6) = iVar22;
  puVar17 = (undefined4 *)(lVar16 + (long)iVar11 * 0xc);
  bVar6 = (int)plVar21[3] != local_78[0];
  if (bVar6) {
    *puVar17 = *(undefined4 *)(param_3 + 0x3c);
    puVar17 = (undefined4 *)(param_3 + 0x38);
  }
  else {
    *puVar17 = *(undefined4 *)(param_3 + 0x38);
    puVar17 = (undefined4 *)(param_3 + 0x3c);
  }
  lVar16 = lVar16 + (long)iVar11 * 0xc;
  *(undefined4 *)(lVar16 + 4) = *puVar17;
  *(undefined2 *)(lVar16 + 8) = *(undefined2 *)(param_4 + (ulong)bVar6 * 0x20 + 0x18);
  *(undefined2 *)(lVar16 + 10) = *(undefined2 *)(param_4 + (ulong)!bVar6 * 0x20 + 0x18);
  return;
}


