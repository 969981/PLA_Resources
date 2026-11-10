/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306c5c0; name: FUN_0306c5c0
 */


void FUN_0306c5c0(long *param_1,long *param_2)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  
  iVar1 = *(int *)((long)param_2 + 0xc);
  if (iVar1 != 0) {
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1[1] = lVar3 + (ulong)*(ushort *)(param_2 + 1) + 0x20;
    uVar2 = *(ushort *)((long)param_2 + 10);
    *(uint *)(param_1 + 2) = iVar1 - (uint)uVar2;
    *(uint *)((long)param_1 + 0x14) = (uint)uVar2;
    if (uVar2 != 0) {
      FUN_0306c7fc();
      return;
    }
  }
  param_1[1] = 0;
  FUN_0306c7fc();
  return;
}


