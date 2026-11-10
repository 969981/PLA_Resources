/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7984; name: FUN_02ea7984
 */


bool FUN_02ea7984(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(int *)(param_1 + 0x24) + param_2;
  lVar2 = FUN_02ea79d0(param_1,*(undefined8 *)(param_1 + 0x18),
                       (ulong)*(uint *)(param_1 + 0x20) * 0x18,(ulong)uVar1 * 0x18);
  if (lVar2 != 0) {
    *(long *)(param_1 + 0x18) = lVar2;
    *(uint *)(param_1 + 0x24) = uVar1;
  }
  return lVar2 != 0;
}


