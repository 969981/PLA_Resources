/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4730; name: FUN_032c4730
 */


int FUN_032c4730(char *param_1,int param_2,undefined8 param_3,char *param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = *param_5;
  uStack_28 = param_5[1];
  local_20 = param_5[2];
  uStack_18 = param_5[3];
  iVar1 = vsnprintf(param_1,(long)param_2,param_4,&local_30);
  return iVar1;
}


