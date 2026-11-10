/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080956c; name: FUN_0080956c
 */


void FUN_0080956c(long param_1,void *param_2)

{
  ulong uVar1;
  
  memcpy((void *)(param_1 + 0xb8),param_2,0x480);
  *(uint *)(param_1 + 0x28) = (uint)*(ushort *)((long)param_2 + 0x26a);
  uVar1 = FUN_0081a85c((long)param_2 + 0x11,0xf);
  *(ulong *)(param_1 + 8) = uVar1 & 0xffffffff;
  *(ulong *)(param_1 + 0x10) = (ulong)*(ushort *)(param_1 + 0xc2);
  *(short *)(param_1 + 0x18) = (short)*(char *)(param_1 + 0x11f);
  *(short *)(param_1 + 0x1a) = (short)*(char *)(param_1 + 0x11e);
  *(bool *)(param_1 + 0x1e) = *(char *)(param_1 + 0x11a) == '\0';
  *(ushort *)(param_1 + 0x1c) = (ushort)*(byte *)((long)param_2 + 0x282);
  *(bool *)(param_1 + 0x1f) = *(char *)((long)param_2 + 0x281) != '\0';
  return;
}


