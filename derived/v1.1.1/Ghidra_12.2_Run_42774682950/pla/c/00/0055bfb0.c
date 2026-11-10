/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055bfb0; name: FUN_0055bfb0
 */


ulong FUN_0055bfb0(long *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
                  undefined8 param_5,long param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  ulong *__dest;
  ostream *this;
  undefined8 uVar7;
  ulong *__src;
  int *piVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 auStack_170 [8];
  ostream aoStack_168 [264];
  
  *param_3 = 0;
  if (*param_2 == 0) {
LAB_0055c368:
    *param_2 = 0;
    return 0;
  }
  piVar13 = *(int **)(param_2 + 6);
  uVar12 = param_6 - 1;
  plVar10 = *(long **)(piVar13 + 2);
  piVar8 = piVar13;
  do {
    piVar11 = piVar8 + 4;
    if (plVar10 != (long *)0x0) {
      cVar5 = (char)param_1[2];
      if (((cVar5 == '\0') || ((char)param_1[0x19] == '\0')) ||
         (*(ulong *)plVar10[1] <= *(ulong *)param_1[0x18])) {
        lVar9 = *(long *)(*param_1 + 0x60);
        puVar1 = (uint *)(lVar9 + (long)*piVar8 * 8);
        uVar3 = *puVar1;
        uVar2 = uVar3 & 7;
        if (uVar2 == 1) {
          if (piVar8 == piVar13) {
            uVar3 = *(uint *)(lVar9 + ((ulong)(uVar3 >> 1) & 0x7ffffff8));
            uVar2 = uVar3 & 7;
            if (uVar2 == 6) {
              if ((*(uint *)(lVar9 + ((ulong)(uVar3 >> 1) & 0x7ffffff8)) & 7) == 2 || cVar5 != '\0')
              goto LAB_0055c1b0;
            }
            else if (uVar2 == 2 || cVar5 != '\0') {
LAB_0055c1b0:
              memmove((void *)param_1[0x18],(void *)plVar10[1],
                      (long)*(int *)((long)param_1 + 0xc) << 3);
              *(undefined1 *)(param_1 + 0x19) = 1;
              iVar6 = (int)*plVar10 + -1;
              *(int *)plVar10 = iVar6;
              if (0 < iVar6) goto LAB_0055c1fc;
              if (iVar6 == 0) {
                *plVar10 = param_1[0x17];
                param_1[0x17] = (long)plVar10;
LAB_0055c1fc:
                while( true ) {
                  do {
                    do {
                      piVar8 = piVar13 + 4;
                      if (piVar8 == (int *)(*(long *)(param_2 + 6) + (long)*param_2 * 0x10)) {
                        *param_2 = 0;
                        uVar2 = *puVar1;
                        if ((uVar2 & 7) != 1) {
                    /* WARNING: Subroutine does not return */
                          __assert_fail("(opcode()) == (kInstAltMatch)",
                                        "external/com_github_google_re2\\re2/prog.h",0x5f,"greedy");
                        }
                        uVar12 = (ulong)(uVar2 >> 4);
                        uVar4 = *(uint *)(*(long *)(*param_1 + 0x60) + uVar12 * 8);
                        uVar3 = uVar4 & 7;
                        if (uVar3 != 2) {
                          if (uVar3 != 6) {
                            return uVar12;
                          }
                          if ((*(uint *)(*(long *)(*param_1 + 0x60) +
                                        ((ulong)(uVar4 >> 1) & 0x7ffffff8)) & 7) != 2) {
                            return uVar12;
                          }
                        }
                        if ((uVar2 & 6) != 0) {
                    /* WARNING: Subroutine does not return */
                          __assert_fail("opcode() == kInstAlt || opcode() == kInstAltMatch",
                                        "external/com_github_google_re2\\re2/prog.h",0x55,"out1");
                        }
                        return (ulong)puVar1[1];
                      }
                      plVar10 = *(long **)(piVar13 + 6);
                      piVar13 = piVar8;
                    } while (plVar10 == (long *)0x0);
                    iVar6 = (int)*plVar10 + -1;
                    *(int *)plVar10 = iVar6;
                  } while (0 < iVar6);
                  if (iVar6 != 0) break;
                  *plVar10 = param_1[0x17];
                  param_1[0x17] = (long)plVar10;
                }
              }
              goto LAB_0055c348;
            }
          }
        }
        else if (uVar2 == 2) {
          FUN_0055b93c(param_1,param_3,uVar3 >> 4,param_4,param_5,param_6,plVar10);
        }
        else {
          if (uVar2 != 5) {
            FUN_0054f038(auStack_170,"external/com_github_google_re2/re2/nfa.cc",0x162);
                    /* try { // try from 0055c3ac to 0055c3d3 has its CatchHandler @ 0055c41c */
            this = std::__put_character_sequence<char,std::char_traits<char>>
                             (aoStack_168,"Unhandled ",10);
            uVar7 = std::ostream::operator<<(this,*puVar1 & 7);
            FUN_00551750(uVar7," in step");
                    /* WARNING: Subroutine does not return */
            FUN_005503fc(auStack_170);
          }
          if (param_6 == 0) {
            memmove((void *)param_1[0x18],(void *)plVar10[1],
                    (long)*(int *)((long)param_1 + 0xc) << 3);
            *(undefined8 *)(param_1[0x18] + 8) = 0;
          }
          else {
            if ((*(char *)((long)param_1 + 0x11) != '\0') && (uVar12 != param_1[4]))
            goto LAB_0055c188;
            if (cVar5 == '\0') {
              memmove((void *)param_1[0x18],(void *)plVar10[1],
                      (long)*(int *)((long)param_1 + 0xc) << 3);
              *(ulong *)(param_1[0x18] + 8) = uVar12;
              *(undefined1 *)(param_1 + 0x19) = 1;
              iVar6 = (int)*plVar10 + -1;
              *(int *)plVar10 = iVar6;
              if (iVar6 < 1) {
                if (iVar6 != 0) goto LAB_0055c348;
                *plVar10 = param_1[0x17];
                param_1[0x17] = (long)plVar10;
              }
              if ((int *)(*(long *)(param_2 + 6) + (long)*param_2 * 0x10) != piVar11) {
                do {
                  plVar10 = *(long **)(piVar11 + 2);
                  if (plVar10 != (long *)0x0) {
                    iVar6 = (int)*plVar10 + -1;
                    *(int *)plVar10 = iVar6;
                    if (iVar6 < 1) {
                      if (iVar6 != 0) {
LAB_0055c348:
                    /* WARNING: Subroutine does not return */
                        __assert_fail("(t->ref) == (0)","external/com_github_google_re2/re2/nfa.cc",
                                      0xba,"Decref");
                      }
                      *plVar10 = param_1[0x17];
                      param_1[0x17] = (long)plVar10;
                    }
                  }
                  piVar11 = piVar11 + 4;
                } while (piVar11 != (int *)(*(long *)(param_2 + 6) + (long)*param_2 * 0x10));
              }
              goto LAB_0055c368;
            }
            if ((char)param_1[0x19] == '\0') {
              __dest = (ulong *)param_1[0x18];
              __src = (ulong *)plVar10[1];
            }
            else {
              __src = (ulong *)plVar10[1];
              __dest = (ulong *)param_1[0x18];
              if ((*__dest <= *__src) && ((*__src != *__dest || (uVar12 <= __dest[1]))))
              goto LAB_0055c188;
            }
            memmove(__dest,__src,(long)*(int *)((long)param_1 + 0xc) << 3);
            *(ulong *)(param_1[0x18] + 8) = uVar12;
          }
          *(undefined1 *)(param_1 + 0x19) = 1;
        }
      }
LAB_0055c188:
      iVar6 = (int)*plVar10 + -1;
      *(int *)plVar10 = iVar6;
      if (iVar6 < 1) {
        if (iVar6 != 0) goto LAB_0055c348;
        *plVar10 = param_1[0x17];
        param_1[0x17] = (long)plVar10;
      }
    }
    piVar13 = *(int **)(param_2 + 6);
    if (piVar11 == piVar13 + (long)*param_2 * 4) goto LAB_0055c368;
    plVar10 = *(long **)(piVar8 + 6);
    piVar8 = piVar11;
  } while( true );
}


