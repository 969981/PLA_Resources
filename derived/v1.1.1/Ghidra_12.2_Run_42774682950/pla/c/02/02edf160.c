/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edf160; name: FUN_02edf160
 */


void FUN_02edf160(long param_1,ulong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  
  uVar7 = *param_2;
  if (uVar7 == 0) {
    if (((((int)param_2[1] == 0) && ((int)param_2[2] == 0)) && ((char)param_2[3] == -1)) &&
       (((char)param_2[4] == -1 && (param_2[5] == 0)))) {
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      FUN_02edef28(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      puVar14 = *(undefined8 **)(param_1 + 0x10);
      do {
        FUN_02ee416c(puVar14,param_2 + 1);
        if ((*(char *)((long)puVar14 + 0xc) == '\0') && (*(int *)(puVar14 + 3) == 0)) {
          if (puVar14[2] != 0) {
            *(undefined4 *)(puVar14 + 3) = 0;
            (*DAT_0442d150)(0);
            puVar14[2] = 0;
            *(undefined4 *)((long)puVar14 + 0x1c) = 0;
          }
          puVar6 = (undefined8 *)
                   (*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x28 + -0x28);
          if (puVar14 < puVar6) {
            uVar7 = (*(long *)(param_1 + 0x10) +
                    ((ulong)*(uint *)(param_1 + 0x18) * 0x28 - (long)puVar14)) - 0x29;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar7;
            puVar9 = puVar14;
            if ((SUB164(auVar4 * ZEXT816(0xcccccccccccccccd),8) >> 5 & 1) == 0) {
              puVar14[4] = puVar14[9];
              *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar14 + 6);
              puVar14[2] = puVar14[7];
              *(undefined1 *)((long)puVar14 + 0xc) = *(undefined1 *)((long)puVar14 + 0x34);
              *(undefined4 *)(puVar14 + 3) = *(undefined4 *)(puVar14 + 8);
              *(undefined4 *)((long)puVar14 + 0x1c) = *(undefined4 *)((long)puVar14 + 0x44);
              puVar14[7] = 0;
              puVar14[8] = 0;
              puVar9 = puVar14 + 5;
            }
            if (0x27 < uVar7) {
              puVar9 = puVar9 + 7;
              do {
                puVar9[-3] = puVar9[2];
                *(undefined4 *)(puVar9 + -6) = *(undefined4 *)(puVar9 + -1);
                *(undefined1 *)((long)puVar9 + -0x2c) = *(undefined1 *)((long)puVar9 + -4);
                puVar9[-5] = *puVar9;
                *(undefined4 *)(puVar9 + -4) = *(undefined4 *)(puVar9 + 1);
                *(undefined4 *)((long)puVar9 + -0x1c) = *(undefined4 *)((long)puVar9 + 0xc);
                puVar9[2] = puVar9[7];
                *puVar9 = 0;
                puVar9[1] = 0;
                *(undefined4 *)(puVar9 + -1) = *(undefined4 *)(puVar9 + 4);
                *(undefined1 *)((long)puVar9 + -4) = *(undefined1 *)((long)puVar9 + 0x24);
                *puVar9 = puVar9[5];
                uVar3 = *(undefined4 *)(puVar9 + 6);
                puVar9[5] = 0;
                puVar9[6] = 0;
                *(undefined4 *)(puVar9 + 1) = uVar3;
                *(undefined4 *)((long)puVar9 + 0xc) = *(undefined4 *)((long)puVar9 + 0x34);
                puVar1 = puVar9 + 3;
                puVar9 = puVar9 + 10;
              } while (puVar1 < puVar6);
            }
          }
          (**(code **)*puVar6)();
          uVar10 = *(int *)(param_1 + 0x18) - 1;
          *(uint *)(param_1 + 0x18) = uVar10;
        }
        else {
          uVar10 = *(uint *)(param_1 + 0x18);
          puVar14 = puVar14 + 5;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)uVar10 * 0x28) != puVar14);
    }
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x18);
    if (uVar10 != 0) {
      lVar13 = *(long *)(param_1 + 0x10);
      iVar11 = 0;
      do {
        iVar2 = iVar11 + (uVar10 >> 1);
        lVar15 = (long)iVar2;
        uVar12 = *(ulong *)(lVar13 + (long)iVar2 * 0x28 + 0x20);
        if (uVar12 == uVar7) {
          lVar5 = lVar13 + lVar15 * 0x28;
          if (lVar5 == 0) {
            return;
          }
          FUN_02ee416c(lVar5,param_2 + 1);
          if (*(char *)(lVar13 + lVar15 * 0x28 + 0xc) != '\0') {
            return;
          }
          piVar8 = (int *)(lVar13 + lVar15 * 0x28 + 0x18);
          if (*piVar8 != 0) {
            return;
          }
          plVar16 = (long *)(lVar13 + lVar15 * 0x28 + 0x10);
          if (*plVar16 != 0) {
            *piVar8 = 0;
            (*DAT_0442d150)(0);
            *plVar16 = 0;
            *(undefined4 *)(lVar13 + lVar15 * 0x28 + 0x1c) = 0;
          }
          FUN_02ee4394((long *)(param_1 + 0x10),*param_2);
          return;
        }
        if (uVar12 < uVar7) {
          iVar11 = iVar2 + 1;
        }
        uVar10 = uVar10 - (uVar12 < uVar7) >> 1;
      } while (uVar10 != 0);
    }
  }
  return;
}


