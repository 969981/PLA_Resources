/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00558600; name: FUN_00558600
 */


/* WARNING: Removing unreachable block (ram,0x0055887c) */
/* WARNING: Removing unreachable block (ram,0x005588a0) */
/* WARNING: Removing unreachable block (ram,0x005587e8) */
/* WARNING: Removing unreachable block (ram,0x005588ac) */
/* WARNING: Removing unreachable block (ram,0x005588b4) */
/* WARNING: Removing unreachable block (ram,0x005588bc) */

void FUN_00558600(long *param_1,int *param_2,undefined4 *param_3,int param_4,undefined4 param_5,
                 char *param_6)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  ostream *this;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  undefined1 auStack_170 [8];
  ostream aoStack_168 [264];
  
  *param_3 = 0;
  param_3[0xc] = param_3[10];
  if (*param_2 != 0) {
    piVar6 = *(int **)(param_2 + 6);
    if (param_4 == 0x100) {
      iVar2 = *piVar6;
      if (iVar2 < param_2[10]) goto LAB_00558818;
      while (*param_6 == '\0') {
        if (*(char *)(param_3 + 0xd) == '\0') {
          *(undefined1 *)(param_3 + 0xd) = 0;
          param_3[0xc] = param_3[0xc] + 1;
          FUN_005527e0(param_3,0);
        }
        while( true ) {
          piVar6 = piVar6 + 1;
          if (piVar6 == (int *)(*(long *)(param_2 + 6) + (long)*param_2 * 4)) {
            return;
          }
          iVar2 = *piVar6;
          if (param_2[10] <= iVar2) break;
LAB_00558818:
          puVar7 = (uint *)(*(long *)(*param_1 + 0x60) + (long)iVar2 * 8);
          uVar1 = *puVar7 & 7;
          if (7 < uVar1) goto LAB_0055892c;
          if (((1 << (ulong)uVar1 & 0xdaU) == 0) && (uVar1 != 2)) {
            if (uVar1 != 5) goto LAB_0055892c;
            *param_6 = '\x01';
            if ((int)param_1[1] == 0) {
              return;
            }
          }
        }
      }
    }
    else {
      iVar2 = *piVar6;
      if (iVar2 < param_2[10]) goto LAB_005586d0;
      while (*param_6 == '\0') {
        if (*(char *)(param_3 + 0xd) == '\0') {
          *(undefined1 *)(param_3 + 0xd) = 0;
          param_3[0xc] = param_3[0xc] + 1;
          FUN_005527e0(param_3,0);
        }
        while( true ) {
          piVar6 = piVar6 + 1;
          if (piVar6 == (int *)(*(long *)(param_2 + 6) + (long)*param_2 * 4)) {
            return;
          }
          iVar2 = *piVar6;
          if (param_2[10] <= iVar2) break;
LAB_005586d0:
          puVar7 = (uint *)(*(long *)(*param_1 + 0x60) + (long)iVar2 * 8);
          uVar1 = *puVar7 & 7;
          if (7 < uVar1) goto LAB_0055892c;
          if ((1 << (ulong)uVar1 & 0xdaU) == 0) {
            if (uVar1 == 2) {
              iVar2 = param_4 + 0x20;
              if ((*(byte *)((long)puVar7 + 6) & param_4 - 0x41U < 0x1a) == 0) {
                iVar2 = param_4;
              }
              if (((int)(uint)(byte)puVar7[1] <= iVar2) &&
                 (iVar2 <= (int)(uint)*(byte *)((long)puVar7 + 5))) {
                FUN_005582f8(param_1,param_3,*puVar7 >> 4,param_5);
                if ((*puVar7 & 7) != 2) {
                    /* WARNING: Subroutine does not return */
                  __assert_fail("(opcode()) == (kInstByteRange)",
                                "external/com_github_google_re2\\re2/prog.h",0x5a,"hint");
                }
                uVar3 = *(ushort *)((long)puVar7 + 6) >> 1;
                if (uVar3 == 0) {
                  puVar5 = puVar7;
                  if ((*puVar7 >> 3 & 1) == 0) {
                    do {
                      puVar5 = puVar5 + 2;
                    } while (((byte)*puVar5 >> 3 & 1) == 0);
                  }
                  piVar6 = (int *)((long)piVar6 + ((long)puVar5 - (long)puVar7 >> 1));
                }
                else {
                  piVar6 = piVar6 + ((ulong)uVar3 - 1);
                }
              }
            }
            else {
              if (uVar1 != 5) {
LAB_0055892c:
                FUN_0054f038(auStack_170,"external/com_github_google_re2/re2/dfa.cc",0x3b2);
                    /* try { // try from 00558948 to 00558963 has its CatchHandler @ 0055898c */
                this = std::__put_character_sequence<char,std::char_traits<char>>
                                 (aoStack_168,"unhandled opcode: ",0x12);
                std::ostream::operator<<(this,*puVar7 & 7);
                    /* WARNING: Subroutine does not return */
                FUN_005503fc(auStack_170);
              }
              lVar4 = param_1[1];
              if (*(char *)(*param_1 + 1) == '\0') {
                *param_6 = '\x01';
                if ((int)lVar4 == 0) {
                  return;
                }
              }
              else if ((int)lVar4 == 3) {
                *param_6 = '\x01';
              }
            }
          }
        }
      }
    }
  }
  return;
}


