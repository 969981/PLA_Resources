/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8da74; name: FUN_02e8da74
 */


undefined8 FUN_02e8da74(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  
  *(long *)(param_1 + 0xd8) = param_3;
  if ((param_3 == 0) || (lVar6 = *(long *)(param_1 + 0x40), lVar6 == 0)) {
LAB_02e8daa0:
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    plVar5 = *(long **)(lVar6 + 0x28);
    uVar7 = *(uint *)(lVar6 + 0x30);
    plVar2 = plVar5 + uVar7;
    if ((uVar7 != 0) && (*plVar5 != param_3)) {
      lVar8 = (ulong)uVar7 * 8;
      plVar9 = plVar5;
      do {
        lVar8 = lVar8 + -8;
        if (lVar8 == 0) goto LAB_02e8daa0;
        plVar5 = plVar9 + 1;
        plVar1 = plVar9 + 1;
        plVar9 = plVar5;
      } while (*plVar1 != param_3);
      if (plVar2 != plVar5) goto LAB_02e8dadc;
      goto LAB_02e8daa0;
    }
    if (plVar2 == plVar5) goto LAB_02e8daa0;
LAB_02e8dadc:
    if (1 < uVar7) {
      *plVar5 = plVar2[-1];
      uVar7 = *(uint *)(lVar6 + 0x30);
    }
    *(uint *)(lVar6 + 0x30) = uVar7 - 1;
    if (uVar7 - 1 != 0) goto LAB_02e8daa0;
    *(undefined4 *)(lVar6 + 0x3c) = 6;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (param_2 == 0) {
LAB_02e8daa8:
    uVar4 = 1;
    *(long *)(param_1 + 0x40) = param_2;
  }
  else {
    plVar5 = *(long **)(param_2 + 0x28);
    uVar7 = *(uint *)(param_2 + 0x30);
    lVar6 = *(long *)(param_1 + 0xd8);
    plVar2 = plVar5;
    if ((uVar7 != 0) && (*plVar5 != lVar6)) {
      lVar8 = (ulong)uVar7 * 8;
      plVar9 = plVar5;
      do {
        lVar8 = lVar8 + -8;
        plVar2 = plVar5 + uVar7;
        if (lVar8 == 0) break;
        plVar2 = plVar9 + 1;
        plVar1 = plVar9 + 1;
        plVar9 = plVar2;
      } while (*plVar1 != lVar6);
    }
    if ((plVar2 == (long *)0x0) || (plVar5 + uVar7 == plVar2)) {
      uVar10 = *(uint *)(param_2 + 0x34);
      if (uVar10 <= uVar7) {
        iVar3 = uVar10 + (uVar10 >> 1);
        if (uVar10 == 0) {
          iVar3 = 1;
        }
        uVar10 = iVar3 + uVar10;
        plVar5 = (long *)(*DAT_0442d148)(0,plVar5,(ulong)uVar10 << 3);
        if (plVar5 == (long *)0x0) goto LAB_02e8dc30;
        *(long **)(param_2 + 0x28) = plVar5;
        *(uint *)(param_2 + 0x34) = uVar10;
      }
      if (uVar7 < uVar10) {
        uVar7 = *(uint *)(param_2 + 0x30);
        *(uint *)(param_2 + 0x30) = uVar7 + 1;
        if (plVar5 + uVar7 != (long *)0x0) {
          plVar5[uVar7] = lVar6;
          goto LAB_02e8daa8;
        }
      }
    }
LAB_02e8dc30:
    uVar4 = 2;
  }
  return uVar4;
}


