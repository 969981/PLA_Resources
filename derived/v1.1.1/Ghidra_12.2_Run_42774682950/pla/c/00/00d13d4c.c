/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d13d4c; name: FUN_00d13d4c
 */


void FUN_00d13d4c(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined2 uVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong unaff_x22;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  char *local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90 [4];
  long *local_70;
  
  uVar12 = *(undefined8 *)(DAT_043ab4f8 + 8);
  local_c0 = "bin/pml/item/item_hash_to_index.dat";
  FUN_009f1b84(local_90,&local_c0);
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = PTR_DAT_0437a508 + 0x10;
  local_b8 = 0;
  FUN_00938764(&local_c0,0,local_90,0,uVar12,0);
  puVar6 = *(uint **)(local_b8 + 0x250);
  uVar7 = (ulong)*puVar6;
  if (*puVar6 != 0) {
    uVar14 = 0;
    plVar1 = (long *)(param_1 + 0x88);
    plVar2 = (long *)(param_1 + 0xb8);
    do {
      uVar13 = *(ulong *)(puVar6 + uVar14 * 4 + 1);
      uVar3 = (undefined2)*(ulong *)((long)(puVar6 + uVar14 * 4 + 1) + 8);
      uVar15 = *(ulong *)(param_1 + 0x90);
      if (uVar15 == 0) {
LAB_00d13ee0:
        plVar11 = (long *)(**(code **)(**(long **)(param_1 + 0xc0) + 0x10))
                                    (*(long **)(param_1 + 0xc0),0x20,8);
        if (plVar11 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0xc0) + 0xb8))();
        }
        uVar12 = *(undefined8 *)(param_1 + 0xc0);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), iVar4 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar5 == 0) {
          plVar11[2] = uVar13;
          *(undefined2 *)(plVar11 + 3) = uVar3;
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar12;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          plVar11[2] = uVar13;
          *(undefined2 *)(plVar11 + 3) = uVar3;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        *plVar11 = 0;
        plVar11[1] = uVar13;
        fVar16 = (float)(*(long *)(param_1 + 0xe0) + 1);
        if ((uVar15 == 0) || (*(float *)(param_1 + 0xe8) * (float)uVar15 < fVar16)) {
          uVar7 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
          uVar15 = (ulong)(fVar16 / *(float *)(param_1 + 0xe8));
          if (uVar15 <= uVar7) {
            uVar15 = uVar7;
          }
          if (uVar15 - 1 == 0) {
            uVar15 = 2;
          }
          else if ((uVar15 & uVar15 - 1) != 0) {
            uVar15 = std::__next_prime(uVar15);
          }
          uVar7 = *(ulong *)(param_1 + 0x90);
          if (uVar7 < uVar15) {
            uVar10 = uVar15;
LAB_00d14060:
            FUN_00d14d2c(plVar1,uVar10);
          }
          else if (uVar15 < uVar7) {
            uVar10 = (ulong)((float)*(ulong *)(param_1 + 0xe0) / *(float *)(param_1 + 0xe8));
            if ((uVar7 < 3) ||
               (uVar9 = uVar7 - (uVar7 >> 1 & 0x5555555555555555),
               uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333),
               1 < (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar10 = std::__next_prime(uVar10);
            }
            else if (1 < uVar10) {
              uVar10 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar10 - 1) & 0x3f);
            }
            if (uVar10 <= uVar15) {
              uVar10 = uVar15;
            }
            if (uVar10 < uVar7) goto LAB_00d14060;
          }
          uVar15 = *(ulong *)(param_1 + 0x90);
          if ((uVar15 & uVar15 - 1) == 0) {
            unaff_x22 = uVar15 - 1 & uVar13;
          }
          else if (uVar13 < uVar15) {
            unaff_x22 = uVar13;
          }
          else {
            uVar7 = 0;
            if (uVar15 != 0) {
              uVar7 = uVar13 / uVar15;
            }
            unaff_x22 = uVar13 - uVar7 * uVar15;
          }
        }
        plVar8 = *(long **)(*plVar1 + unaff_x22 * 8);
        if (plVar8 == (long *)0x0) {
          *plVar11 = *plVar2;
          *plVar2 = (long)plVar11;
          *(long **)(*plVar1 + unaff_x22 * 8) = plVar2;
          if (*plVar11 != 0) {
            uVar7 = *(ulong *)(*plVar11 + 8);
            if ((uVar15 & uVar15 - 1) == 0) {
              uVar7 = uVar7 & uVar15 - 1;
            }
            else if (uVar15 <= uVar7) {
              uVar13 = 0;
              if (uVar15 != 0) {
                uVar13 = uVar7 / uVar15;
              }
              uVar7 = uVar7 - uVar13 * uVar15;
            }
            plVar8 = (long *)(*plVar1 + uVar7 * 8);
            goto LAB_00d13f94;
          }
        }
        else {
          *plVar11 = *plVar8;
LAB_00d13f94:
          *plVar8 = (long)plVar11;
        }
        *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + 1;
        uVar7 = (ulong)*puVar6;
      }
      else {
        uVar10 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
        uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
        uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar10 < 2) {
          unaff_x22 = uVar15 - 1 & uVar13;
        }
        else {
          unaff_x22 = uVar13;
          if (uVar15 <= uVar13) {
            uVar9 = 0;
            if (uVar15 != 0) {
              uVar9 = uVar13 / uVar15;
            }
            unaff_x22 = uVar13 - uVar9 * uVar15;
          }
        }
        plVar11 = *(long **)(*plVar1 + unaff_x22 * 8);
        if (plVar11 == (long *)0x0) goto LAB_00d13ee0;
        if (uVar10 < 2) {
          do {
            plVar11 = (long *)*plVar11;
            if ((plVar11 == (long *)0x0) ||
               (plVar11[1] != uVar13 && (plVar11[1] & uVar15 - 1) != unaff_x22)) goto LAB_00d13ee0;
          } while (plVar11[2] != uVar13);
        }
        else {
          do {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_00d13ee0;
            uVar10 = plVar11[1];
            if (uVar10 != uVar13) {
              if (uVar15 <= uVar10) {
                uVar9 = 0;
                if (uVar15 != 0) {
                  uVar9 = uVar10 / uVar15;
                }
                uVar10 = uVar10 - uVar9 * uVar15;
              }
              if (uVar10 != unaff_x22) goto LAB_00d13ee0;
            }
          } while (plVar11[2] != uVar13);
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar7);
  }
  FUN_00936104(&local_c0);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90[0] != (long *)0x0) {
    (**(code **)(*local_90[0] + 0x20))();
  }
  return;
}


