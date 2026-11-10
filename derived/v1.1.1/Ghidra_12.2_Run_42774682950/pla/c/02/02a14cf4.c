/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14cf4; name: FUN_02a14cf4
 */


void FUN_02a14cf4(long param_1,byte param_2,byte param_3,byte param_4,undefined8 param_5,
                 undefined8 param_6,byte param_7,undefined8 param_8,undefined8 param_9,byte param_10
                 )

{
  long lVar1;
  undefined1 uVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)param_2 * 8 + 0x120);
  if (param_3 < 3) {
    *(byte *)(lVar1 + 0x2e4) = param_3;
    uVar2 = 0;
    if (param_3 != 1) {
      uVar2 = 5;
    }
    *(undefined1 *)(lVar1 + 0x2e7) = uVar2;
  }
  if (param_4 < 3) {
    *(byte *)(lVar1 + 0x2e5) = param_4;
    uVar2 = 0;
    if (param_4 != 1) {
      uVar2 = 5;
    }
    *(undefined1 *)(lVar1 + 0x2e8) = uVar2;
  }
  if (param_7 < 3) {
    *(byte *)(lVar1 + 0x2e6) = param_7;
    uVar2 = 0;
    if (param_7 != 1) {
      uVar2 = 5;
    }
    *(undefined1 *)(lVar1 + 0x2e9) = uVar2;
  }
  if (param_10 < 4) {
    *(byte *)(lVar1 + 0x36b) = param_10;
  }
  return;
}


