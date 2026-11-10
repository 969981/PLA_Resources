/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f59b00; name: FUN_02f59b00
 */


void FUN_02f59b00(int param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_02f59d90(*(undefined4 *)(&DAT_0442d120 + (long)param_1 * 4));
  if ((*(uint *)(param_2 + 0x30) < 2) || (*(long *)(lVar1 + 0x8f8) != 0)) {
    FUN_02f58420(param_1,lVar1,param_2);
    return;
  }
  *(long *)(lVar1 + 0x8e8) = param_2;
  *(ulong *)(lVar1 + 0x8f8) = (ulong)*(uint *)(param_2 + 0x30);
  if ((*(byte *)(param_2 + 0x2c) & 1) == 0) {
    *(long *)(lVar1 + 0x8f0) =
         param_2 + -(*(int *)(param_2 + 0x34) * *(int *)(&DAT_0442c138 + (long)param_1 * 0x820));
  }
  else {
    *(long *)(lVar1 + 0x8f0) = param_2;
  }
  return;
}


