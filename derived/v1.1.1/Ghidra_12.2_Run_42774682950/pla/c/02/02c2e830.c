/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2e830; name: FUN_02c2e830
 */


void FUN_02c2e830(long param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  uVar2 = DAT_043f21e0;
  lVar5 = *(long *)(param_1 + 0xb0);
  if (lVar5 != 0) {
    plVar4 = *(long **)(lVar5 + 0x270);
    if (plVar4 != *(long **)(lVar5 + 0x278)) {
      iVar3 = 0;
      do {
        plVar1 = (long *)PTR_DAT_04379c88;
        if (*plVar4 != 0) {
          plVar1 = (long *)(*plVar4 + 0x58);
        }
        if (*plVar1 == *param_2) goto LAB_02c2e898;
        plVar4 = plVar4 + 1;
        iVar3 = iVar3 + 1;
      } while (*(long **)(lVar5 + 0x278) != plVar4);
    }
  }
  iVar3 = 0;
LAB_02c2e898:
  DAT_043f21e0 = param_3;
  FUN_02c2e33c(param_1,iVar3,param_4);
  DAT_043f21e0 = uVar2;
  return;
}


