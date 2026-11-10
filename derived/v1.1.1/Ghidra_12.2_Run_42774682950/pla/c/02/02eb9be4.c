/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb9be4; name: FUN_02eb9be4
 */


void FUN_02eb9be4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_28;
  undefined1 local_20;
  undefined8 local_18;
  
  local_40 = 0;
  local_30 = 0;
  bVar1 = false;
  local_38 = 0;
  local_28 = 0xff;
  local_20 = 0xff;
  local_18 = 0;
  if (*param_2 == 0) {
    if (((((int)param_2[1] == 0) && ((int)param_2[2] == 0)) && ((char)param_2[3] == -1)) &&
       ((char)param_2[4] == -1)) {
      bVar1 = param_2[5] == 0;
    }
    else {
      bVar1 = false;
    }
  }
  FUN_02ebd7ac(param_1,param_2,&local_40,&local_40,param_3,bVar1);
  return;
}


