/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02802b8c; name: FUN_02802b8c
 */


void FUN_02802b8c(long param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  long lVar3;
  ushort uVar4;
  long lVar5;
  short *psVar6;
  short *psVar7;
  
  psVar2 = *(short **)(param_1 + 200);
  lVar3 = *(long *)(param_1 + 0xd0);
  psVar6 = psVar2;
  if ((lVar3 != 0) && (*param_2 != *psVar2)) {
    lVar5 = lVar3 * 8;
    psVar7 = psVar2;
    do {
      lVar5 = lVar5 + -8;
      if (lVar5 == 0) goto LAB_02802c08;
      psVar6 = psVar7 + 4;
      psVar1 = psVar7 + 4;
      psVar7 = psVar6;
    } while (*param_2 != *psVar1);
  }
  if (psVar6 != psVar2 + lVar3 * 4) {
    uVar4 = psVar6[1] + param_2[1];
    if (0x3e6 < uVar4) {
      uVar4 = 999;
    }
    psVar6[1] = uVar4;
    return;
  }
LAB_02802c08:
  FUN_02802e80(param_1 + 0xa8);
  return;
}


