/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02901220; name: FUN_02901220
 */


undefined8 FUN_02901220(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x38);
  do {
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    lVar2 = plVar1[6];
    if (*(long *)(lVar2 + 0x68) == 0) {
      if ((((*(long *)(lVar2 + 0x38) == 0) && (*(long *)(lVar2 + 0x90) != 0)) &&
          (lVar2 = *(long *)(*(long *)(lVar2 + 0x90) + 0x38), lVar2 != 0)) &&
         ((*(char *)(lVar2 + 0x1e1) != '\0' && (*(long *)(lVar2 + 0x270) != 0)))) {
        for (plVar3 = *(long **)(*(long *)(lVar2 + 0x270) + 0x38); plVar3 != (long *)0x0;
            plVar3 = (long *)*plVar3) {
          if (*(long *)plVar3[6] != 0) {
            return 1;
          }
        }
      }
    }
    else {
      lVar2 = *(long *)(*(long *)(lVar2 + 0x68) + 0x2a8);
      if (((lVar2 != 0) && (*(char *)(lVar2 + 0x1e1) != '\0')) && (*(long *)(lVar2 + 0x270) != 0)) {
        for (plVar3 = *(long **)(*(long *)(lVar2 + 0x270) + 0x38); plVar3 != (long *)0x0;
            plVar3 = (long *)*plVar3) {
          if (*(long *)plVar3[6] != 0) {
            return 1;
          }
        }
      }
    }
    plVar1 = (long *)*plVar1;
  } while( true );
}


