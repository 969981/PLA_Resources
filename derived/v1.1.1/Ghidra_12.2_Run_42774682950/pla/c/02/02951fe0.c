/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02951fe0; name: FUN_02951fe0
 */


void FUN_02951fe0(long param_1,uint param_2)

{
  ulong uVar1;
  
  if ((int)param_2 < 8) {
    *(undefined8 *)(param_1 + 0x98) = 0xf8;
    *(undefined8 *)(param_1 + 0xa0) = 0xf8;
    *(undefined2 *)(param_1 + 0x239) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0xf8;
    *(undefined1 *)(param_1 + 0x243) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0xf8;
    *(undefined8 *)(param_1 + 0xb0) = 0xf8;
    *(undefined4 *)(param_1 + 0x23b) = 0;
    uVar1 = 7;
    *(undefined8 *)(param_1 + 0xb8) = 0xf8;
    *(undefined8 *)(param_1 + 0xc0) = 0xf8;
  }
  else {
    uVar1 = (ulong)param_2;
  }
  *(undefined8 *)(param_1 + 0x60 + uVar1 * 8 + 0x30) = 0xf8;
  *(undefined1 *)(param_1 + 0x60 + uVar1 + 0x1d8) = 0;
  return;
}


