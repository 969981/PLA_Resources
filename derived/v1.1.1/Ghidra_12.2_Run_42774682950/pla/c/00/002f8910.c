/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f8910; name: FUN_002f8910
 */


void FUN_002f8910(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  
  uVar11 = (int)param_1[1] - 1;
  uVar7 = *(uint *)(param_2 + 8);
  uVar12 = (ulong)uVar7;
  if (uVar7 == uVar11) {
    *(uint *)(param_1 + 1) = uVar7;
    if ((7 < uVar7) && (uVar7 <= *(uint *)((long)param_1 + 0xc) >> 2)) {
      *(uint *)((long)param_1 + 0xc) = uVar7 << 1;
      lVar2 = FUN_002ebdc0(*param_1,(ulong)(uVar7 << 1) << 3);
      *param_1 = lVar2;
    }
    return;
  }
  *(undefined8 *)(*param_1 + uVar12 * 8) = *(undefined8 *)(*param_1 + (ulong)uVar11 * 8);
  lVar2 = *param_1;
  plVar3 = *(long **)(lVar2 + uVar12 * 8);
  *(uint *)(plVar3 + 1) = uVar7;
  *(uint *)(param_1 + 1) = uVar11;
  if ((7 < uVar11) && (uVar11 <= *(uint *)((long)param_1 + 0xc) >> 2)) {
    *(uint *)((long)param_1 + 0xc) = uVar11 * 2;
    lVar2 = FUN_002ebdc0(lVar2,(ulong)(uVar11 * 2) << 3);
    *param_1 = lVar2;
    plVar3 = *(long **)(lVar2 + uVar12 * 8);
    uVar12 = (ulong)*(uint *)(plVar3 + 1);
  }
  uVar11 = (uint)uVar12;
  uVar7 = uVar11;
  if (-1 < (int)(uVar11 - 1)) {
    uVar7 = uVar11 - 1;
  }
  lVar4 = *plVar3;
  if (lVar4 < **(long **)(lVar2 + (ulong)(uint)((int)uVar7 >> 1) * 8)) {
    if (uVar11 == 0) {
      uVar5 = 0;
    }
    else {
      do {
        uVar11 = (uint)uVar12;
        uVar5 = uVar11;
        if (-1 < (int)(uVar11 - 1)) {
          uVar5 = uVar11 - 1;
        }
        uVar5 = (int)uVar5 >> 1;
        plVar6 = *(long **)(lVar2 + (ulong)uVar5 * 8);
        if (*plVar6 <= lVar4) goto LAB_002f8a90;
        *(long **)(lVar2 + uVar12 * 8) = plVar6;
        *(uint *)(plVar6 + 1) = uVar11;
        uVar12 = (ulong)uVar5;
      } while (2 < uVar11);
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 1);
    uVar7 = uVar11 << 1 | 1;
    if (uVar7 < uVar1) {
      do {
        plVar6 = *(long **)(lVar2 + (ulong)uVar7 * 8);
        uVar11 = uVar7 + 1;
        lVar8 = *plVar6;
        uVar5 = uVar7;
        if (uVar11 < uVar1) {
          plVar9 = *(long **)(lVar2 + (ulong)uVar11 * 8);
          lVar10 = *plVar9;
          if (lVar10 < lVar8) {
            plVar6 = plVar9;
            uVar5 = uVar11;
            lVar8 = lVar10;
          }
        }
        uVar11 = (uint)uVar12;
        if (lVar4 <= lVar8) goto LAB_002f8a90;
        uVar7 = uVar5 << 1 | 1;
        *(long **)(lVar2 + uVar12 * 8) = plVar6;
        *(uint *)(plVar6 + 1) = (uint)uVar12;
        uVar12 = (ulong)uVar5;
      } while (uVar7 < uVar1);
    }
    else {
LAB_002f8a90:
      uVar5 = uVar11;
    }
  }
  *(long **)(lVar2 + (ulong)uVar5 * 8) = plVar3;
  *(uint *)(plVar3 + 1) = uVar5;
  return;
}


