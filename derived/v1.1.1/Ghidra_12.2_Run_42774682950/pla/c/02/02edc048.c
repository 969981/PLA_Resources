/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edc048; name: FUN_02edc048
 */


long * FUN_02edc048(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  puVar11 = (undefined8 *)(param_1 + 0x88);
  plVar5 = (long *)*puVar11;
  uVar2 = *(uint *)(param_1 + 0x90);
  if ((uVar2 == 0) || (*plVar5 == param_2)) {
    plVar4 = plVar5;
  }
  else {
    lVar6 = (ulong)uVar2 * 0x30;
    plVar10 = plVar5;
    do {
      lVar6 = lVar6 + -0x30;
      if (lVar6 == 0) goto LAB_02edc158;
      plVar4 = plVar10 + 6;
      plVar1 = plVar10 + 6;
      plVar10 = plVar4;
    } while (*plVar1 != param_2);
  }
  if (plVar4 == plVar5 + (ulong)uVar2 * 6) {
LAB_02edc158:
    plVar4 = (long *)FUN_02edc290(puVar11);
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar4 = param_2;
  }
  uVar2 = *(uint *)(DAT_0440a140 + 0x38);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = (uint)param_2 / uVar2;
    }
    plVar5 = *(long **)(*(long *)(DAT_0440a140 + 0x30) + (ulong)((uint)param_2 - uVar3 * uVar2) * 8)
    ;
    if (plVar5 != (long *)0x0) {
      do {
        if (plVar5[1] == param_2) {
          if ((2 < *(uint *)(plVar5[2] + 0x40)) &&
             (lVar6 = *(long *)(*(long *)(plVar5[2] + 0x38) + 0x10), lVar6 != 0)) {
            plVar4[1] = *(long *)(lVar6 + 0x3c);
            lVar7 = *(long *)(lVar6 + 0x44);
            lVar8 = *(long *)(lVar6 + 0x4c);
            lVar9 = *(long *)(lVar6 + 0x54);
            *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(lVar6 + 0x5c);
            plVar4[3] = lVar8;
            plVar4[4] = lVar9;
            plVar4[2] = lVar7;
            return plVar4 + 1;
          }
          break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  FUN_02edc16c(puVar11,param_2);
  return (long *)0x0;
}


