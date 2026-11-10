/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126b3b8; name: FUN_0126b3b8
 */


undefined8 FUN_0126b3b8(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)(param_1 + 0x1a0);
  if (cVar1 == '\x01') {
    FUN_0126b2dc(param_1);
    uVar2 = FUN_0126b460(param_1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (cVar1 == '\x02') {
      return 1;
    }
    if (cVar1 != '\0') {
      return 0;
    }
    FUN_0126b424(param_1);
  }
  *(char *)(param_1 + 0x1a0) = *(char *)(param_1 + 0x1a0) + '\x01';
  return 0;
}


