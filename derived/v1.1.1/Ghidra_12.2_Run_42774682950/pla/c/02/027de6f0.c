/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027de6f0; name: FUN_027de6f0
 */


undefined8 FUN_027de6f0(ushort *param_1,uint param_2)

{
  ushort uVar1;
  ulong uVar2;
  
  if (6 < param_2) {
    uVar2 = (ulong)param_2;
    do {
      uVar1 = *param_1;
      if ((uVar1 + 0x5400 >> 2 & 0x3fff) < 0xae9) {
        return 0;
      }
      if ((uVar1 - 0x4e00 & 0xffff) < 0x51cd) {
        return 0;
      }
      if ((ushort)(uVar1 + 0xcfbf) < 0x50) {
        return 0;
      }
      if ((ushort)(uVar1 + 0xcf5f) < 0x5a) {
        return 0;
      }
      uVar2 = uVar2 - 1;
      param_1 = param_1 + 1;
    } while (uVar2 != 0);
  }
  return 1;
}


