/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c3678; name: FUN_001c3678
 */


void FUN_001c3678(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  
  FUN_001c108c(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  puVar1 = PTR_DAT_04372370;
  uVar2 = *(undefined8 *)(PTR_DAT_04372370 + 0x230);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(PTR_DAT_04372370 + 0x238);
  *(undefined8 *)(param_1 + 400) = uVar2;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  uVar2 = *(undefined8 *)(puVar1 + 0x248);
  lVar6 = *(long *)(puVar1 + 0x240);
  fVar9 = -(float)((ulong)lVar6 >> 0x20);
  fVar10 = -(float)((ulong)uVar2 >> 0x20);
  uVar5 = *(undefined8 *)(puVar1 + 0x228);
  uVar4 = *(undefined8 *)(puVar1 + 0x220);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xd8) = uVar2;
  *(long *)(param_1 + 0xd0) = lVar6;
  *(ulong *)(param_1 + 0xe8) = CONCAT44(fVar10,-(float)uVar2);
  *(ulong *)(param_1 + 0xe0) = CONCAT44(fVar9,-(float)lVar6);
  *(undefined2 *)(param_1 + 0x1fc) = 0;
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  *(long *)(param_1 + 0xf0) = lVar6;
  *(ulong *)(param_1 + 0x108) = CONCAT44(fVar10,-(float)uVar2);
  *(ulong *)(param_1 + 0x100) = CONCAT44(fVar9,-(float)lVar6);
  *(undefined1 *)(param_1 + 0x1fe) = 0;
  *(long *)(param_1 + 0xb8) = lVar6 << 0x20;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(long *)(param_1 + 200) = lVar6 << 0x20;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  uVar3 = *(undefined8 *)(puVar1 + 0x208);
  uVar2 = *(undefined8 *)(puVar1 + 0x200);
  uVar8 = *(undefined8 *)(puVar1 + 0x218);
  uVar7 = *(undefined8 *)(puVar1 + 0x210);
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x188) = uVar5;
  *(undefined8 *)(param_1 + 0x180) = uVar4;
  *(undefined8 *)(param_1 + 0x1b8) = uVar3;
  *(undefined8 *)(param_1 + 0x1b0) = uVar2;
  *(undefined8 *)(param_1 + 0x1c8) = uVar8;
  *(undefined8 *)(param_1 + 0x1c0) = uVar7;
  *(undefined8 *)(param_1 + 0x168) = uVar3;
  *(undefined8 *)(param_1 + 0x160) = uVar2;
  *(undefined8 *)(param_1 + 0x178) = uVar8;
  *(undefined8 *)(param_1 + 0x170) = uVar7;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  uVar2 = *(undefined8 *)PTR_PTR_04372408;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = uVar5;
  *(undefined8 *)(param_1 + 0x1d0) = uVar4;
  if ((-1 < (int)*(uint *)(param_1 + 0xac)) && (*(long *)(param_1 + 0xa0) != 0)) {
    FUN_032cf244(uVar2,*(long *)(param_1 + 0xa0),0x30,*(uint *)(param_1 + 0xac) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x80000000;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x9c)) && (*(long *)(param_1 + 0x90) != 0)) {
    FUN_032cf244(uVar2,*(long *)(param_1 + 0x90),0x10,*(uint *)(param_1 + 0x9c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x8c)) && (*(long *)(param_1 + 0x80) != 0)) {
    FUN_032cf244(uVar2,*(long *)(param_1 + 0x80),0x40,*(uint *)(param_1 + 0x8c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x80000000;
  FUN_001c33dc(param_1 + 0x38);
  return;
}


