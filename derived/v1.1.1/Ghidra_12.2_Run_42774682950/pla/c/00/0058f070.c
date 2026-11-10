/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058f070; name: FUN_0058f070
 */


long FUN_0058f070(long param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 local_38;
  
  if (param_1 == 0) {
    if (param_4 != (undefined8 *)0x0) {
      pcVar4 = (char *)FUN_002ebd50(0x14);
      *param_4 = pcVar4;
      pcVar4[0x10] = 't';
      uVar1 = s_crypter_is_nullptr__038f09fd._0_8_;
      pcVar4[0x11] = 'r';
      pcVar4[0x12] = '.';
      pcVar4[0x13] = '\0';
      *(undefined8 *)(pcVar4 + 8) = s_crypter_is_nullptr__038f09fd._8_8_;
      *(undefined8 *)pcVar4 = uVar1;
      return 0;
    }
  }
  else {
    lVar3 = FUN_002ebd50(0x18);
    local_38 = 0;
    iVar2 = FUN_0058f5f0(param_1,&local_38,param_4);
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = FUN_0058f140(param_2 & 1,local_38,param_3,lVar3 + 0x10,param_4);
    if (iVar2 == 0) {
      *(long *)(lVar3 + 8) = param_1;
      return lVar3;
    }
  }
  return 0;
}


