/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebbe74; name: FUN_02ebbe74
 */


long FUN_02ebbe74(long param_1,char *param_2)

{
  long lVar1;
  char local_14 [4];
  
  if (((*param_2 == -1) && (param_2[8] == -1)) && (*(long *)(param_2 + 0x10) == 0)) {
    lVar1 = 0;
    if (*(char *)(param_1 + 0x10) != '\0') {
      lVar1 = param_1 + 8;
    }
  }
  else {
    lVar1 = FUN_02ebbfcc(param_1 + 0x18,*param_2,local_14);
    if ((lVar1 != 0) && (local_14[0] != '\0')) {
      lVar1 = FUN_02ebbf5c(lVar1,param_2 + 8);
      return lVar1;
    }
    lVar1 = 0;
  }
  return lVar1;
}


