/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005bd7f8; name: FUN_005bd7f8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005bd7f8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  size_t sVar9;
  undefined1 (*pauVar10) [12];
  undefined8 uVar11;
  ulong *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  byte *pbVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  undefined1 auVar26 [12];
  long *local_68;
  
  lVar5 = FUN_0053f520(0,0,PTR_PTR_04374c10);
                    /* try { // try from 005bd834 to 005bd843 has its CatchHandler @ 005bde24 */
  lVar6 = FUN_0053ee00(PTR_PTR_04375060,lVar5);
  puVar3 = PTR_DAT_04375070;
  puVar2 = PTR_PTR_04375068;
  plVar20 = param_3 + 1;
  if ((long *)*param_3 != plVar20) {
    plVar24 = (long *)*param_3;
LAB_005bd884:
    do {
                    /* try { // try from 005bd884 to 005bd8c3 has its CatchHandler @ 005bde48 */
      local_68 = (long *)FUN_0053ee00(PTR_PTR_04375078,lVar5);
      puVar12 = *(ulong **)(lVar6 + 8);
      if ((puVar12 == (ulong *)0x0) || (puVar12[1] == puVar12[2])) {
        uVar7 = FUN_0053f0c0((long *)(lVar6 + 8),&local_68,6,lVar5);
        if ((uVar7 & 1) != 0) goto LAB_005bd91c;
        bVar1 = *(byte *)(plVar24 + 4);
        plVar16 = (long *)0x0;
        if ((bVar1 & 1) != 0) goto LAB_005bd8dc;
LAB_005bd930:
        plVar16[1] = (long)plVar24 + 0x21;
        plVar16[2] = (ulong)(bVar1 >> 1);
        uVar7 = (ulong)*(byte *)(plVar24 + 7);
        if ((*(byte *)(plVar24 + 7) & 1) != 0) goto LAB_005bd8ec;
LAB_005bd944:
        uVar19 = uVar7 >> 1;
      }
      else {
        *(long **)((*puVar12 & 0xfffffffffffffff8) + puVar12[1] * 8) = local_68;
        puVar12[1] = puVar12[1] + 1;
LAB_005bd91c:
        bVar1 = *(byte *)(plVar24 + 4);
        plVar16 = local_68;
        if ((bVar1 & 1) == 0) goto LAB_005bd930;
LAB_005bd8dc:
        lVar22 = plVar24[5];
        plVar16[1] = plVar24[6];
        plVar16[2] = lVar22;
        uVar7 = (ulong)*(byte *)(plVar24 + 7);
        if ((*(byte *)(plVar24 + 7) & 1) == 0) goto LAB_005bd944;
LAB_005bd8ec:
        uVar19 = plVar24[8];
      }
      if (uVar19 != 0) {
        if ((uVar7 & 1) == 0) {
          lVar22 = (long)plVar24 + 0x39;
          uVar7 = uVar7 >> 1;
        }
        else {
          uVar7 = plVar24[8];
          lVar22 = plVar24[9];
        }
        plVar16[3] = lVar22;
        plVar16[4] = uVar7;
      }
      if ((long *)plVar24[0xd] != plVar24 + 0xe) {
        plVar23 = (long *)plVar24[0xd];
        do {
          lVar22 = plVar23[4];
                    /* try { // try from 005bd988 to 005bda07 has its CatchHandler @ 005bde60 */
          local_68 = (long *)FUN_0053ee00(puVar2,lVar5);
          puVar12 = (ulong *)plVar16[6];
          if ((puVar12 == (ulong *)0x0) || (puVar12[1] == puVar12[2])) {
            uVar7 = FUN_0053f0c0(plVar16 + 6,&local_68,6,lVar5);
            if ((uVar7 & 1) != 0) goto LAB_005bd9ec;
            plVar14 = (long *)0x0;
            puVar8 = _DAT_00000028;
          }
          else {
            *(long **)((*puVar12 & 0xfffffffffffffff8) + puVar12[1] * 8) = local_68;
            puVar12[1] = puVar12[1] + 1;
LAB_005bd9ec:
            puVar8 = (undefined8 *)local_68[5];
            plVar14 = local_68;
          }
          if ((puVar8 == (undefined8 *)0x0) &&
             (puVar8 = (undefined8 *)FUN_0053ee00(PTR_DAT_04375018,lVar5),
             puVar8 != (undefined8 *)0x0)) {
            plVar14[5] = (long)puVar8;
          }
          bVar4 = (*(byte *)(lVar22 + 0x18) & 1) != 0;
          uVar7 = (ulong)(*(byte *)(lVar22 + 0x18) >> 1);
          if (bVar4) {
            uVar7 = *(ulong *)(lVar22 + 0x20);
          }
          if (uVar7 != 0) {
            pcVar17 = *(char **)(lVar22 + 0x28);
            if (!bVar4) {
              pcVar17 = (char *)(lVar22 + 0x19);
            }
            sVar9 = strlen(pcVar17);
            *puVar8 = pcVar17;
            puVar8[1] = sVar9;
          }
          bVar4 = (*(byte *)(lVar22 + 0x30) & 1) != 0;
          uVar7 = (ulong)(*(byte *)(lVar22 + 0x30) >> 1);
          if (bVar4) {
            uVar7 = *(ulong *)(lVar22 + 0x38);
          }
          if (uVar7 != 0) {
            pcVar17 = *(char **)(lVar22 + 0x40);
            if (!bVar4) {
              pcVar17 = (char *)(lVar22 + 0x31);
            }
            sVar9 = strlen(pcVar17);
            puVar8[2] = pcVar17;
            puVar8[3] = sVar9;
          }
          bVar4 = (*(byte *)(lVar22 + 0x48) & 1) != 0;
          uVar7 = (ulong)(*(byte *)(lVar22 + 0x48) >> 1);
          if (bVar4) {
            uVar7 = *(ulong *)(lVar22 + 0x50);
          }
          if (uVar7 != 0) {
            pcVar17 = *(char **)(lVar22 + 0x58);
            if (!bVar4) {
              pcVar17 = (char *)(lVar22 + 0x49);
            }
            sVar9 = strlen(pcVar17);
            puVar8[4] = pcVar17;
            puVar8[5] = sVar9;
          }
          *plVar14 = plVar23[5];
          plVar14[1] = plVar23[6];
          plVar14[2] = plVar23[7];
          plVar14[3] = plVar23[8];
          if ((long *)plVar23[9] != plVar23 + 10) {
            plVar15 = (long *)plVar23[9];
            do {
                    /* try { // try from 005bdae8 to 005bdb1f has its CatchHandler @ 005bde6c */
              local_68 = (long *)FUN_0053ee00(puVar3,lVar5);
              puVar12 = (ulong *)plVar14[6];
              if ((puVar12 == (ulong *)0x0) || (puVar12[1] == puVar12[2])) {
                uVar7 = FUN_0053f0c0(plVar14 + 6,&local_68,6,lVar5);
                if ((uVar7 & 1) != 0) goto LAB_005bdb54;
                bVar1 = *(byte *)(plVar15 + 4);
                plVar13 = (long *)0x0;
                if ((bVar1 & 1) != 0) goto LAB_005bdb34;
LAB_005bdb64:
                lVar22 = (long)plVar15 + 0x21;
                uVar7 = (ulong)(bVar1 >> 1);
              }
              else {
                *(long **)((*puVar12 & 0xfffffffffffffff8) + puVar12[1] * 8) = local_68;
                puVar12[1] = puVar12[1] + 1;
LAB_005bdb54:
                bVar1 = *(byte *)(plVar15 + 4);
                plVar13 = local_68;
                if ((bVar1 & 1) == 0) goto LAB_005bdb64;
LAB_005bdb34:
                uVar7 = plVar15[5];
                lVar22 = plVar15[6];
              }
              plVar13[2] = lVar22;
              plVar13[3] = uVar7;
              lVar22 = plVar15[7];
              plVar13[1] = plVar15[8];
              *plVar13 = lVar22;
              plVar13 = (long *)plVar15[1];
              if ((long *)plVar15[1] == (long *)0x0) {
                plVar13 = plVar15 + 2;
                plVar18 = (long *)*plVar13;
                if ((long *)*plVar18 != plVar15) {
                  do {
                    lVar22 = *plVar13;
                    plVar13 = (long *)(lVar22 + 0x10);
                    plVar18 = (long *)*plVar13;
                  } while (*plVar18 != lVar22);
                }
              }
              else {
                do {
                  plVar18 = plVar13;
                  plVar13 = (long *)*plVar18;
                } while ((long *)*plVar18 != (long *)0x0);
              }
              plVar15 = plVar18;
            } while (plVar18 != plVar23 + 10);
          }
          plVar14 = (long *)plVar23[1];
          if ((long *)plVar23[1] == (long *)0x0) {
            plVar14 = plVar23 + 2;
            plVar15 = (long *)*plVar14;
            if ((long *)*plVar15 != plVar23) {
              do {
                lVar22 = *plVar14;
                plVar14 = (long *)(lVar22 + 0x10);
                plVar15 = (long *)*plVar14;
              } while (*plVar15 != lVar22);
            }
          }
          else {
            do {
              plVar15 = plVar14;
              plVar14 = (long *)*plVar15;
            } while ((long *)*plVar15 != (long *)0x0);
          }
          plVar23 = plVar15;
        } while (plVar15 != plVar24 + 0xe);
      }
      plVar23 = (long *)plVar24[10];
      if (plVar23 != plVar24 + 0xb) {
        lVar22 = 0;
        pbVar21 = (byte *)(plVar23 + 4);
        if ((*pbVar21 & 1) == 0) goto LAB_005bdc4c;
LAB_005bdc54:
        pbVar21 = (byte *)plVar23[6];
        plVar14 = plVar23;
        do {
          lVar25 = plVar14[7];
                    /* try { // try from 005bdc5c to 005bdc97 has its CatchHandler @ 005bde54 */
          local_68 = (long *)FUN_0053ee00(PTR_DAT_04375080,lVar5);
          puVar12 = (ulong *)plVar16[7];
          if ((puVar12 == (ulong *)0x0) || (puVar12[1] == puVar12[2])) {
            uVar7 = FUN_0053f0c0(plVar16 + 7,&local_68,6,lVar5);
            if ((uVar7 & 1) != 0) goto LAB_005bdcbc;
            plVar23 = (long *)0x0;
          }
          else {
            *(long **)((*puVar12 & 0xfffffffffffffff8) + puVar12[1] * 8) = local_68;
            puVar12[1] = puVar12[1] + 1;
LAB_005bdcbc:
            plVar23 = local_68;
          }
          sVar9 = strlen((char *)pbVar21);
          *plVar23 = lVar25;
          plVar23[1] = (long)pbVar21;
          lVar22 = lVar25 + lVar22;
          plVar23[2] = sVar9;
          plVar15 = (long *)plVar14[1];
          if ((long *)plVar14[1] == (long *)0x0) {
            plVar15 = plVar14 + 2;
            plVar23 = (long *)*plVar15;
            if ((long *)*plVar23 != plVar14) {
              do {
                lVar25 = *plVar15;
                plVar15 = (long *)(lVar25 + 0x10);
                plVar23 = (long *)*plVar15;
              } while (*plVar23 != lVar25);
            }
          }
          else {
            do {
              plVar23 = plVar15;
              plVar15 = (long *)*plVar23;
            } while ((long *)*plVar23 != (long *)0x0);
          }
          if (plVar23 == plVar24 + 0xb) goto LAB_005bdd20;
          pbVar21 = (byte *)(plVar23 + 4);
          if ((*pbVar21 & 1) != 0) goto LAB_005bdc54;
LAB_005bdc4c:
          pbVar21 = pbVar21 + 1;
          plVar14 = plVar23;
        } while( true );
      }
      lVar22 = 0;
LAB_005bdd20:
      *plVar16 = lVar22;
                    /* try { // try from 005bdd2c to 005bdd33 has its CatchHandler @ 005bde3c */
      auVar26 = FUN_002efce0(plVar24[0x10],3);
      pauVar10 = (undefined1 (*) [12])plVar16[5];
                    /* try { // try from 005bdd44 to 005bdd53 has its CatchHandler @ 005bde30 */
      if ((pauVar10 == (undefined1 (*) [12])0x0) &&
         (pauVar10 = (undefined1 (*) [12])FUN_0053ee00(PTR_DAT_04375088,lVar5),
         pauVar10 != (undefined1 (*) [12])0x0)) {
        plVar16[5] = (long)pauVar10;
      }
      *pauVar10 = auVar26;
      plVar16 = (long *)plVar24[1];
      if ((long *)plVar24[1] == (long *)0x0) {
        plVar16 = plVar24 + 2;
        plVar23 = (long *)*plVar16;
        if ((long *)*plVar23 != plVar24) {
          do {
            lVar22 = *plVar16;
            plVar16 = (long *)(lVar22 + 0x10);
            plVar23 = (long *)*plVar16;
          } while (*plVar23 != lVar22);
        }
        plVar24 = plVar23;
        if (plVar23 == plVar20) break;
        goto LAB_005bd884;
      }
      do {
        plVar24 = plVar16;
        plVar16 = (long *)*plVar24;
      } while ((long *)*plVar24 != (long *)0x0);
    } while (plVar24 != plVar20);
  }
                    /* try { // try from 005bddc8 to 005bddf3 has its CatchHandler @ 005bde24 */
  FUN_005bce70(*param_2,*(undefined1 *)(param_2[1] + 0x10),lVar6);
  uVar11 = FUN_00542580(lVar6,PTR_PTR_04375060,lVar5,&local_68);
  FUN_002f2f40(param_1,uVar11,local_68);
  if (lVar5 != 0) {
                    /* try { // try from 005bddf8 to 005bddff has its CatchHandler @ 005bde20 */
    FUN_0053f5f0(lVar5);
  }
  return;
}


