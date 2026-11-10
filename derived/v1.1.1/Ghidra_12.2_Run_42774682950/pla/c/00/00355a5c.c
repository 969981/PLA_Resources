/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00355a5c; name: FUN_00355a5c
 */


void FUN_00355a5c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  bool bVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  size_t __n;
  bool bVar12;
  uint uVar13;
  ulong uVar14;
  long *plVar15;
  uint *puVar16;
  long *plVar17;
  undefined4 *puVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  int iVar22;
  long *plVar23;
  int *local_c8;
  int *local_c0;
  int *local_b8;
  long local_b0;
  undefined8 local_a8;
  uint *local_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [48];
  
  puVar6 = PTR_LAB_04373088;
  puVar5 = PTR_FUN_04373078;
  if (*(long *)(param_1 + 0x28) != 0) {
    local_a8 = 0;
    local_a0 = (uint *)0x0;
    local_b8 = (int *)0x0;
    local_b0 = 0;
    local_c8 = (int *)0x0;
    if (*(int *)(param_2 + 0x18) != 0) {
      plVar1 = (long *)(param_2 + 0x10);
      plVar2 = (long *)(param_1 + 0x20);
      bVar8 = false;
      plVar17 = (long *)0x0;
      if (*(long *)(param_2 + 0x20) != 0) {
        plVar17 = (long *)(*(long *)(param_2 + 0x20) + 8);
      }
LAB_00355b74:
      do {
        lVar20 = *plVar17;
        local_c0 = local_c8;
        if (*(int *)(lVar20 + 0x18) < 1) {
          plVar15 = (long *)*plVar2;
          if (plVar15 != (long *)0x0) goto LAB_00355c6c;
LAB_00355e20:
          if (bVar8) {
            if (local_a0 == (uint *)0x0) {
              uVar13 = local_a8._4_4_;
LAB_00355e6c:
                    /* try { // try from 00355e70 to 00355eaf has its CatchHandler @ 00356104 */
              FUN_0032bcac(&local_b0,uVar13 + 1);
              uVar13 = *local_a0;
LAB_00355e80:
              *local_a0 = uVar13 + 1;
              uVar11 = FUN_003c0f94(local_b0);
              lVar10 = (long)(int)local_a8;
              local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + 1);
              *(undefined8 *)(local_a0 + lVar10 * 2 + 2) = uVar11;
            }
            else {
              lVar10 = (long)(int)local_a8;
              uVar13 = *local_a0;
              if ((int)uVar13 <= (int)local_a8) {
                if (uVar13 == local_a8._4_4_) goto LAB_00355e6c;
                goto LAB_00355e80;
              }
              local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + 1);
              uVar11 = *(undefined8 *)(local_a0 + lVar10 * 2 + 2);
            }
            FUN_003bdb80(uVar11,lVar20);
            bVar12 = false;
            bVar8 = true;
          }
          else {
            bVar12 = false;
            bVar8 = false;
          }
        }
        else {
          iVar22 = 0;
          do {
                    /* try { // try from 00355bb0 to 00355bb7 has its CatchHandler @ 00356160 */
            piVar9 = (int *)FUN_00326ad0(lVar20 + 0x18,iVar22);
            iVar3 = *piVar9;
            if (local_c0 < local_b8) {
              *local_c0 = iVar3;
              local_c0 = local_c0 + 1;
            }
            else {
              lVar20 = (long)local_c0 - (long)local_c8 >> 2;
              uVar19 = lVar20 + 1;
              if (uVar19 >> 0x3e != 0) {
                    /* try { // try from 003560c8 to 003560cf has its CatchHandler @ 003560d0 */
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              if ((ulong)((long)local_b8 - (long)local_c8 >> 2) < 0x1fffffffffffffff) {
                uVar14 = (long)local_b8 - (long)local_c8 >> 1;
                if (uVar19 <= uVar14) {
                  uVar19 = uVar14;
                }
                if (uVar19 != 0) goto LAB_00355c08;
                lVar10 = 0;
              }
              else {
                uVar19 = 0x3fffffffffffffff;
LAB_00355c08:
                lVar10 = FUN_002e2e80(puVar5,uVar19 << 2);
              }
              piVar9 = (int *)(lVar10 + lVar20 * 4);
              __n = (long)local_c0 - (long)local_c8;
              local_b8 = (int *)(lVar10 + uVar19 * 4);
              piVar21 = (int *)((long)piVar9 - __n);
              *piVar9 = iVar3;
              if (0 < (long)__n) {
                memcpy(piVar21,local_c8,__n);
              }
              bVar12 = local_c8 != (int *)0x0;
              local_c8 = piVar21;
              local_c0 = piVar9 + 1;
              if (bVar12) {
                FUN_002e2ea0(puVar6);
              }
            }
            lVar20 = *plVar17;
            iVar22 = iVar22 + 1;
          } while (iVar22 < *(int *)(lVar20 + 0x18));
          plVar15 = (long *)*plVar2;
          if (plVar15 == (long *)0x0) goto LAB_00355e20;
LAB_00355c6c:
          if (local_c8 == local_c0) {
            do {
              plVar23 = plVar15;
              plVar15 = (long *)*plVar23;
            } while ((long *)*plVar23 != (long *)0x0);
          }
          else {
            plVar23 = plVar2;
            do {
              piVar21 = (int *)plVar15[4];
              piVar9 = local_c8;
              do {
                if ((int *)plVar15[5] == piVar21) {
LAB_00355c8c:
                  plVar7 = (long *)plVar15[1];
                  goto joined_r0x00355c94;
                }
                if (*piVar21 < *piVar9) goto LAB_00355c8c;
                if (*piVar9 < *piVar21) break;
                piVar9 = piVar9 + 1;
                piVar21 = piVar21 + 1;
              } while (local_c0 != piVar9);
              plVar7 = (long *)*plVar15;
              plVar23 = plVar15;
joined_r0x00355c94:
              plVar15 = plVar7;
            } while (plVar15 != (long *)0x0);
          }
          if (plVar23 == plVar2) goto LAB_00355e20;
          piVar21 = local_c8;
          for (piVar9 = (int *)plVar23[4]; piVar9 != (int *)plVar23[5]; piVar9 = piVar9 + 1) {
            if (local_c0 == piVar21) goto LAB_00355e20;
            if (*piVar21 < *piVar9) goto LAB_00355e20;
            if (*piVar9 < *piVar21) break;
            piVar21 = piVar21 + 1;
          }
          if (!bVar8) {
                    /* try { // try from 00355d30 to 00355d37 has its CatchHandler @ 00356104 */
            FUN_0032bcac(&local_b0,*(undefined4 *)(param_2 + 0x18));
            plVar15 = (long *)0x0;
            uVar11 = local_a8;
            if (*(long *)(param_2 + 0x20) != 0) {
              plVar15 = (long *)(*(long *)(param_2 + 0x20) + 8);
            }
            for (; local_a8 = uVar11, plVar15 != plVar17; plVar15 = plVar15 + 1) {
              lVar20 = *plVar15;
              local_a8._4_4_ = (uint)((ulong)uVar11 >> 0x20);
              if (local_a0 == (uint *)0x0) {
LAB_00355d94:
                iVar22 = local_a8._4_4_ + 1;
                    /* try { // try from 00355d98 to 00355dd7 has its CatchHandler @ 00356150 */
                FUN_0032bcac(&local_b0,iVar22);
                uVar13 = *local_a0;
                uVar11 = local_a8;
LAB_00355da8:
                local_a8 = uVar11;
                *local_a0 = uVar13 + 1;
                uVar11 = FUN_003c0f94(local_b0);
                lVar10 = (long)(int)local_a8;
                local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + 1);
                *(undefined8 *)(local_a0 + lVar10 * 2 + 2) = uVar11;
              }
              else {
                local_a8._0_4_ = (int)uVar11;
                lVar10 = (long)(int)local_a8;
                uVar13 = *local_a0;
                if ((int)uVar13 <= (int)local_a8) {
                  bVar8 = uVar13 == local_a8._4_4_;
                  local_a8._4_4_ = uVar13;
                  if (bVar8) goto LAB_00355d94;
                  goto LAB_00355da8;
                }
                local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + 1);
                uVar11 = *(undefined8 *)(local_a0 + lVar10 * 2 + 2);
              }
              FUN_003bdb80(uVar11,lVar20);
              uVar11 = local_a8;
            }
          }
          if (local_a0 == (uint *)0x0) {
            uVar13 = local_a8._4_4_;
LAB_00355ed0:
                    /* try { // try from 00355ed4 to 00355f1b has its CatchHandler @ 003560f4 */
            FUN_0032bcac(&local_b0,uVar13 + 1);
            uVar13 = *local_a0;
LAB_00355ee4:
            *local_a0 = uVar13 + 1;
            lVar20 = FUN_003c0f94(local_b0);
            lVar10 = (long)(int)local_a8;
            local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + 1);
            *(long *)(local_a0 + lVar10 * 2 + 2) = lVar20;
          }
          else {
            lVar20 = (long)(int)local_a8;
            uVar13 = *local_a0;
            if ((int)uVar13 <= (int)local_a8) {
              if (uVar13 == local_a8._4_4_) goto LAB_00355ed0;
              goto LAB_00355ee4;
            }
            local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + 1);
            lVar20 = *(long *)(local_a0 + lVar20 * 2 + 2);
          }
          FUN_003bdb80(lVar20,*plVar17);
          *(undefined4 *)(lVar20 + 0x18) = 0;
          puVar18 = (undefined4 *)plVar23[7];
          if (puVar18 != (undefined4 *)plVar23[8]) {
            iVar22 = 1;
            do {
              uVar13 = *(uint *)(lVar20 + 0x1c);
              uVar4 = *puVar18;
              if (iVar22 - 1U == uVar13) {
                    /* try { // try from 00355f78 to 00355f9f has its CatchHandler @ 00356140 */
                FUN_003265e4(lVar20 + 0x18,iVar22);
                uVar13 = *(uint *)(lVar20 + 0x1c);
              }
              if ((int)uVar13 < 1) {
                FUN_0030f640(auStack_90,3,
                             "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                             ,0x161);
                    /* try { // try from 00355fa0 to 00355fb3 has its CatchHandler @ 00356114 */
                uVar11 = FUN_0030f3ac(auStack_90,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00355fb4 to 00355fbb has its CatchHandler @ 00356118 */
                FUN_0030f41c(auStack_98,uVar11);
                FUN_0030f658(auStack_90);
              }
              *(undefined4 *)(*(long *)(lVar20 + 0x20) + (ulong)(iVar22 - 1U) * 4) = uVar4;
              *(int *)(lVar20 + 0x18) = iVar22;
              puVar18 = puVar18 + 1;
              iVar22 = iVar22 + 1;
            } while (puVar18 != (undefined4 *)plVar23[8]);
          }
          bVar12 = true;
          bVar8 = true;
        }
        while( true ) {
          lVar20 = 0;
          if (*(long *)(param_2 + 0x20) != 0) {
            lVar20 = *(long *)(param_2 + 0x20) + 8;
          }
          plVar17 = plVar17 + 1;
          if (plVar17 == (long *)(lVar20 + (long)*(int *)(param_2 + 0x18) * 8)) {
            if ((plVar1 != &local_b0) && (!(bool)(bVar8 ^ 1))) {
                    /* try { // try from 00355ff0 to 00356003 has its CatchHandler @ 003560e0 */
              FUN_003707c4(plVar1);
              FUN_00370870(plVar1,&local_b0);
            }
            goto LAB_00356004;
          }
          if ((!bVar12) ||
             (lVar20 = *plVar17,
             (ulong)(long)*(int *)(lVar20 + 0x18) < (ulong)((long)local_c0 - (long)local_c8 >> 2)))
          break;
          if (local_c0 != local_c8) {
            uVar19 = 0;
            while( true ) {
                    /* try { // try from 00355b38 to 00355b3f has its CatchHandler @ 00356130 */
              piVar9 = (int *)FUN_00326ad0(lVar20 + 0x18,uVar19 & 0xffffffff);
              if (*piVar9 != local_c8[uVar19]) goto LAB_00355b74;
              uVar19 = uVar19 + 1;
              if ((ulong)((long)local_c0 - (long)local_c8 >> 2) <= uVar19) break;
              lVar20 = *plVar17;
            }
          }
          bVar12 = true;
        }
      } while( true );
    }
LAB_00356004:
    if (local_c8 != (int *)0x0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    puVar5 = PTR_LAB_04373088;
    if ((local_a0 != (uint *)0x0) && (local_b0 == 0)) {
      uVar19 = (ulong)*local_a0;
      if (0 < (int)*local_a0) {
        puVar16 = local_a0 + 2;
        lVar20 = *(long *)puVar16;
        if (lVar20 != 0) goto LAB_00356090;
        while (uVar19 = uVar19 - 1, uVar19 != 0) {
          while( true ) {
            puVar16 = puVar16 + 2;
            lVar20 = *(long *)puVar16;
            if (lVar20 == 0) break;
LAB_00356090:
            FUN_003bc724(lVar20);
            FUN_002e2ea0(puVar5,lVar20);
            uVar19 = uVar19 - 1;
            if (uVar19 == 0) goto LAB_003560b4;
          }
        }
      }
LAB_003560b4:
      FUN_002ee710(local_a0);
    }
    if (local_b0 != 0) {
      local_a0 = (uint *)0x0;
                    /* try { // try from 00356038 to 0035603b has its CatchHandler @ 003560f0 */
      FUN_0032ce8c();
    }
  }
  return;
}


