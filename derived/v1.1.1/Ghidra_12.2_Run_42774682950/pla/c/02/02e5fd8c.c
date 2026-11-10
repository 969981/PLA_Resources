/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5fd8c; name: FUN_02e5fd8c
 */


undefined8 FUN_02e5fd8c(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)(param_1 + 1) != 0) {
    lVar3 = *param_1;
    uVar1 = *(uint *)(param_2 + 0x40);
    if (uVar1 == 0) {
      piVar4 = (int *)(lVar3 + 0x40);
      do {
        if (*piVar4 == 0) {
          return 1;
        }
        piVar4 = piVar4 + 0x14;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    else {
      uVar5 = 0;
      do {
        if (*(uint *)(lVar3 + uVar5 * 0x50 + 0x40) == uVar1) {
          plVar6 = (long *)(*(long *)(param_2 + 0x38) + 0x18);
          plVar7 = (long *)(*(long *)(lVar3 + uVar5 * 0x50 + 0x38) + 0x18);
          uVar8 = (ulong)uVar1;
          do {
            lVar9 = *plVar6;
            if (*plVar7 == 0) {
              if ((lVar9 != 0) || (plVar7[-1] != plVar6[-1])) break;
            }
            else if ((lVar9 == 0) || (*plVar7 != lVar9)) break;
            uVar8 = uVar8 - 1;
            plVar6 = plVar6 + 4;
            plVar7 = plVar7 + 4;
            if (uVar8 == 0) {
              return 1;
            }
          } while( true );
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar2);
    }
  }
  return 0;
}


