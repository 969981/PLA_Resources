/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058f710; name: FUN_0058f710
 */


undefined8
FUN_0058f710(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  
  if (param_4 == (undefined8 *)0x0) {
    if (param_5 != (undefined8 *)0x0) {
      pcVar3 = (char *)FUN_002ebd50(0x14);
      *param_5 = pcVar3;
      uVar1 = s_crypter_is_nullptr__038f09fd._0_8_;
      *(undefined8 *)(pcVar3 + 8) = s_crypter_is_nullptr__038f09fd._8_8_;
      *(undefined8 *)pcVar3 = uVar1;
      pcVar3[0x10] = 't';
      pcVar3[0x11] = 'r';
      pcVar3[0x12] = '.';
      pcVar3[0x13] = '\0';
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_0058f070(param_1,param_2 & 1,param_3,param_5);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_LAB_0418a0f8;
      *param_4 = puVar2;
      return 0;
    }
  }
  return 9;
}


