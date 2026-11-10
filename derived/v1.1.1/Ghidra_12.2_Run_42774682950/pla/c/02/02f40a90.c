/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f40a90; name: FUN_02f40a90
 */


void FUN_02f40a90(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = FUN_02f40b00();
  if (uVar3 == 0xffffffff) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    if (((~*(byte *)(param_1 + 0x24) & 0xf0) != 0) && ((char)*(byte *)(param_1 + 0x24) < '\0')) {
      uVar3 = uVar3 + ((int)**(char **)(param_1 + 0x18) >> 7 ^ 0xffffffffU);
    }
    pcVar1 = *(char **)(param_1 + 0x18) + uVar3;
    pcVar2 = (char *)0x0;
    if (pcVar1 <= *(char **)(param_1 + 0x10)) {
      pcVar2 = pcVar1;
    }
    *(char **)(param_1 + 0x18) = pcVar2;
  }
  return;
}


