/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016be20; name: FUN_0016be20
 */


void FUN_0016be20(uint *param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  
  uVar3 = *param_1;
  lVar5 = **(long **)(param_1 + 0x10);
  **(long **)(param_1 + 0x10) = lVar5 + -1;
  if (lVar5 == 0) {
    uVar2 = FUN_001790d0();
  }
  else {
    pbVar4 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
    *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar4 + 1;
    uVar2 = (uint)*pbVar4;
  }
  *param_1 = uVar2;
  if ((uVar2 == 0xd || uVar2 == 10) && uVar2 != uVar3) {
    lVar5 = **(long **)(param_1 + 0x10);
    **(long **)(param_1 + 0x10) = lVar5 + -1;
    if (lVar5 == 0) {
      uVar3 = FUN_001790d0();
    }
    else {
      pbVar4 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
      *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar4 + 1;
      uVar3 = (uint)*pbVar4;
    }
    *param_1 = uVar3;
  }
  uVar3 = param_1[1];
  param_1[1] = uVar3 + 1;
  if (uVar3 + 1 == 0x7fffffff) {
    FUN_0016a190(param_1,"chunk has too many lines",0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x16bee4);
    (*pcVar1)();
  }
  return;
}


