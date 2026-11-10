/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00564150; name: FUN_00564150
 */


void FUN_00564150(long param_1,int param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  ostream *poVar3;
  void *__src;
  size_t __n;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  char *pcVar19;
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [8];
  ostream aoStack_190 [264];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [8];
  undefined8 local_70;
  
  if (param_2 < 0) {
    return;
  }
  uVar15 = 0;
  uVar16 = 0;
  pcVar18 = (char *)0x0;
  lVar5 = (long)param_2;
  if (0 < lVar5) goto LAB_005641f0;
LAB_00564224:
  pcVar19 = (char *)0x0;
  uVar17 = uVar16;
  do {
    if ((uVar15 != uVar17) && (uVar15 != uVar17 + 1)) {
      FUN_0055fb3c(auStack_88);
      uVar11 = (ulong)(int)uVar17;
      uVar10 = uVar11;
      if ((long)uVar11 < (long)uVar15) {
        do {
          pbVar14 = *(byte **)(param_1 + uVar10 * 8);
          if (*pbVar14 == 3) {
                    /* try { // try from 005642ac to 005642bf has its CatchHandler @ 00564498 */
            FUN_005644b4(auStack_88,*(undefined4 *)(pbVar14 + 0x18),*(undefined4 *)(pbVar14 + 0x18),
                         *(undefined2 *)(pbVar14 + 2));
          }
          else {
            if (*pbVar14 != 0x14) {
                    /* try { // try from 005643e4 to 005643fb has its CatchHandler @ 00564488 */
              FUN_0054f038(auStack_198,"external/com_github_google_re2/re2/parse.cc",0x49f);
                    /* try { // try from 00564400 to 00564427 has its CatchHandler @ 0056448c */
              poVar3 = std::__put_character_sequence<char,std::char_traits<char>>
                                 (aoStack_190,"RE2: unexpected op: ",0x14);
              poVar3 = (ostream *)std::ostream::operator<<(poVar3,(uint)*pbVar14);
              poVar3 = std::__put_character_sequence<char,std::char_traits<char>>(poVar3," ",1);
                    /* try { // try from 0056442c to 00564437 has its CatchHandler @ 00564480 */
              FUN_00569ac8(auStack_1b0,pbVar14);
                    /* try { // try from 00564438 to 00564443 has its CatchHandler @ 00564460 */
              FUN_00564560(poVar3,auStack_1b0);
              FUN_003c7248(auStack_1b0);
                    /* WARNING: Subroutine does not return */
              FUN_005503fc(auStack_198);
            }
            lVar12 = *(long *)(pbVar14 + 0x18);
            if (*(int *)(lVar12 + 0x10) != 0) {
              puVar13 = *(undefined4 **)(lVar12 + 8);
              do {
                    /* try { // try from 00564280 to 00564287 has its CatchHandler @ 0056449c */
                FUN_0055fb58(auStack_88,*puVar13,puVar13[1]);
                puVar13 = puVar13 + 2;
              } while (puVar13 !=
                       (undefined4 *)(*(long *)(lVar12 + 8) + (long)*(int *)(lVar12 + 0x10) * 8));
            }
          }
          FUN_0055de34(pbVar14);
          uVar10 = uVar10 + 1;
        } while (uVar15 != (uVar10 & 0xffffffff));
      }
                    /* try { // try from 005642cc to 005642db has its CatchHandler @ 00564494 */
      uVar2 = FUN_00560ab0(auStack_88);
      uVar2 = FUN_0055ec14(uVar2,param_3);
      puVar4 = (undefined8 *)param_4[1];
      lVar12 = param_1 + uVar11 * 8;
      iVar1 = (uint)uVar15 - uVar17;
      if (puVar4 < (undefined8 *)param_4[2]) {
        *puVar4 = uVar2;
        puVar4[1] = lVar12;
        *(int *)(puVar4 + 2) = iVar1;
        *(undefined4 *)((long)puVar4 + 0x14) = 0xffffffff;
        param_4[1] = (long)(puVar4 + 3);
      }
      else {
        __src = (void *)*param_4;
        lVar6 = (long)puVar4 - (long)__src >> 3;
        uVar11 = 0xaaaaaaaaaaaaaaa;
        uVar10 = lVar6 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar10) {
                    /* try { // try from 00564454 to 0056445b has its CatchHandler @ 0056445c */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar8 = param_4[2] - (long)__src >> 3;
        if ((ulong)(lVar8 * -0x5555555555555555) < 0x555555555555555) {
          uVar9 = lVar8 * 0x5555555555555556;
          uVar11 = uVar10;
          if (uVar10 <= uVar9) {
            uVar11 = uVar9;
          }
          if (uVar11 != 0) goto LAB_00564350;
          lVar8 = 0;
        }
        else {
LAB_00564350:
          lVar8 = FUN_002e2e80(PTR_FUN_04373078,uVar11 * 0x18);
          __src = (void *)*param_4;
          puVar4 = (undefined8 *)param_4[1];
        }
        puVar7 = (undefined8 *)(lVar8 + lVar6 * 8);
        __n = (long)puVar4 - (long)__src;
        *puVar7 = uVar2;
        puVar7[1] = lVar12;
        *(int *)(puVar7 + 2) = iVar1;
        *(undefined4 *)((long)puVar7 + 0x14) = 0xffffffff;
        if (0 < (long)__n) {
          memcpy((void *)((long)puVar7 - __n),__src,__n);
        }
        lVar12 = *param_4;
        *param_4 = (long)((long)puVar7 - __n);
        param_4[1] = (long)(puVar7 + 3);
        param_4[2] = lVar8 + uVar11 * 0x18;
        if (lVar12 != 0) {
          FUN_002e2ea0(PTR_LAB_04373088);
        }
      }
      FUN_00560e20(auStack_78,local_70);
    }
    uVar16 = (uint)uVar15;
    if (lVar5 <= (long)uVar15) {
      uVar16 = uVar17;
      pcVar19 = pcVar18;
    }
    pcVar18 = pcVar19;
    do {
      uVar15 = uVar15 + 1;
      if (uVar15 == param_2 + 1) {
        return;
      }
      if (lVar5 <= (long)uVar15) goto LAB_00564224;
LAB_005641f0:
      pcVar19 = *(char **)(param_1 + uVar15 * 8);
      uVar17 = uVar16;
    } while (((pcVar18 != (char *)0x0) && ((*pcVar18 == '\x14' || (*pcVar18 == '\x03')))) &&
            ((*pcVar19 == '\x03' || (*pcVar19 == '\x14'))));
  } while( true );
}


