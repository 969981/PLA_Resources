/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00163010; name: FUN_00163010
 */


void FUN_00163010(char *param_1,char *param_2,ulong param_3)

{
  ulong __n;
  char *pcVar1;
  size_t __n_00;
  char *pcVar2;
  
  __n = strlen(param_2);
  if (*param_2 == '@') {
    if (param_3 < __n) {
      param_1[2] = '.';
      param_1[0] = '.';
      param_1[1] = '.';
      memcpy(param_1 + 3,param_2 + (__n - param_3) + 4,param_3 - 3);
      return;
    }
  }
  else {
    if (*param_2 != '=') {
      pcVar1 = strchr(param_2,10);
      param_1[8] = '\"';
      pcVar2 = param_1 + 9;
      *(undefined8 *)param_1 = s__string___0398d445._0_8_;
      __n_00 = param_3 - 0xf;
      if ((__n < __n_00) && (pcVar1 == (char *)0x0)) {
        memcpy(pcVar2,param_2,__n);
        pcVar2 = pcVar2 + __n;
      }
      else {
        if (pcVar1 != (char *)0x0) {
          __n = (long)pcVar1 - (long)param_2;
        }
        if (__n <= __n_00) {
          __n_00 = __n;
        }
        memcpy(pcVar2,param_2,__n_00);
        pcVar2 = pcVar2 + __n_00;
        pcVar2[0] = '.';
        pcVar2[1] = '.';
        pcVar2[2] = '.';
        pcVar2 = pcVar2 + 3;
      }
      pcVar2[2] = '\0';
      pcVar2[0] = '\"';
      pcVar2[1] = ']';
      return;
    }
    if (param_3 < __n) {
      memcpy(param_1,param_2 + 1,param_3 - 1);
      param_1[param_3 - 1] = '\0';
      return;
    }
  }
  memcpy(param_1,param_2 + 1,__n);
  return;
}


