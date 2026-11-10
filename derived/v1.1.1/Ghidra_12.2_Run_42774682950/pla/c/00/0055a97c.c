/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055a97c; name: FUN_0055a97c
 */


undefined8 FUN_0055a97c(long *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ostream *this;
  int iVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  undefined8 uVar17;
  long lVar18;
  int *piVar19;
  undefined1 auStack_170 [8];
  ostream aoStack_168 [264];
  
  lVar18 = param_1[1];
  *(undefined4 *)(param_1 + 0xe) = 0;
  lVar15 = param_1[2];
  uVar8 = (param_3 - (int)lVar18) +
          ((int)lVar15 + 1) * (uint)*(ushort *)(*(long *)(*param_1 + 0x50) + (long)param_2 * 2);
  uVar10 = uVar8 + 0x3f;
  if (-1 < (int)uVar8) {
    uVar10 = uVar8;
  }
  uVar12 = 1L << ((ulong)uVar8 & 0x3f);
  uVar13 = *(ulong *)(param_1[8] + (long)((int)uVar10 >> 6) * 8);
  if ((uVar12 & uVar13) == 0) {
    *(ulong *)(param_1[8] + ((long)((ulong)uVar10 << 0x20) >> 0x26) * 8) = uVar12 | uVar13;
    FUN_0055a7f4();
    uVar12 = (ulong)*(uint *)(param_1 + 0xe);
    if (0 < (int)*(uint *)(param_1 + 0xe)) {
      uVar17 = 0;
      pbVar1 = (byte *)(lVar18 + lVar15);
LAB_0055aa54:
      while( true ) {
        uVar12 = (long)(int)uVar12 - 1;
        *(int *)(param_1 + 0xe) = (int)uVar12;
        puVar2 = (uint *)(param_1[0xc] + uVar12 * 0x10);
        uVar10 = *puVar2;
        uVar13 = (ulong)uVar10;
        pbVar16 = *(byte **)(puVar2 + 2);
        if (-1 < (int)uVar10) break;
        uVar10 = -uVar10;
        if ((*(uint *)(*(long *)(*param_1 + 0x60) +
                      (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3)) & 7) !=
            3) {
LAB_0055ae74:
                    /* WARNING: Subroutine does not return */
          __assert_fail("(opcode()) == (kInstCapture)","external/com_github_google_re2\\re2/prog.h",
                        0x56,"cap");
        }
        *(byte **)(param_1[10] +
                  (long)*(int *)(*(long *)(*param_1 + 0x60) + (long)(int)uVar10 * 8 + 4) * 8) =
             pbVar16;
        if ((int)uVar12 < 1) {
          return uVar17;
        }
      }
      uVar10 = puVar2[1];
      if (0 < (int)uVar10) {
        puVar2[1] = uVar10 - 1;
        *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
        pbVar16 = pbVar16 + (int)uVar10;
      }
LAB_0055aa9c:
      lVar18 = *(long *)(*param_1 + 0x60);
      iVar9 = (int)uVar13;
      puVar2 = (uint *)(lVar18 + (long)iVar9 * 8);
      uVar10 = *puVar2;
      if (6 < (uVar10 & 7) - 1) {
        FUN_0054f038(auStack_170,"external/com_github_google_re2/re2/bitstate.cc",0xab);
                    /* try { // try from 0055ae50 to 0055ae6b has its CatchHandler @ 0055aed4 */
        this = std::__put_character_sequence<char,std::char_traits<char>>
                         (aoStack_168,"Unexpected opcode: ",0x13);
        std::ostream::operator<<(this,*puVar2 & 7);
                    /* WARNING: Subroutine does not return */
        FUN_005503fc(auStack_170);
      }
      lVar15 = (long)iVar9;
      switch(uVar10 & 7) {
      case 1:
        uVar13 = (ulong)(uVar10 >> 4);
        uVar6 = *(uint *)(lVar18 + uVar13 * 8);
        uVar8 = uVar6 & 7;
        if (uVar8 == 6) {
          uVar8 = *(uint *)(lVar18 + ((ulong)(uVar6 >> 1) & 0x7ffffff8)) & 7;
        }
        if (uVar8 == 2) {
          if ((uVar10 & 6) != 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("opcode() == kInstAlt || opcode() == kInstAltMatch",
                          "external/com_github_google_re2\\re2/prog.h",0x55,"out1");
          }
          uVar13 = (ulong)*(uint *)(lVar18 + lVar15 * 8 + 4);
          pbVar16 = pbVar1;
          goto LAB_0055aa9c;
        }
        if (*(char *)((long)param_1 + 0x29) != '\0') {
          pbVar16 = pbVar1;
          goto LAB_0055aa9c;
        }
        break;
      case 2:
        uVar10 = 0xffffffff;
        if (pbVar16 < pbVar1) {
          uVar10 = (uint)*pbVar16;
        }
        lVar18 = lVar18 + lVar15 * 8;
        uVar8 = uVar10 + 0x20;
        if ((*(ushort *)(lVar18 + 6) & (ushort)(uVar10 - 0x41 < 0x1a)) == 0) {
          uVar8 = uVar10;
        }
        if (((int)uVar8 < (int)(uint)*(byte *)(lVar18 + 4)) ||
           ((int)(uint)*(byte *)(lVar18 + 5) < (int)uVar8)) break;
        uVar10 = (uint)(*(ushort *)(lVar18 + 6) >> 1);
        if (uVar10 != 0) {
          FUN_0055a7f4(param_1,iVar9 + uVar10,pbVar16);
        }
        pbVar16 = pbVar16 + 1;
        uVar10 = *puVar2;
        lVar18 = *param_1;
        goto joined_r0x0055ad00;
      case 3:
        if ((uVar10 >> 3 & 1) == 0) {
          FUN_0055a7f4(param_1,iVar9 + 1,pbVar16);
          uVar10 = *puVar2;
        }
        if ((uVar10 & 7) == 3) {
          piVar19 = (int *)(lVar18 + lVar15 * 8 + 4);
          iVar7 = *piVar19;
          if ((iVar7 < 0) || ((int)param_1[0xb] <= iVar7)) goto LAB_0055acf4;
          FUN_0055a7f4(param_1,-iVar9,*(undefined8 *)(param_1[10] + (long)iVar7 * 8));
          if ((*puVar2 & 7) == 3) {
            *(byte **)(param_1[10] + (long)*piVar19 * 8) = pbVar16;
            uVar10 = *puVar2;
            lVar18 = *param_1;
            goto joined_r0x0055ad00;
          }
        }
        goto LAB_0055ae74;
      case 4:
        uVar10 = *(uint *)(lVar18 + lVar15 * 8 + 4);
        uVar8 = FUN_005530e4(param_1 + 3,pbVar16);
        if ((uVar10 & (uVar8 ^ 0xffffffff)) == 0) {
          if (((byte)*puVar2 >> 3 & 1) == 0) goto LAB_0055ace4;
          goto LAB_0055acf4;
        }
        break;
      case 5:
        if ((pbVar16 == pbVar1) || (*(char *)((long)param_1 + 0x2a) == '\0')) {
          lVar18 = param_1[7];
          if ((int)lVar18 == 0) {
            return 1;
          }
          *(byte **)(param_1[10] + 8) = pbVar16;
          plVar11 = (long *)param_1[6];
          if (((*plVar11 == 0) ||
              ((*(char *)((long)param_1 + 0x29) != '\0' &&
               ((byte *)(*plVar11 + plVar11[1]) < pbVar16)))) && (0 < (int)lVar18)) {
            lVar18 = *(long *)param_1[10];
            lVar15 = ((long *)param_1[10])[1];
            *plVar11 = lVar18;
            plVar11[1] = lVar15 - lVar18;
            if (1 < (int)param_1[7]) {
              lVar18 = 0;
              lVar15 = 1;
              do {
                lVar4 = *(long *)(param_1[10] + lVar18 + 0x10);
                lVar5 = *(long *)(param_1[10] + lVar18 + 0x18);
                lVar3 = param_1[6] + lVar18;
                lVar18 = lVar18 + 0x10;
                lVar15 = lVar15 + 1;
                *(long *)(lVar3 + 0x10) = lVar4;
                *(long *)(lVar3 + 0x18) = lVar5 - lVar4;
              } while (lVar15 < (int)param_1[7]);
            }
          }
          uVar17 = 1;
          if (pbVar16 == pbVar1) {
            return 1;
          }
          if (*(char *)((long)param_1 + 0x29) == '\0') {
            return 1;
          }
        }
        break;
      case 6:
        if ((uVar10 >> 3 & 1) == 0) {
LAB_0055ace4:
          FUN_0055a7f4(param_1,iVar9 + 1,pbVar16);
        }
LAB_0055acf4:
        uVar10 = *puVar2;
        lVar18 = *param_1;
joined_r0x0055ad00:
        if (uVar10 >> 4 == 0) {
          uVar8 = ((int)pbVar16 - (int)param_1[1]) +
                  ((int)param_1[2] + 1) * (uint)**(ushort **)(lVar18 + 0x50);
          uVar10 = uVar8 + 0x3f;
          if (-1 < (int)uVar8) {
            uVar10 = uVar8;
          }
          lVar18 = param_1[8];
          uVar12 = *(ulong *)(lVar18 + (long)((int)uVar10 >> 6) * 8);
          uVar14 = 1L << ((ulong)uVar8 & 0x3f);
          if ((uVar14 & uVar12) == 0) {
            uVar13 = 0;
            goto LAB_0055ad9c;
          }
          goto switchD_0055aacc_caseD_7;
        }
        uVar13 = (ulong)(uVar10 >> 4);
        if ((*(byte *)(*(long *)(lVar18 + 0x60) + uVar13 * 8 + -8) >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("id == 0 || prog_->inst(id-1)->last()",
                        "external/com_github_google_re2/re2/bitstate.cc",0xed,"TrySearch");
        }
        uVar8 = ((int)pbVar16 - (int)param_1[1]) +
                ((int)param_1[2] + 1) * (uint)*(ushort *)(*(long *)(lVar18 + 0x50) + uVar13 * 2);
        uVar10 = uVar8 + 0x3f;
        if (-1 < (int)uVar8) {
          uVar10 = uVar8;
        }
        lVar18 = param_1[8];
        uVar14 = 1L << ((ulong)uVar8 & 0x3f);
        uVar12 = *(ulong *)(lVar18 + (long)((int)uVar10 >> 6) * 8);
        if ((uVar14 & uVar12) != 0) goto switchD_0055aacc_caseD_7;
LAB_0055ad9c:
        *(ulong *)(lVar18 + ((long)((ulong)uVar10 << 0x20) >> 0x26) * 8) = uVar14 | uVar12;
        goto LAB_0055aa9c;
      case 7:
        goto switchD_0055aacc_caseD_7;
      }
      if (((byte)*puVar2 >> 3 & 1) != 0) goto switchD_0055aacc_caseD_7;
      uVar13 = (ulong)(iVar9 + 1);
      goto LAB_0055aa9c;
    }
  }
  return 0;
switchD_0055aacc_caseD_7:
  uVar12 = (ulong)*(uint *)(param_1 + 0xe);
  if ((int)*(uint *)(param_1 + 0xe) < 1) {
    return uVar17;
  }
  goto LAB_0055aa54;
}


