/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015a750; name: FUN_0015a750
 */


void FUN_0015a750(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x30) - lVar3 < 0x20) {
    if (1000000 < *(int *)(param_1 + 0xb8)) {
                    /* WARNING: Subroutine does not return */
      FUN_0015a320(param_1,6);
    }
    iVar2 = *(int *)(param_1 + 0xb8) * 2;
    if (999999 < iVar2) {
      iVar2 = 1000000;
    }
    iVar1 = (int)((ulong)(lVar3 - *(long *)(param_1 + 0x38)) >> 4) + 6;
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    if (1000000 < iVar1) {
      FUN_0015a490(param_1,0xf4308);
                    /* WARNING: Subroutine does not return */
      FUN_001599d0(param_1,"stack overflow");
    }
    FUN_0015a490(param_1);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  return;
}


