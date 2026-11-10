/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f06bf0; name: FUN_02f06bf0
 */


undefined8 FUN_02f06bf0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    plVar4 = (long *)0x0;
    do {
      while (plVar2 = plVar1, plVar2[1] != param_2) {
        plVar1 = (long *)*plVar2;
        plVar4 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) {
          return 1;
        }
      }
      if (*(char *)(param_1 + 0x38) == '\0') {
        plVar1 = (long *)*plVar2;
        if (*(long **)(param_1 + 0x10) == plVar2) {
          plVar3 = (long *)(param_1 + 0x10);
        }
        else {
          plVar3 = plVar4;
        }
        *plVar3 = (long)plVar1;
        if (*(long **)(param_1 + 0x18) == plVar2) {
          *(long **)(param_1 + 0x18) = plVar4;
        }
        if ((plVar2 < *(long **)(param_1 + 0x28)) ||
           (*(long **)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x30) * 3 <= plVar2)) {
          (*DAT_0442d150)(0);
        }
        else {
          *plVar2 = *(long *)(param_1 + 0x20);
          *(long **)(param_1 + 0x20) = plVar2;
        }
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      }
      else {
        plVar1 = (long *)*plVar2;
        plVar2[1] = 0;
        *(undefined1 *)(param_1 + 0x39) = 1;
        plVar4 = plVar2;
      }
    } while (plVar1 != (long *)0x0);
  }
  return 1;
}


