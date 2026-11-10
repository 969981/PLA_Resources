/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f71c70; name: FUN_02f71c70
 */


void FUN_02f71c70(void)

{
  long lVar1;
  long in_x3;
  long in_x5;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(in_x5 + 0x28) == 0) {
    FUN_02f79da4();
    return;
  }
  lVar2 = *(long *)(in_x3 + 0x30);
  plVar3 = (long *)0x0;
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + in_x3 + 0x30);
  }
  if (*(int *)(in_x3 + 0x38) != 0) {
    lVar2 = (long)*(int *)(in_x3 + 0x38) << 3;
    do {
      lVar1 = *plVar3 + (long)plVar3;
      if ((*plVar3 != 0 && lVar1 != 0) && (*(short *)(lVar1 + 0x18) == -0xfeb)) {
        FUN_02f7a120();
        return;
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  if (*(char *)(in_x3 + 0x100) == '\x02') {
    FUN_02f7a49c();
    return;
  }
  FUN_02f7a818();
  return;
}


