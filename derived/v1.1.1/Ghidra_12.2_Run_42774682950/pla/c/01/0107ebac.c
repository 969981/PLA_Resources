/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0107ebac; name: FUN_0107ebac
 */


void FUN_0107ebac(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 2);
  if (0 < (int)uVar1) {
    uVar4 = *param_1;
    iVar3 = *(int *)(param_1 + 1);
    iVar2 = FUN_0014fef0(uVar4);
    if (0 < iVar2) {
      if ((iVar3 + uVar1 == 0) || (iVar2 == iVar3)) {
        FUN_0014ff10(uVar4,~uVar1);
        return;
      }
      iVar3 = FUN_0014feb0(uVar4,iVar3);
      if (iVar3 < 0) {
        iVar2 = FUN_0014fef0(uVar4);
        iVar3 = iVar3 + iVar2 + 1;
      }
      iVar2 = iVar3;
      do {
        FUN_0014ff70(uVar4,iVar3,0xffffffff);
        FUN_0014ff10(uVar4,0xfffffffe);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(iVar3 + uVar1));
    }
  }
  return;
}


