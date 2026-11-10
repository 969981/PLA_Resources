/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008834bc; name: FUN_008834bc
 */


void FUN_008834bc(long param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 local_28;
  
  lVar2 = FUN_00934074(*(undefined8 *)(*(long *)(param_1 + 0x2b68) + 0xd0),0);
  if (lVar2 == 0) {
    uVar3 = 0x1f;
  }
  else {
    uVar3 = *(undefined1 *)(*(long *)(lVar2 + 0x70) + 0x7d);
  }
  uVar4 = 1;
  if ((param_2 & 1) != 0) {
    uVar4 = 2;
  }
  FUN_0293d120(&local_28,uVar3,uVar4);
  bVar1 = *(byte *)(param_1 + 0x2be0);
  if ((ulong)bVar1 < 10) {
    *(byte *)(param_1 + 0x2be0) = bVar1 + 1;
    *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x2be8) = local_28;
  }
  return;
}


