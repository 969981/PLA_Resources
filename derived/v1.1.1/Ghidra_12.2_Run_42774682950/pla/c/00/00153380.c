/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00153380; name: FUN_00153380
 */


void FUN_00153380(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      plVar2 = *(long **)(param_1 + 0x10);
      lVar1 = FUN_0016d720(param_1,&DAT_03996322,0);
      *plVar2 = lVar1;
      *(uint *)(plVar2 + 1) = *(byte *)(lVar1 + 8) | 0x40;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
      lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
    }
    else {
      lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
    }
  }
  else {
    FUN_00176070(param_1);
    lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
  }
  if (lVar1 < 1) {
    return;
  }
  FUN_0015dc70(param_1);
  return;
}


