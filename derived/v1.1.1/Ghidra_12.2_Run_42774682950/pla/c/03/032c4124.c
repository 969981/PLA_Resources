/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4124; name: FUN_032c4124
 */


int FUN_032c4124(long *param_1,char param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[1];
  do {
    if (*param_1 == lVar2) {
      return -1;
    }
    lVar3 = lVar2 + -1;
    pcVar1 = (char *)(lVar2 + -1);
    lVar2 = lVar3;
  } while (*pcVar1 != param_2);
  return (int)lVar3 - (int)*param_1;
}


