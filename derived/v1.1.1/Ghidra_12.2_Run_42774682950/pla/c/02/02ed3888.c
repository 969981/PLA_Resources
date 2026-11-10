/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed3888; name: FUN_02ed3888
 */


void FUN_02ed3888(long *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  
  uVar11 = *(uint *)(param_1 + 1);
  if (uVar11 == 0) {
    plVar10 = DAT_0440adb8;
    if ((DAT_0440adc0 != 0) && ((long *)*DAT_0440adb8 != param_1)) {
      lVar16 = (ulong)DAT_0440adc0 * 8;
      plVar15 = DAT_0440adb8;
      do {
        lVar16 = lVar16 + -8;
        if (lVar16 == 0) {
          return;
        }
        plVar10 = plVar15 + 1;
        plVar12 = plVar15 + 1;
        plVar15 = plVar10;
      } while ((long *)*plVar12 != param_1);
    }
    if (DAT_0440adb8 + DAT_0440adc0 != plVar10) {
      plVar15 = DAT_0440adb8 + DAT_0440adc0 + -1;
      if ((plVar10 < plVar15) && (*plVar10 = plVar10[1], plVar10 + 1 < plVar15)) {
        plVar12 = plVar10 + 2;
        plVar10[1] = *plVar12;
        if (plVar12 < plVar15) {
          do {
            plVar10 = plVar12 + 1;
            *plVar12 = *plVar10;
            plVar12 = plVar10;
          } while (plVar10 < plVar15);
        }
      }
      DAT_0440adc0 = DAT_0440adc0 - 1;
      return;
    }
  }
  else {
    iVar8 = 0;
    uVar3 = *(uint *)(param_2 + 0x2ac);
    uVar4 = *(uint *)(param_2 + 0x2b0);
    lVar16 = *param_1;
    uVar17 = uVar11;
    do {
      iVar2 = iVar8 + (uVar17 >> 1);
      lVar18 = *(long *)(lVar16 + (long)iVar2 * 8);
      if (*(float *)(lVar18 + 0x2a8) == *(float *)(param_2 + 0x2a8)) {
        uVar5 = *(uint *)(lVar18 + 0x2ac);
        uVar6 = *(uint *)(lVar18 + 0x2b0);
        if (uVar5 != uVar3 || uVar6 != uVar4) {
          bVar1 = uVar4 < uVar6;
          if (uVar6 == uVar4) {
            bVar1 = uVar3 < uVar5;
          }
          bVar7 = uVar6 < uVar4;
          if (uVar6 == uVar4) {
            bVar7 = uVar5 < uVar3;
          }
          if (*(char *)((long)param_1 + 0x12) != '\0') {
            bVar1 = bVar7;
          }
          goto LAB_02ed390c;
        }
        puVar13 = (undefined8 *)(lVar16 + (long)iVar2 * 8);
        if (puVar13 != (undefined8 *)0x0) {
          puVar9 = (undefined8 *)((lVar16 + (ulong)uVar11 * 8) - 8);
          if (puVar13 < puVar9) {
            puVar14 = puVar13 + 1;
            *puVar13 = *puVar14;
            if (puVar14 < puVar9) {
              puVar13 = puVar13 + 2;
              *puVar14 = *puVar13;
              if (puVar13 < puVar9) {
                do {
                  puVar14 = puVar13 + 1;
                  *puVar13 = *puVar14;
                  puVar13 = puVar14;
                } while (puVar14 < puVar9);
              }
            }
            uVar11 = *(uint *)(param_1 + 1);
          }
          uVar11 = uVar11 - 1;
          bVar1 = true;
          *(uint *)(param_1 + 1) = uVar11;
          goto joined_r0x02ed397c;
        }
        break;
      }
      bVar1 = *(float *)(param_2 + 0x2a8) < *(float *)(lVar18 + 0x2a8);
LAB_02ed390c:
      if (bVar1 != 0) {
        iVar8 = iVar2 + 1;
      }
      uVar17 = uVar17 - bVar1 >> 1;
    } while (uVar17 != 0);
    bVar1 = false;
joined_r0x02ed397c:
    if (uVar11 == 0) {
      plVar10 = DAT_0440adb8;
      if ((DAT_0440adc0 != 0) && ((long *)*DAT_0440adb8 != param_1)) {
        lVar16 = (ulong)DAT_0440adc0 * 8;
        plVar15 = DAT_0440adb8;
        do {
          lVar16 = lVar16 + -8;
          if (lVar16 == 0) goto joined_r0x02ed3980;
          plVar10 = plVar15 + 1;
          plVar12 = plVar15 + 1;
          plVar15 = plVar10;
        } while ((long *)*plVar12 != param_1);
      }
      if (DAT_0440adb8 + DAT_0440adc0 != plVar10) {
        plVar15 = DAT_0440adb8 + DAT_0440adc0 + -1;
        if ((plVar10 < plVar15) && (*plVar10 = plVar10[1], plVar10 + 1 < plVar15)) {
          plVar12 = plVar10 + 2;
          plVar10[1] = *plVar12;
          if (plVar12 < plVar15) {
            do {
              plVar10 = plVar12 + 1;
              *plVar12 = *plVar10;
              plVar12 = plVar10;
            } while (plVar10 < plVar15);
          }
        }
        DAT_0440adc0 = DAT_0440adc0 - 1;
      }
    }
joined_r0x02ed3980:
    if (bVar1) {
      *(short *)(param_1 + 5) = (short)param_1[5] + -1;
    }
  }
  return;
}


