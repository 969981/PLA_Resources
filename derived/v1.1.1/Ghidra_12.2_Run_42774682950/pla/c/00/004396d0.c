/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004396d0; name: FUN_004396d0
 */


long * FUN_004396d0(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)FUN_004002a0(0x50,"external/openssl/crypto/ec/ec_kmeth.c",0x4b);
  if (plVar3 == (long *)0x0) {
    FUN_004014b0(0x10,0xf5,0x41,"external/openssl/crypto/ec/ec_kmeth.c",0x4e);
    return (long *)0x0;
  }
  *(undefined4 *)(plVar3 + 7) = 1;
  lVar4 = FUN_004000a0();
  plVar3[9] = lVar4;
  puVar1 = PTR_PTR_041655c8;
  if (lVar4 == 0) {
    FUN_004014b0(0x10,0xf5,0x41,"external/openssl/crypto/ec/ec_kmeth.c",0x55);
    FUN_00400420(plVar3,"external/openssl/crypto/ec/ec_kmeth.c",0x56);
  }
  else {
    *(undefined4 *)(plVar3 + 2) = 1;
    *plVar3 = (long)puVar1;
    *(undefined4 *)((long)plVar3 + 0x34) = 4;
    iVar2 = FUN_00400880(8,plVar3,plVar3 + 8);
    if (iVar2 != 0) {
      if ((*(code **)(*plVar3 + 0x10) == (code *)0x0) ||
         (iVar2 = (**(code **)(*plVar3 + 0x10))(plVar3), iVar2 != 0)) {
        return plVar3;
      }
      FUN_004014b0(0x10,0xf5,0x46,"external/openssl/crypto/ec/ec_kmeth.c",0x75);
    }
    FUN_0042cd80(plVar3);
  }
  return (long *)0x0;
}


