/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003aaa10; name: FUN_003aaa10
 */


undefined8 FUN_003aaa10(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = FUN_00336170(param_1 + 0x10);
  if ((uVar1 & 1) == 0) {
LAB_003aaa8c:
    uVar4 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x38);
    if (iVar5 < 1) {
      return 1;
    }
    do {
      iVar5 = iVar5 + -1;
      lVar2 = FUN_003c17a8(param_1 + 0x30,iVar5);
      iVar6 = *(int *)(lVar2 + 0x20);
      while (0 < iVar6) {
        lVar3 = FUN_003669e8(lVar2 + 0x18,iVar6 + -1);
        iVar6 = iVar6 + -1;
        if ((~*(uint *)(lVar3 + 0x10) & 3) != 0) goto LAB_003aaa8c;
      }
      uVar4 = 1;
    } while (0 < iVar5);
  }
  return uVar4;
}


