/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01215410; name: FUN_01215410
 */


void FUN_01215410(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x1648);
  uVar1 = *(uint *)(lVar2 + 8);
  if (*(int *)(lVar2 + 4) == 0) {
    if (0x1d < uVar1) {
      *(undefined4 *)(lVar2 + 8) = 0;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x1648) + 8);
    }
    FUN_00d52f90(param_1,uVar1,0,0,1);
    return;
  }
  if (5 < uVar1) {
    *(undefined4 *)(lVar2 + 8) = 0;
    uVar1 = *(uint *)(*(long *)(param_1 + 0x1648) + 8);
  }
  FUN_00d52f90(param_1,uVar1,0,1,1);
  return;
}


