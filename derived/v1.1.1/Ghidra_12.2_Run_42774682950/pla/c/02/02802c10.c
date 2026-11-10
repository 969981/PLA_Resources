/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02802c10; name: FUN_02802c10
 */


void FUN_02802c10(long param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  long lVar3;
  ushort uVar4;
  short *psVar5;
  long lVar6;
  short *psVar7;
  
  psVar2 = *(short **)(param_1 + 0x100);
  lVar3 = *(long *)(param_1 + 0x108);
  psVar5 = psVar2;
  if ((lVar3 != 0) && (*param_2 != *psVar2)) {
    lVar6 = lVar3 * 8;
    psVar7 = psVar2;
    do {
      lVar6 = lVar6 + -8;
      if (lVar6 == 0) goto LAB_02802c28;
      psVar5 = psVar7 + 4;
      psVar1 = psVar7 + 4;
      psVar7 = psVar5;
    } while (*param_2 != *psVar1);
  }
  if (psVar5 != psVar2 + lVar3 * 4) {
    uVar4 = psVar5[1] + param_2[1];
    if (0x3e6 < uVar4) {
      uVar4 = 999;
    }
    psVar5[1] = uVar4;
    return;
  }
LAB_02802c28:
  FUN_028032b0(param_1 + 0xe0);
  return;
}


