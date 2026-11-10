/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154770; name: FUN_00154770
 */


ulong FUN_00154770(undefined8 param_1,undefined4 param_2,char *param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  char *__s1;
  ulong uVar3;
  
  if (param_3 == (char *)0x0) {
    param_3 = (char *)FUN_00150da0(param_1,param_2);
  }
  else {
    iVar1 = FUN_00150310(param_1,param_2);
    if (iVar1 < 1) goto LAB_001547e0;
    param_3 = (char *)FUN_00150da0(param_1,param_2,0);
  }
  if (param_3 == (char *)0x0) {
    uVar2 = FUN_001503f0(param_1,4);
    FUN_00154670(param_1,param_2,uVar2);
  }
LAB_001547e0:
  __s1 = (char *)*param_4;
  if (__s1 != (char *)0x0) {
    uVar3 = 0;
    do {
      iVar1 = strcmp(__s1,param_3);
      if (iVar1 == 0) {
        return uVar3 & 0xffffffff;
      }
      __s1 = (char *)param_4[uVar3 + 1];
      uVar3 = uVar3 + 1;
    } while (__s1 != (char *)0x0);
  }
  uVar2 = FUN_00151650(param_1,"invalid option \'%s\'",param_3);
  uVar3 = FUN_00154010(param_1,param_2,uVar2);
  return uVar3;
}


