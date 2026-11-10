/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00445020; name: FUN_00445020
 */


long * FUN_00445020(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)FUN_004002a0(0x30,"external/openssl/crypto/ui/ui_lib.c",0x19);
  if (plVar2 == (long *)0x0) {
    FUN_004014b0(0x28,0x68,0x41,"external/openssl/crypto/ui/ui_lib.c",0x1c);
    return (long *)0x0;
  }
  lVar3 = FUN_004000a0();
  plVar2[5] = lVar3;
  if (lVar3 == 0) {
    FUN_004014b0(0x28,0x68,0x41,"external/openssl/crypto/ui/ui_lib.c",0x22);
    uVar4 = 0x23;
  }
  else {
    lVar3 = FUN_00445a70();
    if (lVar3 == 0) {
      lVar3 = FUN_00445aa0();
    }
    *plVar2 = lVar3;
    iVar1 = FUN_00400880(0xb,plVar2,plVar2 + 3);
    if (iVar1 != 0) {
      return plVar2;
    }
    uVar4 = 0x2e;
  }
  FUN_00400420(plVar2,"external/openssl/crypto/ui/ui_lib.c",uVar4);
  return (long *)0x0;
}


