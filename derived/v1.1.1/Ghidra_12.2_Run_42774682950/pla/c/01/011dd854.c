/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011dd854; name: FUN_011dd854
 */


void FUN_011dd854(long param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 < 2) {
    *(undefined4 *)(param_1 + 0x6fc) = 2;
    *(undefined1 *)(param_1 + 0x6f9) = 0;
    plVar3 = *(long **)(*(long *)(param_1 + 0x678) + 0x148);
    lVar5 = *(long *)(*(long *)(param_1 + 0x678) + 0x150);
    if ((lVar5 != 0) &&
       (*plVar3 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x688) * 0x18))) {
      plVar4 = plVar3 + lVar5 * 6;
      lVar5 = lVar5 * 0x30;
      do {
        lVar5 = lVar5 + -0x30;
        if (lVar5 == 0) {
          plVar3 = plVar4;
          break;
        }
        plVar2 = plVar3 + 6;
        plVar1 = plVar3 + 6;
        plVar3 = plVar2;
      } while (*plVar1 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x688) * 0x18));
    }
    *(byte *)(plVar3[4] + 0x58) = *(byte *)(plVar3[4] + 0x58) & 0xfe;
    plVar3 = *(long **)(*(long *)(param_1 + 0x690) + 0x148);
    lVar5 = *(long *)(*(long *)(param_1 + 0x690) + 0x150);
    if ((lVar5 != 0) &&
       (*plVar3 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x6a0) * 0x18))) {
      plVar4 = plVar3 + lVar5 * 6;
      lVar5 = lVar5 * 0x30;
      do {
        lVar5 = lVar5 + -0x30;
        if (lVar5 == 0) {
          plVar3 = plVar4;
          break;
        }
        plVar2 = plVar3 + 6;
        plVar1 = plVar3 + 6;
        plVar3 = plVar2;
      } while (*plVar1 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x6a0) * 0x18));
    }
    *(byte *)(plVar3[4] + 0x58) = *(byte *)(plVar3[4] + 0x58) & 0xfe;
    plVar3 = *(long **)(*(long *)(param_1 + 0x6a8) + 0x148);
    lVar5 = *(long *)(*(long *)(param_1 + 0x6a8) + 0x150);
    if ((lVar5 != 0) &&
       (*plVar3 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x6b8) * 0x18))) {
      plVar4 = plVar3 + lVar5 * 6;
      lVar5 = lVar5 * 0x30;
      do {
        lVar5 = lVar5 + -0x30;
        if (lVar5 == 0) {
          plVar3 = plVar4;
          break;
        }
        plVar2 = plVar3 + 6;
        plVar1 = plVar3 + 6;
        plVar3 = plVar2;
      } while (*plVar1 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x6b8) * 0x18));
    }
    *(byte *)(plVar3[4] + 0x58) = *(byte *)(plVar3[4] + 0x58) & 0xfe;
    plVar3 = *(long **)(*(long *)(param_1 + 0x6c0) + 0x148);
    lVar5 = *(long *)(*(long *)(param_1 + 0x6c0) + 0x150);
    if ((lVar5 != 0) &&
       (*plVar3 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x6d0) * 0x18))) {
      plVar4 = plVar3 + lVar5 * 6;
      lVar5 = lVar5 * 0x30;
      do {
        lVar5 = lVar5 + -0x30;
        if (lVar5 == 0) {
          plVar3 = plVar4;
          break;
        }
        plVar2 = plVar3 + 6;
        plVar1 = plVar3 + 6;
        plVar3 = plVar2;
      } while (*plVar1 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x6d0) * 0x18));
    }
    *(byte *)(plVar3[4] + 0x58) = *(byte *)(plVar3[4] + 0x58) & 0xfe;
    plVar3 = *(long **)(*(long *)(param_1 + 0x6d8) + 0x148);
    lVar5 = *(long *)(*(long *)(param_1 + 0x6d8) + 0x150);
    if ((lVar5 != 0) &&
       (*plVar3 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x6e8) * 0x18))) {
      plVar4 = plVar3 + lVar5 * 6;
      lVar5 = lVar5 * 0x30;
      do {
        lVar5 = lVar5 + -0x30;
        if (lVar5 == 0) {
          plVar3 = plVar4;
          break;
        }
        plVar2 = plVar3 + 6;
        plVar1 = plVar3 + 6;
        plVar3 = plVar2;
      } while (*plVar1 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x6e8) * 0x18));
    }
    *(byte *)(plVar3[4] + 0x58) = *(byte *)(plVar3[4] + 0x58) & 0xfe;
  }
  return;
}


