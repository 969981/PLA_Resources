/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014fd20; name: FUN_0014fd20
 */


undefined8 FUN_0014fd20(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int local_24;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x20);
  if ((long)param_2 < *(long *)(param_1 + 0x30) - lVar2 >> 4) {
    uVar3 = lVar2 + (long)param_2 * 0x10;
    if (uVar3 <= *(ulong *)(lVar4 + 8)) {
      return 1;
    }
  }
  else {
    if ((1000000 - param_2 < (int)((ulong)(lVar2 - *(long *)(param_1 + 0x38)) >> 4) + 5) ||
       (local_24 = param_2, iVar1 = FUN_0015a410(param_1,&LAB_0014fdf0,&local_24), iVar1 != 0)) {
      return 0;
    }
    uVar3 = *(long *)(param_1 + 0x10) + (long)local_24 * 0x10;
    if (uVar3 <= *(ulong *)(lVar4 + 8)) {
      return 1;
    }
  }
  *(ulong *)(lVar4 + 8) = uVar3;
  return 1;
}


