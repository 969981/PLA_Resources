/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0d430; name: FUN_02f0d430
 */


bool FUN_02f0d430(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(int *)(param_1 + 0x18c) + param_2;
  lVar2 = FUN_02f0d480(param_1,*(undefined8 *)(param_1 + 0x180),
                       (ulong)*(uint *)(param_1 + 0x188) * 0x18,(ulong)uVar1 * 0x18);
  if (lVar2 != 0) {
    *(long *)(param_1 + 0x180) = lVar2;
    *(uint *)(param_1 + 0x18c) = uVar1;
  }
  return lVar2 != 0;
}


