/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00422900; name: FUN_00422900
 */


long * FUN_00422900(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((*param_1 != 0) && (*(long *)(*param_1 + 0x10) != 0)) {
    plVar2 = (long *)FUN_00400260(0x50,"external/openssl/crypto/evp/pmeth_lib.c",0x109);
    if (plVar2 == (long *)0x0) {
      FUN_004014b0(6,0x9c,0x41,"external/openssl/crypto/evp/pmeth_lib.c",0x10b);
      return (long *)0x0;
    }
    *plVar2 = *param_1;
    lVar3 = 0;
    if (param_1[2] != 0) {
      FUN_004231b0();
      lVar3 = param_1[2];
    }
    plVar2[2] = lVar3;
    lVar3 = 0;
    if (param_1[3] != 0) {
      FUN_004231b0();
      lVar3 = param_1[3];
    }
    plVar2[3] = lVar3;
    plVar2[5] = 0;
    plVar2[6] = 0;
    *(int *)(plVar2 + 4) = (int)param_1[4];
    iVar1 = (**(code **)(*param_1 + 0x10))(plVar2,param_1);
    if (0 < iVar1) {
      return plVar2;
    }
    *plVar2 = 0;
    FUN_00423420(plVar2[2]);
    FUN_00423420(plVar2[3]);
    FUN_00400420(plVar2,"external/openssl/crypto/evp/pmeth_lib.c",0x16b);
  }
  return (long *)0x0;
}


