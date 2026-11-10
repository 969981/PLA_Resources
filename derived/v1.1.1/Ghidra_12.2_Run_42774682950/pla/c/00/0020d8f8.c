/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020d8f8; name: FUN_0020d8f8
 */


int FUN_0020d8f8(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_0020d898();
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 200) = 0x1000;
    *(undefined8 *)(param_1 + 0xd0) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xe0) = 0x100000000;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    FUN_0020c168(param_1 + 0x48);
    FUN_0020c168(param_1 + 0x70);
    *(undefined2 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined1 *)(param_1 + 0xea) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  return iVar1;
}


