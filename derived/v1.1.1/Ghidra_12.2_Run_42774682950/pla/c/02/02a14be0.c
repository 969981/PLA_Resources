/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14be0; name: FUN_02a14be0
 */


void FUN_02a14be0(long param_1,ulong param_2,short param_3)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (param_2 & 0xff) * 8;
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + lVar4 + 0x120);
  uVar1 = *(short *)(lVar3 + 0x74) + param_3;
  uVar2 = *(ushort *)(lVar3 + 0x72);
  if (uVar1 <= *(ushort *)(lVar3 + 0x72)) {
    uVar2 = uVar1;
  }
  *(ushort *)(lVar3 + 0x74) = uVar2;
  *(undefined2 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + lVar4 + 0x120) + 0x2b0) =
       0x1f00;
  return;
}


