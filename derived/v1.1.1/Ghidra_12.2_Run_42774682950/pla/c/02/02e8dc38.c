/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8dc38; name: FUN_02e8dc38
 */


undefined8 FUN_02e8dc38(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  uint uVar10;
  
  *(long *)(param_1 + 0xd8) = param_3;
  if ((param_3 == 0) || (lVar5 = *(long *)(param_1 + 0x48), lVar5 == 0)) {
LAB_02e8dc5c:
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    plVar6 = *(long **)(lVar5 + 0x28);
    uVar8 = *(uint *)(lVar5 + 0x30);
    plVar2 = plVar6 + uVar8;
    if ((uVar8 != 0) && (*plVar6 != param_3)) {
      lVar7 = (ulong)uVar8 * 8;
      plVar9 = plVar6;
      do {
        lVar7 = lVar7 + -8;
        if (lVar7 == 0) {
          plVar6 = plVar2;
          break;
        }
        plVar6 = plVar9 + 1;
        plVar1 = plVar9 + 1;
        plVar9 = plVar6;
      } while (*plVar1 != param_3);
    }
    if (plVar2 == plVar6) goto LAB_02e8dc5c;
    if (1 < uVar8) {
      *plVar6 = plVar2[-1];
      uVar8 = *(uint *)(lVar5 + 0x30);
    }
    *(uint *)(lVar5 + 0x30) = uVar8 - 1;
    if (uVar8 - 1 != 0) goto LAB_02e8dc5c;
    *(undefined4 *)(lVar5 + 0x3c) = 6;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (param_2 == 0) {
LAB_02e8dc64:
    *(long *)(param_1 + 0x48) = param_2;
    uVar4 = 1;
  }
  else {
    plVar6 = *(long **)(param_2 + 0x28);
    uVar8 = *(uint *)(param_2 + 0x30);
    lVar5 = *(long *)(param_1 + 0xd8);
    plVar2 = plVar6;
    if ((uVar8 != 0) && (*plVar6 != lVar5)) {
      lVar7 = (ulong)uVar8 * 8;
      plVar9 = plVar6;
      do {
        lVar7 = lVar7 + -8;
        plVar2 = plVar6 + uVar8;
        if (lVar7 == 0) break;
        plVar2 = plVar9 + 1;
        plVar1 = plVar9 + 1;
        plVar9 = plVar2;
      } while (*plVar1 != lVar5);
    }
    if ((plVar2 == (long *)0x0) || (plVar6 + uVar8 == plVar2)) {
      uVar10 = *(uint *)(param_2 + 0x34);
      if (uVar10 <= uVar8) {
        iVar3 = uVar10 + (uVar10 >> 1);
        if (uVar10 == 0) {
          iVar3 = 1;
        }
        uVar10 = iVar3 + uVar10;
        plVar6 = (long *)(*DAT_0442d148)(0,plVar6,(ulong)uVar10 << 3);
        if (plVar6 == (long *)0x0) goto LAB_02e8de10;
        *(long **)(param_2 + 0x28) = plVar6;
        *(uint *)(param_2 + 0x34) = uVar10;
      }
      if (uVar8 < uVar10) {
        uVar8 = *(uint *)(param_2 + 0x30);
        *(uint *)(param_2 + 0x30) = uVar8 + 1;
        if (plVar6 + uVar8 != (long *)0x0) {
          plVar6[uVar8] = lVar5;
          goto LAB_02e8dc64;
        }
      }
    }
LAB_02e8de10:
    uVar4 = 2;
  }
  return uVar4;
}


