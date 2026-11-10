/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb2444; name: FUN_02eb2444
 */


undefined8 FUN_02eb2444(long param_1,float *param_2,int param_3,long param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x20) != param_3) || ((*(uint *)(param_1 + 0x30) & 0x7fffffff) != param_5)
     ) {
    return 1;
  }
  if (param_5 != 0) {
    pfVar3 = *(float **)(param_1 + 0x18);
    uVar2 = 0;
    do {
      iVar4 = *(int *)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 0x18 + 8);
      if (iVar4 != *(int *)(param_4 + (ulong)uVar2 * 8 + 4)) {
        return 1;
      }
      if (iVar4 != 0) {
        iVar4 = iVar4 + -1;
        bVar1 = *param_2 != *pfVar3;
        if (0 < iVar4) {
          do {
            if (bVar1) {
              return 1;
            }
            if (param_2[1] != pfVar3[1]) {
              return 1;
            }
            if (param_2[2] != pfVar3[2]) {
              return 1;
            }
            if (param_2[3] != pfVar3[3]) {
              return 1;
            }
            param_2 = param_2 + 4;
            pfVar3 = pfVar3 + 4;
            bVar1 = *param_2 != *pfVar3;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        if (bVar1) {
          return 1;
        }
        if (param_2[1] != pfVar3[1]) {
          return 1;
        }
        if (param_2[2] != pfVar3[2]) {
          return 1;
        }
        param_2 = param_2 + 4;
        pfVar3 = pfVar3 + 4;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_5);
  }
  return 0;
}


