/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00447e00; name: FUN_00447e00
 */


undefined8 FUN_00447e00(undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [56];
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  lVar2 = FUN_00448130(&uStack_28,auStack_68);
  if (lVar2 == 0) {
    FUN_004014b0(0xd,0xd9,0xad,"external/openssl/crypto/asn1/a_time.c",0x14a);
  }
  else if (((param_3 == 0) && (param_4 == 0)) ||
          (iVar1 = FUN_00448150(lVar2,param_3,param_4), iVar1 != 0)) {
    uVar3 = FUN_00447cb0(param_1,lVar2,0xffffffff);
    return uVar3;
  }
  return 0;
}


