/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a5070; name: FUN_013a5070
 */


undefined8 FUN_013a5070(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)(param_1 + 0xb1);
  if (cVar1 == '\x02') {
    *(undefined1 *)(param_1 + 0xb0) = 1;
    return 1;
  }
  if (cVar1 == '\x01') {
    uVar2 = thunk_FUN_00d73754(*(undefined8 *)(param_1 + 0x98));
    if ((uVar2 & 1) != 0) {
      return 0;
    }
  }
  else {
    if (cVar1 != '\0') {
      return 0;
    }
    FUN_013cf79c(*(undefined8 *)(param_1 + 0x98));
    FUN_013cf914(*(undefined8 *)(param_1 + 0x98));
  }
  *(char *)(param_1 + 0xb1) = *(char *)(param_1 + 0xb1) + '\x01';
  return 0;
}


