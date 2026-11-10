/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0054f850; name: FUN_0054f850
 */


undefined8
FUN_0054f850(byte *param_1,long *param_2,ulong param_3,ulong param_4,int param_5,long *param_6,
            int param_7)

{
  undefined1 **__s2;
  undefined1 ***pppuVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  ostream *poVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  undefined1 **ppuVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  byte bVar20;
  char *pcVar21;
  ulong uVar22;
  undefined1 **local_1c0;
  ulong uStack_1b8;
  char local_1a4 [4];
  undefined1 **local_1a0;
  ulong uStack_198;
  undefined1 **local_190;
  ulong uStack_188;
  undefined1 *local_180;
  byte **appbStack_178 [33];
  byte *local_70;
  undefined1 auStack_68 [8];
  
  if (*(int *)(param_1 + 0x40) != 0) {
    if (param_1[0x1e] == 0) {
      return 0;
    }
    FUN_0054f038(&local_180,"external/com_github_google_re2/re2/re2.cc",0x26e);
                    /* try { // try from 0054f89c to 0054f8cb has its CatchHandler @ 005503e4 */
    poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                       ((ostream *)appbStack_178,"Invalid RE2: ",0xd);
    pbVar11 = *(byte **)(param_1 + 0x38);
    uVar22 = *(ulong *)(pbVar11 + 8);
    pbVar9 = *(byte **)(pbVar11 + 0x10);
    if ((*pbVar11 & 1) == 0) {
      pbVar9 = pbVar11 + 1;
      uVar22 = (ulong)(*pbVar11 >> 1);
    }
    std::__put_character_sequence<char,std::char_traits<char>>(poVar8,(char *)pbVar9,uVar22);
    goto LAB_0054f99c;
  }
  if ((param_4 < param_3) || (uVar22 = param_2[1], uVar22 < param_4)) {
    if (param_1[0x1e] == 0) {
      return 0;
    }
    FUN_0054f038(&local_180,"external/com_github_google_re2/re2/re2.cc",0x274);
                    /* try { // try from 0054f914 to 0054f99b has its CatchHandler @ 005503e8 */
    poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                       ((ostream *)appbStack_178,"RE2: invalid startpos, endpos pair. [",0x25);
    poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,"startpos: ",10);
    poVar8 = (ostream *)std::ostream::operator<<(poVar8,param_3);
    poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
    poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,"endpos: ",8);
    poVar8 = (ostream *)std::ostream::operator<<(poVar8,param_4);
    poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
    poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,"text size: ",0xb);
    poVar8 = (ostream *)std::ostream::operator<<(poVar8,param_2[1]);
    std::__put_character_sequence<char,std::char_traits<char>>(poVar8,"]",1);
    goto LAB_0054f99c;
  }
  local_1a0 = (undefined1 **)0x0;
  uStack_198 = 0;
  __s2 = (undefined1 **)(*param_2 + param_3);
  uStack_188 = (param_2[1] - param_3) + (param_4 - uVar22);
  pppuVar1 = (undefined1 ***)0x0;
  if (param_7 != 0) {
    pppuVar1 = &local_1a0;
  }
  pcVar21 = *(char **)(param_1 + 0x88);
  iVar2 = param_7;
  if (*(int *)(param_1 + 0x90) < param_7) {
    iVar2 = *(int *)(param_1 + 0x90) + 1;
  }
  cVar3 = *pcVar21;
  if ((param_3 != 0) && (cVar3 != '\0')) {
    return 0;
  }
  cVar4 = pcVar21[1];
  if ((uVar22 != param_4) && (cVar4 != '\0')) {
    return 0;
  }
  local_190 = __s2;
  if ((cVar3 == '\0') || (cVar4 == '\0')) {
    if (cVar3 != '\0' && param_5 != 2) {
      param_5 = 1;
    }
    uVar14 = (ulong)param_1[0x60];
    if ((param_1[0x60] & 1) != 0) goto LAB_0054fa44;
LAB_0054fa7c:
    if (uVar14 >> 1 != 0) goto LAB_0054fa4c;
LAB_0054fa84:
    uVar15 = 0;
  }
  else {
    param_5 = 2;
    uVar14 = (ulong)param_1[0x60];
    if ((param_1[0x60] & 1) == 0) goto LAB_0054fa7c;
LAB_0054fa44:
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_0054fa84;
LAB_0054fa4c:
    if (param_3 != 0) {
      return 0;
    }
    if ((uVar14 & 1) == 0) {
      uVar15 = uVar14 >> 1;
    }
    else {
      uVar15 = *(ulong *)(param_1 + 0x68);
    }
    if (uStack_188 < uVar15) {
      return 0;
    }
    uVar18 = uStack_188 - uVar15;
    if ((uVar14 & 1) == 0) {
      pbVar9 = param_1 + 0x61;
      if (param_1[0x78] != 0) goto LAB_0054fcd4;
LAB_0054fc50:
      iVar7 = memcmp(pbVar9,__s2,uVar15);
      if (iVar7 != 0) {
        return 0;
      }
    }
    else {
      pbVar9 = *(byte **)(param_1 + 0x70);
      if (param_1[0x78] == 0) goto LAB_0054fc50;
LAB_0054fcd4:
      if (0 < (long)uVar15) {
        pbVar11 = pbVar9 + uVar15;
        ppuVar12 = __s2;
        do {
          bVar5 = *(byte *)ppuVar12;
          uVar16 = bVar5 + 0x20;
          if (0x19 < bVar5 - 0x41) {
            uVar16 = (uint)bVar5;
          }
          if ((uint)*pbVar9 != (uVar16 & 0xff)) {
            return 0;
          }
          pbVar9 = pbVar9 + 1;
          ppuVar12 = (undefined1 **)((long)ppuVar12 + 1);
        } while (pbVar9 < pbVar11);
      }
    }
    bVar6 = param_5 == 2;
    param_5 = 1;
    if (bVar6) {
      param_5 = 2;
    }
    local_190 = (undefined1 **)((long)__s2 + uVar15);
    uStack_188 = uVar18;
  }
  bVar5 = param_1[0x94];
  iVar7 = 0;
  if (*(int *)(pcVar21 + 0x28) != 0) {
    iVar7 = 0x40000 / *(int *)(pcVar21 + 0x28);
  }
  bVar20 = param_1[0x1d];
  lVar19 = *(long *)(pcVar21 + 0x50);
  lVar13 = tpidr_el0;
  *(byte **)(lVar13 + 0x70) = param_1;
  local_1a4[0] = '\0';
  if (param_5 == 0) {
    if (cVar4 == '\0') {
      uVar22 = FUN_00559da4(pcVar21,&local_190,param_2,0,bVar20,pppuVar1,local_1a4,0);
      if ((uVar22 & 1) == 0) {
        if (local_1a4[0] == '\0') {
          return 0;
        }
        if (param_1[0x1e] != 0) {
          FUN_0054f038(&local_180,"external/com_github_google_re2/re2/re2.cc",0x2ea);
                    /* try { // try from 0054fee0 to 0054feff has its CatchHandler @ 005503d8 */
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             ((ostream *)appbStack_178,"DFA out of memory: ",0x13);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             (poVar8,"pattern length ",0xf);
          if ((*param_1 & 1) == 0) {
            uVar22 = (ulong)(*param_1 >> 1);
          }
          else {
            uVar22 = *(ulong *)(param_1 + 8);
          }
                    /* try { // try from 00550048 to 005500cf has its CatchHandler @ 005503d8 */
          poVar8 = (ostream *)std::ostream::operator<<(poVar8,uVar22);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             (poVar8,"program size ",0xd);
          poVar8 = (ostream *)
                   std::ostream::operator<<(poVar8,*(int *)(*(long *)(param_1 + 0x88) + 0x10));
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             (poVar8,"list count ",0xb);
          poVar8 = (ostream *)
                   std::ostream::operator<<(poVar8,*(int *)(*(long *)(param_1 + 0x88) + 0x28));
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             (poVar8,"bytemap range ",0xe);
          std::ostream::operator<<(poVar8,*(int *)(*(long *)(param_1 + 0x88) + 0x14));
LAB_005500d0:
          FUN_0054f1b0(&local_180);
        }
      }
      else {
        if (param_7 == 0) {
          return 1;
        }
        local_70 = param_1;
        if (*(ulong *)(param_1 + 0xb0) != 0xffffffffffffffff) {
          local_180 = auStack_68;
          appbStack_178[0] = &local_70;
          local_1c0 = &local_180;
          std::__call_once((ulong *)(param_1 + 0xb0),&local_1c0,(_func_void_void_ptr *)&LAB_00550770
                          );
        }
        lVar13 = *(long *)(param_1 + 0x98);
        if (lVar13 != 0) {
          uVar22 = FUN_00559da4(lVar13,&local_1a0,param_2,1,1,&local_1a0,local_1a4,0);
          if ((uVar22 & 1) != 0) goto LAB_0054fb70;
          if (local_1a4[0] == '\0') {
            if (param_1[0x1e] == 0) {
              return 0;
            }
            FUN_0054f038(&local_180,"external/com_github_google_re2/re2/re2.cc",0x30e);
                    /* try { // try from 005502e8 to 005502f7 has its CatchHandler @ 005503c4 */
            std::__put_character_sequence<char,std::char_traits<char>>
                      ((ostream *)appbStack_178,"SearchDFA inconsistency",0x17);
            goto LAB_0054f99c;
          }
          if (param_1[0x1e] != 0) {
            FUN_0054f038(&local_180,"external/com_github_google_re2/re2/re2.cc",0x304);
                    /* try { // try from 0054fe00 to 0054fe1f has its CatchHandler @ 005503cc */
            poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                               ((ostream *)appbStack_178,"DFA out of memory: ",0x13);
            poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                               (poVar8,"pattern length ",0xf);
            if ((*param_1 & 1) == 0) {
              uVar22 = (ulong)(*param_1 >> 1);
            }
            else {
              uVar22 = *(ulong *)(param_1 + 8);
            }
                    /* try { // try from 00550300 to 0055037b has its CatchHandler @ 005503cc */
            poVar8 = (ostream *)std::ostream::operator<<(poVar8,uVar22);
            poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
            poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                               (poVar8,"program size ",0xd);
            poVar8 = (ostream *)std::ostream::operator<<(poVar8,*(int *)(lVar13 + 0x10));
            poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
            poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                               (poVar8,"list count ",0xb);
            poVar8 = (ostream *)std::ostream::operator<<(poVar8,*(int *)(lVar13 + 0x28));
            poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
            poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                               (poVar8,"bytemap range ",0xe);
            std::ostream::operator<<(poVar8,*(int *)(lVar13 + 0x14));
            goto LAB_005500d0;
          }
        }
      }
      iVar10 = 0;
      goto LAB_005500e8;
    }
    local_70 = param_1;
    if (*(ulong *)(param_1 + 0xb0) != 0xffffffffffffffff) {
      local_180 = auStack_68;
      appbStack_178[0] = &local_70;
      local_1c0 = &local_180;
      std::__call_once((ulong *)(param_1 + 0xb0),&local_1c0,(_func_void_void_ptr *)&LAB_00550770);
    }
    lVar13 = *(long *)(param_1 + 0x98);
    if (lVar13 == 0) {
      iVar10 = 0;
      goto LAB_005500e8;
    }
    uVar22 = FUN_00559da4(lVar13,&local_190,param_2,1,1,pppuVar1,local_1a4,0);
    if ((uVar22 & 1) == 0) {
      if (local_1a4[0] == '\0') {
        return 0;
      }
      if (param_1[0x1e] != 0) {
        FUN_0054f038(&local_180,"external/com_github_google_re2/re2/re2.cc",0x2d6);
                    /* try { // try from 0054fe84 to 0054fea3 has its CatchHandler @ 005503dc */
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                           ((ostream *)appbStack_178,"DFA out of memory: ",0x13);
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                           (poVar8,"pattern length ",0xf);
        if ((*param_1 & 1) == 0) {
          uVar22 = (ulong)(*param_1 >> 1);
        }
        else {
          uVar22 = *(ulong *)(param_1 + 8);
        }
                    /* try { // try from 0054ffc4 to 0055003f has its CatchHandler @ 005503dc */
        poVar8 = (ostream *)std::ostream::operator<<(poVar8,uVar22);
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                           (poVar8,"program size ",0xd);
        poVar8 = (ostream *)std::ostream::operator<<(poVar8,*(int *)(lVar13 + 0x10));
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                           (poVar8,"list count ",0xb);
        poVar8 = (ostream *)std::ostream::operator<<(poVar8,*(int *)(lVar13 + 0x28));
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                           (poVar8,"bytemap range ",0xe);
        std::ostream::operator<<(poVar8,*(int *)(lVar13 + 0x14));
        goto LAB_005500d0;
      }
      iVar10 = 0;
      goto LAB_005500e8;
    }
    if (param_7 == 0) {
      return 1;
    }
LAB_0054fb70:
    if (iVar2 < 2) {
      if (iVar2 == 1) {
        param_6[1] = uStack_198;
        *param_6 = (long)local_1a0;
      }
      goto joined_r0x00550204;
    }
    bVar6 = false;
    bVar20 = 2;
    iVar10 = 1;
    local_1c0 = local_1a0;
    uStack_1b8 = uStack_198;
  }
  else {
    if (param_5 != 1) {
      if (param_5 != 2) {
        FUN_0054f038(&local_180,"external/com_github_google_re2/re2/re2.cc",0x2c4);
                    /* try { // try from 0055039c to 005503b3 has its CatchHandler @ 005503bc */
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                           ((ostream *)appbStack_178,"Unexpected re_anchor value: ",0x1c);
        std::ostream::operator<<(poVar8,param_5);
                    /* WARNING: Subroutine does not return */
        FUN_005503fc(&local_180);
      }
      bVar20 = 2;
    }
    if ((0x1000 < uVar22 || (5 < iVar2 || bVar5 == 0)) || ((iVar10 = 1, 8 < uVar22 && (iVar2 < 2))))
    {
      if ((lVar19 == 0) || ((iVar2 < 2 || ((ulong)(long)iVar7 < uVar22)))) {
        uVar22 = FUN_00559da4(pcVar21,&local_190,param_2,1,bVar20,&local_1a0,local_1a4,0);
        if ((uVar22 & 1) != 0) goto LAB_0054fb70;
        if (local_1a4[0] == '\0') {
          return 0;
        }
        if (param_1[0x1e] == 0) {
          iVar10 = 1;
        }
        else {
          FUN_0054f038(&local_180,"external/com_github_google_re2/re2/re2.cc",0x32e);
                    /* try { // try from 0054fc9c to 0054fcbb has its CatchHandler @ 005503e0 */
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             ((ostream *)appbStack_178,"DFA out of memory: ",0x13);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             (poVar8,"pattern length ",0xf);
          if ((*param_1 & 1) == 0) {
            uVar22 = (ulong)(*param_1 >> 1);
          }
          else {
            uVar22 = *(ulong *)(param_1 + 8);
          }
                    /* try { // try from 0054ff1c to 0054ffa3 has its CatchHandler @ 005503e0 */
          poVar8 = (ostream *)std::ostream::operator<<(poVar8,uVar22);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             (poVar8,"program size ",0xd);
          poVar8 = (ostream *)
                   std::ostream::operator<<(poVar8,*(int *)(*(long *)(param_1 + 0x88) + 0x10));
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             (poVar8,"list count ",0xb);
          poVar8 = (ostream *)
                   std::ostream::operator<<(poVar8,*(int *)(*(long *)(param_1 + 0x88) + 0x28));
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             (poVar8,"bytemap range ",0xe);
          std::ostream::operator<<(poVar8,*(int *)(*(long *)(param_1 + 0x88) + 0x14));
          FUN_0054f1b0(&local_180);
          iVar10 = 1;
        }
      }
      else {
        iVar10 = 1;
      }
    }
LAB_005500e8:
    bVar6 = true;
    local_1c0 = local_190;
    uStack_1b8 = uStack_188;
  }
  if ((5 < iVar2 || bVar5 == 0) || iVar10 == 0) {
    if ((lVar19 == 0) || ((ulong)(long)iVar7 < uStack_1b8)) {
      uVar22 = FUN_0055ca0c(*(undefined8 *)(param_1 + 0x88),&local_1c0,param_2,iVar10,bVar20,param_6
                           );
      if (!bVar6 && (uVar22 & 1) == 0) {
        if (param_1[0x1e] == 0) {
          return 0;
        }
        FUN_0054f038(&local_180,"external/com_github_google_re2/re2/re2.cc",0x35f);
                    /* try { // try from 005501bc to 005501cb has its CatchHandler @ 005503d0 */
        std::__put_character_sequence<char,std::char_traits<char>>
                  ((ostream *)appbStack_178,"SearchNFA inconsistency",0x17);
        goto LAB_0054f99c;
      }
    }
    else {
      uVar22 = FUN_0055b1a0(*(undefined8 *)(param_1 + 0x88),&local_1c0,param_2,iVar10,bVar20,param_6
                           );
      if (!bVar6 && (uVar22 & 1) == 0) {
        if (param_1[0x1e] == 0) {
          return 0;
        }
        FUN_0054f038(&local_180,"external/com_github_google_re2/re2/re2.cc",0x359);
                    /* try { // try from 005502b4 to 005502c3 has its CatchHandler @ 005503c8 */
        std::__put_character_sequence<char,std::char_traits<char>>
                  ((ostream *)appbStack_178,"SearchBitState inconsistency",0x1c);
LAB_0054f99c:
        FUN_0054f1b0(&local_180);
        return 0;
      }
    }
  }
  else {
    uVar22 = FUN_00550cc8(*(undefined8 *)(param_1 + 0x88),&local_1c0,param_2,iVar10,bVar20,param_6);
    if (!bVar6 && (uVar22 & 1) == 0) {
      if (param_1[0x1e] == 0) {
        return 0;
      }
      FUN_0054f038(&local_180,"external/com_github_google_re2/re2/re2.cc",0x352);
                    /* try { // try from 00550150 to 0055015f has its CatchHandler @ 005503d4 */
      std::__put_character_sequence<char,std::char_traits<char>>
                ((ostream *)appbStack_178,"SearchOnePass inconsistency",0x1b);
      goto LAB_0054f99c;
    }
  }
  if ((uVar22 & 1) == 0) {
    return 0;
  }
joined_r0x00550204:
  if ((0 < param_7) && (uVar15 != 0)) {
    *param_6 = *param_6 - uVar15;
    param_6[1] = param_6[1] + uVar15;
  }
  if (iVar2 < param_7) {
    uVar22 = (ulong)iVar2;
    uVar15 = ~uVar22;
    uVar14 = (ulong)(uint)(param_7 - iVar2) & 3;
    if ((param_7 - iVar2 & 3U) != 0) {
      plVar17 = param_6 + uVar22 * 2;
      do {
        uVar22 = uVar22 + 1;
        uVar14 = uVar14 - 1;
        *plVar17 = 0;
        plVar17[1] = 0;
        plVar17 = plVar17 + 2;
      } while (uVar14 != 0);
    }
    if (2 < uVar15 + (long)param_7) {
      lVar13 = (long)param_7 - uVar22;
      param_6 = param_6 + uVar22 * 2 + 4;
      do {
        param_6[-4] = 0;
        param_6[-3] = 0;
        lVar13 = lVar13 + -4;
        param_6[-2] = 0;
        param_6[-1] = 0;
        *param_6 = 0;
        param_6[1] = 0;
        param_6[2] = 0;
        param_6[3] = 0;
        param_6 = param_6 + 8;
      } while (lVar13 != 0);
    }
  }
  return 1;
}


