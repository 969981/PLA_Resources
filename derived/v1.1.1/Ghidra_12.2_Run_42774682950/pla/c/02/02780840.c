/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02780840; name: FUN_02780840
 */


void FUN_02780840(char *param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5,
                 long param_6)

{
  int iVar1;
  
  if (param_1 != param_2) {
    while (param_3 != param_4) {
      iVar1 = strcmp(param_1,param_3);
      if (iVar1 < 0) {
        param_6 = FUN_02780914(param_5,param_6,param_1);
        param_6 = param_6 + 0x18;
        param_1 = param_1 + 0x18;
      }
      else {
        iVar1 = strcmp(param_3,param_1);
        if (-1 < iVar1) {
          param_1 = param_1 + 0x18;
        }
        param_3 = param_3 + 0x18;
      }
      if (param_1 == param_2) {
        return;
      }
    }
    do {
      param_6 = FUN_02780914(param_5,param_6,param_1);
      param_1 = param_1 + 0x18;
      param_6 = param_6 + 0x18;
    } while (param_2 != param_1);
  }
  return;
}


