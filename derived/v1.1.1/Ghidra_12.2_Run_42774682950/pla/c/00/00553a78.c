/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00553a78; name: FUN_00553a78
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00553a78(long param_1)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 local_9c;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  long lStack_78;
  long local_70;
  undefined8 uStack_68;
  
  local_4b8 = 0;
  local_4b0 = 0;
  uStack_4a8 = 0;
  lStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  lStack_88 = 0;
  local_90 = 0;
  local_4a0 = 0x8000000000000000;
  local_9c = DAT_0388a728;
  if (*(int *)(param_1 + 0x10) < 1) {
LAB_00553f10:
                    /* try { // try from 00553f18 to 00553f1f has its CatchHandler @ 00553fd0 */
    FUN_005538cc(&local_4b8,param_1 + 0x98,param_1 + 0x14);
    if (lStack_78 != 0) {
      local_70 = lStack_78;
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    if (local_90 != 0) {
      lStack_88 = local_90;
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    return;
  }
  lVar14 = 0;
  bVar4 = 0;
  bVar5 = 0;
LAB_00553b0c:
  do {
    puVar1 = (uint *)(*(long *)(param_1 + 0x60) + lVar14 * 8);
    uVar11 = *puVar1;
    if ((uVar11 & 7) == 4) {
      if (!(bool)(bVar4 | (puVar1[1] & 3) == 0)) {
                    /* try { // try from 00553be0 to 00553bf7 has its CatchHandler @ 00554000 */
        FUN_00553254(&local_4b8,10,10);
        FUN_0055342c(&local_4b8);
        uVar11 = *puVar1;
        bVar4 = 1;
      }
      if ((uVar11 & 7) != 4) {
                    /* try { // try from 00553f90 to 00553faf has its CatchHandler @ 00553fb0 */
                    /* WARNING: Subroutine does not return */
        __assert_fail("(opcode()) == (kInstEmptyWidth)","external/com_github_google_re2\\re2/prog.h"
                      ,0x5c,"empty");
      }
      if (!(bool)(bVar5 | (puVar1[1] & 0x30) == 0)) {
        uVar11 = 0;
LAB_00553c40:
        uVar13 = uVar11 + 1;
        uVar12 = (uVar11 & 0xffffffdf) - 0x41;
        if ((int)uVar13 < 0x100) {
          bVar6 = (uVar11 - 0x30 & 0xff) < 10;
          bVar7 = (uVar11 & 0xff) == 0x5f;
          uVar8 = uVar11;
          uVar9 = uVar11;
          if ((uVar12 & 0xff) < 0x1a) {
            do {
              uVar13 = uVar8 + 1;
              if (((0x19 < ((uVar13 & 0xffffffdf) - 0x41 & 0xff)) && (9 < (uVar8 - 0x2f & 0xff))) &&
                 ((uVar13 & 0xff) != 0x5f)) goto LAB_00553d24;
              uVar8 = uVar13;
            } while (uVar13 != 0xff);
          }
          else {
            do {
              if (((uVar8 + 1 & 0xffffffdf) - 0x41 & 0xff) < 0x1a) {
                if (!bVar7 && !bVar6) goto LAB_00553d24;
              }
              else if (((uVar8 + 1 & 0xff) == 0x5f || (uVar8 - 0x2f & 0xff) < 10) !=
                       (bVar7 || bVar6)) goto joined_r0x00553d80;
              uVar8 = uVar8 + 1;
              uVar13 = uVar13 + 1;
            } while (uVar8 != 0xff);
          }
          uVar13 = 0x100;
        }
        else {
          uVar8 = 0xff;
          uVar9 = 0xff;
        }
        goto joined_r0x00553d80;
      }
    }
    else if ((uVar11 & 7) == 2) {
      bVar2 = (byte)puVar1[1];
      bVar3 = *(byte *)((long)puVar1 + 5);
      FUN_00553254(&local_4b8,bVar2,bVar3);
      uVar11 = *puVar1;
      if ((uVar11 & 7) != 2) {
                    /* try { // try from 00553f70 to 00553f8f has its CatchHandler @ 00553fc0 */
                    /* WARNING: Subroutine does not return */
        __assert_fail("(opcode()) == (kInstByteRange)","external/com_github_google_re2\\re2/prog.h",
                      0x59,"foldcase");
      }
      if (((0x60 < bVar3) && (bVar2 < 0x7b)) && ((*(ushort *)((long)puVar1 + 6) & 1) != 0)) {
        uVar13 = (uint)bVar2;
        if (uVar13 < 0x62) {
          uVar13 = 0x61;
        }
        uVar12 = (uint)bVar3;
        if (0x79 < bVar3) {
          uVar12 = 0x7a;
        }
        if (uVar13 <= uVar12) {
                    /* try { // try from 00553b90 to 00553b97 has its CatchHandler @ 00553fe0 */
          FUN_00553254(&local_4b8,uVar13 - 0x20,uVar12 - 0x20);
          uVar11 = *puVar1;
        }
      }
      if ((((uVar11 >> 3 & 1) != 0) ||
          (uVar13 = *(uint *)(*(long *)(param_1 + 0x60) + lVar14 * 8 + 8), (uVar13 & 7) != 2)) ||
         (0xf < (uVar13 ^ uVar11))) {
                    /* try { // try from 00553af4 to 00553b47 has its CatchHandler @ 00554010 */
        FUN_0055342c(&local_4b8);
      }
    }
    lVar14 = lVar14 + 1;
  } while (lVar14 < *(int *)(param_1 + 0x10));
  goto LAB_00553f10;
LAB_00553d24:
  uVar13 = uVar8 + 1;
joined_r0x00553d80:
  if ((((uVar12 & 0xff) < 0x1a) || ((uVar9 & 0xff) == 0x5f)) || ((uVar9 - 0x30 & 0xff) < 10)) {
                    /* try { // try from 00553c28 to 00553c33 has its CatchHandler @ 00554030 */
    FUN_00553254(&local_4b8,uVar11,uVar8);
  }
  uVar11 = uVar13;
  if (0xff < (int)uVar13) goto LAB_00553d88;
  goto LAB_00553c40;
LAB_00553d88:
                    /* try { // try from 00553d88 to 00553d8f has its CatchHandler @ 00553ff0 */
  FUN_0055342c(&local_4b8);
  uVar11 = 0;
LAB_00553da0:
  uVar13 = uVar11 + 1;
  uVar12 = (uVar11 & 0xffffffdf) - 0x41;
  if ((int)uVar13 < 0x100) {
    bVar6 = (uVar11 - 0x30 & 0xff) < 10;
    bVar7 = (uVar11 & 0xff) == 0x5f;
    uVar9 = uVar11;
    uVar8 = uVar11;
    if ((uVar12 & 0xff) < 0x1a) {
      do {
        uVar10 = uVar9 + 1;
        if (((0x19 < ((uVar10 & 0xffffffdf) - 0x41 & 0xff)) && (9 < (uVar9 - 0x2f & 0xff))) &&
           ((uVar10 & 0xff) != 0x5f)) goto LAB_00553edc;
        uVar9 = uVar10;
      } while (uVar10 != 0xff);
    }
    else {
      do {
        if (((uVar9 + 1 & 0xffffffdf) - 0x41 & 0xff) < 0x1a) {
          if (!bVar7 && !bVar6) goto LAB_00553edc;
        }
        else if (((uVar9 + 1 & 0xff) == 0x5f || (uVar9 - 0x2f & 0xff) < 10) != (bVar7 || bVar6))
        goto joined_r0x00553ed4;
        uVar10 = uVar9 + 1;
        uVar13 = uVar13 + 1;
        uVar9 = uVar10;
      } while (uVar10 != 0xff);
    }
    uVar13 = 0x100;
    uVar9 = uVar10;
  }
  else {
    uVar8 = 0xff;
    uVar9 = 0xff;
  }
  goto joined_r0x00553ed4;
LAB_00553edc:
  uVar13 = uVar9 + 1;
joined_r0x00553ed4:
  if (((0x19 < (uVar12 & 0xff)) && ((uVar8 & 0xff) != 0x5f)) && (9 < (uVar8 - 0x30 & 0xff))) {
                    /* try { // try from 00553eb8 to 00553ebf has its CatchHandler @ 00554020 */
    FUN_00553254(&local_4b8,uVar11,uVar9);
  }
  uVar11 = uVar13;
  if (0xff < (int)uVar13) goto LAB_00553ef4;
  goto LAB_00553da0;
LAB_00553ef4:
                    /* try { // try from 00553ef4 to 00553efb has its CatchHandler @ 00553ff0 */
  FUN_0055342c(&local_4b8);
  bVar5 = 1;
  lVar14 = lVar14 + 1;
  if (*(int *)(param_1 + 0x10) <= lVar14) goto LAB_00553f10;
  goto LAB_00553b0c;
}


