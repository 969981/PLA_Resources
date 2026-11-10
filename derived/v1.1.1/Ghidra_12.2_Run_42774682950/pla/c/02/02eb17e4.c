/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb17e4; name: FUN_02eb17e4
 */


long FUN_02eb17e4(long param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  char local_28 [4];
  char local_24 [4];
  
  if (((*param_2 == -1) && (param_2[8] == -1)) && (*(long *)(param_2 + 0x10) == 0))
  goto LAB_02eb187c;
  lVar1 = FUN_02eb19c4(param_1 + 0x10,*param_2,local_28);
  lVar2 = 0;
  if (local_28[0] != '\0') {
    lVar2 = lVar1;
  }
  if (lVar2 == 0) {
    if (*param_2 == -1) goto LAB_02eb187c;
    *param_2 = -1;
    lVar2 = FUN_02eb19c4(param_1 + 0x10,0xff,local_24);
    if ((lVar2 == 0) || (local_24[0] == '\0')) goto LAB_02eb187c;
  }
  lVar2 = FUN_02eb1914(lVar2,param_2 + 8);
  if (lVar2 != 0) {
    return lVar2;
  }
LAB_02eb187c:
  param_2[8] = -1;
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  lVar2 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    lVar2 = param_1 + 8;
  }
  return lVar2;
}


