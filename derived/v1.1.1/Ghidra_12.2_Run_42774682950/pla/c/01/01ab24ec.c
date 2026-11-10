/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ab24ec; name: FUN_01ab24ec
 */


void FUN_01ab24ec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = (float)((ulong)param_2[2] >> 0x20);
  fVar8 = (float)((ulong)param_2[10] >> 0x20);
  bVar6 = false;
  if (((float)param_2[2] == (float)param_2[10]) && (bVar6 = false, !NAN(fVar9) && !NAN(fVar8))) {
    bVar6 = fVar9 == fVar8;
  }
  bVar7 = false;
  if ((bVar6) && (bVar7 = false, !NAN((float)param_2[3]) && !NAN((float)param_2[0xb]))) {
    bVar7 = (float)param_2[3] == (float)param_2[0xb];
  }
  if (bVar7) {
    if ((float)*param_2 == (float)param_2[8]) {
      bVar6 = false;
      if (((float)((ulong)*param_2 >> 0x20) == (float)((ulong)param_2[8] >> 0x20)) &&
         (bVar6 = false, !NAN((float)param_2[1]) && !NAN((float)param_2[9]))) {
        bVar6 = (float)param_2[1] == (float)param_2[9];
      }
      if ((((bVar6) && (*(float *)(param_2 + 4) == *(float *)(param_2 + 0xc))) &&
          (*(float *)((long)param_2 + 0x24) == *(float *)((long)param_2 + 100))) &&
         ((*(float *)(param_2 + 5) == *(float *)(param_2 + 0xd) &&
          (*(float *)((long)param_2 + 0x2c) == *(float *)((long)param_2 + 0x6c))))) {
        return;
      }
    }
  }
  fVar9 = *(float *)((long)param_2 + 0xc4);
  if (fVar9 <= 0.0) {
    if (*(int *)(param_2 + 0x19) == 0) {
      return;
    }
    FUN_0183240c(param_1 + 0x3f0,param_2,param_2 + 8,*(undefined4 *)(param_2 + 0x18));
  }
  else {
    uVar1 = param_2[1];
    uVar3 = param_2[2];
    uVar5 = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x3f0) = *param_2;
    *(undefined8 *)(param_1 + 0x400) = uVar3;
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    uVar2 = param_2[5];
    *(undefined8 *)(param_1 + 0x420) = param_2[6];
    *(undefined8 *)(param_1 + 0x410) = uVar4;
    *(undefined8 *)(param_1 + 0x418) = uVar2;
    *(undefined8 *)(param_1 + 0x408) = uVar3;
    *(undefined8 *)(param_1 + 0x3f8) = uVar1;
    memmove((void *)(param_1 + 0x470),param_2,0x38);
    uVar1 = param_2[8];
    uVar3 = param_2[9];
    *(undefined8 *)(param_1 + 0x440) = param_2[10];
    *(undefined8 *)(param_1 + 0x430) = uVar1;
    *(undefined8 *)(param_1 + 0x438) = uVar3;
    uVar1 = param_2[0xb];
    uVar2 = param_2[0xc];
    uVar3 = param_2[0xd];
    *(undefined8 *)(param_1 + 0x460) = param_2[0xe];
    *(undefined8 *)(param_1 + 0x450) = uVar2;
    *(undefined8 *)(param_1 + 0x458) = uVar3;
    *(undefined8 *)(param_1 + 0x448) = uVar1;
    *(undefined4 *)(param_1 + 0x4b0) = uVar5;
    *(float *)(param_1 + 0x4b4) = fVar9;
    *(undefined8 *)(param_1 + 0x4b8) = 0;
  }
  *(undefined1 *)(param_1 + 0x420) = 1;
  *(undefined1 *)(param_1 + 0x460) = 1;
  *(undefined4 *)(param_1 + 0x3e4) = 1;
  return;
}


