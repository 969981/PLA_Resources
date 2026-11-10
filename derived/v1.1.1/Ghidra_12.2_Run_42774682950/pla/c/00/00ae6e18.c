/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ae6e18; name: FUN_00ae6e18
 */


void FUN_00ae6e18(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x2b0) == '\0') {
    cVar1 = *(char *)(param_1 + 0x2e0);
  }
  else {
    *(undefined1 *)(param_1 + 0x2b0) = 0;
    cVar1 = *(char *)(param_1 + 0x2e0);
  }
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0x310);
  }
  else {
    *(undefined1 *)(param_1 + 0x2e0) = 0;
    cVar1 = *(char *)(param_1 + 0x310);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x310) = 0;
  }
  uVar2 = param_2[3];
  *(undefined8 *)(param_1 + 0x2c8) = param_2[1];
  *(undefined8 *)(param_1 + 0x2d8) = uVar2;
  uVar2 = param_2[2];
  *(undefined8 *)(param_1 + 0x2c0) = *param_2;
  *(undefined1 *)(param_1 + 0x2b0) = 1;
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 600);
  *(undefined8 *)(param_1 + 0x2d0) = uVar2;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x250);
  uVar2 = param_2[3];
  *(undefined8 *)(param_1 + 0x288) = param_2[1];
  *(undefined8 *)(param_1 + 0x298) = uVar2;
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x290) = param_2[2];
  *(undefined8 *)(param_1 + 0x280) = uVar2;
  *(undefined1 *)(param_1 + 0x340) = 0;
  return;
}


