/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081bed8; name: FUN_0081bed8
 */


long FUN_0081bed8(long param_1,ulong param_2,int param_3,int param_4)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  
  if (0 < *(int *)(param_1 + 0xe8)) {
    plVar1 = (long *)(param_1 + 0xd8);
    if (*plVar1 != 0) {
      lVar5 = *plVar1 - (long)*(int *)(param_1 + 0xec);
      if (lVar5 != 0) {
        iVar6 = 0x20 - (int)param_2;
        uVar2 = param_3 - 1;
        if (param_4 == 1) {
          uVar7 = *(ulong *)(lVar5 + 0x18);
          lVar3 = lVar5;
          lVar5 = 0;
          while( true ) {
            if (((param_2 <= uVar7) &&
                ((iVar6 + (int)lVar3 + (int)uVar7 + (uint)*(ushort *)(lVar3 + 0x12) & uVar2) +
                 param_2 <= uVar7)) && ((lVar5 == 0 || (uVar7 < *(ulong *)(lVar5 + 0x18))))) {
              lVar5 = lVar3;
            }
            plVar8 = *(long **)(lVar3 + *(int *)(param_1 + 0xec));
            lVar3 = 0;
            if (plVar8 != plVar1) {
              lVar3 = (long)plVar8 - (long)*(int *)(param_1 + 0xec);
            }
            if (lVar3 == 0) break;
            uVar7 = *(ulong *)(lVar3 + 0x18);
          }
        }
        else {
          lVar3 = lVar5;
          if (param_4 == 0) {
            do {
              uVar7 = *(ulong *)(lVar3 + 0x18);
              if ((param_2 <= uVar7) &&
                 ((iVar6 + (int)lVar3 + (int)uVar7 + (uint)*(ushort *)(lVar3 + 0x12) & uVar2) +
                  param_2 <= uVar7)) {
                return lVar3;
              }
              plVar8 = *(long **)(lVar3 + *(int *)(param_1 + 0xec));
              if (plVar8 == plVar1) {
                return 0;
              }
              lVar3 = (long)plVar8 - (long)*(int *)(param_1 + 0xec);
              lVar5 = 0;
            } while (lVar3 != 0);
          }
          else {
            lVar4 = 0;
            do {
              uVar7 = *(ulong *)(lVar3 + 0x18);
              lVar5 = lVar4;
              if (((param_2 <= uVar7) &&
                  ((iVar6 + (int)lVar3 + (int)uVar7 + (uint)*(ushort *)(lVar3 + 0x12) & uVar2) +
                   param_2 <= uVar7)) &&
                 ((lVar4 == 0 || ((param_4 == 2 && (*(ulong *)(lVar4 + 0x18) < uVar7)))))) {
                lVar5 = lVar3;
              }
              plVar8 = *(long **)(lVar3 + *(int *)(param_1 + 0xec));
            } while ((plVar8 != plVar1) &&
                    (lVar3 = (long)plVar8 - (long)*(int *)(param_1 + 0xec), lVar4 = lVar5,
                    lVar3 != 0));
          }
        }
      }
      return lVar5;
    }
  }
  return 0;
}


