/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01312d60; name: FUN_01312d60
 */


void FUN_01312d60(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float local_18;
  float fStack_14;
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0xd60) = uVar1;
  local_18 = (float)uVar1;
  fVar4 = -468.0;
  fStack_14 = (float)((ulong)uVar1 >> 0x20);
  if ((local_18 < -468.0) || (fVar4 = 468.0, 468.0 < local_18)) {
    *(float *)(param_1 + 0xd60) = fVar4;
    local_18 = fVar4;
  }
  fVar4 = 495.0;
  if ((495.0 < fStack_14) || (fVar4 = -441.0, fStack_14 < -441.0)) {
    *(float *)(param_1 + 0xd64) = fVar4;
    pcVar2 = *(code **)(param_1 + 0x650);
    fStack_14 = fVar4;
  }
  else {
    pcVar2 = *(code **)(param_1 + 0x650);
  }
  if (pcVar2 != (code *)0x0) {
    if (*(char *)(param_1 + 0x1e08) == '\0') {
      fVar4 = *(float *)(param_1 + 0x1e30);
      local_18 = local_18 + (local_18 - local_18) * fVar4;
      fVar5 = fStack_14 - fStack_14;
    }
    else {
      local_18 = local_18 + *(float *)(param_1 + 0x1e28);
      fStack_14 = fStack_14 + *(float *)(param_1 + 0x1e2c);
      fVar5 = *(float *)(param_1 + 0x1e30);
      local_18 = local_18 + (local_18 - local_18) * fVar5;
      fVar4 = fStack_14 - fStack_14;
    }
    fStack_14 = fStack_14 + fVar5 * fVar4;
    (*pcVar2)(param_1 + 0x670,&local_18);
    local_18 = *(float *)(param_1 + 0xd60);
    fStack_14 = *(float *)(param_1 + 0xd64);
  }
  lVar3 = *(long *)(param_1 + 0x5c0);
  *(undefined1 *)(lVar3 + 0x110) = 1;
  *(float *)(lVar3 + 0x114) = ((local_18 + 468.0) / 936.0) * 2000.0 + -1000.0;
  *(float *)(lVar3 + 0x118) = ((fStack_14 + -495.0) / 936.0) * 2000.0 + 1027.0;
  return;
}


