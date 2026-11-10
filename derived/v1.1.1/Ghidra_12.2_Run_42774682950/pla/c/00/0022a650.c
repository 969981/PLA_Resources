/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022a650; name: FUN_0022a650
 */


undefined4 FUN_0022a650(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (((int)param_2 < 5) && ((uVar1 >> 0x10 & 1) != 0)) {
    puVar2 = (undefined4 *)
             (*(long *)(param_1 + 0x18) +
              ((ulong)(uVar1 >> 4) & 0x1c) + ((ulong)(uVar1 >> 8) & 0xc) +
              ((ulong)(uVar1 >> 0xc) & 8) + ((ulong)(uVar1 >> 0xc) & 1) * 0xc +
              (((ulong)(uVar1 << 4) & 0x30) + ((ulong)uVar1 & 0x30) | (ulong)(uVar1 >> 6) & 8) +
              (((ulong)(uVar1 >> 0xd) & 3) + ((ulong)(uVar1 >> 2) & 3)) * 0x14 +
              (ulong)(param_2 % 5) * 4 + 4);
  }
  else {
    if (4 < (int)param_2) {
      return 0xffffffff;
    }
    if ((uVar1 >> 0x11 & 1) == 0) {
      return 0xffffffff;
    }
    puVar2 = (undefined4 *)
             (*(long *)(param_1 + 0x18) +
              (long)(int)((uVar1 >> 4 & 0x1c) + (uVar1 >> 8 & 0xc) + (uVar1 >> 0xc & 8) +
                          (uVar1 >> 0xc & 1) * 0xc + (uVar1 >> 0x10 & 1) * 0x1c +
                          (uVar1 >> 0xc & 0x10) * (uVar1 >> 6 & 7) +
                          ((uVar1 & 3) * 0x10 + (uVar1 & 0x30) | uVar1 >> 6 & 8) +
                         ((uVar1 >> 0xd & 3) + (uVar1 >> 2 & 3)) * 0x14) + (ulong)(param_2 % 5) * 4
             + 0x60);
  }
  return *puVar2;
}


