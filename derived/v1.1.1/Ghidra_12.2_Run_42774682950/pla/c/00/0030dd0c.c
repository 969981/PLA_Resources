/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030dd0c; name: FUN_0030dd0c
 */


byte FUN_0030dd0c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  byte bVar2;
  undefined1 auStack_90 [32];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined6 uStack_58;
  undefined2 local_52;
  undefined4 uStack_50;
  char cStack_4c;
  undefined1 uStack_4b;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_0030e2f8(auStack_90,param_2,param_3,0xffffffff);
  local_70 = 0;
  uStack_68 = 0;
  local_40 = 0x7fffffff;
  uStack_58 = 0;
  local_3c = *(undefined4 *)PTR_DAT_04373a40;
  local_52 = 0;
  uStack_50 = 0;
  cStack_4c = '\0';
  uStack_4b = 0;
  local_48 = DAT_0388a820;
  local_30 = 0;
  uStack_28 = 0;
                    /* try { // try from 0030dd60 to 0030dd67 has its CatchHandler @ 0030ddb4 */
  local_60 = auStack_90;
  uStack_38 = local_3c;
  FUN_0030fad0(&local_70);
  if (*param_1 != param_1[1]) {
                    /* try { // try from 0030dd74 to 0030dd87 has its CatchHandler @ 0030ddb8 */
    FUN_0030cac0(param_1);
  }
  bVar2 = FUN_0030daec(param_1,&local_70);
  bVar1 = cStack_4c != '\0';
  FUN_0030f8e8(&local_70);
  return bVar2 & bVar1;
}


