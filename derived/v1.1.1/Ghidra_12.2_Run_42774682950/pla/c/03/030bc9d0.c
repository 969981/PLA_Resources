/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030bc9d0; name: FUN_030bc9d0
 */


void FUN_030bc9d0(long param_1,int param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  do {
    fVar7 = *(float *)(param_1 + ((long)((ulong)(uint)(param_2 + param_3) << 0x20) >> 0x21) * 0x80 +
                      0x58);
    iVar6 = param_2;
    iVar4 = param_3;
    do {
      lVar3 = param_1 + -0x80 + (long)iVar6 * 0x80;
      do {
        iVar2 = iVar6;
        pfVar1 = (float *)(lVar3 + 0xd8);
        lVar3 = lVar3 + 0x80;
        iVar6 = iVar2 + 1;
      } while (*pfVar1 < fVar7);
      lVar3 = param_1 + 0x80 + (long)iVar4 * 0x80;
      iVar4 = iVar4 + 1;
      do {
        iVar5 = iVar4;
        pfVar1 = (float *)(lVar3 + -0x28);
        lVar3 = lVar3 + -0x80;
        iVar4 = iVar5 + -1;
      } while (fVar7 < *pfVar1);
      iVar6 = iVar2;
      if (iVar2 <= iVar4) {
        if (iVar2 != iVar4) {
          FUN_030bcad0();
        }
        iVar4 = iVar5 + -2;
        iVar6 = iVar2 + 1;
      }
    } while (iVar6 <= iVar4);
    if (param_2 < iVar4) {
      FUN_030bc9d0(param_1,param_2,iVar4);
    }
    param_2 = iVar6;
  } while (iVar6 < param_3);
  return;
}


