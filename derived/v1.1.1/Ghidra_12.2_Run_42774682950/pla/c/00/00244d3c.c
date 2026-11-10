/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00244d3c; name: FUN_00244d3c
 */


undefined4 FUN_00244d3c(long param_1)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  if ((*(byte *)(param_1 + 0x60) >> 2 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar3 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    piVar2 = (int *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar3 + 4) + uVar3));
    if ((*piVar2 == 0x15) && (lVar4 = (long)*(char *)((long)piVar2 + 6), -1 < lVar4)) {
      uVar5 = *(undefined4 *)
               (lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar3 + 4 + lVar4 * 4) + uVar3) + 8);
    }
  }
  return uVar5;
}


