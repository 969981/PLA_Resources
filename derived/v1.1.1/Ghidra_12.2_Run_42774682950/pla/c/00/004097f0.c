/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004097f0; name: FUN_004097f0
 */


long FUN_004097f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [4];
  int local_2c;
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = *param_2;
  uVar1 = FUN_00409ce0(&local_18,&local_28,&local_2c,auStack_30,param_3);
  if ((uVar1 >> 7 & 1) == 0) {
    if (local_2c == 6) {
      lVar2 = FUN_004098a0(param_1,&local_18,local_28);
      if (lVar2 != 0) {
        *param_2 = local_18;
      }
      return lVar2;
    }
    uVar3 = 0x74;
  }
  else {
    uVar3 = 0x66;
  }
  FUN_004014b0(0xd,0x93,uVar3,"external/openssl/crypto/asn1/a_object.c",0xeb);
  return 0;
}


