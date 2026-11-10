/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00415990; name: FUN_00415990
 */


undefined8 FUN_00415990(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0x43;
    uVar3 = 0xf5;
  }
  else if (*(long *)(param_1 + 0x38) == 0) {
    lVar1 = FUN_00404f10(param_2,"external/openssl/crypto/dso/dso_lib.c",0xfd);
    if (lVar1 != 0) {
      FUN_00400420(*(undefined8 *)(param_1 + 0x30),"external/openssl/crypto/dso/dso_lib.c",0x102);
      *(long *)(param_1 + 0x30) = lVar1;
      return 1;
    }
    uVar2 = 0x41;
    uVar3 = 0xff;
  }
  else {
    uVar2 = 0x6e;
    uVar3 = 0xf9;
  }
  FUN_004014b0(0x25,0x81,uVar2,"external/openssl/crypto/dso/dso_lib.c",uVar3);
  return 0;
}


