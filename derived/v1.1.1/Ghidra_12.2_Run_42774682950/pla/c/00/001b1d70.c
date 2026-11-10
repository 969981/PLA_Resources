/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b1d70; name: FUN_001b1d70
 */


void FUN_001b1d70(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined2 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  
  puVar1 = PTR_DAT_04372558;
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  puVar5 = (undefined2 *)FUN_032cf5b0(0x200);
  *puVar5 = 1;
  *(undefined8 *)(puVar5 + 2) = 0x10001003f7fff58;
  puVar5[6] = 0;
  *(undefined1 *)(puVar5 + 7) = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined8 *)(puVar5 + 0xc) = 0;
  puVar1 = PTR_DAT_04372560 + 0x10;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x14) = 0;
  *(undefined **)(puVar5 + 0x1c) = puVar1;
  *(undefined8 *)(puVar5 + 0x20) = 0xffffffff;
  *(undefined8 *)(puVar5 + 0x24) = 1;
  *(undefined4 *)(puVar5 + 0x30) = 0;
  *(undefined4 *)(puVar5 + 0x3c) = 0;
  *(undefined8 *)(puVar5 + 0x28) = 0;
  *(undefined8 *)(puVar5 + 0x2c) = 0;
  *(undefined8 *)(puVar5 + 0x34) = 0;
  *(undefined8 *)(puVar5 + 0x38) = 0;
  *(undefined8 *)(puVar5 + 0x40) = 0;
  *(undefined8 *)(puVar5 + 0x44) = 0x8000000000000000;
  puVar1 = PTR_DAT_04372568;
  *(undefined8 *)(puVar5 + 0x48) = 0;
  *(undefined8 *)(puVar5 + 0x4c) = 0x8000000000000000;
  *(undefined8 *)(puVar5 + 0x50) = 0;
  *(undefined8 *)(puVar5 + 0x54) = 0x8000000000000000;
  do {
    iVar2 = *(int *)puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *(int *)puVar1 = iVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *(int *)(puVar5 + 0xfc) = iVar2;
  FUN_001c108c();
  *(undefined4 *)(puVar5 + 0x4c) = 0;
  puVar1 = PTR_DAT_04372370;
  *(undefined4 *)(puVar5 + 0x44) = 0;
  *(undefined8 *)(puVar5 + 0x8c) = 0;
  *(undefined8 *)(puVar5 + 0x88) = 0;
  uVar10 = *(undefined8 *)(puVar1 + 0x228);
  uVar9 = *(undefined8 *)(puVar1 + 0x220);
  uVar7 = *(undefined8 *)(puVar1 + 0x230);
  *(undefined8 *)(puVar5 + 0xcc) = *(undefined8 *)(puVar1 + 0x238);
  *(undefined8 *)(puVar5 + 200) = uVar7;
  *(undefined8 *)(puVar5 + 0xd4) = 0;
  *(undefined8 *)(puVar5 + 0xd0) = 0;
  *(undefined4 *)(puVar5 + 0x54) = 0;
  uVar7 = *(undefined8 *)(puVar1 + 0x248);
  lVar6 = *(long *)(puVar1 + 0x240);
  puVar5[0xfe] = 0;
  fVar13 = -(float)((ulong)lVar6 >> 0x20);
  fVar14 = -(float)((ulong)uVar7 >> 0x20);
  *(undefined8 *)(puVar5 + 0x6c) = uVar7;
  *(long *)(puVar5 + 0x68) = lVar6;
  *(ulong *)(puVar5 + 0x74) = CONCAT44(fVar14,-(float)uVar7);
  *(ulong *)(puVar5 + 0x70) = CONCAT44(fVar13,-(float)lVar6);
  *(undefined8 *)(puVar5 + 0x7c) = uVar7;
  *(long *)(puVar5 + 0x78) = lVar6;
  *(ulong *)(puVar5 + 0x84) = CONCAT44(fVar14,-(float)uVar7);
  *(ulong *)(puVar5 + 0x80) = CONCAT44(fVar13,-(float)lVar6);
  *(long *)(puVar5 + 0x5c) = lVar6 << 0x20;
  *(undefined8 *)(puVar5 + 0x58) = 0;
  *(long *)(puVar5 + 100) = lVar6 << 0x20;
  *(undefined8 *)(puVar5 + 0x60) = 0;
  uVar8 = *(undefined8 *)(puVar1 + 0x208);
  uVar7 = *(undefined8 *)(puVar1 + 0x200);
  uVar12 = *(undefined8 *)(puVar1 + 0x218);
  uVar11 = *(undefined8 *)(puVar1 + 0x210);
  *(undefined8 *)(puVar5 + 0xb4) = uVar8;
  *(undefined8 *)(puVar5 + 0xb0) = uVar7;
  *(undefined8 *)(puVar5 + 0xbc) = uVar12;
  *(undefined8 *)(puVar5 + 0xb8) = uVar11;
  *(undefined1 *)(puVar5 + 0xff) = 0;
  *(undefined8 *)(puVar5 + 0xc4) = uVar10;
  *(undefined8 *)(puVar5 + 0xc0) = uVar9;
  *(undefined8 *)(puVar5 + 0xdc) = uVar8;
  *(undefined8 *)(puVar5 + 0xd8) = uVar7;
  *(undefined8 *)(puVar5 + 0xe4) = uVar12;
  *(undefined8 *)(puVar5 + 0xe0) = uVar11;
  *(undefined4 *)(puVar5 + 0xfa) = 0;
  *(undefined4 *)(puVar5 + 0xf8) = 0xffffffff;
  *(undefined8 *)(puVar5 + 0xf0) = 0;
  *(undefined8 *)(puVar5 + 0xf4) = 0;
  *(undefined8 *)(puVar5 + 0xec) = uVar10;
  *(undefined8 *)(puVar5 + 0xe8) = uVar9;
  *(undefined8 *)(puVar5 + 0x90) = 0;
  *(undefined8 *)(puVar5 + 0x94) = 0;
  *(undefined8 *)(puVar5 + 0x98) = 0;
  *(undefined8 *)(puVar5 + 0x9c) = 0;
  *(undefined8 *)(puVar5 + 0xa0) = 0;
  *(undefined8 *)(puVar5 + 0xa4) = 0;
  *(undefined8 *)(puVar5 + 0xa8) = 0;
  *(undefined8 *)(puVar5 + 0xac) = 0;
  lVar6 = param_1[3];
  param_1[3] = (long)puVar5;
  if (lVar6 != 0) {
    FUN_001c3678(lVar6);
    FUN_032cf640(lVar6,0x200);
    puVar5 = (undefined2 *)param_1[3];
  }
  *(long **)(puVar5 + 0x18) = param_1;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


