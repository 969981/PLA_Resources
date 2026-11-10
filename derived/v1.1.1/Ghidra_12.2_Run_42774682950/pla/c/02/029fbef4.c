/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fbef4; name: FUN_029fbef4
 */


void FUN_029fbef4(long param_1)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  byte local_28 [4];
  byte local_24 [4];
  
  FUN_029fc25c();
  lVar4 = *(long *)(param_1 + 0x30);
  lVar5 = *(long *)(*(long *)(*(long *)(lVar4 + 8) + 0x88) + 0x14c8);
  while (lVar2 = lVar5, lVar2 != 0) {
    lVar5 = *(long *)(lVar2 + 0x18);
    if ((*(char *)(lVar2 + 0x30) == '\a') &&
       (uVar3 = *(uint *)(lVar2 + 0x3c), (uVar3 >> 0x1d & 1) != 0)) {
      if ((uVar3 >> 0x18 & 1) == 0) {
        lVar8 = *(long *)(*(long *)(lVar4 + 8) + 0x88);
        lVar9 = lVar5;
        if (*(long *)(lVar8 + 0x14c8) == lVar2) {
          *(long *)(lVar8 + 0x14c8) = lVar5;
          lVar9 = *(long *)(lVar2 + 0x18);
        }
        lVar10 = *(long *)(lVar2 + 0x10);
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x18) = lVar9;
        }
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x10) = lVar10;
        }
        *(undefined8 *)(lVar2 + 0x50) = 0;
        *(undefined8 *)(lVar2 + 0x58) = 0;
        *(undefined8 *)(lVar2 + 0x40) = 0;
        *(undefined8 *)(lVar2 + 0x48) = 0;
        *(undefined8 *)(lVar2 + 0x30) = 0;
        *(undefined8 *)(lVar2 + 0x38) = 0;
        *(undefined8 *)(lVar2 + 0x20) = 0;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        *(long *)(lVar2 + 0x10) = 0;
        *(undefined8 *)(lVar2 + 0x18) = 0;
        lVar9 = *(long *)(lVar8 + 0x14d0);
        *(long *)(lVar2 + 0x18) = lVar9;
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x10) = lVar2;
        }
        *(long *)(lVar8 + 0x14d0) = lVar2;
      }
      else {
        *(uint *)(lVar2 + 0x3c) = uVar3 | 0x4000000;
      }
    }
  }
  FUN_02976e08(*(undefined8 *)(param_1 + 0x38));
  lVar5 = *(long *)(param_1 + 0x40);
  uVar11 = 0;
  lVar4 = *(long *)(lVar5 + 0x68);
  do {
    if (*(char *)(lVar4 + uVar11 + 8) != '\0') {
      lVar5 = *(long *)(param_1 + 0x20);
      lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 8) + uVar11 * 8 +
                       0x120);
      *(short *)(lVar4 + 0x28c) = *(short *)(lVar4 + 0x28c) + 1;
      FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x23,uVar11 & 0xffffffff);
      lVar5 = *(long *)(param_1 + 0x40);
    }
    lVar4 = *(long *)(lVar5 + 0x68);
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0x1e);
  *(undefined8 *)(lVar4 + 0x1e) = 0;
  *(undefined8 *)(lVar4 + 8) = 0;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  lVar4 = *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x10);
  uVar11 = FUN_029cddec(*(undefined8 *)(param_1 + 8),lVar5);
  if (((uVar11 & 1) == 0) &&
     (uVar3 = FUN_02957720(*(undefined8 *)(lVar5 + 0x188),7,0x1f,0,0), -1 < (int)uVar3)) {
    uVar3 = uVar3 & 0xff;
    if (uVar3 < 10) {
      *(undefined1 *)
       (*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0x10) + 0x188) + (ulong)uVar3 + 0x10) = 1;
    }
    FUN_02a3e6b8(*(undefined8 *)(lVar4 + 0x18),0x6d,(ulong)uVar3,7);
  }
  pcVar6 = *(char **)(*(long *)(param_1 + 0x40) + 0x28);
  if ((((*pcVar6 == '\0') && (piVar7 = *(int **)(*(long *)(param_1 + 8) + 0x58), *piVar7 == 0)) &&
      (uVar3 = (uint)*(byte *)(piVar7 + 0x414), uVar3 != 0)) &&
     (uVar3 <= (int)*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x1c8) + 8) + 1U)) {
    *pcVar6 = '\a';
  }
  lVar5 = *(long *)(param_1 + 0x20);
  lVar4 = *(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 0x1c8);
  uVar11 = *(ulong *)(lVar4 + 8);
  if (uVar11 < 9999) {
    *(ulong *)(lVar4 + 8) = uVar11 + 1;
  }
  FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x2b,0);
  lVar5 = *(long *)(param_1 + 0x40);
  *(undefined4 *)(lVar5 + 0xc0) = 0;
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  *(undefined8 *)(lVar5 + 0xb8) = 0;
  *(undefined8 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0xa8) = 0;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(undefined8 *)(lVar5 + 0x98) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x40) + 0xc4) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x40) + 200) = 0;
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xa0,0);
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x1041) >> 4 & 1) != 0) &&
     ((**(byte **)(*(long *)(param_1 + 0x40) + 0x28) & 0xfc) == 4)) {
    puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 8);
    FUN_02947b84(*puVar12,1,local_24,local_28);
    uVar11 = (ulong)local_24[0];
    if ((uVar11 == 5) || (*(byte *)(puVar12 + uVar11 * 7 + 7) <= local_28[0])) {
      lVar5 = 0;
      cVar1 = cRam0000000000000369;
    }
    else {
      lVar5 = puVar12[uVar11 * 7 + (ulong)local_28[0] + 1];
      cVar1 = *(char *)(lVar5 + 0x369);
    }
    if (cVar1 != '\0') {
      lVar4 = *(long *)(param_1 + 0x20);
      uVar11 = (ulong)*(byte *)(lVar5 + 0x7d);
      FUN_02952a80(*(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0x10) + 8) + uVar11 * 8 + 0x120),
                   0,0);
      FUN_02a3e6b8(*(undefined8 *)(lVar4 + 0x18),0x54,uVar11,0,0);
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x8f,uVar11);
      return;
    }
  }
  return;
}


