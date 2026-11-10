/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a1bec; name: FUN_013a1bec
 */


void FUN_013a1bec(long *param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *param_2;
  lVar2 = *param_1;
  FUN_00d4041c(lVar2,cVar1);
  lVar2 = *(long *)(lVar2 + 0x4c8);
  if ((lVar2 == 0) || (lVar2 = FUN_0139a0d0(lVar2,"View_Top"), lVar2 == 0)) {
    return;
  }
  FUN_013cfb98(lVar2,cVar1 != '\0');
  return;
}


