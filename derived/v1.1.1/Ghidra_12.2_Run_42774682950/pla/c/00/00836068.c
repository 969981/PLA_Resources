/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00836068; name: FUN_00836068
 */


void FUN_00836068(long param_1)

{
  long lVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_708 [20];
  uint local_6f4;
  undefined1 auStack_6f0 [136];
  undefined1 auStack_668 [20];
  uint local_654;
  undefined1 auStack_650 [16];
  undefined1 auStack_640 [32];
  undefined4 local_620;
  undefined4 local_60 [4];
  
  local_60[0] = 0;
  local_620 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)&local_620);
  puVar3 = PTR_DAT_043773c0;
  lVar12 = *(long *)PTR_DAT_04377550 + 0x178;
  lVar1 = *(long *)PTR_DAT_04377550 + 0x1b8;
  lVar8 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  lVar13 = *(long *)(lVar8 + 0x98);
  FUN_00825bdc(auStack_6f0,lVar13,auStack_640);
  FUN_00821b80(auStack_650);
  uVar7 = FUN_00821c5c(auStack_650);
  lVar8 = *(long *)puVar3;
  local_620 = local_620 & 0xffffff00;
  uVar4 = FUN_00848164(lVar8 + 0x10);
  local_620._0_2_ = CONCAT11(uVar4,local_620._0_1_);
  local_654 = 0;
  FUN_00848260(lVar8 + 0x10,(ulong)&local_620 | 2,&local_654);
  puVar2 = (uint *)(((ulong)&local_620 | 2) + (ulong)local_654);
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  *puVar2 = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar9 = FUN_0083fd98(lVar12);
  uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
  uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
  *(ulong *)(puVar2 + 1) = uVar9 >> 0x20 | uVar9 << 0x20;
  uVar6 = FUN_0083fda0(lVar12);
  *(char *)((long)puVar2 + 0xf) = (char)uVar6;
  *(undefined2 *)(puVar2 + 3) = 0;
  *(char *)((long)puVar2 + 0xe) = (char)((ushort)uVar6 >> 8);
  uVar4 = FUN_0083fd80(lVar12);
  *(undefined1 *)(puVar2 + 4) = uVar4;
  bVar5 = FUN_0083fd8c(lVar12);
  *(byte *)((long)puVar2 + 0x11) = bVar5 & 1;
  memcpy((void *)((long)puVar2 + 0x12),auStack_640,0x20);
  uVar10 = FUN_0083fd74(auStack_6f0,lVar12);
  puVar11 = (ulong *)FUN_008362e4(uVar10,(long)puVar2 + 0x32,auStack_6f0,0);
  uVar9 = FUN_0083fd98(lVar1);
  uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
  uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
  *puVar11 = uVar9 >> 0x20 | uVar9 << 0x20;
  uVar6 = FUN_0083fda0(lVar1);
  *(undefined2 *)(puVar11 + 1) = 0;
  *(char *)((long)puVar11 + 0xb) = (char)uVar6;
  *(char *)((long)puVar11 + 10) = (char)((ushort)uVar6 >> 8);
  *(undefined1 *)((long)puVar11 + 0xc) = *(undefined1 *)(lVar13 + 0x360);
  *(undefined1 *)((long)puVar11 + 0xd) = *(undefined1 *)(lVar13 + 0x361);
  lVar12 = (long)puVar11 + 0xe;
  if (*(char *)(lVar13 + 0x360) != '\0') {
    uVar7 = 0;
    do {
      FUN_007e8190(auStack_6f0);
      FUN_007e8434(auStack_6f0);
      memset(auStack_668,0,0x10);
      FUN_00825cc0(auStack_708,lVar13,uVar7,auStack_6f0);
      FUN_007ee660(local_60,auStack_708);
      FUN_008363ec(auStack_708,auStack_6f0,lVar12,&local_6f4,(int)local_60 - (int)lVar12);
      lVar12 = lVar12 + (ulong)local_6f4;
      FUN_007e81d4(auStack_6f0);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(byte *)(lVar13 + 0x360));
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    lVar12 = FUN_0083e488(*(long *)(param_1 + 0x130),lVar12,(long)local_60 - lVar12,0);
  }
  FUN_0083fd74(auStack_6f0,lVar1);
  FUN_00835fb0(auStack_708,param_1,auStack_6f0,&local_620,(int)lVar12 - (int)&local_620,1);
  FUN_007ee660(local_60,auStack_708);
  return;
}


