/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fc500; name: FUN_029fc500
 */


void FUN_029fc500(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x128);
  *(undefined8 *)(lVar8 + 0xf0) = *(undefined8 *)(lVar8 + 0x78);
  *(undefined8 *)(lVar8 + 0xe0) = *(undefined8 *)(lVar8 + 0x68);
  *(undefined8 *)(lVar8 + 0xe8) = *(undefined8 *)(lVar8 + 0x70);
  uVar3 = *(undefined8 *)(lVar8 + 0x40);
  *(undefined8 *)(lVar8 + 0xd0) = *(undefined8 *)(lVar8 + 0x58);
  *(undefined8 *)(lVar8 + 0xd8) = *(undefined8 *)(lVar8 + 0x60);
  uVar2 = *(undefined8 *)(lVar8 + 0x48);
  uVar4 = *(undefined8 *)(lVar8 + 0x50);
  *(undefined8 *)(lVar8 + 0x50) = 0;
  *(undefined8 *)(lVar8 + 0x58) = 0;
  *(undefined8 *)(lVar8 + 0x40) = 0;
  *(undefined8 *)(lVar8 + 0x48) = 0;
  *(undefined8 *)(lVar8 + 0xb0) = *(undefined8 *)(lVar8 + 0x38);
  *(undefined8 *)(lVar8 + 0xb8) = uVar3;
  uVar3 = *(undefined8 *)(lVar8 + 0x20);
  *(undefined8 *)(lVar8 + 0xc0) = uVar2;
  *(undefined8 *)(lVar8 + 200) = uVar4;
  uVar2 = *(undefined8 *)(lVar8 + 0x28);
  uVar4 = *(undefined8 *)(lVar8 + 0x30);
  *(undefined8 *)(lVar8 + 0x30) = 0;
  *(undefined8 *)(lVar8 + 0x38) = 0;
  *(undefined8 *)(lVar8 + 0x20) = 0;
  *(undefined8 *)(lVar8 + 0x28) = 0;
  *(undefined8 *)(lVar8 + 0x90) = *(undefined8 *)(lVar8 + 0x18);
  *(undefined8 *)(lVar8 + 0x98) = uVar3;
  uVar3 = *(undefined8 *)(lVar8 + 8);
  uVar5 = *(undefined8 *)(lVar8 + 0x10);
  *(undefined8 *)(lVar8 + 8) = 0;
  *(undefined8 *)(lVar8 + 0x70) = 0;
  *(undefined8 *)(lVar8 + 0x78) = 0;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  *(undefined8 *)(lVar8 + 0x68) = 0;
  *(undefined8 *)(lVar8 + 0xa0) = uVar2;
  *(undefined8 *)(lVar8 + 0xa8) = uVar4;
  *(undefined8 *)(lVar8 + 0x10) = 0;
  *(undefined8 *)(lVar8 + 0x18) = 0;
  *(undefined8 *)(lVar8 + 0x80) = uVar3;
  *(undefined8 *)(lVar8 + 0x88) = uVar5;
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 200);
  *(undefined8 *)((long)puVar9 + 0xd7) = *(undefined8 *)((long)puVar9 + 0x9a);
  *(undefined8 *)((long)puVar9 + 0xdf) = *(undefined8 *)((long)puVar9 + 0xa2);
  *(undefined8 *)((long)puVar9 + 0xe7) = *(undefined8 *)((long)puVar9 + 0xaa);
  *(undefined8 *)((long)puVar9 + 0xec) = *(undefined8 *)((long)puVar9 + 0xaf);
  *(undefined8 *)((long)puVar9 + 0xb7) = *(undefined8 *)((long)puVar9 + 0x7a);
  *(undefined8 *)((long)puVar9 + 0xbf) = *(undefined8 *)((long)puVar9 + 0x82);
  *(undefined8 *)((long)puVar9 + 199) = *(undefined8 *)((long)puVar9 + 0x8a);
  *(undefined8 *)((long)puVar9 + 0xcf) = *(undefined8 *)((long)puVar9 + 0x92);
  *(undefined8 *)((long)puVar9 + 0x82) = *(undefined8 *)((long)puVar9 + 0x45);
  *(undefined8 *)((long)puVar9 + 0xa2) = *(undefined8 *)((long)puVar9 + 0x65);
  *(undefined8 *)((long)puVar9 + 0x7a) = *(undefined8 *)((long)puVar9 + 0x3d);
  *(undefined8 *)((long)puVar9 + 0x92) = *(undefined8 *)((long)puVar9 + 0x55);
  *(undefined8 *)((long)puVar9 + 0x8a) = *(undefined8 *)((long)puVar9 + 0x4d);
  *(undefined8 *)((long)puVar9 + 0xaf) = *(undefined8 *)((long)puVar9 + 0x72);
  *(undefined8 *)((long)puVar9 + 0xaa) = *(undefined8 *)((long)puVar9 + 0x6d);
  *(undefined8 *)((long)puVar9 + 0x9a) = *(undefined8 *)((long)puVar9 + 0x5d);
  *(undefined8 *)((long)puVar9 + 0x45) = puVar9[1];
  *(undefined8 *)((long)puVar9 + 0x3d) = *puVar9;
  *(undefined8 *)((long)puVar9 + 0x55) = puVar9[3];
  *(undefined8 *)((long)puVar9 + 0x4d) = puVar9[2];
  *(undefined8 *)((long)puVar9 + 0x72) = *(undefined8 *)((long)puVar9 + 0x35);
  *(undefined8 *)((long)puVar9 + 0x6d) = puVar9[6];
  *(undefined8 *)((long)puVar9 + 0x65) = puVar9[5];
  *(undefined8 *)((long)puVar9 + 0x5d) = puVar9[4];
  *(undefined8 *)((long)puVar9 + 0x17) = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  *(undefined8 *)((long)puVar9 + 0x35) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar9 + 0x2f) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar9 + 0x27) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar9 + 0x1f) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar9 + 0x146) = 0x1f1f1f1f1f1f1f1f;
  puVar9[0x27] = 0x1f1f1f1f1f1f1f1f;
  puVar9[0x28] = 0x1f1f1f1f1f1f1f1f;
  puVar9[0x26] = 0x1f1f1f1f1f1f1f1f;
  *(undefined1 *)((long)puVar9 + 0x14e) = 0;
  lVar11 = *(long *)(param_1 + 0x30);
  lVar8 = *(long *)(*(long *)(*(long *)(lVar11 + 8) + 0x88) + 0x14c8);
  if (lVar8 != 0) {
    do {
      if ((*(uint *)(lVar8 + 0x3c) >> 0x1b & 1) != 0) {
        *(uint *)(lVar8 + 0x3c) = *(uint *)(lVar8 + 0x3c) & 0xf7ffffff;
      }
      lVar8 = *(long *)(lVar8 + 0x18);
    } while (lVar8 != 0);
    lVar11 = *(long *)(param_1 + 0x30);
  }
  lVar8 = *(long *)(lVar11 + 0x30);
  if (*(int *)(lVar8 + 0xc08) != 0) {
    lVar10 = 0;
    *(undefined4 *)(lVar8 + 0xc08) = 0;
    do {
      lVar1 = lVar8 + lVar10;
      lVar10 = lVar10 + 0x60;
      *(undefined2 *)(*(long *)(lVar1 + 8) + 8) = 0;
      *(undefined2 *)(*(long *)(lVar1 + 0x28) + 8) = 0;
      *(undefined2 *)(*(long *)(lVar1 + 0x48) + 8) = 0;
    } while (lVar10 != 0xc00);
    FUN_0299a884(*(undefined8 *)(lVar11 + 0x50));
    *(undefined8 *)(lVar11 + 0x70) =
         *(undefined8 *)
          (*(long *)(lVar11 + 0x50) + (ulong)*(uint *)(*(long *)(lVar11 + 0x50) + 0x408) * 0x20 + 8)
    ;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x50) + 0xe) = 0;
  FUN_029fc7bc(param_1);
  FUN_029fca98(param_1);
  FUN_029fcd30(param_1);
  FUN_029fcfa0(param_1);
  FUN_029fd228(param_1);
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x98,0);
  FUN_02976bec(*(undefined8 *)(param_1 + 0x38));
  lVar8 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(param_1 + 0x20);
  uVar7 = FUN_029cddec(*(undefined8 *)(param_1 + 8),lVar8);
  if (((uVar7 & 1) != 0) ||
     (uVar6 = FUN_02957720(*(undefined8 *)(lVar8 + 0x188),0,0x1f,0,0), (int)uVar6 < 0)) {
    return;
  }
  uVar6 = uVar6 & 0xff;
  if (uVar6 < 10) {
    *(undefined1 *)
     (*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0x10) + 0x188) + (ulong)uVar6 + 0x10) = 1;
  }
  FUN_02a3e6b8(*(undefined8 *)(lVar11 + 0x18),0x6d,(ulong)uVar6,0);
  return;
}


