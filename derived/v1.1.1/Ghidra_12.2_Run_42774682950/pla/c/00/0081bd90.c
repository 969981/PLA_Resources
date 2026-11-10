/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081bd90; name: FUN_0081bd90
 */


long FUN_0081bd90(long param_1,ulong param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  if (0 < *(int *)(param_1 + 0xe8)) {
    plVar1 = (long *)(param_1 + 0xd8);
    if ((*plVar1 != 0) && (lVar5 = *plVar1 - (long)*(int *)(param_1 + 0xec), lVar5 != 0)) {
      if (param_3 == 2) {
        lVar3 = 0;
        do {
          if ((param_2 <= *(ulong *)(lVar5 + 0x18)) &&
             ((lVar3 == 0 || (*(ulong *)(lVar3 + 0x18) < *(ulong *)(lVar5 + 0x18))))) {
            lVar3 = lVar5;
          }
          plVar4 = *(long **)(*(int *)(param_1 + 0xec) + lVar5);
        } while ((plVar4 != plVar1) &&
                (lVar5 = (long)plVar4 - (long)*(int *)(param_1 + 0xec), lVar5 != 0));
      }
      else if (param_3 == 1) {
        lVar3 = 0;
        uVar6 = *(ulong *)(lVar5 + 0x18);
        while( true ) {
          if ((param_2 <= uVar6) && ((lVar3 == 0 || (uVar6 < *(ulong *)(lVar3 + 0x18))))) {
            lVar3 = lVar5;
          }
          plVar4 = *(long **)(*(int *)(param_1 + 0xec) + lVar5);
          lVar5 = 0;
          if (plVar4 != plVar1) {
            lVar5 = (long)plVar4 - (long)*(int *)(param_1 + 0xec);
          }
          if (lVar5 == 0) break;
          uVar6 = *(ulong *)(lVar5 + 0x18);
        }
      }
      else if (param_3 == 0) {
        do {
          if (param_2 <= *(ulong *)(lVar5 + 0x18)) {
            return lVar5;
          }
          plVar4 = *(long **)(*(int *)(param_1 + 0xec) + lVar5);
          if (plVar4 == plVar1) {
            return 0;
          }
          lVar3 = 0;
          lVar5 = (long)plVar4 - (long)*(int *)(param_1 + 0xec);
        } while (lVar5 != 0);
      }
      else {
        lVar3 = 0;
        do {
          lVar2 = lVar5;
          if (lVar3 != 0) {
            lVar2 = lVar3;
          }
          plVar4 = *(long **)(*(int *)(param_1 + 0xec) + lVar5);
          if (param_2 <= *(ulong *)(lVar5 + 0x18)) {
            lVar3 = lVar2;
          }
          lVar5 = (long)plVar4 - (long)*(int *)(param_1 + 0xec);
        } while (plVar4 != plVar1 && lVar5 != 0);
      }
      return lVar3;
    }
  }
  return 0;
}


