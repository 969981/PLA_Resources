/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00552d80; name: FUN_00552d80
 */


void FUN_00552d80(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  int local_68 [6];
  uint *local_50;
  
  FUN_00552270(local_68,*(undefined4 *)(param_1 + 0x10));
  local_68[0] = 0;
  if (*(int *)(param_1 + 8) == 0) {
    local_68[0] = 0;
  }
  else {
                    /* try { // try from 00552db0 to 00552dbb has its CatchHandler @ 005530c8 */
    FUN_005527e0(local_68,1);
    if (local_68[0] != 0) {
      puVar11 = local_50;
      do {
        puVar12 = (uint *)(*(long *)(param_1 + 0x60) + (long)(int)*puVar11 * 8);
        uVar6 = *puVar12;
        uVar3 = uVar6;
        do {
          uVar9 = uVar3;
          if (uVar9 >> 4 == 0) {
            uVar3 = uVar9 & 0xfffffff0 | uVar6 & 0xf;
            *puVar12 = uVar3;
            goto joined_r0x00552e4c;
          }
          uVar3 = *(uint *)(*(long *)(param_1 + 0x60) + (ulong)(uVar9 >> 4) * 8);
        } while ((uVar3 & 7) == 6);
        *puVar12 = uVar9 & 0xfffffff0 | uVar6 & 0xf;
                    /* try { // try from 00552e24 to 00552e93 has its CatchHandler @ 005530d0 */
        FUN_005527e0(local_68,1);
        uVar3 = *puVar12;
        uVar6 = uVar3;
joined_r0x00552e4c:
        if ((uVar6 & 7) == 0) {
          if ((uVar3 & 6) != 0) {
LAB_0055305c:
                    /* try { // try from 0055305c to 0055307b has its CatchHandler @ 005530c4 */
                    /* WARNING: Subroutine does not return */
            __assert_fail("opcode() == kInstAlt || opcode() == kInstAltMatch",
                          "external/com_github_google_re2\\re2/prog.h",0x55,"out1");
          }
          puVar12 = puVar12 + 1;
          uVar6 = *puVar12;
          if (uVar6 != 0) {
            do {
              uVar3 = *(uint *)(*(long *)(param_1 + 0x60) +
                               (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3));
              if ((uVar3 & 7) != 6) {
                *puVar12 = uVar6;
                FUN_005527e0(local_68,1);
                goto LAB_00552dd0;
              }
              uVar6 = uVar3 >> 4;
            } while (uVar6 != 0);
          }
          *puVar12 = 0;
        }
LAB_00552dd0:
        puVar11 = puVar11 + 1;
      } while (puVar11 != local_50 + local_68[0]);
    }
    local_68[0] = 0;
                    /* try { // try from 00552ea4 to 00552eaf has its CatchHandler @ 005530c8 */
    if ((*(int *)(param_1 + 8) != 0) && (uVar5 = FUN_005527e0(local_68,1), local_68[0] != 0)) {
      puVar11 = local_50;
LAB_00552f38:
      uVar3 = *puVar11;
      puVar12 = (uint *)(*(long *)(param_1 + 0x60) + (long)(int)uVar3 * 8);
      uVar6 = *puVar12;
      if (uVar6 >> 4 != 0) {
                    /* try { // try from 00552f50 to 00552f83 has its CatchHandler @ 005530cc */
        uVar5 = FUN_005527e0(local_68,1);
        uVar6 = *puVar12;
      }
      if ((uVar6 & 7) == 0) {
        if ((uVar6 & 6) != 0) {
                    /* try { // try from 0055307c to 0055309b has its CatchHandler @ 005530c0 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("opcode() == kInstAlt || opcode() == kInstAltMatch",
                        "external/com_github_google_re2\\re2/prog.h",0x55,"out1");
        }
        if (puVar12[1] != 0) {
          uVar5 = FUN_005527e0(local_68,1);
          uVar6 = *puVar12;
        }
      }
      if ((uVar6 & 7) == 0) {
        if ((uVar6 & 6) != 0) {
                    /* try { // try from 0055309c to 005530bb has its CatchHandler @ 005530bc */
                    /* WARNING: Subroutine does not return */
          __assert_fail("opcode() == kInstAlt || opcode() == kInstAltMatch",
                        "external/com_github_google_re2\\re2/prog.h",0x55,"out1");
        }
        lVar7 = *(long *)(param_1 + 0x60);
        uVar9 = *(uint *)(lVar7 + (ulong)(uVar6 >> 4) * 8);
        uVar8 = (ulong)(int)puVar12[1];
        if ((((uVar9 & 7) != 2 || uVar9 >> 4 != uVar3) ||
            (lVar1 = lVar7 + (ulong)(uVar6 >> 4) * 8, *(char *)(lVar1 + 4) != '\0')) ||
           (*(char *)(lVar1 + 5) != -1)) {
LAB_00552ecc:
          do {
            if (7 < (uVar9 & 7)) goto LAB_0055305c;
            uVar2 = 1 << (ulong)(uVar9 & 7);
            if ((uVar2 & 0x97) != 0) goto LAB_00552f90;
            if ((uVar2 & 0x48) == 0) goto LAB_00552efc;
            uVar9 = *(uint *)(lVar7 + (ulong)(uVar9 >> 4) * 8);
          } while( true );
        }
        uVar10 = uVar8;
        while( true ) {
          uVar4 = *(uint *)(lVar7 + uVar10 * 8);
          uVar2 = uVar4 & 7;
          if (7 < uVar2) {
                    /* catch() { ... } // from try @ 0055309c with catch @ 005530bc */
                    /* catch() { ... } // from try @ 00552e24 with catch @ 005530d0 */
            FUN_00552710(local_68);
                    /* WARNING: Subroutine does not return */
            _Unwind_Resume(uVar5);
          }
          uVar2 = 1 << (ulong)uVar2;
          if ((uVar2 & 0x97) != 0) goto LAB_00552ecc;
          if ((uVar2 & 0x48) == 0) break;
          uVar10 = (ulong)(uVar4 >> 4);
        }
        goto LAB_00553028;
      }
      goto LAB_00552f90;
    }
  }
LAB_0055303c:
  FUN_00552710(local_68);
  return;
LAB_00552efc:
  uVar9 = *(uint *)(lVar7 + uVar8 * 8);
  if ((((uVar9 & 7) == 2) && (uVar9 >> 4 == uVar3)) &&
     ((lVar7 = lVar7 + uVar8 * 8, *(char *)(lVar7 + 4) == '\0' && (*(char *)(lVar7 + 5) == -1)))) {
LAB_00553028:
    *puVar12 = uVar6 & 0xfffffff8 | 1;
  }
LAB_00552f90:
  puVar11 = puVar11 + 1;
  if (puVar11 == local_50 + local_68[0]) goto LAB_0055303c;
  goto LAB_00552f38;
}


