/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03340f78; name: FUN_03340f78
 */


void FUN_03340f78(ulong *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (DAT_0444b3c8 != '\0') {
    plVar3 = (long *)(*param_1 & 0xfffffffffffffffc);
    if (plVar3 != (long *)0x0) {
      if ((*param_1 & 3) == 0) {
        *param_1 = (ulong)plVar3 | 1;
        do {
          lVar2 = *plVar3;
          plVar3 = (long *)(plVar3[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar3 != (long *)0x0);
        *param_1 = 0;
      }
      else {
        do {
          plVar1 = (long *)(plVar3[1] & 0xfffffffffffffffc);
          plVar3[1] = (ulong)plVar1 | 1;
          plVar3 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
  }
  return;
}


