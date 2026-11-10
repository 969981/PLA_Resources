/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002798ec; name: FUN_002798ec
 */


long FUN_002798ec(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
  param_1 = param_1 + (ulong)*(uint *)(param_1 + 0x14);
  uVar2 = (ulong)*(uint *)(param_1 + 0x3c);
  bVar3 = param_1 + uVar2 != 0;
  uVar1 = 1;
  if (uVar2 != 0 && bVar3) {
    uVar1 = 2;
  }
  uVar2 = (ulong)(uVar2 != 0 && bVar3);
  if (param_1 + (ulong)*(uint *)(param_1 + 0x40) != 0 && (ulong)*(uint *)(param_1 + 0x40) != 0) {
    uVar2 = uVar1;
  }
  return (long)*(int *)(param_1 + 8) *
         (uVar2 + ((ulong)*(uint *)(param_1 + 0x44) != 0 &&
                  param_1 + (ulong)*(uint *)(param_1 + 0x44) != 0) +
          (ulong)((ulong)*(uint *)(param_1 + 0x48) != 0 &&
                 param_1 + (ulong)*(uint *)(param_1 + 0x48) != 0) +
         (ulong)((ulong)*(uint *)(param_1 + 0x4c) != 0 &&
                param_1 + (ulong)*(uint *)(param_1 + 0x4c) != 0)) * 0x10 +
         (long)*(int *)(param_1 + 0x38) * 4;
}


