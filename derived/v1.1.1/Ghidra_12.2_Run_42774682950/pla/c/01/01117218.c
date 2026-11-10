/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01117218; name: FUN_01117218
 */


void FUN_01117218(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  param_1 = param_1 + ((ulong)(param_2 >> 3) & 0x1ffc);
  uVar2 = *(uint *)(param_1 + 0x1a8);
  uVar3 = 1 << (ulong)(param_2 & 0x1f);
  uVar1 = uVar2 & uVar3;
  if ((param_3 & 1) == 0) {
    if (uVar1 == 0) {
      return;
    }
  }
  else if (uVar1 != 0) {
    return;
  }
  *(uint *)(param_1 + 0x1a8) = uVar2 ^ uVar3;
  return;
}


