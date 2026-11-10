/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00449320; name: FUN_00449320
 */


undefined8 FUN_00449320(undefined8 param_1,char *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_3 == -1) {
    strlen(param_2);
  }
  if (param_4 - 0x1000U < 5) {
                    /* WARNING: Could not recover jumptable at 0x004493b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK_004493b8 + (ulong)(byte)(&DAT_03a0bf80)[param_4 - 0x1000] * 4))();
    return uVar1;
  }
  FUN_004014b0(0xd,0x7a,0xa0,"external/openssl/crypto/asn1/a_mbstr.c",0x5f);
  return 0xffffffff;
}


