/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb2b30; name: FUN_02eb2b30
 */


void FUN_02eb2b30(void)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  bool bVar15;
  
  if (DAT_0440a470 == (undefined8 *)0x0) {
    return;
  }
  puVar14 = (undefined8 *)0x0;
  puVar13 = DAT_0440a470;
LAB_02eb2b70:
  iVar1 = *(int *)(puVar13 + 2);
  bVar15 = false;
  puVar7 = puVar13;
  puVar12 = puVar14;
  do {
    puVar6 = puVar7;
    if ((*(ushort *)((long)puVar6 + 0x14) & 0x1fe) == 0) {
      lVar11 = puVar6[1];
      if (((*(byte *)(lVar11 + 0x2a4) >> 4 & 1) == 0) || (*(int *)(lVar11 + 0x2f8) != -1)) {
        lVar11 = *(long *)(lVar11 + 0x238);
        if (lVar11 != 0) {
          iVar3 = FUN_02f2b8ec(lVar11);
          if (iVar3 == 0x3f) {
LAB_02eb2d18:
            bVar15 = true;
            goto LAB_02eb2c78;
          }
          plVar9 = &DAT_0440a460;
          lVar8 = 0;
          do {
            lVar10 = lVar8;
            lVar8 = *plVar9;
            plVar9 = (long *)(lVar8 + 0x60);
          } while (lVar8 != 0 && lVar11 != lVar8);
          if (lVar8 != 0) {
            puVar7 = &DAT_0440a460;
            if (DAT_0440a460 != lVar8) {
              puVar7 = (undefined8 *)(lVar10 + 0x60);
            }
            *puVar7 = *(undefined8 *)(lVar8 + 0x60);
            if (DAT_0440a458 == lVar8) {
              DAT_0440a458 = lVar10;
            }
          }
          if (iVar3 == 1) {
            iVar3 = FUN_02f1453c(lVar11);
            if (iVar3 == 0x3f) goto LAB_02eb2d18;
            if (iVar3 != 2) {
              *(ushort *)((long)puVar6 + 0x14) = *(ushort *)((long)puVar6 + 0x14) | 0x100;
              goto LAB_02eb2c78;
            }
          }
          else {
            FUN_02eb32d4(lVar11,1);
          }
        }
        puVar14 = &DAT_0440a470;
        if (DAT_0440a470 != puVar6) {
          puVar14 = puVar12;
        }
        *puVar14 = *puVar6;
        if (DAT_0440a478 == puVar6) {
          DAT_0440a478 = puVar12;
        }
        if ((puVar6 < DAT_0440a488) || (DAT_0440a488 + (ulong)DAT_0440a490 * 3 <= puVar6)) {
          FUN_02f59e60(5,puVar6);
        }
        else {
          *puVar6 = DAT_0440a480;
          DAT_0440a480 = puVar6;
        }
        DAT_0440a494 = DAT_0440a494 + -1;
        puVar14 = (undefined8 *)0x0;
        puVar13 = DAT_0440a470;
        goto joined_r0x02eb2ec0;
      }
LAB_02eb2c78:
      puVar7 = (undefined8 *)*puVar6;
    }
    else {
      puVar7 = (undefined8 *)*puVar6;
    }
  } while ((puVar7 != (undefined8 *)0x0) && (puVar12 = puVar6, iVar1 == *(int *)(puVar7 + 2)));
  if (!bVar15) {
    uVar2 = *(ushort *)((long)puVar13 + 0x14);
    uVar4 = (uint)uVar2;
    if ((uVar2 >> 8 & 1) != 0) {
      lVar11 = *(long *)(puVar13[1] + 0x238);
      goto LAB_02eb2bbc;
    }
    if ((uVar2 & 0xfe) == 0) {
      lVar11 = 0;
      if ((uVar2 >> 8 & 1) == 0) goto LAB_02eb2e34;
      goto LAB_02eb2bc0;
    }
    lVar8 = puVar13[1];
    if (DAT_0440ae38 != 0) {
      lVar10 = (ulong)DAT_0440ae38 << 3;
      plVar9 = DAT_0440ae30;
      if ((uVar4 & 0xff) == 4) {
        do {
          lVar11 = *plVar9;
          if (((*(long *)(lVar11 + 0x128) != 0) &&
              (*(long *)(*(long *)(lVar11 + 0x128) + 0x18) == lVar8)) ||
             ((*(long *)(lVar11 + 0x130) != 0 &&
              (*(long *)(*(long *)(lVar11 + 0x130) + 0x18) == lVar8)))) goto LAB_02eb2f60;
          plVar9 = plVar9 + 1;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
      else {
        do {
          lVar11 = *plVar9;
          if ((*(long *)(lVar11 + 0x128) != 0) &&
             (*(long *)(*(long *)(lVar11 + 0x128) + 0x18) == lVar8)) goto LAB_02eb2f60;
          plVar9 = plVar9 + 1;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
    lVar11 = *(long *)(lVar8 + 0x238);
    if ((lVar11 != 0) &&
       (((*(long *)(lVar11 + 0x128) != 0 && (*(long *)(*(long *)(lVar11 + 0x128) + 0x18) == lVar8))
        || ((uVar4 & 0xff) == 4)))) goto LAB_02eb2bbc;
    goto switchD_02eb2de8_default;
  }
  do {
    puVar14 = puVar13;
    puVar13 = (undefined8 *)*puVar14;
    if (puVar13 == (undefined8 *)0x0) {
      return;
    }
  } while (iVar1 == *(int *)(puVar13 + 2));
  goto joined_r0x02eb2ec0;
LAB_02eb2f60:
  if (*(int *)(lVar11 + 0x140) != 0) {
    uVar4 = uVar4 | 0x100;
    *(short *)((long)puVar13 + 0x14) = (short)uVar4;
  }
  if (lVar11 != 0) {
LAB_02eb2bbc:
    if ((uVar4 >> 8 & 1) == 0) {
LAB_02eb2e34:
      puVar14 = puVar13;
      puVar13 = (undefined8 *)*puVar13;
      goto joined_r0x02eb2ec0;
    }
LAB_02eb2bc0:
    if ((uVar4 & 0xff) == 0) {
      if (*(int *)(lVar11 + 0x140) == 0) {
        FUN_02f30254(*(undefined8 *)(lVar11 + 0x128));
        uVar5 = 1;
      }
      else {
        if (*(int *)(lVar11 + 0x140) == 2) goto switchD_02eb2de8_default;
        if (*(long *)(lVar11 + 0x128) != 0) {
          FUN_02f30380();
        }
        uVar5 = 2;
      }
      *(undefined4 *)(lVar11 + 0x140) = uVar5;
    }
    else {
      switch(uVar4 & 0xff) {
      case 1:
        if (*(int *)(lVar11 + 0x140) == 0) {
          FUN_02f30254(*(undefined8 *)(lVar11 + 0x128));
          uVar5 = 1;
        }
        else {
          if (*(int *)(lVar11 + 0x140) == 2) goto switchD_02eb2de8_caseD_2;
          if (*(long *)(lVar11 + 0x128) == 0) {
            uVar5 = 2;
          }
          else {
            FUN_02f30380();
            uVar5 = 2;
          }
        }
        *(undefined4 *)(lVar11 + 0x140) = uVar5;
      case 2:
switchD_02eb2de8_caseD_2:
        FUN_02f2ba48(lVar11);
        break;
      case 3:
        FUN_02f2bb60(lVar11);
        break;
      case 4:
        FUN_02f2dd78(lVar11,puVar13[1]);
        break;
      case 5:
        FUN_02f2c478(lVar11);
      }
    }
  }
switchD_02eb2de8_default:
  puVar12 = (undefined8 *)*puVar13;
  puVar7 = &DAT_0440a470;
  if (DAT_0440a470 != puVar13) {
    puVar7 = puVar14;
  }
  *puVar7 = puVar12;
  if (DAT_0440a478 == puVar13) {
    DAT_0440a478 = puVar14;
  }
  if ((puVar13 < DAT_0440a488) || (DAT_0440a488 + (ulong)DAT_0440a490 * 3 <= puVar13)) {
    FUN_02f59e60(5,puVar13);
  }
  else {
    *puVar13 = DAT_0440a480;
    DAT_0440a480 = puVar13;
  }
  DAT_0440a494 = DAT_0440a494 + -1;
  puVar13 = puVar12;
joined_r0x02eb2ec0:
  if (puVar13 == (undefined8 *)0x0) {
    return;
  }
  goto LAB_02eb2b70;
}


