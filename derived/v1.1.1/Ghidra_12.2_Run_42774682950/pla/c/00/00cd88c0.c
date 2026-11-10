/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd88c0; name: FUN_00cd88c0
 */


void FUN_00cd88c0(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  char *__s;
  char *__s_00;
  char acStack_40 [8];
  undefined8 local_38;
  
  __s = (char *)*param_2;
  sVar1 = strlen(__s);
  sVar2 = strlen(param_3);
  __s_00 = acStack_40 + -(sVar1 + sVar2 + 0x2a & 0xfffffffffffffff0);
  local_38 = __s_00;
  *__s_00 = '\0';
  sVar1 = strlen(__s_00);
  pcVar3 = __s_00 + sVar1;
  *(undefined8 *)(pcVar3 + 0x10) = s_escape_probability_plrank__03927801._16_8_;
  pcVar3[0x17] = 'n';
  pcVar3[0x18] = 'k';
  pcVar3[0x19] = '_';
  pcVar3[0x1a] = '\0';
  *(undefined8 *)pcVar3 = s_escape_probability_plrank__03927801._0_8_;
  *(undefined8 *)(pcVar3 + 8) = s_escape_probability_plrank__03927801._8_8_;
  pcVar3 = strcat(__s_00,__s);
  strcat(pcVar3,param_3);
  FUN_009313e8(param_1,&local_38);
  return;
}


