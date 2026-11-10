/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015cac0; name: FUN_0015cac0
 */


void FUN_0015cac0(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)(param_2 + 9);
  while( true ) {
    bVar1 = bVar1 & 0xfc;
    *(byte *)(param_2 + 9) = bVar1;
    if (*(char *)(param_2 + 8) != '\a') break;
    if ((*(long *)(param_2 + 0x10) != 0) && ((*(byte *)(*(long *)(param_2 + 0x10) + 9) & 3) != 0)) {
      FUN_0015cac0(param_1);
      bVar1 = *(byte *)(param_2 + 9);
    }
    *(byte *)(param_2 + 9) = bVar1 | 4;
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x18) + *(long *)(param_1 + 0x20) + 0x28;
    if ((*(byte *)(param_2 + 10) >> 6 & 1) == 0) {
      return;
    }
    param_2 = *(long *)(param_2 + 0x20);
    bVar1 = *(byte *)(param_2 + 9);
    if ((bVar1 & 3) == 0) {
      return;
    }
  }
  switch(*(char *)(param_2 + 8)) {
  case '\x04':
    *(byte *)(param_2 + 9) = bVar1 | 4;
    uVar2 = (ulong)*(byte *)(param_2 + 0xb);
    goto LAB_0015cbc0;
  case '\x05':
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x70);
    break;
  case '\x06':
  case '&':
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x70);
    break;
  default:
    return;
  case '\b':
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_1 + 0x70);
    break;
  case '\t':
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 0x70);
    break;
  case '\x14':
    *(byte *)(param_2 + 9) = bVar1 | 4;
    uVar2 = *(ulong *)(param_2 + 0x10);
LAB_0015cbc0:
    *(ulong *)(param_1 + 0x20) = uVar2 + *(long *)(param_1 + 0x20) + 0x19;
    return;
  }
  *(long *)(param_1 + 0x70) = param_2;
  return;
}


