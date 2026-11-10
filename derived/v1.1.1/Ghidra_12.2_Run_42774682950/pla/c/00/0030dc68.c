/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030dc68; name: FUN_0030dc68
 */


byte FUN_0030dc68(long *param_1,undefined8 param_2)

{
  bool bVar1;
  byte bVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined6 uStack_48;
  undefined2 local_42;
  undefined4 uStack_40;
  char cStack_3c;
  undefined1 uStack_3b;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_60 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  local_30 = 0x7fffffff;
  local_2c = *(undefined4 *)PTR_DAT_04373a40;
  local_42 = 0;
  uStack_40 = 0;
  cStack_3c = '\0';
  uStack_3b = 0;
  local_38 = DAT_0388a820;
  local_20 = 0;
  uStack_18 = 0;
  local_50 = param_2;
  uStack_28 = local_2c;
  FUN_0030fad0(&local_60);
  if (*param_1 != param_1[1]) {
                    /* try { // try from 0030dcbc to 0030dccf has its CatchHandler @ 0030dcf8 */
    FUN_0030cac0(param_1);
  }
  bVar2 = FUN_0030daec(param_1,&local_60);
  bVar1 = cStack_3c != '\0';
  FUN_0030f8e8(&local_60);
  return bVar2 & bVar1;
}


