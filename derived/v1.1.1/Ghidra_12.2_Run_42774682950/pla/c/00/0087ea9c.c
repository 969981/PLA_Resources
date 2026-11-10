/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087ea9c; name: FUN_0087ea9c
 */


void FUN_0087ea9c(undefined1 *param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_c0 [128];
  
  (**(code **)PTR_DAT_04378a30)(auStack_c0,*param_2);
  FUN_0087c39c(auStack_c0,param_3);
  (**(code **)PTR_DAT_04378ab8)(auStack_c0,*param_4,param_5);
  if ((*(byte *)(param_3 + 0x10) >> 5 & 1) != 0) {
    FUN_0087ef00(auStack_c0,param_4,param_5,param_6);
  }
  *(undefined1 **)(param_1 + 8) = param_1 + 0x10;
  (**(code **)PTR_DAT_04378bd0)(param_1 + 0x10,auStack_c0);
  param_1[1] = param_1[1] & 0xfe;
  *param_1 = 1;
  return;
}


