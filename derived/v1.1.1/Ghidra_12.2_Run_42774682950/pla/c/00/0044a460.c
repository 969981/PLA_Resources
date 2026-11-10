/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044a460; name: FUN_0044a460
 */


undefined4
FUN_0044a460(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar3 = FUN_004080c0(param_2,0);
  if (lVar3 == 0) {
    FUN_004014b0(0xb,0x83,0x77,"external/openssl/crypto/x509/x509name.c",0xfc);
    FUN_00402170(2,"name=",param_2);
  }
  else {
    plVar4 = (long *)FUN_0044ab80();
    if (plVar4 != (long *)0x0) {
      FUN_00409be0(*plVar4);
      lVar5 = FUN_00413930(lVar3);
      *plVar4 = lVar5;
      if ((lVar5 != 0) && (iVar1 = FUN_0044a570(plVar4,param_3,param_4,param_5), iVar1 != 0)) {
        FUN_00409be0(lVar3);
        uVar2 = FUN_0044a2d0(param_1,plVar4,param_6,param_7);
        FUN_0044ab90(plVar4);
        return uVar2;
      }
      FUN_0044ab90(plVar4);
    }
    FUN_00409be0(lVar3);
  }
  return 0;
}


