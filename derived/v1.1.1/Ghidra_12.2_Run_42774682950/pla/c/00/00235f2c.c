/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00235f2c; name: FUN_00235f2c
 */


long FUN_00235f2c(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (*(int *)(param_1 + 0x48) == 0) {
LAB_00235f78:
    lVar3 = 0;
  }
  else {
    plVar4 = (long *)(param_1 + 0x40);
    do {
      lVar2 = *plVar4;
      if (lVar2 == param_1 + 0x38) goto LAB_00235f78;
      lVar3 = *(long *)(lVar2 + -0x20);
      plVar4 = (long *)(lVar2 + 8);
      iVar1 = strcmp(param_2,*(char **)(lVar3 + 0x10));
    } while (iVar1 != 0);
  }
  return lVar3;
}


