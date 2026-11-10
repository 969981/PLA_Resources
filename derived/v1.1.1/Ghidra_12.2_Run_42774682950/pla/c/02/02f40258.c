/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f40258; name: FUN_02f40258
 */


undefined8 FUN_02f40258(long param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfc;
  uVar1 = 2;
  if ((param_2 != 0) && (param_3 != 0)) {
    *(long *)(param_1 + 8) = param_2;
    *(int *)(param_1 + 0x10) = param_3;
    FUN_02f402e0(param_1);
    uVar2 = (uint)*(byte *)(param_1 + 0x6c);
    if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) != 0) {
      uVar2 = FUN_02f40810(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x40);
      uVar2 = *(byte *)(param_1 + 0x6c) & 0xfffffffc |
              *(byte *)(param_1 + 0x6c) & 1 | (uVar2 & 1) << 1;
      *(undefined8 *)(param_1 + 100) = 0;
      *(char *)(param_1 + 0x6c) = (char)uVar2;
    }
    if ((uVar2 >> 1 & 1) == 0) {
      uVar1 = 2;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}


