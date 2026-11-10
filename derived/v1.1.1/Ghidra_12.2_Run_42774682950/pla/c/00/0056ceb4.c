/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056ceb4; name: FUN_0056ceb4
 */


ulong FUN_0056ceb4(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4,ulong *param_5,
                  uint param_6)

{
  long lVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  void *__dest;
  ulong uVar6;
  undefined8 uVar7;
  ostream *this;
  long *plVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  char *pcVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_150 [8];
  ostream aoStack_148 [264];
  
  puVar5 = PTR_LAB_04373088;
  if (*(char *)(param_1 + 0x48) != '\0') {
    return 0;
  }
  uVar16 = 0;
  switch(*param_2) {
  case 1:
    break;
  case 2:
    goto switchD_0056cf20_caseD_2;
  case 3:
    uVar16 = FUN_0056cdd0(param_1,*(undefined4 *)(param_2 + 0x18),*(ushort *)(param_2 + 2) & 1);
    return uVar16;
  case 4:
    if (*(int *)(param_2 + 0x18) != 0) {
      if (*(int *)(param_2 + 0x18) < 1) {
        return 0;
      }
      uVar12 = 0;
      uVar16 = 0;
      lVar13 = 0;
      while( true ) {
        uVar6 = FUN_0056cdd0(param_1,*(undefined4 *)(*(long *)(param_2 + 0x20) + lVar13 * 4),
                             *(ushort *)(param_2 + 2) & 1);
        if (lVar13 != 0) {
          uVar6 = FUN_0056a968(param_1,uVar16 | uVar12);
        }
        if (*param_2 != 4) break;
        lVar13 = lVar13 + 1;
        uVar16 = uVar6 & 0xffffffff;
        uVar12 = uVar6 & 0xffffffff00000000;
        if (*(int *)(param_2 + 0x18) <= lVar13) {
          return uVar6;
        }
      }
                    /* WARNING: Subroutine does not return */
      __assert_fail("(op_) == (kRegexpLiteralString)","external/com_github_google_re2\\re2/regexp.h"
                    ,0x155,"nrunes");
    }
    goto switchD_0056cf20_caseD_2;
  case 5:
    uVar16 = *param_5;
    if (1 < (int)param_6) {
      lVar13 = (ulong)param_6 - 1;
      do {
        param_5 = param_5 + 1;
        uVar16 = FUN_0056a968(param_1,uVar16,*param_5);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    break;
  case 6:
    uVar16 = *param_5;
    if (1 < (int)param_6) {
      lVar13 = (ulong)param_6 - 1;
      do {
        param_5 = param_5 + 1;
        uVar16 = FUN_0056ab24(param_1,uVar16,*param_5);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    break;
  case 7:
    uVar16 = FUN_0056acfc(param_1,*param_5,*(ushort *)(param_2 + 2) >> 6 & 1);
    return uVar16;
  case 8:
    uVar12 = *param_5;
    uVar16 = FUN_0056acfc(param_1,uVar12,*(ushort *)(param_2 + 2) >> 6 & 1);
    uVar16 = uVar16 & 0xffffffff00000000 | uVar12 & 0xffffffff;
    break;
  case 9:
    uVar16 = FUN_0056aec8(param_1,*param_5,*(ushort *)(param_2 + 2) >> 6 & 1);
    return uVar16;
  default:
    FUN_0054f038(auStack_150,"external/com_github_google_re2/re2/compile.cc",0x3df);
                    /* try { // try from 0056d4c8 to 0056d4df has its CatchHandler @ 0056d53c */
    this = std::__put_character_sequence<char,std::char_traits<char>>
                     (aoStack_148,"Missing case in Compiler: ",0x1a);
    std::ostream::operator<<(this,(uint)*param_2);
LAB_0056d4e0:
                    /* WARNING: Subroutine does not return */
    FUN_005503fc(auStack_150);
  case 0xb:
    iVar2 = *(int *)(param_2 + 0x18);
    uVar16 = *param_5;
    if (iVar2 < 0) {
      return uVar16;
    }
    if ((int)uVar16 != 0) {
      if (*(char *)(param_1 + 0x48) == '\0') {
        uVar19 = *(uint *)(param_1 + 0x68);
        iVar9 = uVar19 + 2;
        if (iVar9 <= *(int *)(param_1 + 0x6c)) {
          uVar20 = *(uint *)(param_1 + 0x60);
          if ((int)uVar20 < iVar9) {
            uVar19 = 8;
            if (uVar20 != 0) {
              uVar19 = uVar20;
            }
            do {
              uVar20 = uVar19;
              uVar19 = uVar20 << 1;
            } while ((int)uVar20 < iVar9);
            __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,
                                          -(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 |
                                          (ulong)uVar20 << 3);
            if (*(void **)(param_1 + 0x58) != (void *)0x0) {
              memmove(__dest,*(void **)(param_1 + 0x58),(long)*(int *)(param_1 + 0x68) << 3);
            }
            uVar19 = uVar20 - *(int *)(param_1 + 0x68);
            memset((void *)((long)__dest + (long)*(int *)(param_1 + 0x68) * 8),0,
                   -(ulong)(uVar19 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar19 << 3);
            lVar13 = *(long *)(param_1 + 0x58);
            *(void **)(param_1 + 0x58) = __dest;
            if (lVar13 != 0) {
              FUN_002e2ea0(PTR_LAB_04373088);
            }
            uVar19 = *(uint *)(param_1 + 0x68);
            iVar9 = uVar19 + 2;
            *(uint *)(param_1 + 0x60) = uVar20;
          }
          *(int *)(param_1 + 0x68) = iVar9;
          if (-1 < (int)uVar19) {
            FUN_00552b14(*(long *)(param_1 + 0x58) + (long)(int)uVar19 * 8,iVar2 << 1,
                         uVar16 & 0xffffffff);
            lVar13 = (long)(int)uVar19 + 1;
            FUN_00552b14(*(long *)(param_1 + 0x58) + lVar13 * 8,iVar2 << 1 | 1,0);
            uVar20 = (uint)(uVar16 >> 0x20);
            if (uVar20 != 0) {
              lVar15 = *(long *)(param_1 + 0x58);
              uVar12 = (ulong)(uVar20 >> 1);
              puVar14 = (uint *)(lVar15 + uVar12 * 8);
              uVar20 = *puVar14;
              if ((uVar16 >> 0x20 & 1) != 0) goto LAB_0056b634;
              do {
                uVar4 = uVar20 >> 4;
                *puVar14 = uVar20 & 8 | (int)lVar13 << 4 | uVar20 & 7;
                while( true ) {
                  if (uVar4 == 0) goto LAB_0056b64c;
                  uVar12 = (ulong)(uVar4 >> 1);
                  puVar14 = (uint *)(lVar15 + uVar12 * 8);
                  uVar20 = *puVar14;
                  if ((uVar4 & 1) == 0) break;
LAB_0056b634:
                  if ((uVar20 & 6) != 0) {
                    /* WARNING: Subroutine does not return */
                    __assert_fail("opcode() == kInstAlt || opcode() == kInstAltMatch",
                                  "external/com_github_google_re2\\re2/prog.h",0x55,"out1");
                  }
                  lVar1 = lVar15 + uVar12 * 8;
                  uVar4 = *(uint *)(lVar1 + 4);
                  *(int *)(lVar1 + 4) = (int)lVar13;
                }
              } while( true );
            }
LAB_0056b64c:
            uVar16 = lVar13 << 0x21;
            goto LAB_0056b65c;
          }
          goto LAB_0056b658;
        }
      }
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
LAB_0056b658:
    uVar16 = 0;
    uVar19 = 0;
LAB_0056b65c:
    return uVar16 | uVar19;
  case 0xc:
    if (*(long *)(param_1 + 0x90) != 0) {
      plVar8 = *(long **)(param_1 + 0x88);
      while (plVar8 != (long *)0x0) {
        plVar8 = (long *)*plVar8;
        FUN_002e2ea0(puVar5);
      }
      uVar16 = *(ulong *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x88) = 0;
      if (uVar16 != 0) {
        uVar12 = uVar16 & 3;
        if (uVar16 - 1 < 3) {
          lVar13 = 0;
        }
        else {
          lVar13 = 0;
          do {
            lVar15 = lVar13 * 8;
            lVar13 = lVar13 + 4;
            *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar15) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar15 + 8) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar15 + 0x10) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar15 + 0x18) = 0;
          } while (uVar16 - uVar12 != lVar13);
        }
        if (uVar12 != 0) {
          lVar13 = lVar13 << 3;
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar13) = 0;
            uVar12 = uVar12 - 1;
            lVar13 = lVar13 + 8;
          } while (uVar12 != 0);
        }
      }
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (*(int *)(param_1 + 0x4c) == 2) {
      FUN_0056c858(param_1,0,0x10ffff,0);
      uVar16 = *(ulong *)(param_1 + 0xa0);
    }
    else {
      FUN_0056c43c(param_1,0,0x10ffff,0);
      uVar16 = *(ulong *)(param_1 + 0xa0);
    }
    break;
  case 0xd:
    uVar16 = FUN_0056b1a8(param_1,0,0xff,0);
    return uVar16;
  case 0xe:
    uVar10 = 1;
    if (*(char *)(param_1 + 0x50) != '\0') {
      uVar10 = 2;
    }
    goto LAB_0056d288;
  case 0xf:
    uVar10 = 1;
    if (*(char *)(param_1 + 0x50) == '\0') {
      uVar10 = 2;
    }
    goto LAB_0056d288;
  case 0x10:
    uVar10 = 0x10;
    goto LAB_0056d288;
  case 0x11:
    uVar10 = 0x20;
    goto LAB_0056d288;
  case 0x12:
    cVar3 = *(char *)(param_1 + 0x50);
    uVar11 = 8;
    uVar10 = 4;
    goto LAB_0056d280;
  case 0x13:
    cVar3 = *(char *)(param_1 + 0x50);
    uVar11 = 4;
    uVar10 = 8;
LAB_0056d280:
    if (cVar3 != '\0') {
      uVar10 = uVar11;
    }
LAB_0056d288:
    uVar16 = FUN_0056b3c8(param_1,uVar10);
    return uVar16;
  case 0x14:
    pcVar18 = *(char **)(param_2 + 0x18);
    if (*(int *)(pcVar18 + 4) == 0) {
      FUN_0054f038(auStack_150,"external/com_github_google_re2/re2/compile.cc",0x3a5);
                    /* try { // try from 0056d524 to 0056d52f has its CatchHandler @ 0056d534 */
      FUN_00551750(aoStack_148,"No ranges in char class");
      goto LAB_0056d4e0;
    }
    cVar3 = *pcVar18;
    if (*(long *)(param_1 + 0x90) != 0) {
      plVar8 = *(long **)(param_1 + 0x88);
      while (plVar8 != (long *)0x0) {
        plVar8 = (long *)*plVar8;
        FUN_002e2ea0(puVar5);
      }
      uVar16 = *(ulong *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x88) = 0;
      if (uVar16 != 0) {
        uVar12 = uVar16 & 3;
        if (uVar16 - 1 < 3) {
          lVar13 = 0;
        }
        else {
          lVar13 = 0;
          do {
            lVar15 = lVar13 * 8;
            lVar13 = lVar13 + 4;
            *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar15) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar15 + 8) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar15 + 0x10) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar15 + 0x18) = 0;
          } while (uVar16 - uVar12 != lVar13);
        }
        if (uVar12 != 0) {
          lVar13 = lVar13 << 3;
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar13) = 0;
            uVar12 = uVar12 - 1;
            lVar13 = lVar13 + 8;
          } while (uVar12 != 0);
        }
      }
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (*(int *)(pcVar18 + 0x10) != 0) {
      piVar17 = *(int **)(pcVar18 + 8);
      if (cVar3 == '\0') {
        do {
          if (*(int *)(param_1 + 0x4c) == 2) {
            FUN_0056c858(param_1,*piVar17,piVar17[1],0);
          }
          else {
            FUN_0056c43c();
          }
          piVar17 = piVar17 + 2;
        } while (piVar17 != (int *)(*(long *)(pcVar18 + 8) + (long)*(int *)(pcVar18 + 0x10) * 8));
      }
      else {
        do {
          iVar2 = *piVar17;
          if (iVar2 < 0x41) {
LAB_0056d408:
            iVar9 = piVar17[1];
            if ((iVar9 < 0x7a) && (iVar2 < 0x7b)) {
LAB_0056d41c:
              if ((iVar9 < 0x41) || ((uVar7 = 1, 0x5a < iVar2 && (iVar9 < 0x61))))
              goto LAB_0056d448;
            }
            else {
LAB_0056d448:
              uVar7 = 0;
            }
            if (*(int *)(param_1 + 0x4c) == 2) {
              FUN_0056c858(param_1,iVar2,iVar9,uVar7);
            }
            else {
              FUN_0056c43c();
            }
          }
          else if (0x5a < piVar17[1]) {
            if (iVar2 < 0x42) goto LAB_0056d408;
            iVar9 = piVar17[1];
            if (iVar2 < 0x7b) goto LAB_0056d41c;
            goto LAB_0056d448;
          }
          piVar17 = piVar17 + 2;
        } while (piVar17 != (int *)(*(long *)(pcVar18 + 8) + (long)*(int *)(pcVar18 + 0x10) * 8));
      }
    }
    uVar16 = *(ulong *)(param_1 + 0xa0);
    break;
  case 0x15:
    uVar16 = FUN_0056b2cc(param_1,*(undefined4 *)(param_2 + 0x18));
    if (*(int *)(param_1 + 0xa8) == 2) {
      uVar7 = FUN_0056b3c8(param_1,8);
      uVar16 = FUN_0056a968(param_1,uVar7,uVar16);
      return uVar16;
    }
  }
  return uVar16;
switchD_0056cf20_caseD_2:
  uVar16 = FUN_0056b0ac(param_1);
  return uVar16;
}


