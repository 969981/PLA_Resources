/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084a7c8; name: FUN_0084a7c8
 */


void FUN_0084a7c8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_04378018 + 0x10);
  if ((int)param_1[0x99] != *(int *)PTR_DAT_043779d0) {
    lVar3 = param_1[8];
    *(int *)(param_1 + 0x99) = *(int *)PTR_DAT_043779d0;
    if (lVar3 != 0) {
      FUN_0081a840(lVar3);
      FUN_0081a800(lVar3);
      param_1[8] = 0;
    }
    lVar3 = param_1[4];
    *(undefined2 *)(param_1 + 9) = 0;
    if (lVar3 != 0) {
      FUN_0081a840(lVar3);
      FUN_0081a800(lVar3);
      param_1[4] = 0;
    }
    *(undefined2 *)(param_1 + 5) = 0;
  }
  puVar2 = PTR_DAT_04378030;
  lVar3 = param_1[0x7b];
  puVar1 = PTR_DAT_04378030 + 0x10;
  param_1[0x7a] = (long)puVar1;
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x7b] = 0;
  }
  lVar3 = param_1[0x76];
  *(undefined2 *)(param_1 + 0x7c) = 0;
  param_1[0x75] = (long)puVar1;
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x76] = 0;
  }
  lVar3 = param_1[0x71];
  *(undefined2 *)(param_1 + 0x77) = 0;
  param_1[0x70] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x71] = 0;
  }
  lVar3 = param_1[0x6c];
  *(undefined2 *)(param_1 + 0x72) = 0;
  param_1[0x6b] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x6c] = 0;
  }
  lVar3 = param_1[0x67];
  *(undefined2 *)(param_1 + 0x6d) = 0;
  param_1[0x66] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x67] = 0;
  }
  lVar3 = param_1[0x62];
  *(undefined2 *)(param_1 + 0x68) = 0;
  param_1[0x61] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x62] = 0;
  }
  lVar3 = param_1[0x5d];
  *(undefined2 *)(param_1 + 99) = 0;
  param_1[0x5c] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x5d] = 0;
  }
  lVar3 = param_1[0x58];
  *(undefined2 *)(param_1 + 0x5e) = 0;
  param_1[0x57] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x58] = 0;
  }
  lVar3 = param_1[0x53];
  *(undefined2 *)(param_1 + 0x59) = 0;
  param_1[0x52] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x53] = 0;
  }
  lVar3 = param_1[0x4e];
  *(undefined2 *)(param_1 + 0x54) = 0;
  param_1[0x4d] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x4e] = 0;
  }
  lVar3 = param_1[0x49];
  *(undefined2 *)(param_1 + 0x4f) = 0;
  param_1[0x48] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x49] = 0;
  }
  lVar3 = param_1[0x44];
  *(undefined2 *)(param_1 + 0x4a) = 0;
  param_1[0x43] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x44] = 0;
  }
  lVar3 = param_1[0x3f];
  *(undefined2 *)(param_1 + 0x45) = 0;
  param_1[0x3e] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x3f] = 0;
  }
  lVar3 = param_1[0x3a];
  *(undefined2 *)(param_1 + 0x40) = 0;
  param_1[0x39] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x3a] = 0;
  }
  lVar3 = param_1[0x35];
  *(undefined2 *)(param_1 + 0x3b) = 0;
  param_1[0x34] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x35] = 0;
  }
  lVar3 = param_1[0x30];
  *(undefined2 *)(param_1 + 0x36) = 0;
  param_1[0x2f] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x30] = 0;
  }
  lVar3 = param_1[0x2b];
  *(undefined2 *)(param_1 + 0x31) = 0;
  param_1[0x2a] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x2b] = 0;
  }
  lVar3 = param_1[0x26];
  *(undefined2 *)(param_1 + 0x2c) = 0;
  param_1[0x25] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x26] = 0;
  }
  lVar3 = param_1[0x21];
  *(undefined2 *)(param_1 + 0x27) = 0;
  param_1[0x20] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x21] = 0;
  }
  lVar3 = param_1[0x1c];
  *(undefined2 *)(param_1 + 0x22) = 0;
  param_1[0x1b] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x1c] = 0;
  }
  lVar3 = param_1[0x17];
  *(undefined2 *)(param_1 + 0x1d) = 0;
  param_1[0x16] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x17] = 0;
  }
  lVar3 = param_1[0x12];
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[0x11] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x12] = 0;
  }
  lVar3 = param_1[0xd];
  *(undefined2 *)(param_1 + 0x13) = 0;
  param_1[0xc] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0xd] = 0;
  }
  lVar3 = param_1[8];
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[7] = (long)(puVar2 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[8] = 0;
  }
  *(undefined2 *)(param_1 + 9) = 0;
  lVar3 = param_1[4];
  param_1[3] = (long)(PTR_DAT_04378038 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[4] = 0;
  }
  *(undefined2 *)(param_1 + 5) = 0;
  return;
}


