/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00459960; name: FUN_00459960
 */


long FUN_00459960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  iVar1 = FUN_00407950(param_3);
  lVar2 = FUN_00407210(0,iVar1);
  if (lVar2 == 0) {
    FUN_004014b0(0x22,0x76,0x41,"external/openssl/crypto/x509v3/v3_alt.c",0x182);
    FUN_00407010(0);
  }
  else if (0 < iVar1) {
    iVar5 = 0;
    do {
      uVar3 = FUN_00407970(param_3,iVar5);
      lVar4 = FUN_00459a60(0,param_1,param_2,uVar3,0);
      if (lVar4 == 0) {
        FUN_004078c0(lVar2,PTR_FUN_04374170);
        return 0;
      }
      FUN_00407800(lVar2,lVar4);
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  return lVar2;
}


