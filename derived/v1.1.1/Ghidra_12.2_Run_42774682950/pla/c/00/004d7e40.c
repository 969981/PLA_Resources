/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d7e40; name: FUN_004d7e40
 */


undefined8 FUN_004d7e40(long param_1,char *param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  size_t sVar6;
  undefined1 auStack_54 [20];
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (param_3 == (char *)0x0) {
    return 0;
  }
  lVar3 = FUN_00444930();
  if (lVar3 == 0) {
    return 0;
  }
  iVar2 = FUN_0040c070(param_1);
  uVar1 = iVar2 + 0xe;
  if (-1 < (int)(iVar2 + 7U)) {
    uVar1 = iVar2 + 7U;
  }
  lVar4 = FUN_00400260((long)((ulong)uVar1 << 0x20) >> 0x23,"external/openssl/crypto/srp/srp_lib.c",
                       0x85);
  if (lVar4 != 0) {
    uVar5 = FUN_0044f830();
    iVar2 = FUN_004449b0(lVar3,uVar5,0);
    if (iVar2 != 0) {
      sVar6 = strlen(param_2);
      iVar2 = FUN_00444ad0(lVar3,param_2,sVar6);
      if ((iVar2 != 0) && (iVar2 = FUN_00444ad0(lVar3,&DAT_039b07fe,1), iVar2 != 0)) {
        sVar6 = strlen(param_3);
        iVar2 = FUN_00444ad0(lVar3,param_3,sVar6);
        if ((iVar2 != 0) && (iVar2 = FUN_00444b90(lVar3,auStack_54,0), iVar2 != 0)) {
          uVar5 = FUN_0044f830();
          iVar2 = FUN_004449b0(lVar3,uVar5,0);
          if ((iVar2 != 0) && (iVar2 = FUN_0040caa0(param_1,lVar4), -1 < iVar2)) {
            iVar2 = FUN_0040c070(param_1);
            uVar1 = iVar2 + 0xe;
            if (-1 < (int)(iVar2 + 7U)) {
              uVar1 = iVar2 + 7U;
            }
            iVar2 = FUN_00444ad0(lVar3,lVar4,(long)((ulong)uVar1 << 0x20) >> 0x23);
            if (((iVar2 != 0) && (iVar2 = FUN_00444ad0(lVar3,auStack_54,0x14), iVar2 != 0)) &&
               (iVar2 = FUN_00444b90(lVar3,auStack_54,0), iVar2 != 0)) {
              uVar5 = FUN_0040c710(auStack_54,0x14,0);
              goto LAB_004d7fc4;
            }
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_004d7fc4:
  FUN_00400420(lVar4,"external/openssl/crypto/srp/srp_lib.c",0x9b);
  FUN_00444950(lVar3);
  return uVar5;
}


