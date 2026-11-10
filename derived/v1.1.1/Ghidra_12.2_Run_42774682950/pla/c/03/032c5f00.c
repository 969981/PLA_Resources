/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c5f00; name: FUN_032c5f00
 */


long * FUN_032c5f00(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  lVar4 = (long)(int)param_1[1] + -1;
  iVar3 = -1;
  lVar6 = lVar4;
  do {
    lVar2 = lVar6 + -1;
    if (lVar6 < 1) goto LAB_032c5f44;
    lVar1 = *param_1 + lVar6;
    lVar6 = lVar2;
  } while (*(char *)(lVar1 + -1) != '\\');
  iVar3 = (int)lVar2;
LAB_032c5f44:
  iVar5 = -1;
  do {
    lVar6 = lVar4 + -1;
    if (lVar4 < 1) goto LAB_032c5f6c;
    lVar2 = *param_1 + lVar4;
    lVar4 = lVar6;
  } while (*(char *)(lVar2 + -1) != '/');
  iVar5 = (int)lVar6;
LAB_032c5f6c:
  if (iVar3 <= iVar5) {
    iVar3 = iVar5;
  }
  if (iVar3 < 0) {
    FUN_032c4f40(param_1);
  }
  else {
    FUN_032c4fd4();
  }
  return param_1;
}


