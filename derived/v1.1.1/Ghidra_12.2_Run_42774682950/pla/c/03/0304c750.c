/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0304c750; name: FUN_0304c750
 */


void FUN_0304c750(long param_1,long param_2)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  ushort *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  undefined8 uVar18;
  
  if (0 < *(int *)(param_1 + 0x358)) {
    lVar17 = 0;
    do {
      puVar10 = (ushort *)(*(long *)(param_1 + 0x350) + lVar17 * 0x20);
      puVar15 = *(uint **)(*(long *)(param_2 + 0x530) + (long)*(int *)(param_2 + 0x538) * 8 + -8);
      uVar3 = *puVar10;
      puVar12 = *(undefined8 **)(param_2 + 0x4e0);
      uVar6 = *puVar15 >> 0x10;
      if ((int)(0xee0 - (uint)uVar3) <= (int)uVar6) {
        puVar16 = puVar15;
        do {
          iVar11 = *(int *)(puVar12 + 0xb) + -1;
          if (*(int *)(puVar12 + 0xb) < 1) {
            lVar9 = puVar12[1];
            (**(code **)(*(long *)*puVar12 + 0x20))((long *)*puVar12,lVar9,6);
            *(undefined4 *)(puVar12 + 0xb) = 5;
            puVar8 = (undefined8 *)(lVar9 + 0x28);
          }
          else {
            *(int *)(puVar12 + 0xb) = iVar11;
            puVar8 = (undefined8 *)(puVar12[1] + (long)iVar11 * 8);
          }
          puVar15 = (uint *)*puVar8;
          puVar15[4] = 0;
          puVar15[5] = 0;
          puVar15[6] = 0;
          puVar15[7] = 0;
          puVar15[0] = 0;
          puVar15[1] = 0;
          puVar15[2] = 0;
          puVar15[3] = 0;
          puVar15[1] = *(uint *)(param_2 + 0x538);
          uVar7 = *(uint *)(param_2 + 0x53c);
          iVar11 = *(int *)(param_2 + 0x538);
          uVar6 = iVar11 + 1;
          if (iVar11 < (int)(uVar7 & 0x3fffffff)) {
            lVar9 = *(long *)(param_2 + 0x530);
          }
          else {
            uVar18 = *(undefined8 *)(param_2 + 0x530);
            if (0x3ffffffe < iVar11) {
              FUN_032bd0a8(uVar6);
              uVar7 = *(uint *)(param_2 + 0x53c);
            }
            uVar7 = (uVar7 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar7) {
              uVar7 = 0x3fffffff;
            }
            uVar2 = uVar6;
            if ((int)uVar6 <= (int)uVar7) {
              uVar2 = uVar7;
            }
            lVar9 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,8,uVar18,iVar11,(uint *)(param_2 + 0x53c));
            *(long *)(param_2 + 0x530) = lVar9;
            iVar11 = *(int *)(param_2 + 0x538);
          }
          *(uint **)(lVar9 + (long)iVar11 * 8) = puVar15;
          *(uint *)(param_2 + 0x538) = uVar6;
          *(uint **)(puVar16 + 2) = puVar15;
          uVar6 = *puVar15 >> 0x10;
          puVar16 = puVar15;
        } while ((int)(0xee0 - (uint)uVar3) <= (int)uVar6);
      }
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar15,0x10);
        if (bVar5) {
          *puVar15 = *puVar15 + ((uint)uVar3 << 0x10 | 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar7 = (uint)(uVar3 >> 2);
      *(int *)(param_2 + 0x528) = *(int *)(param_2 + 0x528) + 1;
      if (uVar7 != 0) {
        puVar14 = (undefined4 *)((long)puVar15 + (ulong)uVar6 + 0x20);
        uVar6 = uVar3 >> 2 & 7;
        if (6 < uVar7 - 1) {
          iVar11 = uVar6 - uVar7;
          puVar13 = puVar14;
          do {
            *puVar13 = *(undefined4 *)puVar10;
            puVar13[1] = *(undefined4 *)(puVar10 + 2);
            puVar13[2] = *(undefined4 *)(puVar10 + 4);
            puVar13[3] = *(undefined4 *)(puVar10 + 6);
            puVar13[4] = *(undefined4 *)(puVar10 + 8);
            puVar13[5] = *(undefined4 *)(puVar10 + 10);
            puVar13[6] = *(undefined4 *)(puVar10 + 0xc);
            puVar1 = puVar10 + 0xe;
            puVar10 = puVar10 + 0x10;
            puVar14 = puVar13 + 8;
            iVar11 = iVar11 + 8;
            puVar13[7] = *(undefined4 *)puVar1;
            puVar13 = puVar14;
          } while (iVar11 != 0);
        }
        if ((uVar3 >> 2 & 7) != 0) {
          do {
            uVar6 = uVar6 - 1;
            *puVar14 = *(undefined4 *)puVar10;
            puVar10 = puVar10 + 2;
            puVar14 = puVar14 + 1;
          } while (uVar6 != 0);
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(param_1 + 0x358));
  }
  *(undefined4 *)(param_1 + 0x358) = 0;
  return;
}


