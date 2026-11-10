/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c6730; name: FUN_032c6730
 */


long * FUN_032c6730(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  lVar3 = (long)(int)param_1[1] + -1;
  iVar4 = -1;
  lVar6 = lVar3;
  do {
    lVar2 = lVar6 + -1;
    if (lVar6 < 1) goto LAB_032c6774;
    lVar1 = *param_1 + lVar6;
    lVar6 = lVar2;
  } while (*(char *)(lVar1 + -1) != '\\');
  iVar4 = (int)lVar2;
LAB_032c6774:
  iVar5 = -1;
  lVar6 = lVar3;
  do {
    lVar2 = lVar6 + -1;
    if (lVar6 < 1) goto LAB_032c67a0;
    lVar1 = *param_1 + lVar6;
    lVar6 = lVar2;
  } while (*(char *)(lVar1 + -1) != '/');
  iVar5 = (int)lVar2;
LAB_032c67a0:
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  iVar5 = 1 - (int)param_1[1];
  do {
    if (lVar3 <= iVar4 + 1) goto LAB_032c67e4;
    lVar6 = *param_1 + lVar3;
    lVar3 = lVar3 + -1;
    iVar5 = iVar5 + 1;
  } while (*(char *)(lVar6 + -1) != '.');
  if (iVar5 == 1) {
LAB_032c67e4:
    FUN_032c4f40(param_1);
  }
  else {
    FUN_032c5c98(param_1,-iVar5);
  }
  return param_1;
}


