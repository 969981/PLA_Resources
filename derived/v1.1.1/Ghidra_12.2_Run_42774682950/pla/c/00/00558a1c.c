/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00558a1c; name: FUN_00558a1c
 */


long FUN_00558a1c(long *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  int *piVar16;
  char local_170 [8];
  undefined1 auStack_168 [264];
  
  if (param_2 < (long *)0x3) {
    if (param_2 != (long *)0x2) {
      if (param_2 == (long *)0x0) {
        FUN_0054f038(local_170,"external/com_github_google_re2/re2/dfa.cc",0x3fa);
                    /* try { // try from 00558d4c to 00558d57 has its CatchHandler @ 00558d8c */
        FUN_00551750(auStack_168,"NULL state in RunStateOnByte");
      }
      else if (param_2 == (long *)0x1) {
        FUN_0054f038(local_170,"external/com_github_google_re2/re2/dfa.cc",0x3f6);
                    /* try { // try from 00558d28 to 00558d33 has its CatchHandler @ 00558d94 */
        FUN_00551750(auStack_168,"DeadState in RunStateOnByte");
      }
      else {
        FUN_0054f038(local_170,"external/com_github_google_re2/re2/dfa.cc",0x3fd);
                    /* try { // try from 00558d70 to 00558d7b has its CatchHandler @ 00558d84 */
        FUN_00551750(auStack_168,"Unexpected special state in RunStateOnByte");
      }
                    /* WARNING: Subroutine does not return */
      FUN_005503fc(local_170);
    }
    lVar6 = 2;
  }
  else {
    if (param_3 == 0x100) {
      lVar6 = param_2[(long)*(int *)(*param_1 + 0x14) + 2];
    }
    else {
      lVar6 = param_2[(long)(int)(uint)*(byte *)(*param_1 + (long)(int)param_3 + 0x98) + 2];
    }
    if (lVar6 == 0) {
      plVar13 = param_1 + 9;
      puVar9 = (undefined4 *)*plVar13;
      *puVar9 = 0;
      puVar9[0xc] = puVar9[10];
      if (0 < (int)param_2[1]) {
        lVar6 = 0;
        iVar4 = *(int *)*param_2;
        do {
          if (iVar4 == -1) {
            if (*(char *)(puVar9 + 0xd) == '\0') {
              *(undefined1 *)(puVar9 + 0xd) = 0;
              puVar9[0xc] = puVar9[0xc] + 1;
              FUN_005527e0(puVar9,0);
              if ((long)(int)param_2[1] <= lVar6 + 1) break;
            }
            else if ((long)(int)param_2[1] <= lVar6 + 1) break;
          }
          else if ((iVar4 == -2) ||
                  (FUN_005582f8(param_1,puVar9,iVar4,*(undefined1 *)((long)param_2 + 0xc)),
                  (long)(int)param_2[1] <= lVar6 + 1)) break;
          lVar6 = lVar6 + 1;
          iVar4 = *(int *)(*param_2 + lVar6 * 4);
        } while( true );
      }
      uVar3 = *(uint *)((long)param_2 + 0xc);
      uVar7 = uVar3 & 0xff;
      bVar5 = param_3 == 10;
      uVar1 = uVar7 | 2;
      if (!bVar5) {
        uVar1 = uVar7;
      }
      if (param_3 == 0x100) {
        uVar14 = 0;
        uVar1 = uVar1 | 10;
      }
      else if (((param_3 & 0xffffffdf) - 0x41 & 0xff) < 0x1a) {
        uVar14 = 1;
      }
      else {
        uVar14 = (uint)((param_3 & 0xff) == 0x5f || (param_3 - 0x30 & 0xff) < 10);
      }
      plVar15 = param_1 + 10;
      piVar10 = (int *)*plVar15;
      uVar8 = 0x10;
      if (uVar14 == (uVar3 & 0x200) >> 9) {
        uVar8 = 0x20;
      }
      piVar12 = (int *)param_1[9];
      piVar11 = piVar10;
      if ((uVar3 >> 0x10 & (uVar7 ^ 0xffffffff) & (uVar8 | uVar1)) != 0) {
        *piVar10 = 0;
        piVar10[0xc] = piVar10[10];
        if (*piVar12 != 0) {
          piVar11 = *(int **)(piVar12 + 6);
          do {
            piVar16 = piVar11 + 1;
            iVar4 = *piVar11;
            if (piVar12[10] <= iVar4) {
              iVar4 = -1;
            }
            FUN_005582f8(param_1,piVar10,iVar4,uVar8 | uVar1);
            piVar11 = piVar16;
          } while (piVar16 != (int *)(*(long *)(piVar12 + 6) + (long)*piVar12 * 4));
          piVar12 = (int *)*plVar13;
          piVar10 = (int *)*plVar15;
        }
        *plVar13 = (long)piVar10;
        *plVar15 = (long)piVar12;
        piVar11 = piVar12;
        piVar12 = piVar10;
      }
      local_170[0] = '\0';
      FUN_00558600(param_1,piVar12,piVar11,param_3,bVar5,local_170);
      lVar6 = param_1[9];
      lVar2 = param_1[10];
      param_1[9] = lVar2;
      param_1[10] = lVar6;
      uVar7 = (uint)bVar5;
      if (local_170[0] != '\0') {
        uVar7 = bVar5 | 0x100;
      }
      uVar1 = uVar7 | 0x200;
      if (uVar14 == 0) {
        uVar1 = uVar7;
      }
      if ((local_170[0] == '\0') || ((int)param_1[1] != 3)) {
        lVar6 = 0;
      }
      lVar6 = FUN_005578ac(param_1,lVar2,lVar6,uVar1);
      if (param_3 == 0x100) {
        uVar7 = *(uint *)(*param_1 + 0x14);
      }
      else {
        uVar7 = (uint)*(byte *)(*param_1 + (long)(int)param_3 + 0x98);
      }
      param_2[(long)(int)uVar7 + 2] = lVar6;
    }
  }
  return lVar6;
}


