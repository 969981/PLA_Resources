/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb52b8; name: FUN_02eb52b8
 */


bool FUN_02eb52b8(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(int *)(param_1 + 0x10c) + param_2;
  lVar2 = FUN_02eb5300(param_1,*(undefined8 *)(param_1 + 0x100),
                       (ulong)*(uint *)(param_1 + 0x108) << 5,(ulong)uVar1 << 5);
  if (lVar2 != 0) {
    *(long *)(param_1 + 0x100) = lVar2;
    *(uint *)(param_1 + 0x10c) = uVar1;
  }
  return lVar2 != 0;
}


