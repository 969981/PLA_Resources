/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ea600; name: FUN_002ea600
 */


undefined8 FUN_002ea600(double param_1,ulong param_2,int param_3,undefined1 *param_4,int *param_5)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  byte bVar16;
  ulong uVar17;
  char *pcVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  ulong *puVar23;
  ulong *puVar24;
  undefined1 *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  if (0x27 < param_3) {
    return 0;
  }
  puVar25 = param_4 + 0x29;
  uVar13 = (ulong)param_1;
  puVar23 = (ulong *)(param_4 + 0x60);
  *puVar23 = (ulong)puVar25;
  puVar24 = (ulong *)(param_4 + 0x58);
  *puVar24 = (ulong)puVar25;
  iVar22 = (int)param_2;
  if (iVar22 < 0) {
    if (iVar22 < -0x3c) {
      auVar26 = __fixunsdfti();
      uVar10 = auVar26._8_8_;
      uVar13 = auVar26._0_8_;
      *puVar23 = (ulong)puVar25;
      *puVar24 = (ulong)puVar25;
      if (iVar22 < -0x7c) {
        return 0;
      }
      uVar19 = (ulong)(uint)-iVar22;
      uVar17 = -1L << (uVar19 & 0x3f);
      uVar21 = 0;
      if (uVar19 != 0) {
        uVar21 = 0xffffffffffffffff >> (-uVar19 & 0x3f);
      }
      uVar8 = 0;
      if (uVar19 != 0) {
        uVar8 = uVar10 << (-uVar19 & 0x3f);
      }
      bVar7 = (long)(uVar19 - 0x40) < 0;
      uVar20 = -1L << (uVar19 & 0x3f);
      if (bVar7) {
        uVar20 = uVar21 | uVar17;
      }
      uVar20 = ~uVar20;
      uVar21 = 0;
      if (bVar7) {
        uVar21 = uVar17;
      }
      uVar21 = ~uVar21;
      uVar17 = 0;
      if (bVar7) {
        uVar17 = uVar10 >> (uVar19 & 0x3f);
      }
      uVar15 = uVar10 >> (uVar19 & 0x3f);
      if (bVar7) {
        uVar15 = uVar13 >> (uVar19 & 0x3f) | uVar8;
      }
      auVar26._8_8_ = uVar17;
      auVar26._0_8_ = uVar15;
      if (uVar15 == 0 && uVar17 == 0) {
LAB_002eae00:
        uVar17 = uVar21 & uVar13;
        uVar8 = uVar20 & uVar10;
        *param_5 = 0;
        if (uVar17 == 0 && uVar8 == 0) {
          uVar17 = 0;
          uVar8 = 0;
          puVar25 = *(undefined1 **)(param_4 + 0x58);
        }
        else {
          iVar22 = 0;
          do {
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar17;
            iVar22 = iVar22 + -1;
            uVar8 = SUB168(auVar27 * ZEXT816(10),8) + uVar8 * 10;
            uVar17 = uVar17 * 10;
            bVar7 = uVar17 <= uVar21;
            if (uVar8 != uVar20) {
              bVar7 = uVar8 <= uVar20;
            }
          } while (bVar7);
          *param_5 = iVar22;
          puVar25 = *(undefined1 **)(param_4 + 0x58);
        }
        if (puVar25 <= param_4) goto LAB_002eb0cc;
        bVar16 = 0;
        if (uVar19 != 0) {
          bVar16 = (byte)(uVar8 << (-uVar19 & 0x3f));
        }
        bVar2 = (byte)(uVar8 >> (uVar19 & 0x3f));
        if ((long)(uVar19 - 0x40) < 0) {
          bVar2 = (byte)(uVar17 >> (uVar19 & 0x3f)) | bVar16;
        }
        *(undefined1 **)(param_4 + 0x58) = puVar25 + -1;
        puVar25[-1] = bVar2 + 0x30;
        puVar25 = *(undefined1 **)(param_4 + 0x60);
        if (param_4 + 0x55 <= puVar25) goto LAB_002eb15c;
        *puVar23 = (ulong)(puVar25 + 1);
        uVar17 = uVar17 & uVar21;
        uVar8 = uVar8 & uVar20;
        *puVar25 = 0x2e;
      }
      else {
        bVar7 = true;
        do {
          lVar11 = auVar26._8_8_;
          uVar17 = auVar26._0_8_;
          if (!bVar7) goto LAB_002eb0cc;
          auVar27 = __udivti3(uVar17,lVar11,10,0);
          *(undefined1 **)(param_4 + 0x58) = puVar25 + -1;
          puVar25[-1] = auVar26[0] + auVar27[0] * -10 | 0x30;
          puVar25 = *(undefined1 **)(param_4 + 0x58);
          bVar7 = param_4 <= puVar25 && puVar25 != param_4;
          auVar26 = auVar27;
        } while (lVar11 != 0 || 9 < uVar17);
        if (param_4 > puVar25 || puVar25 == param_4) goto LAB_002eb0cc;
        uVar3 = *puVar25;
        uVar8 = *puVar23;
        *puVar24 = (ulong)(puVar25 + -1);
        puVar25[-1] = uVar3;
        *(undefined1 *)(*puVar24 + 1) = 0x2e;
        uVar17 = uVar21 & uVar13;
        iVar22 = (int)uVar8 - (int)puVar25;
        uVar8 = uVar20 & uVar10;
        if (iVar22 == 0) goto LAB_002eae00;
        iVar22 = iVar22 + -1;
        param_3 = param_3 - iVar22;
        *param_5 = iVar22;
        if (param_3 < 0) {
          uVar13 = *puVar23;
          param_3 = -param_3;
          pbVar9 = (byte *)(uVar13 - (long)param_3);
          *puVar23 = (ulong)pbVar9;
          if (*pbVar9 < 0x36) {
            if (*pbVar9 != 0x35) {
              return 1;
            }
            if (uVar17 == 0 && uVar8 == 0) {
              if (param_3 != 1) {
                lVar11 = 1 - (long)param_3;
                do {
                  if (*(char *)(uVar13 + lVar11) != '0') goto LAB_002ea8ec;
                  lVar11 = lVar11 + 1;
                } while (lVar11 != 0);
              }
              bVar16 = pbVar9[-1];
              if (bVar16 == 0x2e) {
                bVar16 = pbVar9[-2];
              }
              if ((bVar16 & 1) == 0) {
                return 1;
              }
            }
          }
LAB_002ea8ec:
          pbVar14 = (byte *)*puVar24;
          if (pbVar9 <= pbVar14) goto LAB_002eb17c;
          pbVar12 = pbVar9 + -1;
          if (pbVar14 <= pbVar12) {
            bVar16 = *pbVar12;
            pbVar9 = pbVar12;
            do {
              if (bVar16 == 0x2e) {
                pbVar12 = pbVar9 + -1;
                if (pbVar12 < pbVar14) goto LAB_002eaffc;
              }
              else {
                if (bVar16 != 0x39) goto LAB_002eb064;
                pbVar12 = pbVar9 + -1;
                *pbVar9 = 0x30;
                pbVar14 = (byte *)*puVar24;
                if (pbVar12 < pbVar14) goto LAB_002eaffc;
              }
              pbVar9 = pbVar9 + -1;
              bVar16 = *pbVar9;
            } while( true );
          }
          goto LAB_002eb000;
        }
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar17;
      uVar10 = SUB168(auVar4 * ZEXT816(10),8) + uVar8 * 10;
      uVar13 = 0;
      if (uVar19 != 0) {
        uVar13 = uVar10 << (-uVar19 & 0x3f);
      }
      uVar8 = uVar10 & uVar20;
      uVar10 = uVar10 >> (uVar19 & 0x3f);
      if ((long)(uVar19 - 0x40) < 0) {
        uVar10 = uVar17 * 10 >> (uVar19 & 0x3f) | uVar13;
      }
      iVar22 = (int)uVar10;
      uVar13 = uVar17 * 10 & uVar21;
      if (0 < param_3) {
        do {
          pcVar18 = (char *)*puVar23;
          if (param_4 + 0x55 <= pcVar18) goto LAB_002eb15c;
          *puVar23 = (ulong)(pcVar18 + 1);
          *pcVar18 = (char)uVar10 + '0';
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar13;
          uVar15 = uVar13 * 10;
          uVar13 = uVar15 & uVar21;
          uVar10 = SUB168(auVar5 * ZEXT816(10),8) + uVar8 * 10;
          uVar17 = 0;
          if (uVar19 != 0) {
            uVar17 = uVar10 << (-uVar19 & 0x3f);
          }
          param_3 = param_3 + -1;
          uVar8 = uVar10 & uVar20;
          uVar10 = uVar10 >> (uVar19 & 0x3f);
          if ((long)(uVar19 - 0x40) < 0) {
            uVar10 = uVar15 >> (uVar19 & 0x3f) | uVar17;
          }
          iVar22 = (int)uVar10;
        } while (0 < param_3);
      }
      if (iVar22 < 6) {
        if (iVar22 != 5) {
          return 1;
        }
        if (uVar13 == 0 && uVar8 == 0) {
          bVar16 = *(byte *)(*puVar23 - 1);
          if (bVar16 == 0x2e) {
            bVar16 = *(byte *)(*puVar23 - 2);
          }
          if ((bVar16 & 1) == 0) {
            return 1;
          }
        }
      }
      pbVar14 = (byte *)*puVar24;
      pbVar9 = (byte *)*puVar23;
      if (pbVar9 <= pbVar14) goto LAB_002eb17c;
      pbVar12 = pbVar9 + -1;
      if (pbVar14 <= pbVar12) {
        bVar16 = *pbVar12;
        pbVar9 = pbVar12;
        do {
          if (bVar16 == 0x2e) {
            pbVar12 = pbVar9 + -1;
            if (pbVar12 < pbVar14) goto LAB_002eaffc;
          }
          else {
            if (bVar16 != 0x39) goto LAB_002eb064;
            pbVar12 = pbVar9 + -1;
            *pbVar9 = 0x30;
            pbVar14 = (byte *)*puVar24;
            if (pbVar12 < pbVar14) goto LAB_002eaffc;
          }
          pbVar9 = pbVar9 + -1;
          bVar16 = *pbVar9;
        } while( true );
      }
    }
    else {
      uVar21 = (ulong)(uint)-iVar22;
      uVar17 = ~(-1L << (uVar21 & 0x3f));
      uVar10 = uVar13 >> (uVar21 & 0x3f);
      if (uVar10 == 0) {
LAB_002eabc8:
        uVar13 = uVar17 & uVar13;
        *param_5 = 0;
        uVar10 = 0;
        if (uVar13 != 0) {
          iVar22 = 0;
          do {
            uVar13 = uVar13 * 10;
            iVar22 = iVar22 + -1;
          } while (uVar13 <= uVar17);
          *param_5 = iVar22;
          uVar10 = uVar13;
        }
        puVar25 = *(undefined1 **)(param_4 + 0x58);
        if (puVar25 <= param_4) {
LAB_002eb0cc:
                    /* WARNING: Subroutine does not return */
          __assert_fail("begin > data",
                        "external/com_google_absl/absl/strings/internal/str_format/float_conversion.cc"
                        ,0x43,"push_front");
        }
        *(undefined1 **)(param_4 + 0x58) = puVar25 + -1;
        puVar25[-1] = (char)(uVar10 >> (uVar21 & 0x3f)) + '0';
        puVar25 = *(undefined1 **)(param_4 + 0x60);
        if (param_4 + 0x55 <= puVar25) {
LAB_002eb15c:
                    /* WARNING: Subroutine does not return */
          __assert_fail("end < data + sizeof(data)",
                        "external/com_google_absl/absl/strings/internal/str_format/float_conversion.cc"
                        ,0x47,"push_back");
        }
        *puVar23 = (ulong)(puVar25 + 1);
        uVar10 = uVar10 & uVar17;
        *puVar25 = 0x2e;
      }
      else {
        bVar7 = true;
        do {
          if (!bVar7) goto LAB_002eb0cc;
          *(undefined1 **)(param_4 + 0x58) = puVar25 + -1;
          puVar25[-1] = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
          puVar25 = *(undefined1 **)(param_4 + 0x58);
          bVar7 = param_4 < puVar25;
          bVar1 = 9 < uVar10;
          uVar10 = uVar10 / 10;
        } while (bVar1);
        if (puVar25 <= param_4) goto LAB_002eb0cc;
        uVar3 = *puVar25;
        uVar10 = *puVar23;
        *puVar24 = (ulong)(puVar25 + -1);
        puVar25[-1] = uVar3;
        iVar22 = (int)uVar10 - (int)puVar25;
        uVar10 = uVar17 & uVar13;
        *(undefined1 *)(*puVar24 + 1) = 0x2e;
        if (iVar22 == 0) goto LAB_002eabc8;
        iVar22 = iVar22 + -1;
        param_3 = param_3 - iVar22;
        *param_5 = iVar22;
        if (param_3 < 0) {
          uVar13 = *puVar23;
          param_3 = -param_3;
          pbVar9 = (byte *)(uVar13 - (long)param_3);
          *puVar23 = (ulong)pbVar9;
          if (*pbVar9 < 0x36) {
            if (*pbVar9 != 0x35) {
              return 1;
            }
            if (uVar10 == 0) {
              if (param_3 != 1) {
                lVar11 = 1 - (long)param_3;
                do {
                  if (*(char *)(uVar13 + lVar11) != '0') goto LAB_002eaad8;
                  lVar11 = lVar11 + 1;
                } while (lVar11 != 0);
              }
              bVar16 = pbVar9[-1];
              if (bVar16 == 0x2e) {
                bVar16 = pbVar9[-2];
              }
              if ((bVar16 & 1) == 0) {
                return 1;
              }
            }
          }
LAB_002eaad8:
          pbVar14 = (byte *)*puVar24;
          if (pbVar9 <= pbVar14) goto LAB_002eb17c;
          pbVar12 = pbVar9 + -1;
          if (pbVar14 <= pbVar12) {
            bVar16 = *pbVar12;
            pbVar9 = pbVar12;
            do {
              if (bVar16 == 0x2e) {
                pbVar12 = pbVar9 + -1;
                if (pbVar12 < pbVar14) goto LAB_002ead98;
              }
              else {
                if (bVar16 != 0x39) goto LAB_002eb070;
                pbVar12 = pbVar9 + -1;
                *pbVar9 = 0x30;
                pbVar14 = (byte *)*puVar24;
                if (pbVar12 < pbVar14) goto LAB_002ead98;
              }
              pbVar9 = pbVar9 + -1;
              bVar16 = *pbVar9;
            } while( true );
          }
          goto LAB_002ead9c;
        }
      }
      uVar19 = uVar10 * 10 >> (uVar21 & 0x3f);
      iVar22 = (int)uVar19;
      uVar13 = uVar10 * 10 & uVar17;
      if (0 < param_3) {
        do {
          pcVar18 = (char *)*puVar23;
          if (param_4 + 0x55 <= pcVar18) goto LAB_002eb15c;
          param_3 = param_3 + -1;
          *puVar23 = (ulong)(pcVar18 + 1);
          *pcVar18 = (char)uVar19 + '0';
          uVar19 = uVar13 * 10 >> (uVar21 & 0x3f);
          iVar22 = (int)uVar19;
          uVar13 = uVar13 * 10 & uVar17;
        } while (0 < param_3);
      }
      if (iVar22 < 6) {
        if (iVar22 != 5) {
          return 1;
        }
        if (uVar13 == 0) {
          bVar16 = *(byte *)(*puVar23 - 1);
          if (bVar16 == 0x2e) {
            bVar16 = *(byte *)(*puVar23 - 2);
          }
          if ((bVar16 & 1) == 0) {
            return 1;
          }
        }
      }
      pbVar14 = (byte *)*puVar24;
      pbVar9 = (byte *)*puVar23;
      if (pbVar9 <= pbVar14) {
LAB_002eb17c:
                    /* WARNING: Subroutine does not return */
        __assert_fail("begin < end",
                      "external/com_google_absl/absl/strings/internal/str_format/float_conversion.cc"
                      ,0x50,"back");
      }
      pbVar12 = pbVar9 + -1;
      if (pbVar14 <= pbVar12) {
        bVar16 = *pbVar12;
        pbVar9 = pbVar12;
        do {
          if (bVar16 == 0x2e) {
            pbVar12 = pbVar9 + -1;
            if (pbVar12 < pbVar14) goto LAB_002eaffc;
          }
          else {
            if (bVar16 != 0x39) {
LAB_002eb064:
              *pbVar9 = bVar16 + 1;
              return 1;
            }
            pbVar12 = pbVar9 + -1;
            *pbVar9 = 0x30;
            pbVar14 = (byte *)*puVar24;
            if (pbVar12 < pbVar14) goto LAB_002eaffc;
          }
          pbVar9 = pbVar9 + -1;
          bVar16 = *pbVar9;
        } while( true );
      }
    }
    goto LAB_002eb000;
  }
  if (iVar22 < 0xc) {
    uVar13 = uVar13 << (param_2 & 0x3f);
    if (uVar13 == 0) {
      *param_5 = -1;
      param_3 = param_3 + 1;
    }
    else {
      bVar7 = true;
      do {
        if (!bVar7) goto LAB_002eb0cc;
        *(undefined1 **)(param_4 + 0x58) = puVar25 + -1;
        puVar25[-1] = (char)uVar13 + (char)(uVar13 / 10) * -10 | 0x30;
        puVar25 = *(undefined1 **)(param_4 + 0x58);
        bVar7 = param_4 < puVar25;
        bVar1 = 9 < uVar13;
        uVar13 = uVar13 / 10;
      } while (bVar1);
      if (puVar25 <= param_4) goto LAB_002eb0cc;
      uVar3 = *puVar25;
      uVar13 = *puVar23;
      *puVar24 = (ulong)(puVar25 + -1);
      puVar25[-1] = uVar3;
      *(undefined1 *)(*puVar24 + 1) = 0x2e;
      iVar22 = ~(uint)puVar25 + (int)uVar13;
      *param_5 = iVar22;
      param_3 = param_3 - iVar22;
    }
    if (-1 < param_3) {
      if (param_3 == 0) {
        return 1;
      }
      while (puVar25 = (undefined1 *)*puVar23, puVar25 < param_4 + 0x55) {
        param_3 = param_3 + -1;
        *puVar23 = (ulong)(puVar25 + 1);
        *puVar25 = 0x30;
        if (param_3 < 1) {
          return 1;
        }
      }
      goto LAB_002eb15c;
    }
    uVar13 = *puVar23;
    param_3 = -param_3;
    pbVar9 = (byte *)(uVar13 - (long)param_3);
    *puVar23 = (ulong)pbVar9;
    if (*pbVar9 < 0x36) {
      if (*pbVar9 != 0x35) {
        return 1;
      }
      if (param_3 != 1) {
        lVar11 = 1 - (long)param_3;
        do {
          if (*(char *)(uVar13 + lVar11) != '0') goto LAB_002eab68;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0);
      }
      bVar16 = pbVar9[-1];
      if (bVar16 == 0x2e) {
        bVar16 = pbVar9[-2];
      }
      if ((bVar16 & 1) == 0) {
        return 1;
      }
    }
LAB_002eab68:
    pbVar14 = (byte *)*puVar24;
    if (pbVar9 <= pbVar14) goto LAB_002eb17c;
    pbVar12 = pbVar9 + -1;
    if (pbVar14 <= pbVar12) {
      bVar16 = *pbVar12;
      pbVar9 = pbVar12;
      do {
        if (bVar16 == 0x2e) {
          pbVar12 = pbVar9 + -1;
          if (pbVar12 < pbVar14) goto LAB_002ead98;
        }
        else {
          if (bVar16 != 0x39) goto LAB_002eb070;
          pbVar12 = pbVar9 + -1;
          *pbVar9 = 0x30;
          pbVar14 = (byte *)*puVar24;
          if (pbVar12 < pbVar14) goto LAB_002ead98;
        }
        pbVar9 = pbVar9 + -1;
        bVar16 = *pbVar9;
      } while( true );
    }
  }
  else {
    *puVar23 = (ulong)puVar25;
    *puVar24 = (ulong)puVar25;
    if (0x4b < iVar22) {
      return 0;
    }
    auVar26 = __fixunsdfti();
    uVar10 = auVar26._0_8_;
    uVar13 = 0;
    if ((param_2 & 0xffffffff) != 0) {
      uVar13 = uVar10 >> (-(param_2 & 0xffffffff) & 0x3f);
    }
    bVar7 = (long)((param_2 & 0xffffffff) - 0x40) < 0;
    uVar21 = uVar10 << (param_2 & 0x3f);
    if (bVar7) {
      uVar21 = uVar13 | auVar26._8_8_ << (param_2 & 0x3f);
    }
    lVar11 = 0;
    if (bVar7) {
      lVar11 = uVar10 << (param_2 & 0x3f);
    }
    auVar6._8_8_ = uVar21;
    auVar6._0_8_ = lVar11;
    if (lVar11 == 0 && uVar21 == 0) {
      *param_5 = -1;
      param_3 = param_3 + 1;
    }
    else {
      bVar7 = true;
      do {
        lVar11 = auVar6._8_8_;
        uVar13 = auVar6._0_8_;
        if (!bVar7) goto LAB_002eb0cc;
        auVar26 = __udivti3(uVar13,lVar11,10,0);
        *(undefined1 **)(param_4 + 0x58) = puVar25 + -1;
        puVar25[-1] = auVar6[0] + auVar26[0] * -10 | 0x30;
        puVar25 = *(undefined1 **)(param_4 + 0x58);
        bVar7 = param_4 <= puVar25 && puVar25 != param_4;
        auVar6 = auVar26;
      } while (lVar11 != 0 || 9 < uVar13);
      if (param_4 > puVar25 || puVar25 == param_4) goto LAB_002eb0cc;
      uVar3 = *puVar25;
      uVar13 = *puVar23;
      *puVar24 = (ulong)(puVar25 + -1);
      puVar25[-1] = uVar3;
      *(undefined1 *)(*puVar24 + 1) = 0x2e;
      iVar22 = ~(uint)puVar25 + (int)uVar13;
      *param_5 = iVar22;
      param_3 = param_3 - iVar22;
    }
    if (-1 < param_3) {
      if (param_3 == 0) {
        return 1;
      }
      while (puVar25 = (undefined1 *)*puVar23, puVar25 < param_4 + 0x55) {
        param_3 = param_3 + -1;
        *puVar23 = (ulong)(puVar25 + 1);
        *puVar25 = 0x30;
        if (param_3 < 1) {
          return 1;
        }
      }
      goto LAB_002eb15c;
    }
    uVar13 = *puVar23;
    param_3 = -param_3;
    pbVar9 = (byte *)(uVar13 - (long)param_3);
    *puVar23 = (ulong)pbVar9;
    if (*pbVar9 < 0x36) {
      if (*pbVar9 != 0x35) {
        return 1;
      }
      if (param_3 != 1) {
        lVar11 = 1 - (long)param_3;
        do {
          if (*(char *)(uVar13 + lVar11) != '0') goto LAB_002ead40;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0);
      }
      bVar16 = pbVar9[-1];
      if (bVar16 == 0x2e) {
        bVar16 = pbVar9[-2];
      }
      if ((bVar16 & 1) == 0) {
        return 1;
      }
    }
LAB_002ead40:
    pbVar14 = (byte *)*puVar24;
    if (pbVar9 <= pbVar14) goto LAB_002eb17c;
    pbVar12 = pbVar9 + -1;
    if (pbVar14 <= pbVar12) {
      bVar16 = *pbVar12;
      pbVar9 = pbVar12;
      do {
        if (bVar16 == 0x2e) {
          pbVar12 = pbVar9 + -1;
          if (pbVar12 < pbVar14) goto LAB_002ead98;
        }
        else {
          if (bVar16 != 0x39) {
LAB_002eb070:
            *pbVar9 = bVar16 + 1;
            return 1;
          }
          pbVar12 = pbVar9 + -1;
          *pbVar9 = 0x30;
          pbVar14 = (byte *)*puVar24;
          if (pbVar12 < pbVar14) goto LAB_002ead98;
        }
        pbVar9 = pbVar9 + -1;
        bVar16 = *pbVar9;
      } while( true );
    }
  }
LAB_002ead9c:
  *pbVar12 = 0x31;
  *puVar24 = (ulong)pbVar12;
  bVar16 = *pbVar9;
  *pbVar9 = pbVar9[1];
  pbVar9[1] = bVar16;
LAB_002eb01c:
  *param_5 = *param_5 + 1;
  if (*puVar23 <= *puVar24) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("begin < end",
                  "external/com_google_absl/absl/strings/internal/str_format/float_conversion.cc",
                  0x4b,"pop_back");
  }
  *puVar23 = *puVar23 - 1;
  return 1;
LAB_002eaffc:
  pbVar9 = pbVar12 + 1;
LAB_002eb000:
  *pbVar12 = 0x31;
  *puVar24 = (ulong)pbVar12;
  bVar16 = *pbVar9;
  *pbVar9 = pbVar9[1];
  pbVar9[1] = bVar16;
  goto LAB_002eb01c;
LAB_002ead98:
  pbVar9 = pbVar12 + 1;
  goto LAB_002ead9c;
}


