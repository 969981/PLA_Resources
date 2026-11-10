/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03041ca4; name: FUN_03041ca4
 */


void FUN_03041ca4(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  
  iVar7 = *(int *)(param_2 + 0x48);
  if (0 < iVar7) {
    lVar13 = *(long *)(param_1 + 8);
    lVar8 = *(long *)(lVar13 + 0x38);
    lVar9 = lVar8 + (param_3 & 0xffffff) * 0xc0;
    puVar1 = (undefined8 *)(lVar9 + 0xb0);
    if ((*(byte *)(lVar9 + 0x55) & 0x60) == 0) {
      lVar9 = 0;
      while( true ) {
        lVar11 = *(long *)(param_2 + 0x40);
        if ((*(byte *)(lVar8 + ((ulong)*(uint *)(lVar11 + lVar9 * 0x90 + 0x30) & 0xffffff) * 0xc0 +
                      0x55) & 0x60) != 0) {
          puVar14 = *(uint **)(*(long *)(param_1 + 0x530) + (long)*(int *)(param_1 + 0x538) * 8 + -8
                              );
          uVar12 = *(undefined8 *)(param_1 + 0x4e0);
          uVar2 = *puVar14;
          puVar15 = puVar14;
          if (0xe6 < uVar2 >> 0x14) {
            do {
              puVar14 = (uint *)FUN_032be688(param_1 + 0x520,uVar12);
              *(uint **)(puVar15 + 2) = puVar14;
              uVar2 = *puVar14;
              puVar15 = puVar14;
            } while (0xe6 < uVar2 >> 0x14);
          }
          uVar2 = uVar2 >> 0x10;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar14,0x10);
            if (bVar6) {
              *puVar14 = *puVar14 + 0x700001;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          lVar11 = lVar11 + lVar9 * 0x90;
          *(int *)(param_1 + 0x528) = *(int *)(param_1 + 0x528) + 1;
          uVar12 = *puVar1;
          uVar10 = *(undefined8 *)(lVar11 + 0x28);
          uVar3 = *(undefined4 *)(lVar11 + 0x10);
          uVar4 = *(undefined4 *)(lVar11 + 0x38);
          *(undefined4 *)((long)puVar14 + (ulong)uVar2 + 0x20) = 0x4000070;
          *(undefined2 *)((long)puVar14 + (ulong)uVar2 + 0x24) = 5;
          *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x28) = uVar12;
          *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x30) = uVar10;
          *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x48) = *(undefined8 *)(lVar11 + 0x68);
          *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x40) = *(undefined8 *)(lVar11 + 0x60);
          *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x58) = *(undefined8 *)(lVar11 + 0x58);
          *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x50) = *(undefined8 *)(lVar11 + 0x50);
          *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x68) = *(undefined8 *)(lVar11 + 0x88);
          *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x60) = *(undefined8 *)(lVar11 + 0x80);
          *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x78) = *(undefined8 *)(lVar11 + 0x78);
          *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x70) = *(undefined8 *)(lVar11 + 0x70);
          *(undefined4 *)((long)puVar14 + (ulong)uVar2 + 0x80) = uVar3;
          *(undefined4 *)((long)puVar14 + (ulong)uVar2 + 0x84) = uVar4;
          iVar7 = *(int *)(param_2 + 0x48);
        }
        lVar9 = lVar9 + 1;
        if (iVar7 <= lVar9) break;
        lVar8 = *(long *)(lVar13 + 0x38);
      }
    }
    else {
      lVar8 = 0;
      do {
        puVar14 = *(uint **)(*(long *)(param_1 + 0x530) + (long)*(int *)(param_1 + 0x538) * 8 + -8);
        lVar9 = *(long *)(param_2 + 0x40);
        uVar12 = *(undefined8 *)(param_1 + 0x4e0);
        uVar2 = *puVar14;
        puVar15 = puVar14;
        if (0xe6 < uVar2 >> 0x14) {
          do {
            puVar14 = (uint *)FUN_032be688(param_1 + 0x520,uVar12);
            *(uint **)(puVar15 + 2) = puVar14;
            uVar2 = *puVar14;
            puVar15 = puVar14;
          } while (0xe6 < uVar2 >> 0x14);
        }
        uVar2 = uVar2 >> 0x10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar14,0x10);
          if (bVar6) {
            *puVar14 = *puVar14 + 0x700001;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        lVar9 = lVar9 + lVar8 * 0x90;
        lVar8 = lVar8 + 1;
        *(int *)(param_1 + 0x528) = *(int *)(param_1 + 0x528) + 1;
        uVar12 = *puVar1;
        uVar10 = *(undefined8 *)(lVar9 + 0x28);
        uVar3 = *(undefined4 *)(lVar9 + 0x10);
        uVar4 = *(undefined4 *)(lVar9 + 0x38);
        *(undefined4 *)((long)puVar14 + (ulong)uVar2 + 0x20) = 0x4000070;
        *(undefined2 *)((long)puVar14 + (ulong)uVar2 + 0x24) = 5;
        *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x28) = uVar12;
        *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x30) = uVar10;
        *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x48) = *(undefined8 *)(lVar9 + 0x68);
        *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x40) = *(undefined8 *)(lVar9 + 0x60);
        *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x58) = *(undefined8 *)(lVar9 + 0x58);
        *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x50) = *(undefined8 *)(lVar9 + 0x50);
        *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x68) = *(undefined8 *)(lVar9 + 0x88);
        *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x60) = *(undefined8 *)(lVar9 + 0x80);
        *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x78) = *(undefined8 *)(lVar9 + 0x78);
        *(undefined8 *)((long)puVar14 + (ulong)uVar2 + 0x70) = *(undefined8 *)(lVar9 + 0x70);
        *(undefined4 *)((long)puVar14 + (ulong)uVar2 + 0x80) = uVar3;
        *(undefined4 *)((long)puVar14 + (ulong)uVar2 + 0x84) = uVar4;
      } while (lVar8 < *(int *)(param_2 + 0x48));
    }
  }
  return;
}


