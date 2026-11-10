/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001dcfe8; name: FUN_001dcfe8
 */


void FUN_001dcfe8(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar2 = FUN_002053bc(0);
  lVar4 = 0;
  do {
    plVar1 = (long *)(param_1 + lVar4 * 8);
    plVar3 = (long *)*plVar1;
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)0x0;
      do {
        plVar6 = (long *)*plVar3;
        if (plVar3[6] == 0 || lVar2 <= plVar3[6]) {
          plVar5 = plVar3;
        }
        else {
          plVar3 = plVar1;
          if (plVar5 != (long *)0x0) {
            plVar3 = plVar5;
          }
          *plVar3 = (long)plVar6;
          *(long *)(param_1 + 0x810) = *(long *)(param_1 + 0x810) + -1;
          FUN_001dce58();
        }
        plVar3 = plVar6;
      } while (plVar6 != (long *)0x0);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x100);
  return;
}


