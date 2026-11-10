/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044c210; name: FUN_0044c210
 */


long FUN_0044c210(undefined8 param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_28;
  
  local_28 = 0;
  if (param_2 == (char *)0x0) {
    uVar5 = 0x6d;
    uVar6 = 0xb0;
  }
  else {
    local_28 = FUN_0040c260();
    if (local_28 == 0) {
      uVar5 = 0x41;
      uVar6 = 0xb5;
    }
    else {
      cVar1 = *param_2;
      if (cVar1 == '-') {
        param_2 = param_2 + 1;
      }
      if ((*param_2 == '0') && ((byte)(param_2[1] | 0x20U) == 0x78)) {
        param_2 = param_2 + 2;
        iVar3 = FUN_00413eb0(&local_28,param_2);
      }
      else {
        iVar3 = FUN_00414060(&local_28,param_2);
      }
      if ((iVar3 != 0) && (param_2[iVar3] == '\0')) {
        if (cVar1 == '-') {
          iVar3 = FUN_0040c130(local_28);
          bVar2 = iVar3 == 0;
        }
        else {
          bVar2 = false;
        }
        lVar4 = FUN_00420b80(local_28,0);
        FUN_0040c1e0(local_28);
        if (lVar4 == 0) {
          FUN_004014b0(0x22,0x6c,0x65,"external/openssl/crypto/x509v3/v3_utl.c",0xd6);
          return 0;
        }
        if (bVar2) {
          *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) | 0x100;
          return lVar4;
        }
        return lVar4;
      }
      FUN_0040c1e0(local_28);
      uVar5 = 100;
      uVar6 = 0xcb;
    }
  }
  FUN_004014b0(0x22,0x6c,uVar5,"external/openssl/crypto/x509v3/v3_utl.c",uVar6);
  return 0;
}


