/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e42ac; name: FUN_005e42ac
 */


bool FUN_005e42ac(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((((*param_1 == *param_2) &&
       (iVar1 = memcmp(param_1 + 1,param_2 + 1,(long)*param_1), iVar1 == 0)) &&
      (param_1[5] == param_2[5])) &&
     (iVar1 = strncmp((char *)(param_1 + 6),(char *)(param_2 + 6),0x32), iVar1 == 0)) {
    return *(char *)((long)param_1 + 0x4a) == *(char *)((long)param_2 + 0x4a);
  }
  return false;
}


