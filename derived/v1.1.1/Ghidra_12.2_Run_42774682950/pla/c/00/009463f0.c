/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009463f0; name: FUN_009463f0
 */


void FUN_009463f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 4);
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar4;
    *param_1 = uVar2;
    param_1[1] = uVar3;
  }
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  if ((code *)param_2[0x12] != (code *)0x0) {
    (*(code *)param_2[0x12])(param_2 + 0x14,param_1 + 0x14);
    uVar2 = param_2[0x10];
    uVar3 = param_2[0x11];
    uVar4 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = uVar4;
    param_1[0x10] = uVar2;
    param_1[0x11] = uVar3;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if ((code *)param_2[0x22] != (code *)0x0) {
    (*(code *)param_2[0x22])(param_2 + 0x24,param_1 + 0x24);
    uVar2 = param_2[0x20];
    uVar3 = param_2[0x21];
    uVar4 = param_2[0x23];
    param_1[0x22] = param_2[0x22];
    param_1[0x23] = uVar4;
    param_1[0x20] = uVar2;
    param_1[0x21] = uVar3;
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  if ((code *)param_2[0x32] != (code *)0x0) {
    (*(code *)param_2[0x32])(param_2 + 0x34,param_1 + 0x34);
    uVar2 = param_2[0x30];
    uVar3 = param_2[0x31];
    uVar4 = param_2[0x33];
    param_1[0x32] = param_2[0x32];
    param_1[0x33] = uVar4;
    param_1[0x30] = uVar2;
    param_1[0x31] = uVar3;
  }
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  if ((code *)param_2[0x42] != (code *)0x0) {
    (*(code *)param_2[0x42])(param_2 + 0x44,param_1 + 0x44);
    uVar2 = param_2[0x40];
    uVar3 = param_2[0x41];
    uVar4 = param_2[0x43];
    param_1[0x42] = param_2[0x42];
    param_1[0x43] = uVar4;
    param_1[0x40] = uVar2;
    param_1[0x41] = uVar3;
  }
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  if ((code *)param_2[0x52] != (code *)0x0) {
    (*(code *)param_2[0x52])(param_2 + 0x54,param_1 + 0x54);
    uVar2 = param_2[0x50];
    uVar3 = param_2[0x51];
    uVar4 = param_2[0x53];
    param_1[0x52] = param_2[0x52];
    param_1[0x53] = uVar4;
    param_1[0x50] = uVar2;
    param_1[0x51] = uVar3;
  }
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  if ((code *)param_2[0x62] != (code *)0x0) {
    (*(code *)param_2[0x62])(param_2 + 100,param_1 + 100);
    uVar2 = param_2[0x60];
    uVar3 = param_2[0x61];
    uVar4 = param_2[99];
    param_1[0x62] = param_2[0x62];
    param_1[99] = uVar4;
    param_1[0x60] = uVar2;
    param_1[0x61] = uVar3;
  }
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  if ((code *)param_2[0x72] != (code *)0x0) {
    (*(code *)param_2[0x72])(param_2 + 0x74,param_1 + 0x74);
    uVar2 = param_2[0x70];
    uVar3 = param_2[0x71];
    uVar4 = param_2[0x73];
    param_1[0x72] = param_2[0x72];
    param_1[0x73] = uVar4;
    param_1[0x70] = uVar2;
    param_1[0x71] = uVar3;
  }
  uVar3 = param_2[0x80];
  uVar2 = param_2[0x81];
  param_1[0x82] = param_2[0x82];
  param_1[0x80] = uVar3;
  uVar3 = param_2[0x85];
  uVar4 = param_2[0x83];
  uVar5 = param_2[0x84];
  param_1[0x86] = param_2[0x86];
  param_1[0x84] = uVar5;
  param_1[0x83] = uVar4;
  param_1[0x85] = uVar3;
  param_1[0x81] = uVar2;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  if ((code *)param_2[0x8a] != (code *)0x0) {
    (*(code *)param_2[0x8a])(param_2 + 0x8c,param_1 + 0x8c);
    uVar2 = param_2[0x88];
    uVar3 = param_2[0x89];
    uVar4 = param_2[0x8b];
    param_1[0x8a] = param_2[0x8a];
    param_1[0x8b] = uVar4;
    param_1[0x88] = uVar2;
    param_1[0x89] = uVar3;
  }
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  if ((code *)param_2[0x9a] != (code *)0x0) {
    (*(code *)param_2[0x9a])(param_2 + 0x9c,param_1 + 0x9c);
    uVar2 = param_2[0x98];
    uVar3 = param_2[0x99];
    uVar4 = param_2[0x9b];
    param_1[0x9a] = param_2[0x9a];
    param_1[0x9b] = uVar4;
    param_1[0x98] = uVar2;
    param_1[0x99] = uVar3;
  }
  param_1[0xab] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  if ((code *)param_2[0xaa] != (code *)0x0) {
    (*(code *)param_2[0xaa])(param_2 + 0xac,param_1 + 0xac);
    uVar2 = param_2[0xa8];
    uVar3 = param_2[0xa9];
    uVar4 = param_2[0xab];
    param_1[0xaa] = param_2[0xaa];
    param_1[0xab] = uVar4;
    param_1[0xa8] = uVar2;
    param_1[0xa9] = uVar3;
  }
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  if ((code *)param_2[0xba] != (code *)0x0) {
    (*(code *)param_2[0xba])(param_2 + 0xbc,param_1 + 0xbc);
    uVar2 = param_2[0xb8];
    uVar3 = param_2[0xb9];
    uVar4 = param_2[0xbb];
    param_1[0xba] = param_2[0xba];
    param_1[0xbb] = uVar4;
    param_1[0xb8] = uVar2;
    param_1[0xb9] = uVar3;
  }
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  if ((code *)param_2[0xca] != (code *)0x0) {
    (*(code *)param_2[0xca])(param_2 + 0xcc,param_1 + 0xcc);
    uVar2 = param_2[200];
    uVar3 = param_2[0xc9];
    uVar4 = param_2[0xcb];
    param_1[0xca] = param_2[0xca];
    param_1[0xcb] = uVar4;
    param_1[200] = uVar2;
    param_1[0xc9] = uVar3;
  }
  uVar1 = *(undefined4 *)(param_2 + 0xdf);
  param_1[0xdd] = param_2[0xdd];
  uVar2 = param_2[0xdb];
  param_1[0xd9] = param_2[0xd9];
  param_1[0xdb] = uVar2;
  uVar2 = param_2[0xd8];
  param_1[0xda] = param_2[0xda];
  param_1[0xd8] = uVar2;
  uVar2 = param_2[0xdc];
  uVar3 = param_2[0xde];
  *(undefined4 *)(param_1 + 0xdf) = uVar1;
  param_1[0xde] = uVar3;
  param_1[0xdc] = uVar2;
  return;
}


