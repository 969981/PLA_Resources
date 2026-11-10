/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0109c570; name: FUN_0109c570
 */


void FUN_0109c570(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float __x;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  if (((char)param_2[5] == '\0') && (*(char *)((long)param_2 + 0x15) == '\0')) {
    return;
  }
  uVar1 = param_2[2];
  if (*param_2 <= param_2[2]) {
    uVar1 = *param_2;
  }
  if (uVar1 * param_2[1] < 5) {
    uVar3 = 1;
  }
  else {
    uVar3 = (ulong)(uVar1 * param_2[1]) / 5;
  }
  if ((char)param_2[5] == '\0') {
    if (*(char *)((long)param_2 + 0x15) == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar3 >> 1;
      if ((int)uVar3 == 0) {
        uVar3 = 1;
      }
      *param_1 = (uint)uVar3;
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  else {
    *param_1 = (uint)uVar3;
  }
  fVar6 = (float)(uVar1 & 0xffff);
  fVar4 = (float)NEON_ucvtf((uint)(ushort)param_2[3]);
  __x = fVar6 + fVar6 + 10.0;
  fVar6 = fVar6 + fVar4 + 10.0;
  fVar4 = SQRT(__x);
  if (NAN(fVar4)) {
    fVar4 = sqrtf(__x);
  }
  fVar5 = SQRT(fVar6);
  if (NAN(fVar5)) {
    fVar5 = sqrtf(fVar6);
  }
  uVar1 = (uint)(((__x * __x * fVar4) / (fVar5 * fVar6 * fVar6)) * (float)uVar3 + 1.0);
  *param_1 = uVar1;
  if ((char)param_2[6] == '\0') {
    fVar4 = 1.5;
    if (*(char *)((long)param_2 + 0x19) != '\0') {
      fVar4 = 1.7;
    }
    uVar1 = (uint)(fVar4 * (float)uVar1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (*(char *)((long)param_2 + 0x16) != '\0') {
    uVar1 = (uint)((float)uVar1 * 1.5);
    uVar2 = 1;
  }
  if (*(char *)((long)param_2 + 0x17) != '\0') {
    uVar1 = (uint)((float)uVar1 * 1.2);
    uVar2 = 1;
  }
  if (0xdb < param_2[4]) {
    uVar1 = (uint)((float)uVar1 * 1.2);
    uVar2 = 1;
  }
  *param_1 = uVar1;
  *(undefined1 *)((long)param_1 + 5) = uVar2;
  return;
}


