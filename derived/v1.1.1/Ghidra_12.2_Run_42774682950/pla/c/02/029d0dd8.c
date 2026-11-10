/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d0dd8; name: FUN_029d0dd8
 */


void FUN_029d0dd8(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  
  if ((*(short *)(param_2 + 0x70) == 0x1ec) && (*(char *)(param_2 + 0x369) == '\x01')) {
    FUN_02952a80(param_2,0,0);
    lVar2 = *(long *)(param_1 + 0x20);
    bVar1 = *(byte *)(param_2 + 0x7d);
    FUN_02952a80(*(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 0x10) + 8) + (ulong)bVar1 * 8 +
                  0x120),0,0);
    FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x54,(ulong)bVar1,0,0);
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x8f,
                 *(undefined1 *)(param_2 + 0x7d));
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0x4c,
                 *(undefined1 *)(param_2 + 0x7d),0xffff0000);
    return;
  }
  return;
}


