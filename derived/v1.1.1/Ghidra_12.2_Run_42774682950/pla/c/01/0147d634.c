/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147d634; name: FUN_0147d634
 */


undefined8 FUN_0147d634(long param_1)

{
  int *piVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  lVar7 = *(long *)(param_1 + 0x628);
  if (*(long *)(param_1 + 0x630) != lVar7) {
    uVar4 = *(ulong *)(param_1 + 0x660);
    uVar2 = *(long *)(param_1 + 0x668) + uVar4;
    lVar6 = *(long *)(lVar7 + (uVar4 / 0x2e) * 8) + (uVar4 % 0x2e) * 0x58;
    lVar5 = *(long *)(lVar7 + (uVar2 / 0x2e) * 8) + (uVar2 % 0x2e) * 0x58;
    if (lVar6 != lVar5) {
      plVar8 = (long *)(lVar7 + (uVar4 / 0x2e) * 8);
      bVar3 = false;
      plVar9 = plVar8;
      lVar7 = lVar6;
      do {
        piVar1 = (int *)(lVar7 + 0x18);
        if (*piVar1 == 0) goto LAB_0147d6e4;
        lVar7 = lVar7 + 0x58;
        if (lVar7 - *plVar9 == 0xfd0) {
          plVar9 = plVar9 + 1;
          lVar7 = *plVar9;
        }
        bVar3 = (bool)(bVar3 | *piVar1 == 0);
      } while (lVar5 != lVar7);
      if (bVar3) {
LAB_0147d6e4:
        plVar9 = plVar8;
        lVar7 = lVar6;
        while (*(int *)(lVar7 + 0x18) != 1) {
          lVar7 = lVar7 + 0x58;
          if (lVar7 - *plVar9 == 0xfd0) {
            plVar9 = plVar9 + 1;
            lVar7 = *plVar9;
          }
          if (lVar5 == lVar7) {
            return 1;
          }
        }
        while (*(int *)(lVar6 + 0x18) != 2) {
          lVar6 = lVar6 + 0x58;
          if (lVar6 - *plVar8 == 0xfd0) {
            plVar8 = plVar8 + 1;
            lVar6 = *plVar8;
          }
          if (lVar5 == lVar6) {
            return 2;
          }
        }
      }
    }
  }
  return 0;
}


