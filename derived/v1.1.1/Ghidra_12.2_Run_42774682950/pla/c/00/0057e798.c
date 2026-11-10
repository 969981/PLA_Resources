/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057e798; name: FUN_0057e798
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057e798(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined8 local_40;
  undefined *puStack_38;
  undefined1 *local_30;
  undefined *puStack_28;
  
  local_50 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  uStack_58 = _UNK_03889f78;
  local_60 = _DAT_03889f70;
  uVar1 = CONCAT53(s_OAuth2TokenFetcherCredentials_038e6b71._16_5_,
                   s_OAuth2TokenFetcherCredentials_038e6b71._13_3_);
  *(undefined8 *)(local_50 + 0x15) = s_OAuth2TokenFetcherCredentials_038e6b71._21_8_;
  *(undefined8 *)(local_50 + 0xd) = uVar1;
  puStack_38 = PTR_LAB_043737d8;
  uVar1 = s_OAuth2TokenFetcherCredentials_038e6b71._0_8_;
  *(ulong *)(local_50 + 8) =
       CONCAT35(s_OAuth2TokenFetcherCredentials_038e6b71._13_3_,
                s_OAuth2TokenFetcherCredentials_038e6b71._8_5_);
  *(undefined8 *)local_50 = uVar1;
  local_50[0x1d] = '\0';
  local_40 = *(undefined8 *)(param_2 + 0x90);
  puStack_28 = PTR_LAB_04374a18;
                    /* try { // try from 0057e808 to 0057e823 has its CatchHandler @ 0057e84c */
  local_30 = (undefined1 *)&local_60;
  FUN_002e6390(param_1,"GoogleRefreshToken{ClientID:%s,%s}",0x22,&local_40,2);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  return;
}


