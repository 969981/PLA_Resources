/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7030; name: FUN_02ea7030
 */


undefined8 FUN_02ea7030(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  
  uVar4 = *(uint *)(param_2 + 0x10);
  if (uVar4 == 0) {
    uVar2 = 0;
  }
  else {
    puVar6 = *(ulong **)(param_2 + 8);
    uVar8 = *(uint *)(param_1 + 0x20);
    uVar2 = 0;
    puVar7 = puVar6;
    do {
      if (uVar8 != 0) {
        uVar10 = *puVar6;
        iVar9 = 0;
        uVar11 = uVar8;
        do {
          iVar1 = iVar9 + (uVar11 >> 1);
          puVar13 = (ulong *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 0x18);
          uVar12 = *puVar13;
          if (uVar12 == uVar10 && (int)puVar13[1] == 0) {
            puVar14 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 0x18);
            if (puVar14 != (undefined8 *)0x0) {
              FUN_02ea6ae4(param_1,puVar14);
              uVar8 = *(uint *)(param_1 + 0x20);
              puVar3 = (undefined8 *)((*(long *)(param_1 + 0x18) + (ulong)uVar8 * 0x18) - 0x18);
              if (puVar14 < puVar3) {
                do {
                  puVar5 = puVar14 + 3;
                  *puVar14 = *puVar5;
                  puVar14[1] = puVar14[4];
                  *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(puVar14 + 5);
                  puVar14 = puVar5;
                } while (puVar5 < puVar3);
                uVar8 = *(uint *)(param_1 + 0x20);
              }
              uVar8 = uVar8 - 1;
              *(uint *)(param_1 + 0x20) = uVar8;
              puVar7 = *(ulong **)(param_2 + 8);
              uVar4 = *(uint *)(param_2 + 0x10);
              uVar2 = 1;
            }
            break;
          }
          if (uVar12 < uVar10) {
            iVar9 = iVar1 + 1;
          }
          uVar11 = uVar11 - (uVar12 < uVar10) >> 1;
        } while (uVar11 != 0);
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar7 + uVar4);
  }
  return uVar2;
}


