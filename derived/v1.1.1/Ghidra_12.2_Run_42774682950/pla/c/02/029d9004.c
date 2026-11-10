/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d9004; name: FUN_029d9004
 */


void FUN_029d9004(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(lVar3 + 0x20);
  bVar1 = *(byte *)(param_2 + 0x7d);
  FUN_02a38210(*(undefined8 *)(lVar2 + 0x18),
               *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x10) + 8) + (ulong)bVar1 * 8 + 0x120));
  FUN_02a3e6b8(*(undefined8 *)(lVar3 + 0x18),0x5b,(ulong)bVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(lVar3 + 0x20);
  bVar1 = *(byte *)(param_2 + 0x7d);
  FUN_029e93f0(*(undefined8 *)(lVar2 + 0x18),
               *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x10) + 8) + (ulong)bVar1 * 8 + 0x120));
  FUN_02a3e6b8(*(undefined8 *)(lVar3 + 0x18),0x5e,(ulong)bVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(lVar3 + 0x20);
  bVar1 = *(byte *)(param_2 + 0x7d);
  FUN_02a3a560(*(undefined8 *)(lVar2 + 0x18),
               *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x10) + 8) + (ulong)bVar1 * 8 + 0x120));
  FUN_02a3e6b8(*(undefined8 *)(lVar3 + 0x18),0x68,(ulong)bVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(lVar3 + 0x20);
  bVar1 = *(byte *)(param_2 + 0x7d);
  FUN_02a17af0(*(undefined8 *)(lVar2 + 0x18),
               *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x10) + 8) + (ulong)bVar1 * 8 + 0x120));
  FUN_02a3e6b8(*(undefined8 *)(lVar3 + 0x18),0x59,(ulong)bVar1);
  return;
}


