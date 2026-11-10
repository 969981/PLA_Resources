/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ae6ef0; name: FUN_00ae6ef0
 */


void FUN_00ae6ef0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x2b0) == '\0') {
    cVar2 = *(char *)(param_1 + 0x2e0);
  }
  else {
    *(undefined1 *)(param_1 + 0x2b0) = 0;
    cVar2 = *(char *)(param_1 + 0x2e0);
  }
  if (cVar2 == '\0') {
    cVar2 = *(char *)(param_1 + 0x310);
  }
  else {
    *(undefined1 *)(param_1 + 0x2e0) = 0;
    cVar2 = *(char *)(param_1 + 0x310);
  }
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x310) = 0;
  }
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 0x2c8) = param_2[1];
  *(undefined8 *)(param_1 + 0x2d8) = uVar3;
  uVar3 = *param_2;
  uVar4 = param_2[2];
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 600);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x250);
  *(undefined1 *)(param_1 + 0x2b0) = 1;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = uVar4;
  *(undefined8 *)(param_1 + 0x2c0) = uVar3;
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 0x288) = param_2[1];
  *(undefined8 *)(param_1 + 0x298) = uVar3;
  uVar3 = *param_2;
  uVar4 = param_2[2];
  *(undefined1 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x290) = uVar4;
  *(undefined8 *)(param_1 + 0x280) = uVar3;
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar1 = param_3[3];
  *(undefined8 *)(param_1 + 0x330) = param_3[2];
  *(undefined8 *)(param_1 + 800) = uVar3;
  *(undefined8 *)(param_1 + 0x338) = uVar1;
  *(undefined8 *)(param_1 + 0x328) = uVar4;
  *(undefined1 *)(param_1 + 0x310) = 1;
  return;
}


