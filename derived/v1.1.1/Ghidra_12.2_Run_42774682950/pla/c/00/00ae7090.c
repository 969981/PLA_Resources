/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ae7090; name: FUN_00ae7090
 */


void FUN_00ae7090(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x240) = uVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x228);
  uVar4 = *(undefined8 *)(param_1 + 0x230);
  uVar5 = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x280) = uVar2;
  *(undefined8 *)(param_1 + 0x260) = uVar2;
  *(undefined8 *)(param_1 + 0x248) = uVar3;
  *(undefined8 *)(param_1 + 0x250) = uVar4;
  *(undefined8 *)(param_1 + 600) = uVar5;
  *(undefined8 *)(param_1 + 0x288) = uVar3;
  *(undefined8 *)(param_1 + 0x290) = uVar4;
  *(undefined8 *)(param_1 + 0x298) = uVar5;
  *(undefined8 *)(param_1 + 0x278) = uVar5;
  *(undefined8 *)(param_1 + 0x268) = uVar3;
  *(undefined8 *)(param_1 + 0x270) = uVar4;
  if (*(char *)(param_1 + 0x2b0) != '\0') {
    *(undefined1 *)(param_1 + 0x2b0) = 0;
  }
  if (*(char *)(param_1 + 0x2e0) == '\0') {
    cVar1 = *(char *)(param_1 + 0x310);
  }
  else {
    *(undefined1 *)(param_1 + 0x2e0) = 0;
    cVar1 = *(char *)(param_1 + 0x310);
  }
  if (cVar1 == '\0') {
    FUN_00ae6804(param_1,param_1 + 0x220);
    return;
  }
  *(undefined1 *)(param_1 + 0x310) = 0;
  FUN_00ae6804(param_1,param_1 + 0x220);
  return;
}


