/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281efbc; name: FUN_0281efbc
 */


undefined4 FUN_0281efbc(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = **(long **)(param_1 + 0x838);
  lVar1 = (*(long **)(param_1 + 0x838))[1];
  if ((lVar3 != lVar1) && (*(char *)(lVar3 + 0x20) != '\0' || *(int *)(lVar3 + 0x24) != param_2)) {
    lVar2 = lVar3 + 0x30;
    do {
      lVar3 = lVar2;
      if (lVar1 == lVar3) {
        lVar3 = lVar1;
        goto LAB_0281f00c;
      }
      lVar2 = lVar3 + 0x30;
    } while ((*(char *)(lVar3 + 0x20) != '\0') || (*(int *)(lVar3 + 0x24) != param_2));
  }
LAB_0281f00c:
  if (lVar3 == 0 || lVar1 == lVar3) {
    return 0xffffffff;
  }
  return *(undefined4 *)(lVar3 + 0x28);
}


