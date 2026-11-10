/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d7ac0; name: thunk_FUN_004d7ad0
 */


undefined8 thunk_FUN_004d7ad0(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_44 [20];
  
  iVar1 = FUN_0040c070(param_3);
  iVar2 = iVar1 + 0xe;
  if (-1 < iVar1 + 7) {
    iVar2 = iVar1 + 7;
  }
  if (((param_1 != param_3) && (iVar1 = FUN_0040cc00(param_1,param_3), -1 < iVar1)) ||
     ((param_2 != param_3 && (iVar1 = FUN_0040cc00(param_2,param_3), -1 < iVar1)))) {
    return 0;
  }
  iVar2 = iVar2 >> 3;
  lVar3 = FUN_00400260((long)(iVar2 << 1),"external/openssl/crypto/srp/srp_lib.c",0x22);
  if (((lVar3 != 0) && (iVar1 = FUN_0040c940(param_1,lVar3,iVar2), -1 < iVar1)) &&
     (iVar1 = FUN_0040c940(param_2,lVar3 + iVar2,iVar2), -1 < iVar1)) {
    uVar4 = FUN_0044f830();
    iVar2 = FUN_00444ea0(lVar3,(long)(iVar2 << 1),auStack_44,0,uVar4,0);
    if (iVar2 != 0) {
      uVar4 = FUN_0040c710(auStack_44,0x14,0);
      goto LAB_004d7bcc;
    }
  }
  uVar4 = 0;
LAB_004d7bcc:
  FUN_00400420(lVar3,"external/openssl/crypto/srp/srp_lib.c",0x2a);
  return uVar4;
}


