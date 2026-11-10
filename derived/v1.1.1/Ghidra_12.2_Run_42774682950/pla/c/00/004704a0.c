/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004704a0; name: FUN_004704a0
 */


int FUN_004704a0(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (pcVar3 = *(code **)(*param_1 + 0x38), pcVar3 == (code *)0x0)) {
    FUN_004014b0(6,0x92,0x96,"external/openssl/crypto/evp/pmeth_gn.c",0x5c);
    return -2;
  }
  if ((int)param_1[4] == 4) {
    if (param_2 != (long *)0x0) {
      lVar2 = *param_2;
      if (lVar2 == 0) {
        lVar2 = FUN_004230e0();
        *param_2 = lVar2;
        if (lVar2 == 0) {
          return -1;
        }
        pcVar3 = *(code **)(*param_1 + 0x38);
      }
      iVar1 = (*pcVar3)(param_1,lVar2);
      if (iVar1 < 1) {
        FUN_00423420(*param_2);
        *param_2 = 0;
      }
      return iVar1;
    }
  }
  else {
    FUN_004014b0(6,0x92,0x97,"external/openssl/crypto/evp/pmeth_gn.c",0x60);
  }
  return -1;
}


