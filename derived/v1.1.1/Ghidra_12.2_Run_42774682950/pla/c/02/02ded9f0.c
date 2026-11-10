/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ded9f0; name: FUN_02ded9f0
 */


undefined4 FUN_02ded9f0(long param_1,ulong param_2)

{
  long lVar1;
  ushort uVar2;
  undefined4 uVar3;
  
  uVar2 = *(ushort *)(param_1 + 0x54);
  if (1 < uVar2) {
    uVar2 = uVar2 - 1;
    *(ushort *)(param_1 + 0x54) = uVar2;
  }
  uVar3 = 0x11;
  if ((param_2 & 1) == 0) {
    uVar3 = 0x2d;
  }
  if ((param_2 & 1) == 0) {
    *(ulong *)(param_1 + 0x108) =
         *(long *)(param_1 + 0x110) + (ulong)*(uint *)(param_1 + 200) +
         (ulong)*(uint *)(param_1 + 0xd4);
    lVar1 = 0xde;
    if (uVar2 != 1) {
      lVar1 = 0xd2;
    }
    FUN_02dee070(param_1 + 0x68,*(undefined2 *)(param_1 + 0xd0),*(undefined2 *)(param_1 + lVar1));
    *(undefined8 *)(param_1 + 0x5c) = 0x30000002d;
  }
  return uVar3;
}


