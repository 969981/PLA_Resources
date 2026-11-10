/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf4224; name: FUN_01bf4224
 */


void FUN_01bf4224(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x1230) == '\0') {
    uVar1 = FUN_01a50dc8(param_1,param_1 + 0xdb8);
    if (((uVar1 < 0x100) || ((uVar1 & 0xff) == 0)) &&
       (uVar2 = FUN_01bf2a08(param_1), (uVar2 & 1) == 0)) {
      FUN_01a51334(param_1,param_1 + 0xe68,1);
      FUN_01a4f4d4(param_1,param_1 + 0xe80,1);
      *(undefined4 *)(param_1 + 0xe98) = 1;
    }
  }
  return;
}


