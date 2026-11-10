/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c40ec; name: FUN_032c40ec
 */


int FUN_032c40ec(long *param_1,uint param_2,int param_3)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  
  lVar1 = *param_1;
  pvVar3 = (void *)(lVar1 + param_3);
  pvVar3 = memchr(pvVar3,param_2 & 0xff,param_1[1] - (long)pvVar3);
  iVar2 = (int)pvVar3 - (int)lVar1;
  if (pvVar3 == (void *)0x0) {
    iVar2 = -1;
  }
  return iVar2;
}


