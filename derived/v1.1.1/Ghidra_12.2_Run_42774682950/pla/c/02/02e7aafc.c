/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7aafc; name: FUN_02e7aafc
 */


void FUN_02e7aafc(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = *(long **)(param_1 + 0x28);
  if (plVar3 != (long *)0x0) {
    plVar5 = (long *)0x0;
    do {
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar4[3] == param_2) {
        plVar1 = (long *)(param_1 + 0x28);
        if (*(long **)(param_1 + 0x28) != plVar4) {
          plVar1 = plVar5;
        }
        lVar2 = plVar4[2];
        *plVar1 = (long)plVar3;
        if (*(long **)(param_1 + 0x20) == plVar4) {
          *(long **)(param_1 + 0x20) = plVar5;
        }
        *(undefined8 *)(lVar2 + 0x10) = 0;
        FUN_02e7be30(plVar4);
        FUN_02e7b5fc(plVar4);
        if (plVar3 == (long *)0x0) {
          return;
        }
      }
      plVar5 = plVar4;
    } while (plVar3 != (long *)0x0);
  }
  return;
}


