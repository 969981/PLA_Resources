/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293a33c; name: FUN_0293a33c
 */


uint FUN_0293a33c(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*(long *)(*(long *)(*(long *)(param_1 + 0x88) + 8) +
                               (ulong)(param_2 & 0xff) * 8 + 0x120) + 0x180);
  if ((uVar1 & 7) == 0) {
    return 0;
  }
  switch((uint)uVar1 & 7) {
  case 1:
  case 2:
  case 3:
    return (uint)(uVar1 >> 0xe) & 0xffff;
  case 4:
    return (uint)(uVar1 >> 0x14) & 0xffff;
  default:
    return 0;
  }
}


