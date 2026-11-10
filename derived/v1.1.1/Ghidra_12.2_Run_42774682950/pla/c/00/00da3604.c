/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da3604; name: FUN_00da3604
 */


void FUN_00da3604(long param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (0 < iVar1) {
    plVar4 = *(long **)(param_1 + 200);
    lVar3 = 0;
    lVar5 = 0;
    plVar6 = plVar4;
    do {
      if (*plVar6 == *param_2) {
        iVar2 = -(int)lVar3;
        if (iVar2 < 0) {
          return;
        }
        if (iVar1 <= iVar2) {
          return;
        }
        if (plVar4[(lVar5 >> 0x20) * 0xe + 9] == 0) {
          return;
        }
        if (*(char *)(plVar4[(lVar5 >> 0x20) * 0xe + 9] + 0x1e1) == '\0') {
          return;
        }
        if (param_3 != 2) {
          iVar1 = 0;
        }
        FUN_00da32a8(0x3f800000,param_1,plVar4 + (lVar5 >> 0x20) * 0xe,iVar1 - (int)lVar3,
                     param_1 + 0x68);
        return;
      }
      lVar3 = lVar3 + -1;
      lVar5 = lVar5 + 0x100000000;
      plVar6 = plVar6 + 0xe;
    } while (-lVar3 != (long)iVar1);
  }
  return;
}


