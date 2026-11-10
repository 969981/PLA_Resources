/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0047f9a0; name: FUN_0047f9a0
 */


long FUN_0047f9a0(int param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_18;
  
  if (param_1 == 6) {
    lVar2 = FUN_0042ccf0();
    if (lVar2 != 0) {
      FUN_00407f40(param_2);
      lVar5 = FUN_004306d0();
      if (lVar5 != 0) {
        FUN_0042e3f0(lVar5,1);
        iVar1 = FUN_0042d500(lVar2,lVar5);
        if (iVar1 != 0) {
          FUN_0042dac0(lVar5);
          return lVar2;
        }
      }
      goto LAB_0047faa0;
    }
    uVar3 = 0x41;
    uVar4 = 0x71;
  }
  else {
    if (param_1 != 0x10) {
      FUN_004014b0(0x10,0xdc,0x8e,"external/openssl/crypto/ec/ec_ameth.c",0x7c);
      lVar5 = 0;
      lVar2 = 0;
      goto LAB_0047faa0;
    }
    local_18 = *(undefined8 *)(param_2 + 2);
    lVar2 = FUN_0043bed0(0,&local_18,(long)*param_2);
    if (lVar2 != 0) {
      return lVar2;
    }
    uVar3 = 0x8e;
    uVar4 = 0x67;
    lVar2 = 0;
  }
  FUN_004014b0(0x10,0xdc,uVar3,"external/openssl/crypto/ec/ec_ameth.c",uVar4);
  lVar5 = 0;
LAB_0047faa0:
  FUN_0042cd80(lVar2);
  FUN_0042dac0(lVar5);
  return 0;
}


