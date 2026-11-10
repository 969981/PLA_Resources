/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005582f8; name: FUN_005582f8
 */


void FUN_005582f8(long *param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  ostream *this;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 auStack_160 [8];
  ostream aoStack_158 [264];
  
  puVar6 = (undefined4 *)param_1[0xb];
  iVar7 = 1;
  *puVar6 = param_3;
  if ((int)param_1[0xc] < 1) {
LAB_005585d8:
                    /* WARNING: Subroutine does not return */
    __assert_fail("(nstk) <= (stack_.size())","external/com_github_google_re2/re2/dfa.cc",0x340,
                  "AddToQueue");
  }
LAB_00558360:
  iVar7 = iVar7 + -1;
  uVar5 = puVar6[iVar7];
joined_r0x00558368:
  if (uVar5 != 0) {
LAB_00558378:
    if (uVar5 == 0xffffffff) {
      if ((char)param_2[0xd] == '\0') {
        *(undefined1 *)(param_2 + 0xd) = 0;
        param_2[0xc] = param_2[0xc] + 1;
        FUN_005527e0(param_2,0);
      }
      goto joined_r0x005584f4;
    }
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("i >= 0","external/com_github_google_re2\\re2/sparse_set.h",0xdd,"contains");
    }
    lVar3 = *(long *)(param_2 + 6);
    if (lVar3 == 0) {
      if (uVar5 < 0x80000000) goto LAB_00558534;
    }
    else if ((int)param_2[8] <= (int)uVar5) {
LAB_00558534:
                    /* WARNING: Subroutine does not return */
      __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_set.h",0xde,
                    "contains");
    }
    if ((((lVar3 != 0) && (uVar5 < param_2[8])) &&
        (uVar2 = *(uint *)(*(long *)(param_2 + 2) + (long)(int)uVar5 * 4), uVar2 < *param_2)) &&
       (*(uint *)(lVar3 + (long)(int)uVar2 * 4) == uVar5)) goto joined_r0x005584f4;
    *(undefined1 *)(param_2 + 0xd) = 0;
    FUN_005527e0(param_2,0,uVar5);
    lVar3 = *param_1;
    lVar4 = *(long *)(lVar3 + 0x60);
    puVar1 = (uint *)(lVar4 + (long)(int)uVar5 * 8);
    uVar2 = *puVar1;
    switch(uVar2 & 7) {
    case 1:
      goto switchD_00558408_caseD_1;
    case 2:
    case 5:
      goto switchD_00558408_caseD_2;
    case 3:
    case 6:
      if ((uVar2 >> 3 & 1) == 0) {
        puVar6[iVar7] = uVar5 + 1;
        uVar2 = *puVar1;
        iVar7 = iVar7 + 1;
      }
      if ((((uVar2 & 7) == 6) && (0 < (int)param_2[0xb])) &&
         ((uVar5 == *(uint *)(lVar3 + 0xc) && (uVar5 != *(uint *)(lVar3 + 8))))) {
        puVar6[iVar7] = 0xffffffff;
        iVar7 = iVar7 + 1;
        uVar5 = *puVar1 >> 4;
        goto joined_r0x00558368;
      }
      break;
    case 4:
      if ((uVar2 >> 3 & 1) == 0) {
        puVar6[iVar7] = uVar5 + 1;
        uVar2 = *puVar1;
        iVar7 = iVar7 + 1;
      }
      if ((uVar2 & 7) != 4) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("(opcode()) == (kInstEmptyWidth)","external/com_github_google_re2\\re2/prog.h"
                      ,0x5c,"empty");
      }
      if ((*(uint *)(lVar4 + (long)(int)uVar5 * 8 + 4) & ~param_4) != 0) goto joined_r0x005584f4;
      break;
    default:
      FUN_0054f038(auStack_160,"external/com_github_google_re2/re2/dfa.cc",0x359);
                    /* try { // try from 00558574 to 0055858f has its CatchHandler @ 005585f8 */
      this = std::__put_character_sequence<char,std::char_traits<char>>
                       (aoStack_158,"unhandled opcode: ",0x12);
      std::ostream::operator<<(this,*puVar1 & 7);
                    /* WARNING: Subroutine does not return */
      FUN_005503fc(auStack_160);
    }
    uVar5 = uVar2 >> 4;
    goto joined_r0x00558368;
  }
  goto joined_r0x005584f4;
switchD_00558408_caseD_2:
  uVar5 = (uVar2 >> 3 & 1 ^ 1) + uVar5;
  if ((uVar2 >> 3 & 1) != 0) goto joined_r0x005584f4;
  goto joined_r0x00558368;
switchD_00558408_caseD_1:
  if ((uVar2 >> 3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!ip->last()","external/com_github_google_re2/re2/dfa.cc",0x373,"AddToQueue");
  }
  uVar5 = uVar5 + 1;
  if (uVar5 == 0) goto joined_r0x005584f4;
  goto LAB_00558378;
joined_r0x005584f4:
  if (iVar7 < 1) {
    return;
  }
  if ((int)param_1[0xc] < iVar7) goto LAB_005585d8;
  goto LAB_00558360;
}


