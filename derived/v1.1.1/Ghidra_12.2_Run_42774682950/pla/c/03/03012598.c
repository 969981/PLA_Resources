/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03012598; name: FUN_03012598
 */


int FUN_03012598(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x28);
  lVar1 = 0;
  if (*plVar3 != 0) {
    lVar1 = *plVar3 + (long)plVar3;
  }
  iVar2 = FUN_03007ee4(lVar1,param_2 & 1);
  if (-1 < iVar2) {
    lVar1 = 0;
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar1 = *(long *)(param_1 + 0x28) + (long)plVar3;
    }
    *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(lVar1 + 0x21);
  }
  return iVar2;
}


