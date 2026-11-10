/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022d4e0; name: FUN_0022d4e0
 */


void FUN_0022d4e0(long *param_1,long param_2,long param_3)

{
  ushort uVar1;
  
  *param_1 = param_2 + 0x1c;
  param_1[1] = param_2 + (ulong)*(uint *)(param_2 + 8);
  uVar1 = *(ushort *)(param_2 + 0x10);
  *(ushort *)(param_1 + 2) = uVar1;
  *(undefined2 *)((long)param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  param_1[3] = param_2 + (ulong)*(uint *)(param_2 + 0xc);
  param_1[4] = param_2 + (ulong)(*(int *)(param_2 + 0xc) + (uint)uVar1 * 0x18);
  param_1[5] = param_2 + (ulong)*(uint *)(param_2 + 0x14);
  param_1[6] = param_2 + (ulong)*(uint *)(param_2 + 0x18);
  param_1[7] = param_3;
  return;
}


