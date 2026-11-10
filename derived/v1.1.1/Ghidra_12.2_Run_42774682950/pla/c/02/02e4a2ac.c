/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4a2ac; name: FUN_02e4a2ac
 */


void FUN_02e4a2ac(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar1 = param_2[3];
  *(undefined8 *)(param_4 + 0xb8) = param_2[1];
  *(undefined8 *)(param_4 + 200) = uVar1;
  uVar1 = *param_2;
  *(undefined8 *)(param_4 + 0xc0) = param_2[2];
  *(undefined8 *)(param_4 + 0xb0) = uVar1;
  if (*(int *)((long)param_2 + 0x284) < 1) {
    *(undefined8 *)(param_4 + 0xd8) = param_2[0x40];
  }
  else {
    *(undefined8 *)(param_4 + 0xd0) = param_2[0x40];
  }
  uVar1 = param_2[7];
  *(undefined8 *)(param_4 + 0xe8) = param_2[5];
  *(undefined8 *)(param_4 + 0xf8) = uVar1;
  uVar1 = param_2[4];
  *(undefined8 *)(param_4 + 0xf0) = param_2[6];
  *(undefined8 *)(param_4 + 0xe0) = uVar1;
  if (*(int *)((long)param_2 + 0x284) < 1) {
    *(undefined8 *)(param_4 + 0x108) = param_2[0x41];
  }
  else {
    *(undefined8 *)(param_4 + 0x100) = param_2[0x41];
  }
  uVar1 = param_2[0xb];
  *(undefined8 *)(param_4 + 0x118) = param_2[9];
  *(undefined8 *)(param_4 + 0x128) = uVar1;
  uVar1 = param_2[8];
  *(undefined8 *)(param_4 + 0x120) = param_2[10];
  *(undefined8 *)(param_4 + 0x110) = uVar1;
  if (*(int *)((long)param_2 + 0x284) < 1) {
    *(undefined8 *)(param_4 + 0x138) = param_2[0x42];
  }
  else {
    *(undefined8 *)(param_4 + 0x130) = param_2[0x42];
  }
  uVar1 = param_2[0xf];
  *(undefined8 *)(param_4 + 0x148) = param_2[0xd];
  *(undefined8 *)(param_4 + 0x158) = uVar1;
  uVar1 = param_2[0xc];
  *(undefined8 *)(param_4 + 0x150) = param_2[0xe];
  *(undefined8 *)(param_4 + 0x140) = uVar1;
  if (*(int *)((long)param_2 + 0x284) < 1) {
    *(undefined8 *)(param_4 + 0x168) = param_2[0x43];
  }
  else {
    *(undefined8 *)(param_4 + 0x160) = param_2[0x43];
  }
  uVar1 = param_2[0x13];
  *(undefined8 *)(param_4 + 0x178) = param_2[0x11];
  *(undefined8 *)(param_4 + 0x188) = uVar1;
  uVar1 = param_2[0x10];
  *(undefined8 *)(param_4 + 0x180) = param_2[0x12];
  *(undefined8 *)(param_4 + 0x170) = uVar1;
  if (*(int *)((long)param_2 + 0x284) < 1) {
    *(undefined8 *)(param_4 + 0x198) = param_2[0x44];
  }
  else {
    *(undefined8 *)(param_4 + 400) = param_2[0x44];
  }
  uVar1 = param_2[0x17];
  *(undefined8 *)(param_4 + 0x1a8) = param_2[0x15];
  *(undefined8 *)(param_4 + 0x1b8) = uVar1;
  uVar1 = param_2[0x14];
  *(undefined8 *)(param_4 + 0x1b0) = param_2[0x16];
  *(undefined8 *)(param_4 + 0x1a0) = uVar1;
  if (*(int *)((long)param_2 + 0x284) < 1) {
    *(undefined8 *)(param_4 + 0x1c8) = param_2[0x45];
  }
  else {
    *(undefined8 *)(param_4 + 0x1c0) = param_2[0x45];
  }
  uVar1 = param_2[0x1b];
  *(undefined8 *)(param_4 + 0x1d8) = param_2[0x19];
  *(undefined8 *)(param_4 + 0x1e8) = uVar1;
  uVar1 = param_2[0x18];
  *(undefined8 *)(param_4 + 0x1e0) = param_2[0x1a];
  *(undefined8 *)(param_4 + 0x1d0) = uVar1;
  if (*(int *)((long)param_2 + 0x284) < 1) {
    *(undefined8 *)(param_4 + 0x1f8) = param_2[0x46];
  }
  else {
    *(undefined8 *)(param_4 + 0x1f0) = param_2[0x46];
  }
  uVar1 = param_2[0x1f];
  *(undefined8 *)(param_4 + 0x208) = param_2[0x1d];
  *(undefined8 *)(param_4 + 0x218) = uVar1;
  uVar1 = param_2[0x1c];
  *(undefined8 *)(param_4 + 0x210) = param_2[0x1e];
  *(undefined8 *)(param_4 + 0x200) = uVar1;
  if (*(int *)((long)param_2 + 0x284) < 1) {
    *(undefined8 *)(param_4 + 0x228) = param_2[0x47];
  }
  else {
    *(undefined8 *)(param_4 + 0x220) = param_2[0x47];
  }
  uVar1 = param_2[0x23];
  *(undefined8 *)(param_4 + 0x238) = param_2[0x21];
  *(undefined8 *)(param_4 + 0x248) = uVar1;
  uVar1 = param_2[0x20];
  *(undefined8 *)(param_4 + 0x240) = param_2[0x22];
  *(undefined8 *)(param_4 + 0x230) = uVar1;
  if (*(int *)((long)param_2 + 0x284) < 1) {
    *(undefined8 *)(param_4 + 600) = param_2[0x48];
  }
  else {
    *(undefined8 *)(param_4 + 0x250) = param_2[0x48];
  }
  uVar1 = param_2[0x27];
  *(undefined8 *)(param_4 + 0x268) = param_2[0x25];
  *(undefined8 *)(param_4 + 0x278) = uVar1;
  uVar1 = param_2[0x24];
  *(undefined8 *)(param_4 + 0x270) = param_2[0x26];
  *(undefined8 *)(param_4 + 0x260) = uVar1;
  if (*(int *)((long)param_2 + 0x284) < 1) {
    *(undefined8 *)(param_4 + 0x288) = param_2[0x49];
  }
  else {
    *(undefined8 *)(param_4 + 0x280) = param_2[0x49];
  }
  uVar1 = param_2[0x2b];
  *(undefined8 *)(param_4 + 0x298) = param_2[0x29];
  *(undefined8 *)(param_4 + 0x2a8) = uVar1;
  uVar1 = param_2[0x28];
  *(undefined8 *)(param_4 + 0x2a0) = param_2[0x2a];
  *(undefined8 *)(param_4 + 0x290) = uVar1;
  if (*(int *)((long)param_2 + 0x284) < 1) {
    *(undefined8 *)(param_4 + 0x2b8) = param_2[0x4a];
  }
  else {
    *(undefined8 *)(param_4 + 0x2b0) = param_2[0x4a];
  }
  uVar1 = param_2[0x2f];
  *(undefined8 *)(param_4 + 0x2c8) = param_2[0x2d];
  *(undefined8 *)(param_4 + 0x2d8) = uVar1;
  uVar1 = param_2[0x2c];
  *(undefined8 *)(param_4 + 0x2d0) = param_2[0x2e];
  *(undefined8 *)(param_4 + 0x2c0) = uVar1;
  if (*(int *)((long)param_2 + 0x284) < 1) {
    *(undefined8 *)(param_4 + 0x2e8) = param_2[0x4b];
  }
  else {
    *(undefined8 *)(param_4 + 0x2e0) = param_2[0x4b];
  }
  uVar1 = param_2[0x33];
  *(undefined8 *)(param_4 + 0x2f8) = param_2[0x31];
  *(undefined8 *)(param_4 + 0x308) = uVar1;
  uVar1 = param_2[0x30];
  *(undefined8 *)(param_4 + 0x300) = param_2[0x32];
  *(undefined8 *)(param_4 + 0x2f0) = uVar1;
  if (*(int *)((long)param_2 + 0x284) < 1) {
    *(undefined8 *)(param_4 + 0x318) = param_2[0x4c];
  }
  else {
    *(undefined8 *)(param_4 + 0x310) = param_2[0x4c];
  }
  uVar1 = param_2[0x37];
  *(undefined8 *)(param_4 + 0x328) = param_2[0x35];
  *(undefined8 *)(param_4 + 0x338) = uVar1;
  uVar1 = param_2[0x34];
  *(undefined8 *)(param_4 + 0x330) = param_2[0x36];
  *(undefined8 *)(param_4 + 800) = uVar1;
  if (*(int *)((long)param_2 + 0x284) < 1) {
    *(undefined8 *)(param_4 + 0x348) = param_2[0x4d];
  }
  else {
    *(undefined8 *)(param_4 + 0x340) = param_2[0x4d];
  }
  uVar1 = param_2[0x3b];
  *(undefined8 *)(param_4 + 0x358) = param_2[0x39];
  *(undefined8 *)(param_4 + 0x368) = uVar1;
  uVar1 = param_2[0x38];
  *(undefined8 *)(param_4 + 0x360) = param_2[0x3a];
  *(undefined8 *)(param_4 + 0x350) = uVar1;
  if (*(int *)((long)param_2 + 0x284) < 1) {
    *(undefined8 *)(param_4 + 0x378) = param_2[0x4e];
  }
  else {
    *(undefined8 *)(param_4 + 0x370) = param_2[0x4e];
  }
  uVar1 = param_2[0x3f];
  *(undefined8 *)(param_4 + 0x388) = param_2[0x3d];
  *(undefined8 *)(param_4 + 0x398) = uVar1;
  uVar1 = param_2[0x3c];
  *(undefined8 *)(param_4 + 0x390) = param_2[0x3e];
  *(undefined8 *)(param_4 + 0x380) = uVar1;
  if (*(int *)((long)param_2 + 0x284) < 1) {
    *(undefined8 *)(param_4 + 0x3a8) = param_2[0x4f];
  }
  else {
    *(undefined8 *)(param_4 + 0x3a0) = param_2[0x4f];
  }
  uVar1 = param_3[5];
  *(undefined8 *)(param_4 + 0x3c8) = param_3[3];
  *(undefined8 *)(param_4 + 0x3d8) = uVar1;
  *(undefined8 *)(param_4 + 0x3b8) = param_3[1];
  *(undefined8 *)(param_4 + 0x3b0) = *param_3;
  uVar1 = param_3[2];
  uVar2 = param_3[4];
  *(undefined4 *)(param_4 + 0x3e0) = 0x11;
  *(undefined8 *)(param_4 + 0x3d0) = uVar2;
  *(undefined8 *)(param_4 + 0x3c0) = uVar1;
  *(undefined8 *)(param_4 + 0x3f8) = *(undefined8 *)(param_4 + 0xb8);
  *(undefined8 *)(param_4 + 0x3f0) = *(undefined8 *)(param_4 + 0xb0);
  *(undefined8 *)(param_4 + 0x400) = *(undefined8 *)(param_4 + 0xc0);
  *(undefined8 *)(param_4 + 0x408) = *(undefined8 *)(param_4 + 200);
  auVar5 = NEON_fmax(*(undefined1 (*) [16])(param_4 + 0x400),*(undefined1 (*) [16])(param_4 + 0xf0),
                     4);
  auVar4 = NEON_fmin(*(undefined1 (*) [16])(param_4 + 0x3f0),*(undefined1 (*) [16])(param_4 + 0xe0),
                     4);
  auVar5 = NEON_fmax(auVar5,*(undefined1 (*) [16])(param_4 + 0x120),4);
  auVar4 = NEON_fmin(auVar4,*(undefined1 (*) [16])(param_4 + 0x110),4);
  auVar5 = NEON_fmax(auVar5,*(undefined1 (*) [16])(param_4 + 0x150),4);
  auVar4 = NEON_fmin(auVar4,*(undefined1 (*) [16])(param_4 + 0x140),4);
  auVar5 = NEON_fmax(auVar5,*(undefined1 (*) [16])(param_4 + 0x180),4);
  auVar4 = NEON_fmin(auVar4,*(undefined1 (*) [16])(param_4 + 0x170),4);
  auVar5 = NEON_fmax(auVar5,*(undefined1 (*) [16])(param_4 + 0x1b0),4);
  auVar4 = NEON_fmin(auVar4,*(undefined1 (*) [16])(param_4 + 0x1a0),4);
  auVar5 = NEON_fmax(auVar5,*(undefined1 (*) [16])(param_4 + 0x1e0),4);
  auVar4 = NEON_fmin(auVar4,*(undefined1 (*) [16])(param_4 + 0x1d0),4);
  auVar5 = NEON_fmax(auVar5,*(undefined1 (*) [16])(param_4 + 0x210),4);
  auVar4 = NEON_fmin(auVar4,*(undefined1 (*) [16])(param_4 + 0x200),4);
  auVar5 = NEON_fmax(auVar5,*(undefined1 (*) [16])(param_4 + 0x240),4);
  auVar4 = NEON_fmin(auVar4,*(undefined1 (*) [16])(param_4 + 0x230),4);
  auVar5 = NEON_fmax(auVar5,*(undefined1 (*) [16])(param_4 + 0x270),4);
  auVar4 = NEON_fmin(auVar4,*(undefined1 (*) [16])(param_4 + 0x260),4);
  auVar5 = NEON_fmax(auVar5,*(undefined1 (*) [16])(param_4 + 0x2a0),4);
  auVar4 = NEON_fmin(auVar4,*(undefined1 (*) [16])(param_4 + 0x290),4);
  auVar5 = NEON_fmax(auVar5,*(undefined1 (*) [16])(param_4 + 0x2d0),4);
  auVar4 = NEON_fmin(auVar4,*(undefined1 (*) [16])(param_4 + 0x2c0),4);
  auVar5 = NEON_fmax(auVar5,*(undefined1 (*) [16])(param_4 + 0x300),4);
  auVar4 = NEON_fmin(auVar4,*(undefined1 (*) [16])(param_4 + 0x2f0),4);
  auVar5 = NEON_fmax(auVar5,*(undefined1 (*) [16])(param_4 + 0x330),4);
  auVar4 = NEON_fmin(auVar4,*(undefined1 (*) [16])(param_4 + 800),4);
  auVar5 = NEON_fmax(auVar5,*(undefined1 (*) [16])(param_4 + 0x360),4);
  auVar4 = NEON_fmin(auVar4,*(undefined1 (*) [16])(param_4 + 0x350),4);
  auVar5 = NEON_fmax(auVar5,*(undefined1 (*) [16])(param_4 + 0x390),4);
  auVar4 = NEON_fmin(auVar4,*(undefined1 (*) [16])(param_4 + 0x380),4);
  auVar4 = NEON_fmin(auVar4,*(undefined1 (*) [16])(param_4 + 0x3b0),4);
  *(long *)(param_4 + 0x3f8) = auVar4._8_8_;
  *(long *)(param_4 + 0x3f0) = auVar4._0_8_;
  auVar4 = NEON_fmax(auVar5,*(undefined1 (*) [16])(param_4 + 0x3c0),4);
  *(long *)(param_4 + 0x408) = auVar4._8_8_;
  *(long *)(param_4 + 0x400) = auVar4._0_8_;
  uVar3 = FUN_02e4a0cc();
  *(undefined4 *)(param_4 + 0x410) = uVar3;
  return;
}


