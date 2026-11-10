/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056839c; name: FUN_0056839c
 */


long FUN_0056839c(undefined8 param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  ostream *poVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int iVar14;
  byte local_188 [8];
  ulong local_180;
  char *pcStack_178;
  undefined1 auStack_170 [8];
  ostream aoStack_168 [264];
  
  uVar11 = (ulong)param_2;
  if (param_3 == -1) {
    uVar1 = param_2 - 1;
    if (uVar1 == 0) {
      uVar5 = FUN_0055dbac(param_1);
      lVar4 = FUN_0055e568(uVar5,param_4);
      return lVar4;
    }
    if (param_2 == 0) {
      uVar5 = FUN_0055dbac(param_1);
      lVar4 = FUN_0055e578(uVar5,param_4);
      return lVar4;
    }
    puVar7 = (undefined8 *)
             FUN_002e2e80(PTR_FUN_04373078,
                          -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3);
    if (0 < (int)uVar1) {
      uVar12 = (ulong)uVar1;
      puVar13 = puVar7;
      do {
                    /* try { // try from 00568530 to 00568537 has its CatchHandler @ 0056879c */
        uVar5 = FUN_0055dbac(param_1);
        uVar12 = uVar12 - 1;
        *puVar13 = uVar5;
        puVar13 = puVar13 + 1;
      } while (uVar12 != 0);
    }
                    /* try { // try from 00568544 to 00568567 has its CatchHandler @ 00568790 */
    uVar5 = FUN_0055dbac(param_1);
    uVar5 = FUN_0055e568(uVar5,param_4);
    puVar7[(int)uVar1] = uVar5;
    lVar4 = FUN_0055e9f0(puVar7,uVar11,param_4);
    FUN_002e2ea0(PTR_LAB_04373088,puVar7);
  }
  else if (param_3 == 0 && param_2 == 0) {
    lVar4 = FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (lVar4 != 0) {
      FUN_0055da3c(lVar4,2,param_4);
    }
  }
  else {
    if ((param_2 == 1) && (param_3 == 1)) {
      lVar4 = FUN_0055dbac(param_1);
      return lVar4;
    }
    if ((int)param_2 < 1) {
      lVar6 = 0;
    }
    else {
      lVar4 = FUN_002e2e80(PTR_FUN_04373078,
                           -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3);
      uVar12 = 0;
      do {
                    /* try { // try from 00568494 to 0056849b has its CatchHandler @ 005687b4 */
        uVar5 = FUN_0055dbac(param_1);
        *(undefined8 *)(lVar4 + uVar12 * 8) = uVar5;
        uVar12 = uVar12 + 1;
      } while (uVar11 != uVar12);
                    /* try { // try from 005684ac to 005684bb has its CatchHandler @ 00568788 */
      lVar6 = FUN_0055e9f0(lVar4,uVar11,param_4);
      FUN_002e2ea0(PTR_LAB_04373088,lVar4);
    }
    lVar4 = lVar6;
    if ((int)param_2 < param_3) {
      uVar5 = FUN_0055dbac(param_1);
      lVar4 = FUN_0055e588(uVar5,param_4);
      puVar3 = PTR_FUN_04373078;
      if ((int)(param_2 + 1) < param_3) {
        iVar14 = ~param_2 + param_3;
        do {
          uVar5 = FUN_0055dbac(param_1);
          lVar8 = FUN_002e2e80(puVar3,0x28);
          if (lVar8 != 0) {
            FUN_0055da3c(lVar8,5,param_4);
          }
          puVar7 = (undefined8 *)FUN_002e2ec0(puVar3,0x10);
          *(undefined8 **)(lVar8 + 8) = puVar7;
          *(undefined2 *)(lVar8 + 6) = 2;
          *puVar7 = uVar5;
          puVar7[1] = lVar4;
          lVar4 = FUN_0055e588(lVar8,param_4);
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      if (lVar6 != 0) {
        lVar8 = FUN_002e2e80(PTR_FUN_04373078,0x28);
        if (lVar8 != 0) {
          FUN_0055da3c(lVar8,5,param_4);
        }
        plVar9 = (long *)FUN_002e2ec0(PTR_FUN_04373078,0x10);
        *(long **)(lVar8 + 8) = plVar9;
        *(undefined2 *)(lVar8 + 6) = 2;
        *plVar9 = lVar6;
        plVar9[1] = lVar4;
        return lVar8;
      }
    }
    if (lVar4 == 0) {
      FUN_0054f038(auStack_170,"external/com_github_google_re2/re2/simplify.cc",0x27c);
                    /* try { // try from 005686d0 to 005686df has its CatchHandler @ 00568760 */
      poVar10 = std::__put_character_sequence<char,std::char_traits<char>>
                          (aoStack_168,"Malformed repeat ",0x11);
                    /* try { // try from 005686e4 to 005686f3 has its CatchHandler @ 00568758 */
      FUN_00569ac8(local_188,param_1);
      uVar11 = (ulong)(local_188[0] >> 1);
      pcVar2 = (char *)((ulong)local_188 | 1);
      if ((local_188[0] & 1) != 0) {
        uVar11 = local_180;
        pcVar2 = pcStack_178;
      }
                    /* try { // try from 00568710 to 00568747 has its CatchHandler @ 00568768 */
      poVar10 = std::__put_character_sequence<char,std::char_traits<char>>(poVar10,pcVar2,uVar11);
      poVar10 = std::__put_character_sequence<char,std::char_traits<char>>(poVar10," ",1);
      poVar10 = (ostream *)std::ostream::operator<<(poVar10,param_2);
      poVar10 = std::__put_character_sequence<char,std::char_traits<char>>(poVar10," ",1);
      std::ostream::operator<<(poVar10,param_3);
      FUN_003c7248(local_188);
                    /* WARNING: Subroutine does not return */
      FUN_005503fc(auStack_170);
    }
  }
  return lVar4;
}


