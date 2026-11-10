/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f14074; name: FUN_02f14074
 */


void FUN_02f14074(ulong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  puVar14 = DAT_0440ae00;
  if ((DAT_0440ae45 & 1) == 0) {
    DAT_0440ae45 = 1;
    if (DAT_0440ae08 != 0) {
      if ((param_1 & 1) == 0) {
        do {
          plVar4 = (long *)*puVar14;
          FUN_02f15844(plVar4);
          lVar5 = plVar4[5];
          if (lVar5 == 0) {
            if ((((plVar4[0xd] != 0) && (*(long *)(plVar4[0xd] + 0x88) != 0)) ||
                (lVar5 = FUN_02eca560(plVar4 + 0xd), lVar5 == 0)) ||
               (iVar7 = *(int *)(lVar5 + 0x3c), iVar3 = (**(code **)(*plVar4 + 0x80))(plVar4),
               iVar7 != iVar3)) goto LAB_02f143b0;
LAB_02f14310:
            puVar14 = puVar14 + 1;
          }
          else {
            iVar7 = 0;
            do {
              piVar1 = (int *)(lVar5 + 0x164);
              lVar5 = *(long *)(lVar5 + 0x48);
              if (*piVar1 == 0) {
                iVar7 = iVar7 + 1;
              }
            } while (lVar5 != 0);
            if (iVar7 != 0) goto LAB_02f14310;
LAB_02f143b0:
            if (((plVar4[5] == 0) && ((plVar4[0xd] == 0 || (*(long *)(plVar4[0xd] + 0x88) == 0))))
               && ((lVar5 = FUN_02eca560(plVar4 + 0xd), lVar5 != 0 &&
                   ((*(long **)(lVar5 + 0x158) == plVar4 ||
                    (*(long **)(lVar5 + 0x158) == (long *)0x0)))))) {
              *(undefined1 *)(lVar5 + 0x164) = 0;
              *(undefined8 *)(lVar5 + 0x158) = 0;
            }
            *plVar4 = (long)&PTR_FUN_042ac6b8;
            plVar4[0x15] = (long)&PTR_FUN_042ac808;
            FUN_02f24810(plVar4);
            FUN_02f26970(plVar4);
            plVar6 = (long *)plVar4[1];
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x40))(plVar6,0);
              puVar15 = (undefined8 *)plVar4[1];
              if (puVar15 != (undefined8 *)0x0) {
                (**(code **)*puVar15)(puVar15);
                (*DAT_0442d150)(5,puVar15);
              }
              plVar4[1] = 0;
            }
            if (plVar4[0xf] != 0) {
              (*DAT_0442d158)(5);
              plVar4[0xf] = 0;
            }
            FUN_02f267e4(plVar4);
            (*DAT_0442d150)(5,plVar4);
            puVar15 = DAT_0440ae00 + ((ulong)DAT_0440ae08 - 1);
            if (puVar14 < puVar15) {
              uVar9 = (long)DAT_0440ae00 + ((ulong)DAT_0440ae08 * 8 - (long)puVar14) + -9;
              uVar2 = ((uint)(uVar9 >> 3) & 0x1fffffff) + 1;
              uVar10 = (ulong)uVar2 & 7;
              puVar13 = puVar14;
              if ((uVar2 & 7) != 0) {
                puVar11 = puVar14;
                do {
                  puVar13 = puVar11 + 1;
                  *puVar11 = *puVar13;
                  uVar10 = uVar10 - 1;
                  puVar11 = puVar13;
                } while (uVar10 != 0);
              }
              if (0x37 < uVar9) {
                do {
                  *puVar13 = puVar13[1];
                  puVar13[1] = puVar13[2];
                  puVar13[2] = puVar13[3];
                  puVar13[3] = puVar13[4];
                  puVar13[4] = puVar13[5];
                  puVar13[5] = puVar13[6];
                  puVar13[6] = puVar13[7];
                  puVar11 = puVar13 + 8;
                  puVar13[7] = *puVar11;
                  puVar13 = puVar11;
                } while (puVar11 < puVar15);
              }
            }
            DAT_0440ae08 = DAT_0440ae08 - 1;
            DAT_0440ae44 = 1;
          }
        } while (DAT_0440ae00 + DAT_0440ae08 != puVar14);
      }
      else {
        puVar15 = DAT_0440ae00;
        do {
          puVar13 = (undefined8 *)*puVar14;
          if (puVar13 != (undefined8 *)0x0) {
            if ((puVar13[5] == 0) &&
               ((((puVar13[0xd] == 0 || (*(long *)(puVar13[0xd] + 0x88) == 0)) &&
                 (lVar5 = FUN_02eca560(puVar13 + 0xd), lVar5 != 0)) &&
                ((*(undefined8 **)(lVar5 + 0x158) == puVar13 ||
                 (*(undefined8 **)(lVar5 + 0x158) == (undefined8 *)0x0)))))) {
              *(undefined1 *)(lVar5 + 0x164) = 0;
              *(undefined8 *)(lVar5 + 0x158) = 0;
            }
            *puVar13 = &PTR_FUN_042ac6b8;
            puVar13[0x15] = &PTR_FUN_042ac808;
            FUN_02f24810(puVar13);
            FUN_02f26970(puVar13);
            plVar4 = (long *)puVar13[1];
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x40))(plVar4,0);
              puVar15 = (undefined8 *)puVar13[1];
              if (puVar15 != (undefined8 *)0x0) {
                (**(code **)*puVar15)(puVar15);
                (*DAT_0442d150)(5,puVar15);
              }
              puVar13[1] = 0;
            }
            if (puVar13[0xf] != 0) {
              (*DAT_0442d158)(5);
              puVar13[0xf] = 0;
            }
            FUN_02f267e4(puVar13);
            (*DAT_0442d150)(5,puVar13);
            puVar15 = DAT_0440ae00;
          }
          uVar10 = (ulong)DAT_0440ae08;
          if (puVar14 < puVar15 + (uVar10 - 1)) {
            uVar8 = (long)puVar15 + (ulong)DAT_0440ae08 * 8 + ~(ulong)puVar14 + -8;
            uVar2 = ((uint)(uVar8 >> 3) & 0x1fffffff) + 1;
            uVar9 = (ulong)uVar2 & 7;
            if ((uVar2 & 7) == 0) {
              puVar13 = puVar14;
            }
            else {
              puVar11 = puVar14;
              do {
                puVar13 = puVar11 + 1;
                *puVar11 = *puVar13;
                uVar9 = uVar9 - 1;
                puVar11 = puVar13;
              } while (uVar9 != 0);
            }
            if (0x37 < uVar8) {
              do {
                *puVar13 = puVar13[1];
                puVar13[1] = puVar13[2];
                puVar13[2] = puVar13[3];
                puVar13[3] = puVar13[4];
                puVar13[4] = puVar13[5];
                puVar13[5] = puVar13[6];
                puVar13[6] = puVar13[7];
                puVar11 = puVar13 + 8;
                puVar13[7] = *puVar11;
                puVar13 = puVar11;
              } while (puVar11 < puVar15 + (uVar10 - 1));
            }
            puVar15 = DAT_0440ae00;
          }
          DAT_0440ae08 = DAT_0440ae08 - 1;
          DAT_0440ae44 = 1;
        } while (puVar15 + DAT_0440ae08 != puVar14);
      }
    }
    if (DAT_0440ae38 != 0) {
      puVar14 = DAT_0440ae30;
      do {
        puVar15 = puVar14 + 1;
        uVar12 = *puVar14;
        FUN_02f15844(uVar12);
        FUN_02f147fc(uVar12);
        puVar14 = puVar15;
      } while (puVar15 != DAT_0440ae30 + DAT_0440ae38);
    }
    DAT_0440ae45 = 0;
  }
  return;
}


