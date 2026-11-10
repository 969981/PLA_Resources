/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02786a0c; name: FUN_02786a0c
 */


ulong FUN_02786a0c(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  char local_30 [8];
  long local_28;
  
  FUN_0275d180(local_30);
  if (local_30[0] == '\0') {
    uVar1 = 0;
  }
  else {
    uVar2 = (local_28 - *param_1) * 1000000000;
    uVar1 = ((long)uVar2 >> 0x20) * 0x68fd3d1d + ((uVar2 & 0xfffffe00) * 0x68fd3d1d >> 0x20);
    uVar1 = ((ulong)*(uint *)(&DAT_03a7e1b8 + (ulong)(*(uint *)((long)param_1 + 0xc) % 0x14) * 4) +
            ((long)uVar2 >> 0x3f)) -
            ((long)(((long)uVar2 >> 0x20) * 0x12533fe + ((long)uVar1 >> 0x20) +
                   ((uVar2 & 0xfffffe00) * 0x12533fe + (uVar1 & 0xffffffff) >> 0x20)) >> 0x1c);
    uVar1 = uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
  }
  return uVar1;
}


