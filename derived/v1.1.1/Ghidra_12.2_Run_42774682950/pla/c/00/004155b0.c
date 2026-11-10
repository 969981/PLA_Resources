/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004155b0; name: FUN_004155b0
 */


long * FUN_004155b0(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (DAT_0439e700 == 0) {
    DAT_0439e700 = FUN_00415b00();
  }
  plVar2 = (long *)FUN_004002a0(0x48,"external/openssl/crypto/dso/dso_lib.c",0x1b);
  if (plVar2 == (long *)0x0) {
    FUN_004014b0(0x25,0x71,0x41,"external/openssl/crypto/dso/dso_lib.c",0x1d);
    return (long *)0x0;
  }
  lVar3 = FUN_004071e0();
  plVar2[1] = lVar3;
  if (lVar3 == 0) {
    FUN_004014b0(0x25,0x71,0x41,"external/openssl/crypto/dso/dso_lib.c",0x23);
    uVar4 = 0x24;
  }
  else {
    *plVar2 = DAT_0439e700;
    *(undefined4 *)(plVar2 + 2) = 1;
    lVar3 = FUN_004000a0();
    plVar2[8] = lVar3;
    if (lVar3 != 0) {
      if ((*(code **)(*plVar2 + 0x38) == (code *)0x0) ||
         (iVar1 = (**(code **)(*plVar2 + 0x38))(plVar2), iVar1 != 0)) {
        return plVar2;
      }
      FUN_004156f0(plVar2);
      return (long *)0x0;
    }
    FUN_004014b0(0x25,0x71,0x41,"external/openssl/crypto/dso/dso_lib.c",0x2b);
    FUN_00407010(plVar2[1]);
    uVar4 = 0x2d;
  }
  FUN_00400420(plVar2,"external/openssl/crypto/dso/dso_lib.c",uVar4);
  return (long *)0x0;
}


