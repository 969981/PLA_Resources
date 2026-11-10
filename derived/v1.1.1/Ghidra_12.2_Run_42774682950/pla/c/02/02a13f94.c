/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a13f94; name: FUN_02a13f94
 */


void FUN_02a13f94(long param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)param_2 * 8 + 0x120);
  *(undefined1 *)(lVar1 + 0x239) = 0;
  *(undefined8 *)(lVar1 + 0x98) = 0xf8;
  *(undefined8 *)(lVar1 + 0xa0) = 0xf8;
  *(undefined2 *)(lVar1 + 0x23a) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0xf8;
  *(undefined1 *)(lVar1 + 0x243) = 0;
  *(undefined4 *)(lVar1 + 0x23c) = 0;
  *(undefined8 *)(lVar1 + 0xa8) = 0xf8;
  *(undefined8 *)(lVar1 + 0xb0) = 0xf8;
  *(undefined8 *)(lVar1 + 200) = 0xf8;
  *(undefined8 *)(lVar1 + 0xb8) = 0xf8;
  *(undefined8 *)(lVar1 + 0xc0) = 0xf8;
  return;
}


