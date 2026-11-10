/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfb158; name: FUN_02dfb158
 */


void FUN_02dfb158(long param_1)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 100);
  uVar2 = *(uint *)(param_1 + 0x78);
  if (*(uint *)(param_1 + uVar3 * 4 + 0x68) <= uVar2) {
    uVar1 = *(ushort *)(param_1 + 100) + 1;
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(ushort *)(param_1 + 100) = uVar1;
    uVar3 = (ulong)uVar1;
  }
  fVar4 = *(float *)(param_1 + uVar3 * 4 + 0x54);
  *(uint *)(param_1 + 0x78) = uVar2 + 1;
  *(float *)(param_1 + 0x7c) = *(float *)(param_1 + 0x7c) + fVar4;
  return;
}


