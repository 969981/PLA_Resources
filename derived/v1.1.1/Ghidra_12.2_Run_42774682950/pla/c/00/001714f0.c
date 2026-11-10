/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001714f0; name: FUN_001714f0
 */


ulong FUN_001714f0(undefined8 param_1,long param_2,int param_3,uint param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  
  uVar5 = param_4;
  if (7 < (int)param_4) {
    uVar5 = 8;
  }
  if ((int)param_4 < 1) {
    uVar7 = 0;
  }
  else if (param_3 == 0) {
    uVar7 = 0;
    iVar6 = param_4 - uVar5;
    lVar9 = (long)(int)(uVar5 - 1) + 1;
    do {
      lVar2 = (long)iVar6;
      iVar6 = iVar6 + 1;
      uVar7 = (ulong)*(byte *)(param_2 + lVar2) | uVar7 << 8;
      lVar9 = lVar9 + -1;
    } while (0 < lVar9);
  }
  else {
    uVar7 = 0;
    lVar9 = (long)(int)(uVar5 - 1);
    do {
      uVar7 = (ulong)*(byte *)(param_2 + lVar9) | uVar7 << 8;
      bVar1 = 0 < lVar9;
      lVar9 = lVar9 + -1;
    } while (bVar1);
  }
  if ((int)param_4 < 8) {
    if (param_5 != 0) {
      uVar8 = 1L << ((ulong)(param_4 * 8 - 1) & 0x3f);
      uVar7 = (uVar7 ^ uVar8) - uVar8;
    }
  }
  else if (param_4 != 8) {
    uVar8 = (ulong)param_4;
    cVar4 = '\0';
    if (0x7fffffffffffffff < uVar7 && param_5 != 0) {
      cVar4 = -1;
    }
    if (param_3 == 0) {
      lVar9 = -9;
      cVar3 = *(char *)(param_2 + (int)(param_4 - 9));
      while( true ) {
        if (cVar4 != cVar3) {
          FUN_00154110(param_1,"%d-byte integer does not fit into Lua Integer",uVar8);
        }
        if (uVar8 + lVar9 + -1 == -1) break;
        lVar9 = lVar9 + -1;
        cVar3 = *(char *)(param_2 + (int)(param_4 + (int)lVar9));
      }
    }
    else {
      pcVar10 = (char *)(param_2 + 8);
      lVar9 = uVar8 - 8;
      cVar3 = *pcVar10;
      while( true ) {
        if (cVar4 != cVar3) {
          FUN_00154110(param_1,"%d-byte integer does not fit into Lua Integer",param_4);
        }
        if (lVar9 == 1) break;
        lVar9 = lVar9 + -1;
        pcVar10 = pcVar10 + 1;
        cVar3 = *pcVar10;
      }
    }
  }
  return uVar7;
}


