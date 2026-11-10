/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee7f6c; name: FUN_02ee7f6c
 */


byte FUN_02ee7f6c(long param_1,char *param_2,char *param_3)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  char local_28 [4];
  char local_24 [4];
  
  if (*param_3 == -1) {
    bVar2 = 0;
  }
  else {
    lVar3 = FUN_02eb19c4(param_1 + 0x10,*param_3,local_28);
    lVar4 = 0;
    if (local_28[0] != '\0') {
      lVar4 = lVar3;
    }
    if (lVar4 == 0) {
      lVar3 = FUN_02eb19c4(param_1 + 0x10,0xff,local_24);
      lVar4 = 0;
      if (local_24[0] != '\0') {
        lVar4 = lVar3;
      }
    }
    if ((*param_2 == -1) && (param_2[8] == -1)) {
      bVar1 = *(long *)(param_2 + 0x10) == 0;
    }
    else {
      bVar1 = false;
    }
    bVar2 = lVar4 != 0 & bVar1;
    if ((bVar1 == false) && (lVar4 != 0)) {
      bVar2 = FUN_02ee8038(lVar4,param_2 + 8,param_3 + 8);
    }
  }
  return bVar2 & 1;
}


