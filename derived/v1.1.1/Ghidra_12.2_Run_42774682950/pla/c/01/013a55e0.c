/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a55e0; name: FUN_013a55e0
 */


undefined8 FUN_013a55e0(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  cVar1 = *(char *)(param_1 + 0xb1);
  if (cVar1 == '\x02') {
    *(undefined1 *)(param_1 + 0xb0) = 8;
    return 1;
  }
  if (cVar1 == '\x01') {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x90) + 0xa0))();
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    uVar3 = 2;
  }
  else {
    if (cVar1 != '\0') {
      return 0;
    }
    (**(code **)(**(long **)(param_1 + 0x90) + 0x98))();
    (**(code **)(**(long **)(param_1 + 0x90) + 0xb0))();
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0xb1) = uVar3;
  return 0;
}


