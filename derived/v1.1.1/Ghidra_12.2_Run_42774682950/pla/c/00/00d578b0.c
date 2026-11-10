/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d578b0; name: FUN_00d578b0
 */


void FUN_00d578b0(long param_1,int param_2,uint param_3,byte param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((*(int *)(param_1 + (long)param_2 * 0x60 + 0x640) != 0) &&
     (*(int *)(param_1 + (long)param_2 * 0x60 + 0x644) != 0)) {
    iVar1 = 0;
    if (param_2 != 2) {
      iVar1 = param_2;
    }
    lVar3 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar1 * 0x28);
    lVar4 = **(long **)(lVar3 + 0x838);
    lVar3 = (*(long **)(lVar3 + 0x838))[1];
    if ((lVar4 != lVar3) && (*(char *)(lVar4 + 0x20) != '\0' || *(uint *)(lVar4 + 0x24) != param_3))
    {
      lVar2 = lVar4 + 0x30;
      do {
        lVar5 = lVar2;
        lVar4 = lVar3;
        if (lVar3 == lVar5) break;
        lVar2 = lVar5 + 0x30;
      } while ((*(char *)(lVar5 + 0x20) != '\0') ||
              (lVar4 = lVar5, *(uint *)(lVar5 + 0x24) != param_3));
    }
    if ((lVar4 != 0) &&
       (((lVar3 != lVar4 && (*(int *)(lVar4 + 0x28) != -1)) &&
        (lVar4 = FUN_00d57364(param_1,param_2), lVar4 != 0)))) {
      if (*(int *)(*(long *)(*(long *)(*(long *)(param_1 + (long)param_2 * 0x60 + 0x638) + 0xa8) +
                            (ulong)param_3 * 0x10) + 8) == 1) {
        *(undefined1 *)(lVar4 + 0x2aa) = 0;
      }
      else {
        *(byte *)(lVar4 + 0x2aa) = param_4 & 1;
      }
    }
  }
  return;
}


