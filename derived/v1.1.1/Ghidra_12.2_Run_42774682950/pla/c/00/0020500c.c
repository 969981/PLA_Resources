/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020500c; name: FUN_0020500c
 */


void FUN_0020500c(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long local_18;
  
  if ((param_1 != 0) && (lVar3 = *(long *)(param_1 + 8), lVar3 != 0)) {
    local_18 = 0;
    if (*(long *)(lVar3 + 0x100) != 0) {
      uVar1 = nnsslContextGetContextId(*(long *)(lVar3 + 0x100),&local_18);
      uVar2 = nnResultIsFailure(uVar1);
      if (((uVar2 & 1) == 0) && (local_18 != 0)) {
        uVar1 = nnsslContextDestroy(*(undefined8 *)(lVar3 + 0x100));
        nnResultIsFailure(uVar1);
      }
    }
  }
  return;
}


