/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03002dd0; name: FUN_03002dd0
 */


undefined8 FUN_03002dd0(long param_1,uint param_2,undefined2 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined2 local_24 [2];
  
  local_24[0] = param_3;
  uVar1 = FUN_03002b00((long *)(param_1 + 8),local_24);
  if ((*(int *)(param_1 + 0x14) < (int)uVar1) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 8) + ((long)((ulong)uVar1 << 0x20) >> 0x1c) + 8),
     *(uint *)(lVar3 + 0x18) <= param_2)) {
    uVar2 = 0;
  }
  else {
    lVar3 = *(long *)(lVar3 + 8);
    uVar4 = -(ulong)((uint)((int)param_2 >> 5) >> 0x1f) & 0xfffffffc00000000 |
            (ulong)(uint)((int)param_2 >> 5) << 2;
    uVar2 = 1;
    *(uint *)(lVar3 + uVar4) =
         *(uint *)(lVar3 + uVar4) & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
  }
  return uVar2;
}


