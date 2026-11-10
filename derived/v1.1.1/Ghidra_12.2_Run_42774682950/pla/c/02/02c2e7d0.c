/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2e7d0; name: FUN_02c2e7d0
 */


void FUN_02c2e7d0(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xb0);
  if (lVar4 != 0) {
    plVar3 = *(long **)(lVar4 + 0x270);
    if (plVar3 != *(long **)(lVar4 + 0x278)) {
      iVar2 = 0;
      do {
        plVar1 = (long *)PTR_DAT_04379c88;
        if (*plVar3 != 0) {
          plVar1 = (long *)(*plVar3 + 0x58);
        }
        if (*plVar1 == *param_2) goto LAB_02c2e82c;
        plVar3 = plVar3 + 1;
        iVar2 = iVar2 + 1;
      } while (*(long **)(lVar4 + 0x278) != plVar3);
    }
  }
  iVar2 = 0;
LAB_02c2e82c:
  FUN_02c2e33c(param_1,iVar2);
  return;
}


