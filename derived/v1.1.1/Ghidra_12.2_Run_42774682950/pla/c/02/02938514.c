/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02938514; name: FUN_02938514
 */


undefined8
FUN_02938514(long *param_1,char *param_2,long param_3,int param_4,char *param_5,char *param_6)

{
  ulong uVar1;
  size_t sVar2;
  char *pcVar3;
  ulong __n;
  
  if ((param_2 == (char *)0x0) || (uVar1 = strlen(param_2), 0x103 < uVar1)) {
    return 0x1f;
  }
  if (param_6 == (char *)0x0) {
    pcVar3 = param_5;
    if (*param_1 == 0) goto LAB_029385b4;
    param_6 = (char *)(*param_1 + 8);
  }
  sVar2 = strlen(param_6);
  __n = sVar2 + 1;
  if (0x102 < __n) {
    __n = 0x103;
  }
  strncpy(param_5,param_6,__n);
  pcVar3 = param_5 + __n;
LAB_029385b4:
  *pcVar3 = '\0';
  if ((((param_3 != 0) && (param_4 == 0)) && (*(char *)(param_3 + 0x18) != '\0')) &&
     (sVar2 = strlen(&DAT_0440a0c8), sVar2 != 0)) {
    uVar1 = uVar1 + sVar2 + 1;
    if (0x103 < uVar1) {
      return 2;
    }
    FUN_02938870(param_5,&DAT_0440a0c8,0x104);
    FUN_02938870(param_5,&DAT_0389ffa9,0x104);
  }
  sVar2 = strlen(param_5);
  if (sVar2 + uVar1 < 0x104) {
    FUN_02938870(param_5,param_2,0x104);
    return 1;
  }
  return 2;
}


