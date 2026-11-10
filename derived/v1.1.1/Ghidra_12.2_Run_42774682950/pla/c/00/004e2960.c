/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e2960; name: FUN_004e2960
 */


undefined8 FUN_004e2960(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_28;
  
  local_28 = 0;
  uVar2 = FUN_00406ef0(param_1,&LAB_004e2a80);
  FUN_00414680();
  lVar3 = FUN_00403d80();
  if (lVar3 == 0) {
    FUN_004014b0(0x14,0xd8,0x41,"external/openssl/ssl/ssl_cert.c",0x2b7);
  }
  else {
    iVar1 = FUN_00404920(lVar3,0x6c,3,param_2);
    if (iVar1 != 0) {
      do {
        while( true ) {
          lVar4 = FUN_004e31f0(lVar3,&local_28,0,0);
          if (lVar4 == 0) {
            FUN_004016d0();
            uVar5 = 1;
            goto LAB_004e2a44;
          }
          lVar4 = FUN_0044e530(local_28);
          if (lVar4 == 0) goto LAB_004e2a34;
          lVar4 = FUN_0044ac00();
          uVar5 = 0;
          if (lVar4 == 0) goto LAB_004e2a44;
          iVar1 = FUN_00407710(param_1,lVar4);
          if (iVar1 < 0) break;
          FUN_0044abf0(lVar4);
        }
        iVar1 = FUN_00407800(param_1,lVar4);
      } while (iVar1 != 0);
      FUN_0044abf0(lVar4);
    }
  }
LAB_004e2a34:
  uVar5 = 0;
LAB_004e2a44:
  FUN_00403ee0(lVar3);
  FUN_00460a80(local_28);
  FUN_00406ef0(param_1,uVar2);
  return uVar5;
}


