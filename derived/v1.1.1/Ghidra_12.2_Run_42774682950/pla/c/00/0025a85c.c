/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025a85c; name: FUN_0025a85c
 */


long FUN_0025a85c(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (param_1 + 0x10 == lVar2) {
      return 0;
    }
    iVar1 = strcmp((char *)(lVar2 + 0x10),param_2);
    if (iVar1 == 0) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  return lVar2;
}


