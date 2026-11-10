/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d4b98; name: FUN_029d4b98
 */


void FUN_029d4b98(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float __x;
  
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 4) <= *(uint *)(param_1 + 0xc)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  uVar1 = uVar2 * *(int *)(param_1 + 8);
  if (uVar1 < 5) {
    uVar4 = 1;
  }
  else {
    uVar4 = (ulong)uVar1 / 5;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(char *)(param_1 + 0x19) == '\0') {
      uVar4 = 0;
    }
    else {
      uVar1 = (uint)(uVar4 >> 1);
      if (uVar4 >> 1 == 0) {
        uVar1 = 1;
      }
      uVar4 = (ulong)uVar1;
      *param_2 = uVar1;
      *(undefined1 *)(param_2 + 1) = 1;
    }
  }
  else {
    *param_2 = (uint)uVar4;
  }
  fVar7 = (float)(uVar2 & 0xffff);
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0x10));
  __x = fVar7 + fVar7 + 10.0;
  fVar7 = fVar7 + fVar5 + 10.0;
  fVar5 = SQRT(__x);
  if (NAN(fVar5)) {
    fVar5 = sqrtf(__x);
  }
  fVar6 = SQRT(fVar7);
  if (NAN(fVar6)) {
    fVar6 = sqrtf(fVar7);
  }
  uVar2 = (uint)(((__x * __x * fVar5) / (fVar6 * fVar7 * fVar7)) * (float)uVar4 + 1.0);
  *param_2 = uVar2;
  if (*(char *)(param_1 + 0x1c) == '\0') {
    iVar3 = 0x1800;
    if (*(char *)(param_1 + 0x1e) != '\0') {
      iVar3 = 0x1b33;
    }
    uVar1 = iVar3 * uVar2;
    uVar2 = uVar1 >> 0xc;
    if (0x800 < (uVar1 & 0xfff)) {
      uVar2 = uVar2 + 1;
    }
    *param_2 = uVar2;
    *(undefined1 *)((long)param_2 + 5) = 1;
  }
  if (*(char *)(param_1 + 0x1a) != '\0') {
    uVar2 = uVar2 * 3 >> 1 & 0xfffff;
    *(undefined1 *)((long)param_2 + 5) = 1;
    *param_2 = uVar2;
  }
  if (*(char *)(param_1 + 0x1b) != '\0') {
    uVar1 = uVar2 * 0x1333;
    uVar2 = uVar1 >> 0xc;
    if (0x800 < (uVar1 & 0xfff)) {
      uVar2 = uVar2 + 1;
    }
    *param_2 = uVar2;
    *(undefined1 *)((long)param_2 + 5) = 1;
  }
  if (0xdb < *(uint *)(param_1 + 0x14)) {
    uVar1 = uVar2 * 0x1333;
    uVar2 = uVar1 >> 0xc;
    if (0x800 < (uVar1 & 0xfff)) {
      uVar2 = uVar2 + 1;
    }
    *param_2 = uVar2;
    *(undefined1 *)((long)param_2 + 5) = 1;
  }
  if (*(char *)(param_1 + 0x1d) != '\0') {
    *param_2 = uVar2 * 3 >> 1 & 0xfffff;
    *(undefined1 *)((long)param_2 + 5) = 1;
  }
  return;
}


