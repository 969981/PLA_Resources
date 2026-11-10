/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee80f4; name: FUN_02ee80f4
 */


bool FUN_02ee80f4(long param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  char local_14 [4];
  
  if ((*param_2 == 0) && (*param_3 != 0)) {
    lVar2 = FUN_02eb1afc(param_1 + 0x10,*param_3,local_14);
    bVar1 = lVar2 != 0 && local_14[0] != '\0';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


