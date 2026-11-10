/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a73d0; name: FUN_011a73d0
 */


void FUN_011a73d0(undefined8 param_1,int param_2)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = 0xf9a7cfd98593df65;
  pcStack_38 = "InputCancelPP";
  local_30 = 0xd;
  uStack_28 = 0;
  FUN_011a8190(param_1,&local_40,param_2 == 0);
  local_40 = 0x3cae549e3a17ee90;
  pcStack_38 = "InputCancelGLv";
  local_30 = 0xe;
  uStack_28 = 0;
  FUN_011a8190(param_1,&local_40,param_2 == 1);
  return;
}


