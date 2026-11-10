/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00842070; name: FUN_00842070
 */


undefined8 FUN_00842070(long param_1,short param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(ushort *)(param_1 + 0x32) != 0) {
    uVar3 = 0;
    do {
      uVar1 = *(int *)(param_1 + 0x2c) + uVar3;
      uVar2 = 0;
      if (*(ushort *)(param_1 + 0x28) <= uVar1) {
        uVar2 = (uint)*(ushort *)(param_1 + 0x28);
      }
      if (-1 < (short)(param_2 -
                      *(short *)(*(long *)(param_1 + 0x20) + (ulong)(uVar1 - uVar2) * 0x5d0 + 0x24))
         ) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_1 + 0x32));
  }
  return 1;
}


