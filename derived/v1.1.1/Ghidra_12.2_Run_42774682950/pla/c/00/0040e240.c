/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040e240; name: FUN_0040e240
 */


long FUN_0040e240(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(int *)((long)param_1 + 0x34) != 0) {
    return 0;
  }
  if ((int)param_1[7] != 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 3);
  if (uVar1 == *(uint *)((long)param_1 + 0x1c)) {
    uVar1 = *(uint *)((long)param_1 + 0x3c);
    lVar2 = FUN_00400260(400,"external/openssl/crypto/bn/bn_ctx.c",0x13e);
    if (lVar2 == 0) {
      FUN_004014b0(3,0x93,0x41,"external/openssl/crypto/bn/bn_ctx.c",0x13f);
      goto LAB_0040e390;
    }
    if ((uVar1 >> 3 & 1) == 0) {
      FUN_0040c250();
      FUN_0040c250(lVar2 + 0x18);
      FUN_0040c250(lVar2 + 0x30);
      FUN_0040c250(lVar2 + 0x48);
      FUN_0040c250(lVar2 + 0x60);
      FUN_0040c250(lVar2 + 0x78);
      FUN_0040c250(lVar2 + 0x90);
      FUN_0040c250(lVar2 + 0xa8);
      FUN_0040c250(lVar2 + 0xc0);
      FUN_0040c250(lVar2 + 0xd8);
      FUN_0040c250(lVar2 + 0xf0);
      FUN_0040c250(lVar2 + 0x108);
      FUN_0040c250(lVar2 + 0x120);
      FUN_0040c250(lVar2 + 0x138);
      FUN_0040c250(lVar2 + 0x150);
      FUN_0040c250(lVar2 + 0x168);
      lVar3 = param_1[2];
      *(long *)(lVar2 + 0x180) = lVar3;
      *(undefined8 *)(lVar2 + 0x188) = 0;
      if (*param_1 != 0) goto LAB_0040e540;
LAB_0040e32c:
      param_1[1] = lVar2;
      plVar4 = param_1;
    }
    else {
      FUN_0040c250();
      FUN_0040d3b0(lVar2,8);
      FUN_0040c250(lVar2 + 0x18);
      FUN_0040d3b0(lVar2 + 0x18,8);
      FUN_0040c250(lVar2 + 0x30);
      FUN_0040d3b0(lVar2 + 0x30,8);
      FUN_0040c250(lVar2 + 0x48);
      FUN_0040d3b0(lVar2 + 0x48,8);
      FUN_0040c250(lVar2 + 0x60);
      FUN_0040d3b0(lVar2 + 0x60,8);
      FUN_0040c250(lVar2 + 0x78);
      FUN_0040d3b0(lVar2 + 0x78,8);
      FUN_0040c250(lVar2 + 0x90);
      FUN_0040d3b0(lVar2 + 0x90,8);
      FUN_0040c250(lVar2 + 0xa8);
      FUN_0040d3b0(lVar2 + 0xa8,8);
      FUN_0040c250(lVar2 + 0xc0);
      FUN_0040d3b0(lVar2 + 0xc0,8);
      FUN_0040c250(lVar2 + 0xd8);
      FUN_0040d3b0(lVar2 + 0xd8,8);
      FUN_0040c250(lVar2 + 0xf0);
      FUN_0040d3b0(lVar2 + 0xf0,8);
      FUN_0040c250(lVar2 + 0x108);
      FUN_0040d3b0(lVar2 + 0x108,8);
      FUN_0040c250(lVar2 + 0x120);
      FUN_0040d3b0(lVar2 + 0x120,8);
      FUN_0040c250(lVar2 + 0x138);
      FUN_0040d3b0(lVar2 + 0x138,8);
      FUN_0040c250(lVar2 + 0x150);
      FUN_0040d3b0(lVar2 + 0x150,8);
      FUN_0040c250(lVar2 + 0x168);
      FUN_0040d3b0(lVar2 + 0x168,8);
      lVar3 = param_1[2];
      *(long *)(lVar2 + 0x180) = lVar3;
      *(undefined8 *)(lVar2 + 0x188) = 0;
      if (*param_1 == 0) goto LAB_0040e32c;
LAB_0040e540:
      *(long *)(lVar3 + 0x188) = lVar2;
      plVar4 = param_1 + 1;
    }
    param_1[2] = lVar2;
    *plVar4 = lVar2;
    param_1[3] = CONCAT44((int)((ulong)param_1[3] >> 0x20) + (int)((ulong)DAT_0388a768 >> 0x20),
                          (int)param_1[3] + (int)DAT_0388a768);
    goto LAB_0040e564;
  }
  if (uVar1 == 0) {
    lVar2 = *param_1;
LAB_0040e374:
    uVar5 = 0;
    param_1[1] = lVar2;
  }
  else {
    lVar2 = param_1[1];
    uVar5 = (ulong)uVar1 & 0xf;
    if ((int)uVar5 == 0) {
      lVar2 = *(long *)(lVar2 + 0x188);
      goto LAB_0040e374;
    }
  }
  *(uint *)(param_1 + 3) = uVar1 + 1;
  lVar2 = lVar2 + uVar5 * 0x18;
  if (lVar2 == 0) {
LAB_0040e390:
    *(undefined4 *)(param_1 + 7) = 1;
    FUN_004014b0(3,0x74,0x6d,"external/openssl/crypto/bn/bn_ctx.c",0xe3);
    return 0;
  }
LAB_0040e564:
  FUN_0040c6b0(lVar2,0);
  *(uint *)(lVar2 + 0x14) = *(uint *)(lVar2 + 0x14) & 0xfffffffb;
  *(int *)(param_1 + 6) = (int)param_1[6] + 1;
  return lVar2;
}


