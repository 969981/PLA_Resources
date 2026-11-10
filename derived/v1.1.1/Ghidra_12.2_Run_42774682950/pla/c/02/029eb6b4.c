/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029eb6b4; name: FUN_029eb6b4
 */


void FUN_029eb6b4(long param_1,byte *param_2,byte *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined4 auStack_58 [2];
  
  lVar10 = *(long *)(param_1 + 0x20);
  uVar9 = (ulong)*param_3;
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + 0x1cc) == 0) {
    uVar14 = FUN_02949cec(*(undefined4 *)(*(long *)(lVar10 + 8) + 0x110),
                          *(undefined1 *)(*(long *)(*(long *)(lVar10 + 8) + 0x58) + 0x55),uVar9);
    if ((uVar14 & 1) != 0) {
      FUN_029486c0(*(undefined8 *)(*(long *)(lVar10 + 0x20) + 8),
                   *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 8) + uVar9 * 0x38 + 8,
                   uVar9);
      FUN_02a3e6b8(*(undefined8 *)(lVar10 + 0x18),0x3a,uVar9);
    }
  }
  else {
    FUN_02a3c9b8(lVar10,uVar9);
  }
  lVar10 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined1 *)
           (*(long *)(*(long *)(lVar10 + 8) + (ulong)*param_3 * 0x38 + (ulong)param_3[2] * 8 + 8) +
           0x7d);
  lVar12 = *(long *)(param_1 + 0x20);
  uVar9 = FUN_029cddec(*(undefined8 *)(param_1 + 8),lVar10);
  if (((uVar9 & 1) == 0) &&
     (uVar6 = FUN_02957720(*(undefined8 *)(lVar10 + 0x188),1,uVar2,0,0), -1 < (int)uVar6)) {
    uVar6 = uVar6 & 0xff;
    if (uVar6 < 10) {
      *(undefined1 *)
       (*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0x10) + 0x188) + (ulong)uVar6 + 0x10) = 1;
    }
    FUN_02a3e6b8(*(undefined8 *)(lVar12 + 0x18),0x6d,(ulong)uVar6,1);
  }
  lVar10 = *(long *)(param_1 + 0x20);
  bVar3 = *param_3;
  bVar5 = param_3[1];
  bVar4 = param_3[2];
  uVar6 = *(uint *)(*(long *)(*(long *)(param_1 + 0x10) + 0x1c8) + 8);
  FUN_02a1407c(*(undefined8 *)(lVar10 + 0x20),bVar3,bVar5,bVar4,uVar6);
  FUN_02a3e6b8(*(undefined8 *)(lVar10 + 0x18),0x16,bVar3,bVar5,bVar4,uVar6 & 0xffff);
  lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)*param_3 * 0x38 +
                     (ulong)param_3[1] * 8 + 8);
  bVar3 = *(byte *)(lVar10 + 0x7d);
  uVar9 = (ulong)bVar3;
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = FUN_029506a8(lVar10,0x10);
  FUN_02a3cc80(uVar11,uVar9,uVar7);
  bVar5 = FUN_029679e0(uVar13,uVar9,auStack_58);
  if (bVar5 != 0) {
    uVar14 = (ulong)bVar5;
    puVar15 = auStack_58;
    do {
      FUN_02a3cc80(uVar11,uVar9,*puVar15);
      uVar14 = uVar14 - 1;
      puVar15 = puVar15 + 1;
    } while (uVar14 != 0);
  }
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x5d,*(undefined1 *)(lVar10 + 0x7d)
              );
  FUN_02a3ced0(*(undefined8 *)(param_1 + 0x20),*(undefined1 *)(lVar10 + 0x7d));
  if (bVar3 < 0x1e) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 0x68) + uVar9 + 8) = 1;
  }
  puVar1 = (undefined1 *)(lVar10 + 0x7d);
  if ((*(ushort *)(lVar10 + 0x87) & 0x40) != 0) {
    puVar1 = (undefined1 *)(lVar10 + 0x28e);
  }
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x4b,*puVar1);
  lVar12 = *(long *)(param_1 + 0x20);
  lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0x10) + 8) +
                    (ulong)*(byte *)(lVar10 + 0x7d) * 8 + 0x120);
  *(byte *)(lVar8 + 0x38b) = *(byte *)(lVar8 + 0x38b) | 0x10;
  FUN_02a3e6b8(*(undefined8 *)(lVar12 + 0x18),0x22,*(undefined1 *)(lVar10 + 0x7d),4);
  *param_2 = bVar3;
  return;
}


