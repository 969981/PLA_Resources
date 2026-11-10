/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01489178; name: FUN_01489178
 */


void FUN_01489178(long param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar3 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if ((lVar3 == 0) || (*plVar2 == -0x2b8a4f291d1a174a)) {
    plVar5 = plVar2;
  }
  else {
    lVar4 = lVar3 * 0x30;
    plVar6 = plVar2;
    do {
      lVar4 = lVar4 + -0x30;
      if (lVar4 == 0) {
        return;
      }
      plVar1 = plVar6 + 6;
      plVar5 = plVar6 + 6;
      plVar6 = plVar6 + 6;
    } while (*plVar1 != -0x2b8a4f291d1a174a);
  }
  if ((plVar5 != plVar2 + lVar3 * 6) && (lVar3 = plVar5[4], lVar3 != 0)) {
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | param_2 & 1;
    *(byte *)(param_1 + 0x3f24) = param_2 & 1;
  }
  return;
}


