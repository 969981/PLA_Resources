/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f17da8; name: FUN_02f17da8
 */


void FUN_02f17da8(void)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  if (DAT_0440ae38 != 0) {
    puVar12 = DAT_0440ae30;
    do {
      puVar9 = (undefined8 *)*puVar12;
      if (*(int *)((long)puVar9 + 0x194) != 0x2c) {
        if (*(int *)((long)puVar9 + 0x194) == 0x2e) {
          *(undefined4 *)(puVar9[1] + 0x110) = 0x42ca0000;
        }
        else {
          (**(code **)(puVar9[0xd] + 0x18))(puVar9 + 0xd);
          puVar9[0xb] = 0;
        }
      }
      lVar5 = *(long *)(puVar9[0x25] + 0x18);
      if (*(int *)(puVar9 + 0x28) == 2) {
        bVar2 = true;
      }
      else if ((*(uint *)(lVar5 + 0x2a3) >> 0xc & 1) == 0) {
        bVar2 = false;
      }
      else {
        bVar2 = *(int *)(lVar5 + 0x2f8) == -1;
      }
      if ((bVar2) || (*(int *)((long)puVar9 + 0x194) != 0x11)) {
        if (!(bool)(*(int *)((long)puVar9 + 0x194) != 2 & (bVar2 ^ 1U))) goto LAB_02f17ea8;
        if (((uint)(*(int *)(puVar9 + 0x28) == 1) & (*(uint *)(lVar5 + 0x2a3) & 0x4000) >> 0xe) != 0
           ) {
          FUN_02f2ba48(puVar9);
        }
LAB_02f17e7c:
        if (*(int *)(puVar9 + 0x28) == 2) goto LAB_02f17ebc;
        puVar12 = puVar12 + 1;
      }
      else {
        lVar10 = puVar9[0x26];
        if (lVar10 == 0) {
LAB_02f17ea8:
          if (puVar9[0x25] != 0) {
LAB_02f17eac:
            *(byte *)(lVar5 + 0x2a2) = *(byte *)(lVar5 + 0x2a2) & 0x87;
          }
        }
        else {
          puVar9[0x26] = 0;
          FUN_02f2b7ac(puVar9,0);
          iVar3 = FUN_02f2da48(puVar9,lVar10,1,0);
          if ((iVar3 == 1) && (iVar3 = FUN_02f2c538(puVar9), iVar3 == 1)) {
            FUN_02f30254(lVar10);
            goto LAB_02f17e7c;
          }
          if (puVar9[0x25] != 0) {
            lVar5 = *(long *)(puVar9[0x25] + 0x18);
            goto LAB_02f17eac;
          }
        }
        *(undefined4 *)(puVar9 + 0x28) = 2;
LAB_02f17ebc:
        puVar11 = DAT_0440ae30 + ((ulong)DAT_0440ae38 - 1);
        if (puVar12 < puVar11) {
          uVar7 = (long)DAT_0440ae30 + ((ulong)DAT_0440ae38 * 8 - (long)puVar12) + -9;
          uVar1 = ((uint)(uVar7 >> 3) & 0x1fffffff) + 1;
          uVar8 = (ulong)uVar1 & 7;
          puVar6 = puVar12;
          if ((uVar1 & 7) != 0) {
            puVar13 = puVar12;
            do {
              puVar6 = puVar13 + 1;
              *puVar13 = *puVar6;
              uVar8 = uVar8 - 1;
              puVar13 = puVar6;
            } while (uVar8 != 0);
          }
          if (0x37 < uVar7) {
            do {
              *puVar6 = puVar6[1];
              puVar6[1] = puVar6[2];
              puVar6[2] = puVar6[3];
              puVar6[3] = puVar6[4];
              puVar6[4] = puVar6[5];
              puVar6[5] = puVar6[6];
              puVar6[6] = puVar6[7];
              puVar13 = puVar6 + 8;
              puVar6[7] = *puVar13;
              puVar6 = puVar13;
            } while (puVar13 < puVar11);
          }
        }
        DAT_0440ae38 = DAT_0440ae38 - 1;
        FUN_02f2b7ac(puVar9,0);
        plVar4 = (long *)puVar9[0x26];
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x68))(plVar4,0);
          puVar11 = (undefined8 *)puVar9[0x26];
          if (puVar11 != (undefined8 *)0x0) {
            (**(code **)*puVar11)(puVar11);
            (*DAT_0442d150)(5,puVar11);
          }
          puVar9[0x26] = 0;
        }
        (**(code **)*puVar9)(puVar9);
        (*DAT_0442d150)(5,puVar9);
      }
    } while (DAT_0440ae30 + DAT_0440ae38 != puVar12);
  }
  return;
}


