/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00204fb4; name: FUN_00204fb4
 */


void FUN_00204fb4(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long local_18;
  
  if ((param_1 != 0) && (lVar3 = *(long *)(param_1 + 8), lVar3 != 0)) {
    local_18 = 0;
    uVar1 = nnsslConnectionGetConnectionId(lVar3,&local_18);
    uVar2 = nnResultIsFailure(uVar1);
    if (((uVar2 & 1) == 0) && (local_18 != 0)) {
      uVar1 = nnsslConnectionDestroy(lVar3);
      nnResultIsFailure(uVar1);
    }
  }
  return;
}


