/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee3cc8; name: FUN_02ee3cc8
 */


long FUN_02ee3cc8(long param_1,char *param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char local_24 [4];
  
  cVar3 = *param_2;
  if (((cVar3 == -1) && (param_2[8] == -1)) && (*(long *)(param_2 + 0x10) == 0)) {
    if (param_4 != 0) {
      *(bool *)param_4 = *(int *)(param_1 + 0x18) != 0;
    }
    lVar2 = 0;
    if (*(char *)(param_1 + 0xc) != '\0') {
      lVar2 = param_1 + 8;
    }
  }
  else {
    if ((param_3 != (long *)0x0) && (*(char *)(param_1 + 0xc) != '\0')) {
      *param_3 = param_1 + 8;
      cVar3 = *param_2;
    }
    lVar1 = FUN_02eb19c4(param_1 + 0x10,cVar3,local_24);
    lVar2 = 0;
    if ((lVar1 != 0) && (local_24[0] != '\0')) {
      lVar2 = FUN_02ee3d88(lVar1,param_2 + 8,param_3,param_4);
    }
  }
  return lVar2;
}


