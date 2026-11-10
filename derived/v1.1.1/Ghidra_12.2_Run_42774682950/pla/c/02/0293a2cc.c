/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293a2cc; name: FUN_0293a2cc
 */


uint FUN_0293a2cc(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(*(long *)(param_1 + 0x88) + 8) +
                               (ulong)(param_2 & 0xff) * 8 + 0x120) + 0x140);
  uVar3 = (uint)uVar4;
  uVar2 = 0;
  if ((uVar3 & 7) == 2) {
    uVar2 = uVar3 >> 8 & 0x3f;
  }
  uVar1 = uVar3 >> 8 & 0x3f;
  if ((uVar3 & 7) != 4) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if ((uVar4 & 7) != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}


