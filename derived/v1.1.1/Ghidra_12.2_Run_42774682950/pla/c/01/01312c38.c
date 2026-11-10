/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01312c38; name: FUN_01312c38
 */


void FUN_01312c38(long param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float local_18;
  float fStack_14;
  
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0xd60) = uVar2;
  uVar1 = 0xc4728000;
  fVar4 = (float)((ulong)uVar2 >> 0x20);
  if (((float)uVar2 < -970.0) || (uVar1 = 0x44728000, 970.0 < (float)uVar2)) {
    *(undefined4 *)(param_1 + 0xd60) = uVar1;
  }
  uVar1 = 0x44700000;
  if ((960.0 < fVar4) || (uVar1 = 0xc4700000, fVar4 < -960.0)) {
    *(undefined4 *)(param_1 + 0xd64) = uVar1;
  }
  FUN_01318a78(param_1,param_3 & 1);
  FUN_01318bcc(param_1);
  if (*(code **)(param_1 + 0x650) != (code *)0x0) {
    local_18 = *(float *)(param_1 + 0xd60);
    if (*(char *)(param_1 + 0x1e08) == '\0') {
      fVar4 = *(float *)(param_1 + 0x1e30);
      fStack_14 = *(float *)(param_1 + 0xd64);
      local_18 = local_18 + (local_18 - local_18) * fVar4;
      fVar5 = fStack_14 - fStack_14;
    }
    else {
      local_18 = local_18 + *(float *)(param_1 + 0x1e28);
      fStack_14 = *(float *)(param_1 + 0xd64) + *(float *)(param_1 + 0x1e2c);
      fVar5 = *(float *)(param_1 + 0x1e30);
      local_18 = local_18 + (local_18 - local_18) * fVar5;
      fVar4 = fStack_14 - fStack_14;
    }
    fStack_14 = fStack_14 + fVar5 * fVar4;
    (**(code **)(param_1 + 0x650))(param_1 + 0x670,&local_18);
  }
  lVar3 = *(long *)(param_1 + 0x5c0);
  *(undefined1 *)(lVar3 + 0x110) = 1;
  *(undefined8 *)(lVar3 + 0x114) = *(undefined8 *)(param_1 + 0xd60);
  return;
}


