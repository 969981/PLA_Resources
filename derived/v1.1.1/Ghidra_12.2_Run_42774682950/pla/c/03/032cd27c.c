/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cd27c; name: FUN_032cd27c
 */


undefined8 FUN_032cd27c(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  
  iVar1 = *(int *)(param_2 + 0x18);
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar6;
  }
  lVar6 = *(long *)(lVar6 + 8);
  uVar14 = (ulong)(int)(iVar1 * 8 + 0x7fU & 0xffffff80);
  if (*(ulong *)(lVar6 + 0x10) < uVar14) {
LAB_032cd4cc:
    plVar5 = (long *)FUN_032ce670(lVar6,uVar14);
  }
  else {
    plVar5 = *(long **)(lVar6 + 0x18);
    if (*(ulong *)(lVar6 + 0x20) < (long)plVar5 + uVar14) goto LAB_032cd4cc;
    *(ulong *)(lVar6 + 0x18) = (long)plVar5 + uVar14;
  }
  plVar9 = *(long **)(param_2 + 0x10);
  uVar16 = 0;
  plVar11 = (long *)*param_1;
  plVar8 = (long *)((long)plVar9 + param_1[1] * *(long *)(param_2 + 0x18));
  plVar12 = param_1;
  if (plVar11 != (long *)0x0) {
    while( true ) {
      if ((plVar11 < plVar9) || (plVar8 <= plVar11)) {
        plVar3 = (long *)*plVar11;
        plVar12 = plVar11;
      }
      else {
        plVar5[(int)uVar16] = (long)plVar11;
        uVar16 = uVar16 + 1;
        *plVar12 = *plVar11;
        plVar3 = (long *)*plVar11;
      }
      plVar11 = plVar3;
      if (plVar11 == (long *)0x0) break;
    }
  }
  plVar11 = (long *)param_1[8];
  if ((plVar11 < plVar9) || (plVar8 <= plVar11)) {
    if (uVar16 == *(uint *)(param_2 + 0x18)) {
      uVar15 = 1;
      goto LAB_032cd45c;
    }
  }
  else {
    iVar1 = 0;
    if (param_1[1] != 0) {
      iVar1 = (int)((ulong)(param_1[9] - (long)plVar11) / (ulong)param_1[1]);
    }
    if (uVar16 + iVar1 == *(int *)(param_2 + 0x18)) {
      uVar15 = 1;
      param_1[8] = 0;
      param_1[9] = 0;
      goto LAB_032cd45c;
    }
  }
  uVar2 = uVar16 - 1;
  if ((int)uVar16 < 1) {
    uVar15 = 0;
  }
  else {
    if (uVar2 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_032ce290(plVar5,0,(ulong)uVar2);
      plVar9 = (long *)*plVar5;
      uVar7 = (ulong)uVar2 & 3;
      if ((ulong)uVar16 - 2 < 3) {
        lVar6 = 1;
      }
      else {
        plVar11 = plVar5 + 2;
        lVar6 = 1;
        do {
          puVar13 = (undefined8 *)plVar11[-1];
          *plVar9 = (long)puVar13;
          puVar10 = (undefined8 *)*plVar11;
          *puVar13 = puVar10;
          plVar12 = (long *)plVar11[1];
          *puVar10 = plVar12;
          plVar9 = (long *)plVar11[2];
          lVar6 = lVar6 + 4;
          plVar11 = plVar11 + 4;
          *plVar12 = (long)plVar9;
        } while (uVar16 - uVar7 != lVar6);
      }
      if ((uVar2 & 3) != 0) {
        plVar11 = plVar5 + lVar6;
        do {
          plVar12 = (long *)*plVar11;
          *plVar9 = (long)plVar12;
          uVar7 = uVar7 - 1;
          plVar9 = plVar12;
          plVar11 = plVar11 + 1;
        } while (uVar7 != 0);
      }
      lVar6 = (long)(int)uVar2;
    }
    uVar15 = 0;
    *(long *)plVar5[lVar6] = *param_1;
    *param_1 = *plVar5;
  }
LAB_032cd45c:
  lVar6 = *(long *)(lVar4 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar6;
  }
  lVar4 = *(long *)(lVar6 + 8);
  if (((*(ulong *)(lVar4 + 0x10) < uVar14) || (*(long *)(lVar4 + 0x18) != (long)plVar5 + uVar14)) ||
     (*(long **)(lVar4 + 0x28) == plVar5)) {
    FUN_032cedf0(lVar4,plVar5,uVar14);
  }
  else {
    *(long **)(lVar4 + 0x18) = plVar5;
  }
  return uVar15;
}


