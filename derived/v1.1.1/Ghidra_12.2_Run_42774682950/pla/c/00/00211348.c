/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00211348; name: FUN_00211348
 */


void FUN_00211348(long param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 0xc);
    switch(cVar1) {
    case '\0':
      FUN_0020ca34();
      return;
    case '\x01':
      FUN_0020c8a4();
      return;
    case '\x02':
      FUN_0020c8f0();
      return;
    case '\x03':
      FUN_0020c914();
      return;
    case '\x04':
      FUN_0020c940();
      return;
    case '\x05':
      FUN_0020c950();
      return;
    case '\x06':
      FUN_0020c994();
      return;
    case '\a':
      FUN_0020c9c0();
      return;
    case '\b':
      FUN_0020c9f8();
      return;
    }
    if (*(char *)(param_1 + 0x60) == '\0') {
      FUN_0020ca38();
      return;
    }
    if (cVar1 == '\f') {
      FUN_0020ca58();
      return;
    }
    if (cVar1 == '\n') {
      FUN_0020ca3c();
      return;
    }
  }
  return;
}


