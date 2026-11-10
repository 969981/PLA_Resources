/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ad8888; name: FUN_01ad8888
 */


void FUN_01ad8888(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (((*(int *)(*(long *)(param_1 + 0x5c8) + 0x70) != 0) &&
      (lVar1 = *(long *)(param_1 + 0x6f8), lVar1 != 0)) &&
     (uVar2 = *(ulong *)(lVar1 + 0x68) & (1L << (param_2 & 0x3f) ^ 0xffffffffffffffffU),
     *(ulong *)(lVar1 + 0x68) = uVar2, (uVar2 & 7) == 0)) {
    *(undefined4 *)(lVar1 + 0x70) = 2;
  }
  return;
}


