/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055b93c; name: FUN_0055b93c
 */


/* WARNING: Removing unreachable block (ram,0x0055bdd8) */

void FUN_0055b93c(long *param_1,uint *param_2,int param_3,int param_4,undefined8 param_5,
                 undefined8 param_6,long *param_7)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  ushort uVar4;
  uint uVar5;
  ostream *this;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 local_170;
  ostream aoStack_168 [264];
  
  if (param_3 == 0) {
    return;
  }
  piVar14 = (int *)param_1[0xf];
  *piVar14 = param_3;
  piVar14[2] = 0;
  piVar14[3] = 0;
  uVar16 = 1;
  if ((int)param_1[0x10] < 1) {
LAB_0055bec8:
                    /* WARNING: Subroutine does not return */
    __assert_fail("(nstk) <= (stack_.size())","external/com_github_google_re2/re2/nfa.cc",0xd4,
                  "AddToThreadq");
  }
LAB_0055b9bc:
  uVar16 = (long)(int)uVar16 - 1;
  uVar13 = piVar14[uVar16 * 4];
  plVar12 = *(long **)(piVar14 + uVar16 * 4 + 2);
LAB_0055b9d0:
  plVar17 = param_7;
  if (plVar12 != (long *)0x0) {
    if (param_7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("t != 0L","external/com_github_google_re2/re2/nfa.cc",0xb6,"Decref");
    }
    iVar15 = (int)*param_7 + -1;
    *(int *)param_7 = iVar15;
    plVar17 = plVar12;
    if (iVar15 < 1) {
      if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("(t->ref) == (0)","external/com_github_google_re2/re2/nfa.cc",0xba,"Decref");
      }
      *param_7 = param_1[0x17];
      param_1[0x17] = (long)param_7;
    }
  }
  param_7 = plVar17;
  if (uVar13 == 0) goto switchD_0055baf4_caseD_7;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("i >= 0","external/com_github_google_re2\\re2/sparse_array.h",0x15e,"has_index");
  }
  lVar8 = *(long *)(param_2 + 6);
  if (lVar8 == 0) {
    if (uVar13 < 0x80000000) goto LAB_0055be1c;
  }
  else if ((int)param_2[8] <= (int)uVar13) goto LAB_0055be1c;
  if ((((lVar8 != 0) && (uVar13 < param_2[8])) &&
      (uVar5 = *(uint *)(*(long *)(param_2 + 2) + (long)(int)uVar13 * 4), uVar5 < *param_2)) &&
     (*(uint *)(lVar8 + (long)(int)uVar5 * 0x10) == uVar13)) goto switchD_0055baf4_caseD_7;
  local_170 = 0;
  FUN_0055d66c(param_2,0,uVar13,&local_170);
  lVar8 = *(long *)(param_2 + 6);
  if (lVar8 == 0) {
    if (uVar13 < 0x80000000) goto LAB_0055be1c;
  }
  else if ((int)param_2[8] <= (int)uVar13) {
LAB_0055be1c:
                    /* WARNING: Subroutine does not return */
    __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_array.h",0x15f,
                  "has_index");
  }
  if (((lVar8 == 0) || (param_2[8] <= uVar13)) ||
     ((uVar5 = *(uint *)(*(long *)(param_2 + 2) + (long)(int)uVar13 * 4), *param_2 <= uVar5 ||
      (*(uint *)(lVar8 + (long)(int)uVar5 * 0x10) != uVar13)))) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("has_index(i)","external/com_github_google_re2\\re2/sparse_array.h",0xc9,
                  "get_existing");
  }
  puVar2 = (uint *)(*(long *)(*param_1 + 0x60) + (long)(int)uVar13 * 8);
  uVar7 = *puVar2;
  if (6 < (uVar7 & 7) - 1) {
    FUN_0054f038(&local_170,"external/com_github_google_re2/re2/nfa.cc",0xf2);
                    /* try { // try from 0055be78 to 0055be9f has its CatchHandler @ 0055bfa8 */
    this = std::__put_character_sequence<char,std::char_traits<char>>(aoStack_168,"unhandled ",10);
    uVar6 = std::ostream::operator<<(this,*puVar2 & 7);
    FUN_00551750(uVar6," in AddToThreadq");
                    /* WARNING: Subroutine does not return */
    FUN_005503fc(&local_170);
  }
  puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar5 * 0x10 + 8);
  iVar15 = (int)uVar16;
  plVar17 = param_7;
  switch(uVar7 & 7) {
  case 1:
    if (param_7 == (long *)0x0) {
LAB_0055bf88:
                    /* WARNING: Subroutine does not return */
      __assert_fail("t != 0L","external/com_github_google_re2/re2/nfa.cc",0xb0,"Incref");
    }
    *(int *)param_7 = (int)*param_7 + 1;
    *puVar9 = param_7;
    if (((byte)*puVar2 >> 3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("!ip->last()","external/com_github_google_re2/re2/nfa.cc",0xfd,"AddToThreadq");
    }
    uVar13 = uVar13 + 1;
    goto LAB_0055bdc8;
  case 2:
    iVar15 = param_4 + 0x20;
    if ((*(byte *)((long)puVar2 + 6) & param_4 - 0x41U < 0x1a) == 0) {
      iVar15 = param_4;
    }
    if ((iVar15 < (int)(uint)(byte)puVar2[1]) || ((int)(uint)*(byte *)((long)puVar2 + 5) < iVar15))
    goto LAB_0055bc94;
    if (param_7 == (long *)0x0) goto LAB_0055bf88;
    *(int *)param_7 = (int)*param_7 + 1;
    *puVar9 = param_7;
    if ((*puVar2 & 7) != 2) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(opcode()) == (kInstByteRange)","external/com_github_google_re2\\re2/prog.h",
                    0x5a,"hint");
    }
    uVar4 = *(ushort *)((long)puVar2 + 6) >> 1;
    if (uVar4 != 0) {
      uVar13 = uVar13 + uVar4;
      goto LAB_0055bdc8;
    }
    goto switchD_0055baf4_caseD_7;
  case 3:
    if ((uVar7 >> 3 & 1) == 0) {
      piVar1 = piVar14 + (long)iVar15 * 4;
      *piVar1 = uVar13 + 1;
      piVar1[2] = 0;
      piVar1[3] = 0;
      uVar7 = *puVar2;
      uVar16 = (ulong)(iVar15 + 1);
    }
    if ((uVar7 & 7) != 3) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(opcode()) == (kInstCapture)","external/com_github_google_re2\\re2/prog.h",0x56
                    ,"cap");
    }
    uVar13 = puVar2[1];
    if ((int)uVar13 < *(int *)((long)param_1 + 0xc)) {
      piVar14[(long)(int)uVar16 * 4] = 0;
      *(long **)(piVar14 + (long)(int)uVar16 * 4 + 2) = param_7;
      plVar17 = (long *)param_1[0x17];
      if (plVar17 == (long *)0x0) {
        lVar8 = param_1[0x12];
        lVar10 = param_1[0x13];
        uVar3 = 0;
        if (lVar10 - lVar8 != 0) {
          uVar3 = (lVar10 - lVar8) * 0x20 - 1;
        }
        uVar11 = param_1[0x16] + param_1[0x15];
        if (uVar3 == uVar11) {
          FUN_0055caf4(param_1 + 0x11);
          uVar11 = param_1[0x15] + param_1[0x16];
          lVar8 = param_1[0x12];
          lVar10 = param_1[0x13];
        }
        if (lVar10 == lVar8) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          puVar9 = (undefined8 *)
                   (*(long *)(lVar8 + (uVar11 >> 5 & 0x7fffffffffffff8)) + (uVar11 & 0xff) * 0x10);
        }
        *puVar9 = 0;
        puVar9[1] = 0;
        uVar3 = param_1[0x15] + param_1[0x16];
        param_1[0x16] = param_1[0x16] + 1;
        plVar17 = (long *)(*(long *)(param_1[0x12] + (uVar3 >> 5 & 0x7fffffffffffff8)) +
                          (uVar3 & 0xff) * 0x10);
        *(int *)plVar17 = 1;
        lVar8 = FUN_002e2ec0(PTR_FUN_04373078,(long)*(int *)((long)param_1 + 0xc) << 3);
        plVar17[1] = lVar8;
      }
      else {
        param_1[0x17] = *plVar17;
        *(int *)plVar17 = 1;
      }
      memmove((void *)plVar17[1],(void *)param_7[1],(long)*(int *)((long)param_1 + 0xc) << 3);
      *(undefined8 *)(plVar17[1] + (long)(int)uVar13 * 8) = param_6;
      uVar7 = *puVar2;
      uVar16 = (ulong)((int)uVar16 + 1);
    }
    break;
  case 4:
    if ((uVar7 >> 3 & 1) == 0) {
      piVar1 = piVar14 + (long)iVar15 * 4;
      *piVar1 = uVar13 + 1;
      piVar1[2] = 0;
      piVar1[3] = 0;
      uVar7 = *puVar2;
      uVar16 = (ulong)(iVar15 + 1);
    }
    if ((uVar7 & 7) != 4) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(opcode()) == (kInstEmptyWidth)","external/com_github_google_re2\\re2/prog.h",
                    0x5c,"empty");
    }
    uVar13 = puVar2[1];
    uVar5 = FUN_005530e4(param_5,param_6);
    if ((uVar13 & (uVar5 ^ 0xffffffff)) != 0) goto switchD_0055baf4_caseD_7;
    uVar7 = *puVar2;
    break;
  case 5:
    if (param_7 == (long *)0x0) goto LAB_0055bf88;
    *(int *)param_7 = (int)*param_7 + 1;
    *puVar9 = param_7;
    uVar7 = *puVar2;
LAB_0055bc94:
    plVar17 = (long *)0x0;
    if ((uVar7 & 8) != 0) {
      plVar17 = plVar12;
    }
    uVar13 = (uVar7 >> 3 & 1 ^ 1) + uVar13;
    plVar12 = plVar17;
    if ((uVar7 & 8) != 0) goto switchD_0055baf4_caseD_7;
    goto LAB_0055b9d0;
  case 6:
    if ((uVar7 >> 3 & 1) == 0) {
      piVar1 = piVar14 + (long)iVar15 * 4;
      *piVar1 = uVar13 + 1;
      piVar1[2] = 0;
      piVar1[3] = 0;
      uVar7 = *puVar2;
      uVar16 = (ulong)(iVar15 + 1);
    }
    break;
  case 7:
    goto switchD_0055baf4_caseD_7;
  }
  uVar13 = uVar7 >> 4;
  param_7 = plVar17;
LAB_0055bdc8:
  plVar12 = (long *)0x0;
  goto LAB_0055b9d0;
switchD_0055baf4_caseD_7:
  if ((int)uVar16 < 1) {
    return;
  }
  if ((int)param_1[0x10] < (int)uVar16) goto LAB_0055bec8;
  goto LAB_0055b9bc;
}


