/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01123e40; name: FUN_01123e40
 */


undefined8 FUN_01123e40(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ushort *puVar8;
  ushort *puVar9;
  ulong uVar10;
  ushort *puVar11;
  undefined8 uVar12;
  ushort local_4c [14];
  
  lVar7 = *(long *)(param_2 + 0x98);
  bVar1 = *(char *)(lVar7 + 0x19) == '\0';
  if (bVar1) {
    FUN_02c66480();
    lVar7 = *(long *)(param_2 + 0x98);
  }
  iVar2 = *(int *)(param_1 + 0x78);
  iVar5 = FUN_02c68b0c(lVar7);
  if ((iVar2 == iVar5) &&
     (bVar3 = *(byte *)(param_1 + 0x7d), uVar6 = FUN_02c74104(*(undefined8 *)(param_2 + 0x98)),
     uVar6 == bVar3)) {
    FUN_02c71918(*(undefined8 *)(param_2 + 0x98),local_4c,0xd);
    puVar11 = (ushort *)(param_1 + 0x88);
    if (local_4c[0] == *puVar11) {
      puVar8 = local_4c;
      do {
        if (local_4c[0] == 0x10) {
          puVar9 = puVar8 + 1;
          uVar10 = (ulong)*puVar9;
          lVar7 = uVar10 * 2 + 4;
          puVar8 = puVar8 + uVar10 + 2;
          while (lVar7 != 0) {
            puVar11 = puVar11 + 1;
            lVar7 = lVar7 + -2;
            uVar4 = *puVar9;
            puVar9 = puVar9 + 1;
            if (uVar4 != *puVar11) goto LAB_01123f0c;
          }
          local_4c[0] = *puVar8;
        }
        if (local_4c[0] == 0) {
          uVar12 = 1;
          goto LAB_01123f10;
        }
        puVar8 = puVar8 + 1;
        local_4c[0] = *puVar8;
        puVar11 = puVar11 + 1;
      } while (local_4c[0] == *puVar11);
    }
  }
LAB_01123f0c:
  uVar12 = 0;
LAB_01123f10:
  if (bVar1 && *(char *)(*(long *)(param_2 + 0x98) + 0x19) != '\0') {
    FUN_02c66640();
  }
  return uVar12;
}


