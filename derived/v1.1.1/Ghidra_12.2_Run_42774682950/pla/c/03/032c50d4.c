/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c50d4; name: FUN_032c50d4
 */


int FUN_032c50d4(long *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  
  iVar1 = (int)param_1[1] + -1;
  lVar3 = *param_1;
  if (iVar1 <= param_4) {
    param_4 = iVar1;
  }
  pvVar2 = memchr((void *)(lVar3 + param_3),param_2 & 0xff,(long)(param_4 - param_3));
  iVar1 = (int)pvVar2 - (int)lVar3;
  if (pvVar2 == (void *)0x0) {
    iVar1 = -1;
  }
  return iVar1;
}


