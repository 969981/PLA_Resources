/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b8536c; name: FUN_01b8536c
 */


long FUN_01b8536c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  if (plVar4 != plVar2) {
    do {
      uVar3 = FUN_01b853dc(plVar4);
      if ((uVar3 & 1) != 0) goto LAB_01b853a8;
      plVar4 = plVar4 + 1;
    } while (plVar2 != plVar4);
    plVar4 = plVar2;
LAB_01b853a8:
    if (plVar4 != (long *)param_2[1]) {
      lVar1 = 0;
      if (*plVar4 != 0) {
        lVar1 = *plVar4 + -0x48;
      }
      return lVar1;
    }
  }
  return 0;
}


