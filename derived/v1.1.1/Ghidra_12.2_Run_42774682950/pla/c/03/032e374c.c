/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e374c; name: FUN_032e374c
 */


undefined2 * FUN_032e374c(void *param_1,int param_2,int param_3,long *param_4)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = (param_3 + param_2) * 8;
  puVar2 = (undefined2 *)(**(code **)(*param_4 + 0x10))(param_4,(long)(iVar1 + 8),0);
  *puVar2 = (short)param_2;
  puVar2[1] = (short)param_3;
  puVar2[2] = (short)(param_3 + param_2);
  if (param_1 == (void *)0x0) {
    memset(puVar2 + 4,0,(long)iVar1 & 0xfffffff8);
  }
  else {
    memcpy(puVar2 + 4,param_1,(long)iVar1);
  }
  return puVar2;
}


