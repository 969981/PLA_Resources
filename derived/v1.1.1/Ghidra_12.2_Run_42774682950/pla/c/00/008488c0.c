/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008488c0; name: FUN_008488c0
 */


void FUN_008488c0(long *param_1,void *param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  uVar2 = 1;
  if ((bVar1 & 1) != 0) {
    uVar2 = 2;
  }
  if ((bVar1 & 2) != 0) {
    uVar2 = uVar2 + 2;
  }
  if ((bVar1 & 4) != 0) {
    uVar2 = uVar2 + 4;
  }
  if ((bVar1 & 8) != 0) {
    uVar2 = uVar2 + 8;
  }
  memcpy(param_2,(void *)(*param_1 + (ulong)uVar2),(ulong)*(ushort *)((long)param_1 + 0x2a));
  return;
}


