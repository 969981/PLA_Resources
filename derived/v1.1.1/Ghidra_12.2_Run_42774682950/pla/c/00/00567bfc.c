/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00567bfc; name: FUN_00567bfc
 */


void FUN_00567bfc(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  ostream *poVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 auStack_150 [8];
  ostream aoStack_148 [264];
  
  pbVar11 = (byte *)*param_1;
  pbVar10 = (byte *)*param_2;
  pbVar12 = pbVar11 + 8;
  if (*(ushort *)(pbVar11 + 6) < 2) {
    pbVar6 = pbVar12;
  }
  else {
    pbVar6 = *(byte **)pbVar12;
  }
  uVar1 = FUN_0055dbac(*(long *)pbVar6);
  pcVar2 = (char *)FUN_0055ea88(uVar1,*(undefined2 *)(pbVar11 + 2),0,0);
  switch(*pbVar11) {
  case 7:
    iVar7 = 0;
    pcVar2[0x1c] = '\0';
    pcVar2[0x1d] = '\0';
    pcVar2[0x1e] = '\0';
    pcVar2[0x1f] = '\0';
    goto LAB_00567cc0;
  case 8:
    iVar7 = 1;
    pcVar2[0x1c] = '\x01';
    pcVar2[0x1d] = '\0';
    pcVar2[0x1e] = '\0';
    pcVar2[0x1f] = '\0';
LAB_00567cc0:
    iVar5 = -1;
    break;
  case 9:
    iVar7 = 0;
    pcVar2[0x1c] = '\0';
    pcVar2[0x1d] = '\0';
    pcVar2[0x1e] = '\0';
    pcVar2[0x1f] = '\0';
    iVar5 = 1;
    break;
  case 10:
    iVar7 = *(int *)(pbVar11 + 0x1c);
    *(int *)(pcVar2 + 0x1c) = iVar7;
    if (*pbVar11 != 10) goto LAB_00567eb0;
    iVar5 = *(int *)(pbVar11 + 0x18);
    break;
  default:
    FUN_0054f038(auStack_150,"external/com_github_google_re2/re2/simplify.cc",0x16e);
                    /* try { // try from 00567eec to 00567f03 has its CatchHandler @ 00567f4c */
    poVar4 = std::__put_character_sequence<char,std::char_traits<char>>
                       (aoStack_148,"DoCoalesce failed: r1->op() is ",0x1f);
    std::ostream::operator<<(poVar4,(uint)*pbVar11);
    goto LAB_00567f04;
  }
  *(int *)(pcVar2 + 0x18) = iVar5;
  switch(*pbVar10) {
  case 3:
  case 0xc:
  case 0xd:
  case 0x14:
    *(int *)(pcVar2 + 0x1c) = iVar7 + 1;
  case 9:
    if (*pcVar2 != '\n') {
LAB_00567eb0:
                    /* WARNING: Subroutine does not return */
      __assert_fail("(op_) == (kRegexpRepeat)","external/com_github_google_re2\\re2/regexp.h",0x14f,
                    "max");
    }
    if (iVar5 != -1) {
      iVar5 = iVar5 + 1;
      goto LAB_00567dbc;
    }
    break;
  case 4:
    if (1 < *(ushort *)(pbVar11 + 6)) {
      pbVar12 = *(byte **)pbVar12;
    }
    if (**(char **)pbVar12 != '\x03') {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(op_) == (kRegexpLiteral)","external/com_github_google_re2\\re2/regexp.h",0x150
                    ,"rune");
    }
    if (*(int *)(pbVar10 + 0x18) < 2) {
      uVar9 = 1;
    }
    else {
      uVar9 = 1;
      do {
        if (*(int *)(*(long *)(pbVar10 + 0x20) + uVar9 * 4) != *(int *)(*(char **)pbVar12 + 0x18))
        break;
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)*(int *)(pbVar10 + 0x18));
    }
    iVar8 = (int)uVar9;
    *(int *)(pcVar2 + 0x1c) = iVar7 + iVar8;
    if (*pcVar2 != '\n') goto LAB_00567eb0;
    if (iVar5 != -1) {
      *(int *)(pcVar2 + 0x18) = iVar5 + iVar8;
    }
    if (*pbVar10 != 4) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(op_) == (kRegexpLiteralString)","external/com_github_google_re2\\re2/regexp.h"
                    ,0x155,"nrunes");
    }
    if (*(int *)(pbVar10 + 0x18) != iVar8) {
      *param_1 = (long)pcVar2;
      pcVar2 = (char *)FUN_0055eafc(*(long *)(pbVar10 + 0x20) + (uVar9 & 0xffffffff) * 4,
                                    *(int *)(pbVar10 + 0x18) - iVar8,*(undefined2 *)(pbVar10 + 2));
      goto LAB_00567dec;
    }
    break;
  default:
    FUN_0054f038(auStack_150,"external/com_github_google_re2/re2/simplify.cc",0x1ab);
                    /* try { // try from 00567e94 to 00567eab has its CatchHandler @ 00567f54 */
    poVar4 = std::__put_character_sequence<char,std::char_traits<char>>
                       (aoStack_148,"DoCoalesce failed: r2->op() is ",0x1f);
    std::ostream::operator<<(poVar4,(uint)*pbVar10);
LAB_00567f04:
                    /* WARNING: Subroutine does not return */
    FUN_005503fc(auStack_150);
  case 7:
switchD_00567cec_caseD_7:
    iVar5 = -1;
    goto LAB_00567dbc;
  case 8:
    pcVar2[0x18] = -1;
    pcVar2[0x19] = -1;
    pcVar2[0x1a] = -1;
    pcVar2[0x1b] = -1;
    *(int *)(pcVar2 + 0x1c) = iVar7 + 1;
    break;
  case 10:
    *(int *)(pcVar2 + 0x1c) = iVar7 + *(int *)(pbVar10 + 0x1c);
    if (*pbVar10 != 10) goto LAB_00567eb0;
    if (*(int *)(pbVar10 + 0x18) == -1) goto switchD_00567cec_caseD_7;
    if (*pcVar2 != '\n') goto LAB_00567eb0;
    if (iVar5 == -1) break;
    iVar5 = iVar5 + *(int *)(pbVar10 + 0x18);
LAB_00567dbc:
    *(int *)(pcVar2 + 0x18) = iVar5;
  }
  lVar3 = FUN_002e2e80(PTR_FUN_04373078,0x28);
  if (lVar3 != 0) {
    FUN_0055da3c(lVar3,2,0);
  }
  *param_1 = lVar3;
LAB_00567dec:
  *param_2 = pcVar2;
  FUN_0055de34(pbVar11);
  FUN_0055de34(pbVar10);
  return;
}


