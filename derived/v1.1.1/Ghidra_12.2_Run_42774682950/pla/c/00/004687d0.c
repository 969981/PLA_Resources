/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004687d0; name: FUN_004687d0
 */


undefined8 FUN_004687d0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_1 == 0) || (iVar1 = FUN_00422ff0(param_1), iVar1 != 0)) {
    iVar1 = FUN_00407950(param_2);
    if (iVar1 < 1) {
      uVar4 = 0x6b;
      uVar5 = 0x773;
LAB_00468874:
      FUN_004014b0(0xb,0x6e,uVar4,"external/openssl/crypto/x509/x509_vfy.c",uVar5);
      return 0;
    }
    iVar1 = 0;
    do {
      FUN_00407970(param_2,iVar1);
      lVar3 = FUN_0044e660();
      if (lVar3 == 0) {
        uVar4 = 0x6c;
        uVar5 = 0x76b;
        goto LAB_00468874;
      }
      iVar2 = FUN_00422ff0();
      if (iVar2 == 0) {
        if (iVar1 == 0) goto LAB_004688b4;
        break;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_00407950(param_2);
    } while (iVar1 < iVar2);
    do {
      iVar1 = iVar1 + -1;
      FUN_00407970(param_2,iVar1);
      uVar4 = FUN_0044e660();
      FUN_00422d90(uVar4,lVar3);
    } while (0 < iVar1);
LAB_004688b4:
    if (param_1 != 0) {
      FUN_00422d90(param_1,lVar3);
    }
  }
  return 1;
}


