/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060b6b4; name: FUN_0060b6b4
 */


undefined8 FUN_0060b6b4(int *param_1,ushort *param_2)

{
  ushort uVar1;
  long lVar2;
  ushort uVar3;
  
  if ((param_2 == (ushort *)0x0) ||
     (lVar2 = *(long *)(param_1 + 6), (ulong)(*(long *)(param_1 + 8) - lVar2) < 2)) {
    return 0;
  }
  uVar3 = *(ushort *)(*(long *)(param_1 + 2) + lVar2);
  *(long *)(param_1 + 6) = lVar2 + 2;
  uVar1 = uVar3 >> 8 | uVar3 << 8;
  if (*param_1 != 0) {
    uVar1 = uVar3;
  }
  *param_2 = uVar1;
  return 1;
}


