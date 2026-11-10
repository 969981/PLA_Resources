/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a13fd0; name: FUN_02a13fd0
 */


void FUN_02a13fd0(long param_1,byte param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)param_2 * 8 + 0x120);
  if ((int)param_3 < 8) {
    *(undefined8 *)(lVar1 + 0x98) = 0xf8;
    *(undefined8 *)(lVar1 + 0xa0) = 0xf8;
    *(undefined2 *)(lVar1 + 0x239) = 0;
    *(undefined8 *)(lVar1 + 0xe8) = 0xf8;
    *(undefined1 *)(lVar1 + 0x243) = 0;
    *(undefined8 *)(lVar1 + 0xa8) = 0xf8;
    *(undefined8 *)(lVar1 + 0xb0) = 0xf8;
    *(undefined4 *)(lVar1 + 0x23b) = 0;
    *(undefined8 *)(lVar1 + 200) = 0xf8;
    *(undefined8 *)(lVar1 + 0xb8) = 0xf8;
    *(undefined8 *)(lVar1 + 0xc0) = 0xf8;
    *(undefined1 *)(lVar1 + 0x23f) = 0;
    return;
  }
  *(undefined8 *)(lVar1 + 0x60 + (ulong)param_3 * 8 + 0x30) = 0xf8;
  *(undefined1 *)(lVar1 + 0x60 + (ulong)param_3 + 0x1d8) = 0;
  return;
}


