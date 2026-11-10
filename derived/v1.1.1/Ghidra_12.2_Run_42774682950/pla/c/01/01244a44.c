/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01244a44; name: FUN_01244a44
 */


undefined8 FUN_01244a44(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)(param_1 + 0x1a8);
  if (cVar1 == '\x01') {
    FUN_01244850(param_1);
    uVar2 = FUN_01244aec(param_1);
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
    FUN_01244ab0(param_1);
  }
  *(char *)(param_1 + 0x1a8) = *(char *)(param_1 + 0x1a8) + '\x01';
  return 0;
}


