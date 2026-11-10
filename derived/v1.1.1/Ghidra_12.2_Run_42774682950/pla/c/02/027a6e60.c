/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a6e60; name: FUN_027a6e60
 */


undefined8 FUN_027a6e60(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_027a6d5c(param_1,"https://api.fushigi.switch1.pokemon-gl.com/serial.update");
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc38) = 1;
    if (*(char *)(param_1 + 0x1fe8) != '\0') {
      if (*(char *)(param_1 + 0x1ff0) != '\0') {
        *(undefined1 *)(param_1 + 0x1ff0) = 0;
      }
      *(char *)(param_1 + 0x1fe8) = '\0';
    }
    if (*(char *)(param_1 + 0x1ff8) != '\0') {
      *(undefined1 *)(param_1 + 0x1ff8) = 0;
    }
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0xc3c) = 0;
  }
  return uVar2;
}


