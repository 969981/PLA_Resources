/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03103cdc; name: FUN_03103cdc
 */


void FUN_03103cdc(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint local_14;
  
  lVar3 = *(long *)(param_1 + 8);
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  uVar1 = *(int *)(param_1 + 0x2c) + 1;
  uVar2 = *(uint *)(lVar3 + 8);
  if ((~uVar2 & 0xffffff) == 0) {
    local_14 = 0;
    do {
      local_14 = local_14 + 1;
      if (uVar1 <= local_14) {
        return;
      }
      uVar2 = *(uint *)(lVar3 + (ulong)local_14 * 0x10 + 8);
    } while ((~uVar2 & 0xffffff) == 0);
  }
  else {
    local_14 = 0;
  }
  do {
    FUN_030fe818(*(undefined8 *)(*(long *)(param_1 + 8) + (ulong)(uVar2 & 0xffffff) * 0x10),param_2)
    ;
    do {
      local_14 = local_14 + 1;
      if (uVar1 <= local_14) {
        return;
      }
      uVar2 = *(uint *)(lVar3 + (ulong)local_14 * 0x10 + 8);
    } while ((~uVar2 & 0xffffff) == 0);
  } while( true );
}


