/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee5370; name: FUN_02ee5370
 */


void FUN_02ee5370(long param_1,int *param_2)

{
  long lVar1;
  char local_24 [4];
  
  if ((((*param_2 == 0) && ((char)param_2[2] == -1)) && ((char)param_2[4] == -1)) &&
     (*(long *)(param_2 + 6) == 0)) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    lVar1 = FUN_02eb18a8(param_1 + 0x10,*param_2,local_24);
    if (((lVar1 != 0) && (local_24[0] != '\0')) &&
       ((FUN_02ee5418(lVar1,param_2 + 2), *(char *)(lVar1 + 0xc) == '\0' &&
        (*(int *)(lVar1 + 0x18) == 0)))) {
      FUN_02ee4908(lVar1);
      FUN_02ee49e4(param_1 + 0x10,*param_2);
    }
  }
  return;
}


