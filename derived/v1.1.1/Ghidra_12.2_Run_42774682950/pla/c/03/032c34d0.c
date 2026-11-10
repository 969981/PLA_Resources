/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c34d0; name: FUN_032c34d0
 */


ulong FUN_032c34d0(long *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = (int)(param_2 >> 4) * -0x61c8864f;
  while( true ) {
    uVar1 = *(uint *)((long)param_1 + 0xc) & uVar1;
    uVar2 = (ulong)uVar1;
    uVar3 = *(ulong *)(*param_1 + uVar2 * 0x10);
    if (uVar3 == 0xffffffffffffffff) {
      return (long)(int)(*(uint *)((long)param_1 + 0xc) + 1);
    }
    if ((uVar3 == param_2) && (*(long *)(*param_1 + uVar2 * 0x10 + 8) == param_3)) break;
    uVar1 = uVar1 + 1;
  }
  return uVar2;
}


