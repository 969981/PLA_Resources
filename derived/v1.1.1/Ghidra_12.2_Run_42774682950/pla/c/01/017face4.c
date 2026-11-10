/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017face4; name: FUN_017face4
 */


void FUN_017face4(long param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 0xb0);
  if ((*pcVar1 != '\0') && (pcVar1 = (char *)(param_1 + 0xd8), *pcVar1 != '\0')) {
    if (*(char *)(param_1 + 0x100) == '\0') {
      FUN_01804ac4(param_1 + 0x100);
      return;
    }
    if (*(char *)(param_1 + 0x128) == '\0') {
      FUN_01804ac4(param_1 + 0x128);
      return;
    }
    if (*(char *)(param_1 + 0x150) == '\0') {
      FUN_01804ac4(param_1 + 0x150);
      return;
    }
    if (*(char *)(param_1 + 0x178) == '\0') {
      FUN_01804ac4(param_1 + 0x178);
      return;
    }
    if (*(char *)(param_1 + 0x1a0) == '\0') {
      FUN_01804ac4(param_1 + 0x1a0);
      return;
    }
    if (*(char *)(param_1 + 0x1c8) == '\0') {
      FUN_01804ac4(param_1 + 0x1c8);
      return;
    }
    if (*(char *)(param_1 + 0x1f0) == '\0') {
      FUN_01804ac4(param_1 + 0x1f0);
      return;
    }
    if (*(char *)(param_1 + 0x218) == '\0') {
      FUN_01804ac4(param_1 + 0x218);
      return;
    }
    if (*(char *)(param_1 + 0x240) == '\0') {
      FUN_01804ac4(param_1 + 0x240);
      return;
    }
    if (*(char *)(param_1 + 0x268) == '\0') {
      FUN_01804ac4(param_1 + 0x268);
      return;
    }
    if (*(char *)(param_1 + 0x290) == '\0') {
      FUN_01804ac4(param_1 + 0x290);
      return;
    }
    if (*(char *)(param_1 + 0x2b8) == '\0') {
      FUN_01804ac4(param_1 + 0x2b8);
      return;
    }
    if (*(char *)(param_1 + 0x2e0) == '\0') {
      FUN_01804ac4(param_1 + 0x2e0);
      return;
    }
    if (*(char *)(param_1 + 0x308) != '\0') {
      return;
    }
    pcVar1 = (char *)(param_1 + 0x308);
  }
  FUN_01804ac4(pcVar1);
  return;
}


