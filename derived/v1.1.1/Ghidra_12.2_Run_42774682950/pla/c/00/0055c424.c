/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055c424; name: FUN_0055c424
 */


undefined8
FUN_0055c424(long *param_1,ulong *param_2,ulong *param_3,ulong param_4,byte param_5,long param_6,
            uint param_7)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  void *__s;
  byte *__s_00;
  ostream *poVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined1 auStack_180 [8];
  ostream aoStack_178 [264];
  ulong local_70;
  ulong uStack_68;
  
  if ((int)param_1[1] == 0) {
    return 0;
  }
  uStack_68 = param_3[1];
  local_70 = *param_3;
  uVar15 = (ulong)param_7;
  if (local_70 == 0) {
    uStack_68 = param_2[1];
    local_70 = *param_2;
  }
  uVar9 = local_70;
  uVar14 = *param_2;
  if (local_70 <= uVar14) {
    if (uVar14 + param_2[1] <= local_70 + uStack_68) {
      cVar5 = *(char *)*param_1;
      if ((local_70 != uVar14) && (cVar5 != '\0')) {
        return 0;
      }
      if (((char *)*param_1)[1] == '\0') {
        param_5 = param_5 & 1;
      }
      else {
        if (local_70 + uStack_68 != uVar14 + param_2[1]) {
          return 0;
        }
        param_5 = 1;
        *(undefined1 *)((long)param_1 + 0x11) = 1;
      }
      if (-1 < (int)param_7) {
        uVar14 = (ulong)(param_7 << 1);
        *(uint *)((long)param_1 + 0xc) = param_7 << 1;
        *(byte *)(param_1 + 2) = param_5;
        if (param_7 == 0) {
          uVar14 = 2;
          *(undefined4 *)((long)param_1 + 0xc) = 2;
        }
        __s = (void *)FUN_002e2ec0(PTR_FUN_04373078,
                                   -(uVar14 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3);
        param_1[0x18] = (long)__s;
        memset(__s,0,(long)*(int *)((long)param_1 + 0xc) << 3);
        *(undefined1 *)(param_1 + 0x19) = 0;
        param_1[3] = uVar9;
        __s_00 = (byte *)*param_2;
        uVar9 = param_2[1];
        plVar17 = param_1 + 5;
        *(int *)plVar17 = 0;
        param_1[4] = (long)(__s_00 + uVar9);
        plVar16 = param_1 + 10;
        *(int *)plVar16 = 0;
        uVar14 = 0xffffffff;
        plVar18 = plVar16;
        if (__s_00 + uVar9 <= __s_00) goto LAB_0055c56c;
        do {
          uVar14 = (ulong)*__s_00;
          plVar18 = plVar16;
LAB_0055c56c:
          do {
            plVar16 = plVar17;
            plVar17 = plVar18;
            uVar7 = FUN_0055bfb0(param_1,plVar16,plVar17,uVar14,&local_70,__s_00);
            if ((int)*plVar16 != 0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("(runq->size()) == (0)","external/com_github_google_re2/re2/nfa.cc",
                            0x214,"Search");
            }
            *(int *)plVar16 = 0;
            pbVar10 = (byte *)param_1[4];
            if (uVar7 != 0) goto LAB_0055c76c;
            if (pbVar10 < __s_00) goto LAB_0055c7d0;
            if ((char)param_1[0x19] == '\0') {
              if (cVar5 == '\0' && (param_4 & 1) == 0) {
                if ((__s_00 < pbVar10) && ((int)*plVar17 == 0)) {
                  lVar12 = *param_1;
                  if (*(long *)(lVar12 + 0x18) != 0) {
                    if (*(long *)(lVar12 + 0x18) == 1) {
                      __s_00 = memchr(__s_00,*(int *)(lVar12 + 0x20),(long)pbVar10 - (long)__s_00);
                    }
                    else {
                      __s_00 = (byte *)FUN_00556350(lVar12,__s_00);
                    }
                    if (__s_00 == (byte *)0x0) {
                      __s_00 = (byte *)param_1[4];
                    }
                  }
                }
              }
              else if (__s_00 != (byte *)*param_2) goto LAB_0055c738;
              plVar18 = (long *)param_1[0x17];
              if (plVar18 == (long *)0x0) {
                lVar12 = param_1[0x12];
                lVar13 = param_1[0x13];
                uVar9 = 0;
                if (lVar13 - lVar12 != 0) {
                  uVar9 = (lVar13 - lVar12) * 0x20 - 1;
                }
                uVar14 = param_1[0x16] + param_1[0x15];
                if (uVar9 == uVar14) {
                  FUN_0055caf4(param_1 + 0x11);
                  uVar14 = param_1[0x15] + param_1[0x16];
                  lVar12 = param_1[0x12];
                  lVar13 = param_1[0x13];
                }
                if (lVar13 == lVar12) {
                  puVar11 = (undefined8 *)0x0;
                }
                else {
                  puVar11 = (undefined8 *)
                            (*(long *)(lVar12 + (uVar14 >> 5 & 0x7fffffffffffff8)) +
                            (uVar14 & 0xff) * 0x10);
                }
                *puVar11 = 0;
                puVar11[1] = 0;
                uVar9 = param_1[0x15] + param_1[0x16];
                param_1[0x16] = param_1[0x16] + 1;
                plVar18 = (long *)(*(long *)(param_1[0x12] + (uVar9 >> 5 & 0x7fffffffffffff8)) +
                                  (uVar9 & 0xff) * 0x10);
                *(int *)plVar18 = 1;
                lVar12 = FUN_002e2ec0(PTR_FUN_04373078,(long)*(int *)((long)param_1 + 0xc) << 3);
                plVar18[1] = lVar12;
              }
              else {
                param_1[0x17] = *plVar18;
                *(int *)plVar18 = 1;
              }
              memmove((void *)plVar18[1],(void *)param_1[0x18],
                      (long)*(int *)((long)param_1 + 0xc) << 3);
              *(byte **)plVar18[1] = __s_00;
              uVar9 = 0xffffffff;
              if (__s_00 < (byte *)param_1[4]) {
                uVar9 = (ulong)*__s_00;
              }
              FUN_0055b93c(param_1,plVar17,(int)param_1[1],uVar9,&local_70,__s_00,plVar18);
              if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("t != 0L","external/com_github_google_re2/re2/nfa.cc",0xb6,"Decref");
              }
              iVar6 = (int)*plVar18 + -1;
              *(int *)plVar18 = iVar6;
              if (iVar6 < 1) {
                if (iVar6 != 0) goto LAB_0055c920;
                *plVar18 = param_1[0x17];
                param_1[0x17] = (long)plVar18;
              }
            }
LAB_0055c738:
            if ((int)*plVar17 == 0) goto LAB_0055c7d0;
            if (__s_00 == (byte *)0x0) {
              FUN_0055bfb0(param_1,plVar17,plVar16,-(uint)(param_1[4] == 0),&local_70,0);
              if ((int)*plVar17 != 0) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("(runq->size()) == (0)","external/com_github_google_re2/re2/nfa.cc",
                              0x25c,"Search");
              }
              *(int *)plVar17 = 0;
              plVar17 = plVar16;
              if ((int)*plVar16 != 0) goto LAB_0055c7d8;
              goto LAB_0055c868;
            }
            __s_00 = __s_00 + 1;
            uVar14 = 0xffffffff;
            plVar18 = plVar16;
          } while ((byte *)param_1[4] <= __s_00);
        } while( true );
      }
      FUN_0054f038(auStack_180,"external/com_github_google_re2/re2/nfa.cc",0x1db);
                    /* try { // try from 0055c97c to 0055c993 has its CatchHandler @ 0055c9fc */
      poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                         (aoStack_178,"Bad args: nsubmatch=",0x14);
      std::ostream::operator<<(poVar8,param_7);
      goto LAB_0055c918;
    }
  }
  FUN_0054f038(auStack_180,"external/com_github_google_re2/re2/nfa.cc",0x1cc);
                    /* try { // try from 0055c90c to 0055c917 has its CatchHandler @ 0055ca04 */
  FUN_00551750(aoStack_178,"context does not contain text");
LAB_0055c918:
                    /* WARNING: Subroutine does not return */
  FUN_005503fc(auStack_180);
LAB_0055c76c:
  puVar1 = (uint *)(*(long *)(*param_1 + 0x60) + (long)(int)uVar7 * 8);
  uVar4 = *puVar1;
  uVar2 = uVar4 & 7;
  if (uVar2 == 3) {
    iVar6 = *(int *)(*(long *)(*param_1 + 0x60) + (long)(int)uVar7 * 8 + 4);
    if (iVar6 < *(int *)((long)param_1 + 0xc)) {
      *(byte **)(param_1[0x18] + (long)iVar6 * 8) = pbVar10;
    }
  }
  else {
    if (uVar2 == 5) {
      *(byte **)(param_1[0x18] + 8) = pbVar10;
      *(undefined1 *)(param_1 + 0x19) = 1;
LAB_0055c7d0:
      if ((int)*plVar17 == 0) {
LAB_0055c868:
        if ((char)param_1[0x19] == '\0') {
          return 0;
        }
        if (0 < (int)param_7) {
          lVar12 = 0;
          do {
            plVar17 = (long *)(param_6 + lVar12);
            lVar13 = *(long *)(param_1[0x18] + lVar12);
            lVar3 = ((long *)(param_1[0x18] + lVar12))[1];
            lVar12 = lVar12 + 0x10;
            uVar15 = uVar15 - 1;
            *plVar17 = lVar13;
            plVar17[1] = lVar3 - lVar13;
          } while (uVar15 != 0);
        }
        return 1;
      }
LAB_0055c7d8:
      plVar18 = *(long **)(plVar17[3] + 8);
      lVar12 = plVar17[3];
      do {
        if (plVar18 != (long *)0x0) {
          iVar6 = (int)*plVar18 + -1;
          *(int *)plVar18 = iVar6;
          if (iVar6 < 1) {
            if (iVar6 != 0) {
LAB_0055c920:
                    /* WARNING: Subroutine does not return */
              __assert_fail("(t->ref) == (0)","external/com_github_google_re2/re2/nfa.cc",0xba,
                            "Decref");
            }
            *plVar18 = param_1[0x17];
            param_1[0x17] = (long)plVar18;
          }
        }
        if (lVar12 + 0x10 == plVar17[3] + (long)(int)*plVar17 * 0x10) goto LAB_0055c868;
        plVar18 = *(long **)(lVar12 + 0x18);
        lVar12 = lVar12 + 0x10;
      } while( true );
    }
    if (uVar2 != 6) goto LAB_0055c998;
  }
  uVar7 = uVar4 >> 4;
  goto LAB_0055c76c;
LAB_0055c998:
  FUN_0054f038(auStack_180,"external/com_github_google_re2/re2/nfa.cc",0x21f);
                    /* try { // try from 0055c9b4 to 0055c9cf has its CatchHandler @ 0055c9f4 */
  poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                     (aoStack_178,"Unexpected opcode in short circuit: ",0x24);
  std::ostream::operator<<(poVar8,*puVar1 & 7);
  goto LAB_0055c918;
}


