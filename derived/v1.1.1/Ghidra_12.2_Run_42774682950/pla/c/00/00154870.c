/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154870; name: FUN_00154870
 */


char * FUN_00154870(undefined8 param_1,undefined4 param_2,char *param_3,size_t *param_4)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  
  iVar1 = FUN_00150310();
  if (iVar1 < 1) {
    if (param_4 != (size_t *)0x0) {
      if (param_3 == (char *)0x0) {
        *param_4 = 0;
      }
      else {
        sVar3 = strlen(param_3);
        *param_4 = sVar3;
      }
    }
  }
  else {
    param_3 = (char *)FUN_00150da0(param_1,param_2,param_4);
    if (param_3 == (char *)0x0) {
      uVar2 = FUN_001503f0(param_1,4);
      FUN_00154670(param_1,param_2,uVar2);
    }
  }
  return param_3;
}


