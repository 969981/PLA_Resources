/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039fff0; name: FUN_0039fff0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0039fff0(long param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  char cVar14;
  byte bVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  
  puVar13 = PTR_LAB_04373088;
  puVar12 = PTR_FUN_04373078;
  uVar6 = _UNK_03889138;
  uVar16 = _DAT_03889130;
  uVar1 = *(undefined4 *)(param_1 + 0x8c);
  iVar2 = *(int *)(param_1 + 0x90);
  if (param_2 != (byte *)0x0) {
    *(byte **)(param_1 + 0x98) = param_2;
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x84);
    puVar13 = PTR_LAB_04373088;
    puVar12 = PTR_FUN_04373078;
    uVar6 = _UNK_03889138;
    uVar16 = _DAT_03889130;
    bVar15 = *(byte *)(param_1 + 0x70);
joined_r0x003a0068:
    do {
      if (0x29 < bVar15) goto LAB_003a013c;
LAB_003a0094:
      cVar14 = '\0';
      if (bVar15 == 0) goto LAB_003a0084;
      if (bVar15 != 10) {
LAB_003a01d8:
        FUN_0039f350(param_1);
        bVar15 = *(byte *)(param_1 + 0x70);
        do {
          if (bVar15 < 0x2a) goto LAB_003a0094;
LAB_003a013c:
          if (bVar15 == 0x2a) {
            FUN_0039f350(param_1);
            cVar14 = *(char *)(param_1 + 0x70);
            if (cVar14 == '/') goto LAB_003a0474;
LAB_003a0084:
            if (cVar14 == '\0') goto LAB_003a0354;
          }
          else {
            if (bVar15 != 0x2f) goto LAB_003a01d8;
            FUN_0039f350(param_1);
            cVar14 = *(char *)(param_1 + 0x70);
            if (cVar14 != '*') goto LAB_003a0084;
            local_80 = 0;
            uStack_78 = 0;
            local_70 = (char *)0x0;
            local_70 = (char *)FUN_002e2e80(puVar12,0x40);
            uVar11 = s______inside_block_comment__Block_038a0bdd._32_8_;
            uVar10 = s______inside_block_comment__Block_038a0bdd._24_8_;
            uVar9 = s______inside_block_comment__Block_038a0bdd._16_8_;
            uVar8 = s______inside_block_comment__Block_038a0bdd._8_8_;
            uVar7 = s______inside_block_comment__Block_038a0bdd._0_8_;
            uVar4 = CONCAT44(s______inside_block_comment__Block_038a0bdd._44_4_,
                             s______inside_block_comment__Block_038a0bdd._40_4_);
            uStack_78 = uVar6;
            local_80 = uVar16;
            uVar5 = CONCAT44(s______inside_block_comment__Block_038a0bdd._48_4_,
                             s______inside_block_comment__Block_038a0bdd._44_4_);
            *(undefined8 *)(local_70 + 0x34) = s______inside_block_comment__Block_038a0bdd._52_8_;
            *(undefined8 *)(local_70 + 0x2c) = uVar5;
            *(undefined8 *)(local_70 + 0x18) = uVar10;
            *(undefined8 *)(local_70 + 0x10) = uVar9;
            *(undefined8 *)(local_70 + 0x28) = uVar4;
            *(undefined8 *)(local_70 + 0x20) = uVar11;
            local_70[0x3c] = '\0';
            *(undefined8 *)(local_70 + 8) = uVar8;
            *(undefined8 *)local_70 = uVar7;
                    /* try { // try from 003a01ac to 003a01b3 has its CatchHandler @ 003a0564 */
            (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                      (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                       *(undefined4 *)(param_1 + 0x90),&local_80);
            if ((local_80 & 1) != 0) {
              FUN_002e2ea0(puVar13,local_70);
              bVar15 = *(byte *)(param_1 + 0x70);
              goto joined_r0x003a0068;
            }
          }
          bVar15 = *(byte *)(param_1 + 0x70);
        } while( true );
      }
      FUN_0039f350(param_1);
      iVar3 = *(int *)(param_1 + 0xa0);
      if (*(int *)(param_1 + 0x84) != iVar3) {
        FUN_002e4094(*(undefined8 *)(param_1 + 0x98),*(long *)(param_1 + 0x78) + (long)iVar3,
                     (long)(*(int *)(param_1 + 0x84) - iVar3));
      }
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
      bVar15 = *(byte *)(param_1 + 0x70);
      while (bVar15 < 0x2b) {
        if ((1L << ((ulong)bVar15 & 0x3f) & 0x100003a00U) == 0) {
          if (((ulong)bVar15 == 0x2a) && (FUN_0039f350(param_1), *(char *)(param_1 + 0x70) == '/'))
          goto LAB_003a04cc;
          break;
        }
        FUN_0039f350(param_1);
        bVar15 = *(byte *)(param_1 + 0x70);
      }
      *(byte **)(param_1 + 0x98) = param_2;
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x84);
      bVar15 = *(byte *)(param_1 + 0x70);
    } while( true );
  }
  bVar15 = *(byte *)(param_1 + 0x70);
joined_r0x003a0228:
  if (0x29 < bVar15) goto LAB_003a02a0;
LAB_003a0254:
  cVar14 = '\0';
  if (bVar15 != 0) {
    if (bVar15 != 10) {
LAB_003a033c:
      FUN_0039f350(param_1);
      bVar15 = *(byte *)(param_1 + 0x70);
      do {
        if (bVar15 < 0x2a) goto LAB_003a0254;
LAB_003a02a0:
        if (bVar15 == 0x2a) {
          FUN_0039f350(param_1);
          cVar14 = *(char *)(param_1 + 0x70);
          if (cVar14 == '/') {
LAB_003a0474:
            FUN_0039f350(param_1);
            if (param_2 == (byte *)0x0) {
              return;
            }
            iVar2 = *(int *)(param_1 + 0xa0);
            if (*(int *)(param_1 + 0x84) != iVar2) {
              FUN_002e4094(*(undefined8 *)(param_1 + 0x98),*(long *)(param_1 + 0x78) + (long)iVar2,
                           (long)(*(int *)(param_1 + 0x84) - iVar2));
            }
            *(undefined8 *)(param_1 + 0x98) = 0;
            *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
            bVar15 = *param_2;
            if ((bVar15 & 1) == 0) {
              uVar16 = (ulong)(bVar15 >> 1);
            }
            else {
              uVar16 = *(ulong *)(param_2 + 8);
            }
            if (uVar16 < 2) {
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_out_of_range();
            }
            lVar17 = uVar16 - 2;
            if ((bVar15 & 1) == 0) {
              *param_2 = (byte)((int)lVar17 << 1);
              param_2[uVar16 - 1] = 0;
              return;
            }
            *(long *)(param_2 + 8) = lVar17;
            *(undefined1 *)(*(long *)(param_2 + 0x10) + lVar17) = 0;
            return;
          }
          goto LAB_003a0244;
        }
        if (bVar15 != 0x2f) goto LAB_003a033c;
        FUN_0039f350(param_1);
        cVar14 = *(char *)(param_1 + 0x70);
        if (cVar14 != '*') goto LAB_003a0244;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = (char *)0x0;
        local_70 = (char *)FUN_002e2e80(puVar12,0x40);
        uVar11 = s______inside_block_comment__Block_038a0bdd._32_8_;
        uVar10 = s______inside_block_comment__Block_038a0bdd._24_8_;
        uVar9 = s______inside_block_comment__Block_038a0bdd._16_8_;
        uVar8 = s______inside_block_comment__Block_038a0bdd._8_8_;
        uVar7 = s______inside_block_comment__Block_038a0bdd._0_8_;
        uVar4 = CONCAT44(s______inside_block_comment__Block_038a0bdd._44_4_,
                         s______inside_block_comment__Block_038a0bdd._40_4_);
        uStack_78 = uVar6;
        local_80 = uVar16;
        uVar5 = CONCAT44(s______inside_block_comment__Block_038a0bdd._48_4_,
                         s______inside_block_comment__Block_038a0bdd._44_4_);
        *(undefined8 *)(local_70 + 0x34) = s______inside_block_comment__Block_038a0bdd._52_8_;
        *(undefined8 *)(local_70 + 0x2c) = uVar5;
        *(undefined8 *)(local_70 + 0x18) = uVar10;
        *(undefined8 *)(local_70 + 0x10) = uVar9;
        *(undefined8 *)(local_70 + 0x28) = uVar4;
        *(undefined8 *)(local_70 + 0x20) = uVar11;
        local_70[0x3c] = '\0';
        *(undefined8 *)(local_70 + 8) = uVar8;
        *(undefined8 *)local_70 = uVar7;
                    /* try { // try from 003a0310 to 003a0317 has its CatchHandler @ 003a0554 */
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),&local_80);
        if ((local_80 & 1) == 0) goto LAB_003a0248;
        FUN_002e2ea0(puVar13,local_70);
        bVar15 = *(byte *)(param_1 + 0x70);
      } while( true );
    }
    goto LAB_003a0260;
  }
LAB_003a0244:
  if (cVar14 == '\0') {
LAB_003a0354:
    local_70 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    uStack_78 = _UNK_03889b68;
    local_80 = _DAT_03889b60;
    local_70[0x20] = '.';
    uVar5 = s_End_of_file_inside_block_comment_03984661._24_8_;
    uVar4 = s_End_of_file_inside_block_comment_03984661._16_8_;
    uVar6 = s_End_of_file_inside_block_comment_03984661._0_8_;
    *(undefined8 *)(local_70 + 8) = s_End_of_file_inside_block_comment_03984661._8_8_;
    *(undefined8 *)local_70 = uVar6;
    *(undefined8 *)(local_70 + 0x18) = uVar5;
    *(undefined8 *)(local_70 + 0x10) = uVar4;
    local_70[0x21] = '\0';
                    /* try { // try from 003a03a0 to 003a03a7 has its CatchHandler @ 003a0544 */
    (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
              (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
               *(undefined4 *)(param_1 + 0x90),&local_80);
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
    plVar18 = *(long **)(param_1 + 0x68);
    local_70 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    uVar4 = s_Comment_started_here__0398de6c._0_8_;
    uStack_78 = _UNK_03889b78;
    local_80 = _DAT_03889b70;
    uVar6 = CONCAT17(s_Comment_started_here__0398de6c[0xf],s_Comment_started_here__0398de6c._8_7_);
    *(ulong *)(local_70 + 0xf) =
         CONCAT71(s_Comment_started_here__0398de6c._16_7_,s_Comment_started_here__0398de6c[0xf]);
    *(undefined8 *)(local_70 + 8) = uVar6;
    *(undefined8 *)local_70 = uVar4;
    local_70[0x17] = '\0';
                    /* try { // try from 003a040c to 003a041f has its CatchHandler @ 003a0534 */
    (**(code **)(*plVar18 + 0x10))(plVar18,uVar1,iVar2 + -2,&local_80);
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
    if (param_2 != (byte *)0x0) {
      iVar2 = *(int *)(param_1 + 0xa0);
      if (*(int *)(param_1 + 0x84) != iVar2) {
        FUN_002e4094(*(undefined8 *)(param_1 + 0x98),*(long *)(param_1 + 0x78) + (long)iVar2,
                     (long)(*(int *)(param_1 + 0x84) - iVar2));
      }
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    }
    return;
  }
  goto LAB_003a0248;
  while ((1L << ((ulong)bVar15 & 0x3f) & 0x100003a00U) != 0) {
LAB_003a0260:
    FUN_0039f350(param_1);
    bVar15 = *(byte *)(param_1 + 0x70);
    if (0x2a < bVar15) goto LAB_003a0248;
  }
  if (((ulong)bVar15 == 0x2a) && (FUN_0039f350(param_1), *(char *)(param_1 + 0x70) == '/')) {
LAB_003a04cc:
    FUN_0039f350(param_1);
    return;
  }
LAB_003a0248:
  bVar15 = *(byte *)(param_1 + 0x70);
  goto joined_r0x003a0228;
}


