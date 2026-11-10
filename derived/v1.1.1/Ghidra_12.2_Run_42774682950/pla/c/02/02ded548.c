/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ded548; name: FUN_02ded548
 */


undefined8 FUN_02ded548(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  uint local_28;
  uint local_24;
  
  uVar2 = FUN_02f2017c();
  if (uVar2 < *(uint *)(param_1 + 0x24)) {
    local_28 = uVar2;
    FUN_02ded8e0(param_1 + 0x58,uVar2,&local_28,&local_24);
    uVar3 = 1;
    lVar4 = *(long *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x108) = *(long *)(param_1 + 0x110) + (ulong)local_24;
    *(uint *)(param_1 + 0x28) = local_28;
    *(uint *)(lVar4 + 0x29c) = uVar2 - local_28;
    puVar1 = (uint *)(lVar4 + 0x2a3);
    *puVar1 = *puVar1 & 0xfe3fffff;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}


