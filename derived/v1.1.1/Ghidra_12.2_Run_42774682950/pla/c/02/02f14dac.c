/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f14dac; name: FUN_02f14dac
 */


long FUN_02f14dac(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (DAT_0440ae08 != 0) {
    lVar3 = (ulong)DAT_0440ae08 << 3;
    plVar2 = DAT_0440ae00;
    do {
      lVar1 = *plVar2;
      if (((*(long *)(lVar1 + 0x68) == *param_1) && (*(long *)(lVar1 + 0x70) == param_1[1])) &&
         ((*(long *)(lVar1 + 8) == 0 ||
          (*(char *)(*(long *)(*(long *)(lVar1 + 8) + 0x10) + 0x54) != '\0')))) {
        return lVar1;
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return 0;
}


