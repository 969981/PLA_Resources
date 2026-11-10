/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee8038; name: FUN_02ee8038
 */


byte FUN_02ee8038(long param_1,char *param_2,char *param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  char local_28 [4];
  char local_24 [4];
  
  if (*param_3 == -1) {
    bVar1 = 0;
  }
  else {
    lVar2 = FUN_02eb1a90(param_1 + 0x10,*param_3,local_28);
    lVar3 = 0;
    if (local_28[0] != '\0') {
      lVar3 = lVar2;
    }
    if (lVar3 == 0) {
      lVar2 = FUN_02eb1a90(param_1 + 0x10,0xff,local_24);
      lVar3 = 0;
      if (local_24[0] != '\0') {
        lVar3 = lVar2;
      }
    }
    bVar1 = lVar3 != 0 && (*param_2 == -1 && *(long *)(param_2 + 8) == 0);
    if ((*param_2 != -1 || *(long *)(param_2 + 8) != 0) && (lVar3 != 0)) {
      bVar1 = FUN_02ee80f4(lVar3,param_2 + 8,param_3 + 8);
    }
  }
  return bVar1 & 1;
}


