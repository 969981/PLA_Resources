/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c65108; name: FUN_02c65108
 */


void FUN_02c65108(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  
  FUN_02c5a394();
  *param_1 = &PTR_LAB_0428ae40;
  param_1[9] = &PTR_LAB_0428ae80;
  FUN_02c64e4c(param_1,param_2);
  lVar3 = param_1[0x13];
  bVar1 = *(char *)(lVar3 + 0x19) == '\0';
  if (bVar1) {
    FUN_02c66480();
    lVar3 = param_1[0x13];
  }
  FUN_02c65bf0(lVar3);
  FUN_02c5bb1c(param_1,1);
  uVar2 = FUN_02c66e84(param_1[0x13]);
  FUN_02c788b4(param_1[0x13],uVar2);
  FUN_02c77f1c(param_1[0x13],0);
  FUN_02c60328(param_1);
  if ((bVar1) && (*(char *)(param_1[0x13] + 0x19) != '\0')) {
    FUN_02c66640();
    return;
  }
  return;
}


