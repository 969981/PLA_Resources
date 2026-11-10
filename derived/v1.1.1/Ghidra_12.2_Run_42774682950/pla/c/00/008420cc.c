/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008420cc; name: FUN_008420cc
 */


undefined8 FUN_008420cc(long param_1,byte param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar1 = (ushort)param_2;
  if (uVar1 == 0xfd) {
    return 0;
  }
  uVar2 = 0;
  if ((uVar1 < 0x18) && (uVar1 < *(ushort *)(param_1 + 0x51e))) {
    uVar2 = *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x3f8);
  }
  return uVar2;
}


