/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f27f0; name: FUN_001f27f0
 */


/* WARNING: Removing unreachable block (ram,0x001f2d60) */

int FUN_001f27f0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  undefined1 auVar23 [16];
  long local_c8;
  undefined1 auStack_c0 [12];
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [10];
  undefined1 auStack_92 [10];
  undefined1 auStack_88 [10];
  undefined1 auStack_7e [10];
  undefined1 auStack_74 [10];
  undefined1 auStack_6a [10];
  
  lVar18 = *param_1;
  iVar4 = *(int *)(lVar18 + 0x10f8);
  lVar20 = *(long *)(lVar18 + 0xf90);
  lVar22 = *(long *)(lVar18 + 0xf98);
  auVar23 = FUN_001f8fb4();
  lVar15 = auVar23._0_8_;
  iVar5 = FUN_001f903c(lVar15,auVar23._8_8_,*(undefined8 *)(lVar18 + 0xff8),
                       *(undefined8 *)(lVar18 + 0x1000));
  lVar14 = (long)iVar5;
  lVar2 = lVar14 / 1000000;
  *(long *)(lVar18 + 0xfb0) = lVar14;
  iVar6 = 999;
  if (0x20c49ba5e353f6 < lVar20) {
    iVar6 = 999999;
  }
  lVar1 = lVar20 * 1000;
  lVar3 = lVar14 / 1000;
  if (0x20c49ba5e353f6 < lVar20) {
    lVar1 = lVar20;
    lVar3 = lVar2;
  }
  if (iVar5 <= iVar6) {
    lVar3 = 1;
  }
  lVar20 = 0;
  if (lVar3 != 0) {
    lVar20 = lVar1 / lVar3;
  }
  *(long *)(lVar18 + 0xfb8) = lVar20;
  lVar20 = lVar22 * 1000;
  lVar14 = lVar14 / 1000;
  iVar6 = 999;
  if (0x20c49ba5e353f6 < lVar22) {
    lVar20 = lVar22;
    lVar14 = lVar2;
    iVar6 = 999999;
  }
  if (iVar5 <= iVar6) {
    lVar14 = 1;
  }
  lVar22 = 0;
  if (lVar14 != 0) {
    lVar22 = lVar20 / lVar14;
  }
  *(long *)(lVar18 + 0xfc0) = lVar22;
  if (*(long *)(lVar18 + 0xf78) == lVar15) {
    bVar13 = false;
  }
  else {
    iVar4 = iVar4 % 6;
    lVar14 = lVar18 + 0xf78;
    *(long *)(lVar18 + 0xf78) = lVar15;
    plVar21 = (long *)(lVar14 + (long)iVar4 * 8 + 0xf0);
    *plVar21 = *(long *)(lVar18 + 0xf98) + *(long *)(lVar18 + 0xf90);
    *(undefined1 (*) [16])(lVar14 + (long)iVar4 * 0x10 + 0x120) = auVar23;
    iVar6 = *(int *)(lVar18 + 0x10f8);
    *(int *)(lVar18 + 0x10f8) = iVar6 + 1;
    if (iVar6 == 0) {
      lVar15 = *(long *)(lVar18 + 0xfb8) + *(long *)(lVar18 + 0xfc0);
    }
    else {
      iVar4 = (iVar6 + 1) % 6;
      if (iVar6 < 5) {
        iVar4 = 0;
      }
      lVar20 = lVar14 + (long)iVar4 * 0x10;
      iVar6 = FUN_001f8fe0(lVar15,auVar23._8_8_,*(undefined8 *)(lVar20 + 0x120),
                           *(undefined8 *)(lVar20 + 0x128));
      if (iVar6 == 0) {
        iVar6 = 1;
      }
      lVar14 = *plVar21 - *(long *)(lVar14 + (long)iVar4 * 8 + 0xf0);
      if (lVar14 < 0x418938) {
        lVar15 = 0;
        if ((long)iVar6 != 0) {
          lVar15 = (lVar14 * 1000) / (long)iVar6;
        }
      }
      else {
        lVar15 = (long)((double)lVar14 / ((double)iVar6 / DAT_0388a718));
      }
    }
    *(long *)(lVar18 + 4000) = lVar15;
    bVar13 = true;
  }
  uVar16 = *(uint *)(lVar18 + 0xfac);
  if ((uVar16 >> 4 & 1) == 0) {
    if (*(long *)(lVar18 + 0x730) == 0) {
      if (*(long *)(lVar18 + 0x728) == 0) {
        if (!bVar13) {
          return 0;
        }
        if ((uVar16 >> 7 & 1) == 0) {
          if (*(long *)(lVar18 + 0x14f8) != 0) {
            FUN_001e674c(*(undefined8 *)(lVar18 + 0x668),
                         "** Resuming transfer from byte position %ld\n");
          }
          FUN_001e674c(*(undefined8 *)(lVar18 + 0x668),
                       "  %% Total    %% Received %% Xferd  Average Speed   Time    Time     Time  Current\n                                 Dload  Upload   Total   Spent    Left  Speed\n"
                      );
          uVar16 = *(uint *)(lVar18 + 0xfac) | 0x80;
          *(uint *)(lVar18 + 0xfac) = uVar16;
        }
        if (((uVar16 >> 5 & 1) == 0) || (lVar15 = *(long *)(lVar18 + 0xfc0), lVar15 < 1)) {
          lVar14 = 0;
joined_r0x001f2b50:
          local_c8 = 0;
          if ((uVar16 >> 6 & 1) != 0) goto LAB_001f2b84;
LAB_001f2bc8:
          lVar15 = 0;
          lVar20 = 0;
        }
        else {
          uVar17 = *(ulong *)(lVar18 + 0xf88);
          lVar14 = 0;
          if (lVar15 != 0) {
            lVar14 = (long)uVar17 / lVar15;
          }
          if ((long)uVar17 < 0x2711) {
            if ((long)uVar17 < 1) goto joined_r0x001f2b50;
            lVar15 = *(long *)(lVar18 + 0xf98) * 100;
          }
          else {
            lVar15 = *(long *)(lVar18 + 0xf98);
            uVar17 = uVar17 / 100;
          }
          local_c8 = 0;
          if (uVar17 != 0) {
            local_c8 = lVar15 / (long)uVar17;
          }
          if ((uVar16 >> 6 & 1) == 0) goto LAB_001f2bc8;
LAB_001f2b84:
          lVar15 = *(long *)(lVar18 + 0xfb8);
          if (lVar15 < 1) goto LAB_001f2bc8;
          uVar17 = *(ulong *)(lVar18 + 0xf80);
          lVar20 = 0;
          if (lVar15 != 0) {
            lVar20 = (long)uVar17 / lVar15;
          }
          if ((long)uVar17 < 0x2711) {
            if (0 < (long)uVar17) {
              lVar22 = *(long *)(lVar18 + 0xf90) * 100;
              goto LAB_001f2be8;
            }
            lVar15 = 0;
          }
          else {
            lVar22 = *(long *)(lVar18 + 0xf90);
            uVar17 = uVar17 / 100;
LAB_001f2be8:
            lVar15 = 0;
            if (uVar17 != 0) {
              lVar15 = lVar22 / (long)uVar17;
            }
          }
        }
        if (lVar14 <= lVar20) {
          lVar14 = lVar20;
        }
        lVar20 = lVar14 - lVar2;
        if (lVar14 < 1) {
          lVar20 = 0;
        }
        FUN_001f3070(auStack_a8,lVar20);
        FUN_001f3070(auStack_b4,lVar14);
        FUN_001f3070(auStack_c0,lVar2);
        lVar2 = 0xf98;
        if ((*(uint *)(lVar18 + 0xfac) & 0x20) != 0) {
          lVar2 = 0xf88;
        }
        lVar14 = 0xf90;
        if ((*(uint *)(lVar18 + 0xfac) & 0x40) != 0) {
          lVar14 = 0xf80;
        }
        uVar17 = *(long *)(lVar18 + lVar14) + *(long *)(lVar18 + lVar2);
        lVar2 = *(long *)(lVar18 + 0xf98) + *(long *)(lVar18 + 0xf90);
        if ((long)uVar17 < 0x2711) {
          if ((long)uVar17 < 1) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (uVar17 != 0) {
              lVar14 = (lVar2 * 100) / (long)uVar17;
            }
          }
        }
        else {
          lVar14 = 0;
          if (uVar17 / 100 != 0) {
            lVar14 = lVar2 / (long)(uVar17 / 100);
          }
        }
        uVar19 = *(undefined8 *)(lVar18 + 0x668);
        uVar7 = FUN_001f3164(uVar17,auStack_88);
        uVar8 = FUN_001f3164(*(undefined8 *)(lVar18 + 0xf90),auStack_9c);
        uVar9 = FUN_001f3164(*(undefined8 *)(lVar18 + 0xf98),auStack_92);
        uVar10 = FUN_001f3164(*(undefined8 *)(lVar18 + 0xfb8),auStack_7e);
        uVar11 = FUN_001f3164(*(undefined8 *)(lVar18 + 0xfc0),auStack_74);
        uVar12 = FUN_001f3164(*(undefined8 *)(lVar18 + 4000),auStack_6a);
        FUN_001e674c(uVar19,"\r%3ld %s  %3ld %s  %3ld %s  %s  %s %s %s %s %s",lVar14,uVar7,lVar15,
                     uVar8,local_c8,uVar9,uVar10,uVar11,auStack_b4,auStack_c0,auStack_a8,uVar12);
        FUN_002054fc(*(undefined8 *)(lVar18 + 0x668));
        goto LAB_001f2a90;
      }
      FUN_001e95f0(lVar18,1);
      iVar6 = (**(code **)(lVar18 + 0x728))
                        ((double)*(long *)(lVar18 + 0xf80),(double)*(long *)(lVar18 + 0xf90),
                         (double)*(long *)(lVar18 + 0xf88),(double)*(long *)(lVar18 + 0xf98),
                         *(undefined8 *)(lVar18 + 0x798));
    }
    else {
      FUN_001e95f0(lVar18,1);
      iVar6 = (**(code **)(lVar18 + 0x730))
                        (*(undefined8 *)(lVar18 + 0x798),*(undefined8 *)(lVar18 + 0xf80),
                         *(undefined8 *)(lVar18 + 0xf90),*(undefined8 *)(lVar18 + 0xf88),
                         *(undefined8 *)(lVar18 + 0xf98));
    }
    FUN_001e95f0(lVar18,0);
    if (iVar6 != 0) {
      FUN_001f3ae0(lVar18,"Callback aborted");
    }
  }
  else {
LAB_001f2a90:
    iVar6 = 0;
  }
  return iVar6;
}


