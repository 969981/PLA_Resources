/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8dfec; name: FUN_02e8dfec
 */


void FUN_02e8dfec(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar3 = FUN_02f0e5a8(), (uVar3 & 1) != 0)) {
    lVar4 = *(long *)(param_1 + 0x48);
    if ((lVar4 != 0) && (lVar8 = *(long *)(param_1 + 0xd8), lVar8 != 0)) {
      plVar6 = *(long **)(lVar4 + 0x28);
      uVar5 = *(uint *)(lVar4 + 0x30);
      plVar2 = plVar6 + uVar5;
      if ((uVar5 != 0) && (*plVar6 != lVar8)) {
        lVar9 = (ulong)uVar5 * 8;
        plVar7 = plVar6;
        do {
          lVar9 = lVar9 + -8;
          if (lVar9 == 0) goto LAB_02e8e014;
          plVar6 = plVar7 + 1;
          plVar1 = plVar7 + 1;
          plVar7 = plVar6;
        } while (*plVar1 != lVar8);
      }
      if (plVar2 != plVar6) {
        if (1 < uVar5) {
          *plVar6 = plVar2[-1];
          uVar5 = *(uint *)(lVar4 + 0x30);
        }
        *(uint *)(lVar4 + 0x30) = uVar5 - 1;
        if (uVar5 - 1 == 0) {
          *(undefined4 *)(lVar4 + 0x3c) = 6;
        }
      }
    }
LAB_02e8e014:
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}


