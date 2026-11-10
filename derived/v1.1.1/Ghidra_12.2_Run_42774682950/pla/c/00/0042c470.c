/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042c470; name: FUN_0042c470
 */


undefined8
FUN_0042c470(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  
  local_18 = param_4;
  puVar2 = (undefined8 *)FUN_0042c9b0(param_2,param_3,param_6);
  if (puVar2 == (undefined8 *)0x0) {
    *param_5 = 0;
    return 0;
  }
  uVar1 = FUN_0041f020(puVar2,&local_18,&DAT_04164080);
  *param_5 = uVar1;
  FUN_0040c140(*puVar2);
  FUN_0040c140(puVar2[1]);
  FUN_00400420(puVar2,"external/openssl/crypto/dsa/dsa_asn1.c",0x26);
  return 1;
}


