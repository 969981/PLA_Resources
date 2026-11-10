/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e637b0; name: FUN_01e637b0
 */


void FUN_01e637b0(long param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x21;
  undefined8 uVar14;
  ulong uVar15;
  float fVar16;
  
  FUN_018bcc70(*(undefined8 *)(param_1 + 0x68));
  FUN_01e6443c(param_1);
  FUN_01e64954(param_1);
  FUN_01e64a2c(param_1);
  puVar8 = *(uint **)(*(long *)(param_1 + 0x550) + 0x250);
  piVar3 = (int *)((long)puVar8 + (ulong)*puVar8);
  puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (4 - (long)*piVar3)));
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  puVar8 = puVar4 + 1;
  uVar9 = (ulong)*puVar4;
  if (uVar9 != 0) {
    puVar4 = puVar8 + uVar9;
    plVar1 = (long *)(param_1 + 0x898);
    plVar2 = (long *)(param_1 + 0x8c8);
    do {
      piVar3 = (int *)((long)puVar8 + (ulong)*puVar8);
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
         (uVar9 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar9 == 0)) {
        uVar9 = 0;
        uVar15 = *(ulong *)(param_1 + 0x8a0);
        if (uVar15 != 0) goto LAB_01e638a0;
LAB_01e63968:
        plVar11 = (long *)(**(code **)(**(long **)(param_1 + 0x8d0) + 0x10))
                                    (*(long **)(param_1 + 0x8d0),0x20,8);
        if (plVar11 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x8d0) + 0xb8))();
        }
        uVar14 = *(undefined8 *)(param_1 + 0x8d0);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), iVar5 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar6 == 0) {
          plVar11[2] = uVar9;
          plVar11[3] = (long)piVar3;
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01e64430;
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar14;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          plVar11[2] = uVar9;
          plVar11[3] = (long)piVar3;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        *plVar11 = 0;
        plVar11[1] = uVar9;
        fVar16 = (float)(*(long *)(param_1 + 0x8f0) + 1);
        if ((uVar15 == 0) || (*(float *)(param_1 + 0x8f8) * (float)uVar15 < fVar16)) {
          uVar15 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
          uVar10 = (ulong)(fVar16 / *(float *)(param_1 + 0x8f8));
          if (uVar10 <= uVar15) {
            uVar10 = uVar15;
          }
          if (uVar10 - 1 == 0) {
            uVar10 = 2;
          }
          else if ((uVar10 & uVar10 - 1) != 0) {
            uVar10 = std::__next_prime(uVar10);
          }
          uVar15 = *(ulong *)(param_1 + 0x8a0);
          if (uVar15 < uVar10) {
            uVar7 = uVar10;
LAB_01e63a60:
            FUN_01e711b0(plVar1,uVar7);
          }
          else if (uVar10 < uVar15) {
            uVar7 = (ulong)((float)*(ulong *)(param_1 + 0x8f0) / *(float *)(param_1 + 0x8f8));
            if ((uVar15 < 3) ||
               (uVar13 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
               uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333),
               1 < (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar7 = std::__next_prime(uVar7);
            }
            else if (1 < uVar7) {
              uVar7 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar7 - 1) & 0x3f);
            }
            if (uVar7 <= uVar10) {
              uVar7 = uVar10;
            }
            if (uVar7 < uVar15) goto LAB_01e63a60;
          }
          uVar15 = *(ulong *)(param_1 + 0x8a0);
          if ((uVar15 & uVar15 - 1) == 0) {
            unaff_x21 = uVar15 - 1 & uVar9;
          }
          else if (uVar9 < uVar15) {
            unaff_x21 = uVar9;
          }
          else {
            uVar10 = 0;
            if (uVar15 != 0) {
              uVar10 = uVar9 / uVar15;
            }
            unaff_x21 = uVar9 - uVar10 * uVar15;
          }
        }
        plVar12 = *(long **)(*plVar1 + unaff_x21 * 8);
        if (plVar12 == (long *)0x0) {
          *plVar11 = *plVar2;
          *plVar2 = (long)plVar11;
          *(long **)(*plVar1 + unaff_x21 * 8) = plVar2;
          if (*plVar11 != 0) {
            uVar9 = *(ulong *)(*plVar11 + 8);
            if ((uVar15 & uVar15 - 1) == 0) {
              uVar9 = uVar9 & uVar15 - 1;
            }
            else if (uVar15 <= uVar9) {
              uVar10 = 0;
              if (uVar15 != 0) {
                uVar10 = uVar9 / uVar15;
              }
              uVar9 = uVar9 - uVar10 * uVar15;
            }
            plVar12 = (long *)(*plVar1 + uVar9 * 8);
            goto LAB_01e63854;
          }
        }
        else {
          *plVar11 = *plVar12;
LAB_01e63854:
          *plVar12 = (long)plVar11;
        }
        *(long *)(param_1 + 0x8f0) = *(long *)(param_1 + 0x8f0) + 1;
      }
      else {
        uVar9 = *(ulong *)((long)piVar3 + uVar9);
        uVar15 = *(ulong *)(param_1 + 0x8a0);
        if (uVar15 == 0) goto LAB_01e63968;
LAB_01e638a0:
        uVar10 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
        uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
        uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar10 < 2) {
          unaff_x21 = uVar15 - 1 & uVar9;
        }
        else {
          unaff_x21 = uVar9;
          if (uVar15 <= uVar9) {
            uVar7 = 0;
            if (uVar15 != 0) {
              uVar7 = uVar9 / uVar15;
            }
            unaff_x21 = uVar9 - uVar7 * uVar15;
          }
        }
        plVar11 = *(long **)(*plVar1 + unaff_x21 * 8);
        if (plVar11 == (long *)0x0) goto LAB_01e63968;
        if (uVar10 < 2) {
          do {
            plVar11 = (long *)*plVar11;
            if ((plVar11 == (long *)0x0) ||
               (plVar11[1] != uVar9 && (plVar11[1] & uVar15 - 1) != unaff_x21)) goto LAB_01e63968;
          } while (plVar11[2] != uVar9);
        }
        else {
          do {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_01e63968;
            uVar10 = plVar11[1];
            if (uVar10 != uVar9) {
              if (uVar15 <= uVar10) {
                uVar7 = 0;
                if (uVar15 != 0) {
                  uVar7 = uVar10 / uVar15;
                }
                uVar10 = uVar10 - uVar7 * uVar15;
              }
              if (uVar10 != unaff_x21) goto LAB_01e63968;
            }
          } while (plVar11[2] != uVar9);
        }
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar4);
  }
  puVar8 = *(uint **)(*(long *)(param_1 + 0x520) + 0x250);
  piVar3 = (int *)((long)puVar8 + (ulong)*puVar8);
  puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (4 - (long)*piVar3)));
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  puVar8 = puVar4 + 1;
  uVar9 = (ulong)*puVar4;
  if (uVar9 != 0) {
    puVar4 = puVar8 + uVar9;
    plVar1 = (long *)(param_1 + 0x830);
    plVar2 = (long *)(param_1 + 0x860);
    do {
      piVar3 = (int *)((long)puVar8 + (ulong)*puVar8);
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
         (uVar9 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar9 == 0)) {
        uVar9 = 0;
        uVar15 = *(ulong *)(param_1 + 0x838);
        if (uVar15 != 0) goto LAB_01e63cac;
LAB_01e63d74:
        plVar11 = (long *)(**(code **)(**(long **)(param_1 + 0x868) + 0x10))
                                    (*(long **)(param_1 + 0x868),0x20,8);
        if (plVar11 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x868) + 0xb8))();
        }
        uVar14 = *(undefined8 *)(param_1 + 0x868);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), iVar5 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar6 == 0) {
          plVar11[2] = uVar9;
          plVar11[3] = (long)piVar3;
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01e64430;
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar14;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          plVar11[2] = uVar9;
          plVar11[3] = (long)piVar3;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        *plVar11 = 0;
        plVar11[1] = uVar9;
        fVar16 = (float)(*(long *)(param_1 + 0x888) + 1);
        if ((uVar15 == 0) || (*(float *)(param_1 + 0x890) * (float)uVar15 < fVar16)) {
          uVar15 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
          uVar10 = (ulong)(fVar16 / *(float *)(param_1 + 0x890));
          if (uVar10 <= uVar15) {
            uVar10 = uVar15;
          }
          if (uVar10 - 1 == 0) {
            uVar10 = 2;
          }
          else if ((uVar10 & uVar10 - 1) != 0) {
            uVar10 = std::__next_prime(uVar10);
          }
          uVar15 = *(ulong *)(param_1 + 0x838);
          if (uVar15 < uVar10) {
            uVar7 = uVar10;
LAB_01e63e6c:
            FUN_01e7160c(plVar1,uVar7);
          }
          else if (uVar10 < uVar15) {
            uVar7 = (ulong)((float)*(ulong *)(param_1 + 0x888) / *(float *)(param_1 + 0x890));
            if ((uVar15 < 3) ||
               (uVar13 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
               uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333),
               1 < (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar7 = std::__next_prime(uVar7);
            }
            else if (1 < uVar7) {
              uVar7 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar7 - 1) & 0x3f);
            }
            if (uVar7 <= uVar10) {
              uVar7 = uVar10;
            }
            if (uVar7 < uVar15) goto LAB_01e63e6c;
          }
          uVar15 = *(ulong *)(param_1 + 0x838);
          if ((uVar15 & uVar15 - 1) == 0) {
            unaff_x21 = uVar15 - 1 & uVar9;
          }
          else if (uVar9 < uVar15) {
            unaff_x21 = uVar9;
          }
          else {
            uVar10 = 0;
            if (uVar15 != 0) {
              uVar10 = uVar9 / uVar15;
            }
            unaff_x21 = uVar9 - uVar10 * uVar15;
          }
        }
        plVar12 = *(long **)(*plVar1 + unaff_x21 * 8);
        if (plVar12 == (long *)0x0) {
          *plVar11 = *plVar2;
          *plVar2 = (long)plVar11;
          *(long **)(*plVar1 + unaff_x21 * 8) = plVar2;
          if (*plVar11 != 0) {
            uVar9 = *(ulong *)(*plVar11 + 8);
            if ((uVar15 & uVar15 - 1) == 0) {
              uVar9 = uVar9 & uVar15 - 1;
            }
            else if (uVar15 <= uVar9) {
              uVar10 = 0;
              if (uVar15 != 0) {
                uVar10 = uVar9 / uVar15;
              }
              uVar9 = uVar9 - uVar10 * uVar15;
            }
            plVar12 = (long *)(*plVar1 + uVar9 * 8);
            goto LAB_01e63c60;
          }
        }
        else {
          *plVar11 = *plVar12;
LAB_01e63c60:
          *plVar12 = (long)plVar11;
        }
        *(long *)(param_1 + 0x888) = *(long *)(param_1 + 0x888) + 1;
      }
      else {
        uVar9 = *(ulong *)((long)piVar3 + uVar9);
        uVar15 = *(ulong *)(param_1 + 0x838);
        if (uVar15 == 0) goto LAB_01e63d74;
LAB_01e63cac:
        uVar10 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
        uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
        uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar10 < 2) {
          unaff_x21 = uVar15 - 1 & uVar9;
        }
        else {
          unaff_x21 = uVar9;
          if (uVar15 <= uVar9) {
            uVar7 = 0;
            if (uVar15 != 0) {
              uVar7 = uVar9 / uVar15;
            }
            unaff_x21 = uVar9 - uVar7 * uVar15;
          }
        }
        plVar11 = *(long **)(*plVar1 + unaff_x21 * 8);
        if (plVar11 == (long *)0x0) goto LAB_01e63d74;
        if (uVar10 < 2) {
          do {
            plVar11 = (long *)*plVar11;
            if ((plVar11 == (long *)0x0) ||
               (plVar11[1] != uVar9 && (plVar11[1] & uVar15 - 1) != unaff_x21)) goto LAB_01e63d74;
          } while (plVar11[2] != uVar9);
        }
        else {
          do {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_01e63d74;
            uVar10 = plVar11[1];
            if (uVar10 != uVar9) {
              if (uVar15 <= uVar10) {
                uVar7 = 0;
                if (uVar15 != 0) {
                  uVar7 = uVar10 / uVar15;
                }
                uVar10 = uVar10 - uVar7 * uVar15;
              }
              if (uVar10 != unaff_x21) goto LAB_01e63d74;
            }
          } while (plVar11[2] != uVar9);
        }
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar4);
  }
  puVar8 = *(uint **)(*(long *)(param_1 + 0x580) + 0x250);
  piVar3 = (int *)((long)puVar8 + (ulong)*puVar8);
  puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (4 - (long)*piVar3)));
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  puVar8 = puVar4 + 1;
  uVar9 = (ulong)*puVar4;
  if (uVar9 != 0) {
    puVar4 = puVar8 + uVar9;
    plVar1 = (long *)(param_1 + 0x900);
    plVar2 = (long *)(param_1 + 0x930);
    do {
      piVar3 = (int *)((long)puVar8 + (ulong)*puVar8);
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
         (uVar9 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar9 == 0)) {
        uVar9 = 0;
        uVar15 = *(ulong *)(param_1 + 0x908);
        if (uVar15 != 0) goto LAB_01e640b8;
LAB_01e64180:
        plVar11 = (long *)(**(code **)(**(long **)(param_1 + 0x938) + 0x10))
                                    (*(long **)(param_1 + 0x938),0x20,8);
        if (plVar11 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x938) + 0xb8))();
        }
        uVar14 = *(undefined8 *)(param_1 + 0x938);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), iVar5 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar6 == 0) {
          plVar11[2] = uVar9;
          plVar11[3] = (long)piVar3;
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_01e64430:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar14;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          plVar11[2] = uVar9;
          plVar11[3] = (long)piVar3;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        *plVar11 = 0;
        plVar11[1] = uVar9;
        fVar16 = (float)(*(long *)(param_1 + 0x958) + 1);
        if ((uVar15 == 0) || (*(float *)(param_1 + 0x960) * (float)uVar15 < fVar16)) {
          uVar15 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
          uVar10 = (ulong)(fVar16 / *(float *)(param_1 + 0x960));
          if (uVar10 <= uVar15) {
            uVar10 = uVar15;
          }
          if (uVar10 - 1 == 0) {
            uVar10 = 2;
          }
          else if ((uVar10 & uVar10 - 1) != 0) {
            uVar10 = std::__next_prime(uVar10);
          }
          uVar15 = *(ulong *)(param_1 + 0x908);
          if (uVar15 < uVar10) {
            uVar7 = uVar10;
LAB_01e64278:
            FUN_01e71a68(plVar1,uVar7);
          }
          else if (uVar10 < uVar15) {
            uVar7 = (ulong)((float)*(ulong *)(param_1 + 0x958) / *(float *)(param_1 + 0x960));
            if ((uVar15 < 3) ||
               (uVar13 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
               uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333),
               1 < (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar7 = std::__next_prime(uVar7);
            }
            else if (1 < uVar7) {
              uVar7 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar7 - 1) & 0x3f);
            }
            if (uVar7 <= uVar10) {
              uVar7 = uVar10;
            }
            if (uVar7 < uVar15) goto LAB_01e64278;
          }
          uVar15 = *(ulong *)(param_1 + 0x908);
          if ((uVar15 & uVar15 - 1) == 0) {
            unaff_x21 = uVar15 - 1 & uVar9;
          }
          else if (uVar9 < uVar15) {
            unaff_x21 = uVar9;
          }
          else {
            uVar10 = 0;
            if (uVar15 != 0) {
              uVar10 = uVar9 / uVar15;
            }
            unaff_x21 = uVar9 - uVar10 * uVar15;
          }
        }
        plVar12 = *(long **)(*plVar1 + unaff_x21 * 8);
        if (plVar12 == (long *)0x0) {
          *plVar11 = *plVar2;
          *plVar2 = (long)plVar11;
          *(long **)(*plVar1 + unaff_x21 * 8) = plVar2;
          if (*plVar11 != 0) {
            uVar9 = *(ulong *)(*plVar11 + 8);
            if ((uVar15 & uVar15 - 1) == 0) {
              uVar9 = uVar9 & uVar15 - 1;
            }
            else if (uVar15 <= uVar9) {
              uVar10 = 0;
              if (uVar15 != 0) {
                uVar10 = uVar9 / uVar15;
              }
              uVar9 = uVar9 - uVar10 * uVar15;
            }
            plVar12 = (long *)(*plVar1 + uVar9 * 8);
            goto LAB_01e6406c;
          }
        }
        else {
          *plVar11 = *plVar12;
LAB_01e6406c:
          *plVar12 = (long)plVar11;
        }
        *(long *)(param_1 + 0x958) = *(long *)(param_1 + 0x958) + 1;
      }
      else {
        uVar9 = *(ulong *)((long)piVar3 + uVar9);
        uVar15 = *(ulong *)(param_1 + 0x908);
        if (uVar15 == 0) goto LAB_01e64180;
LAB_01e640b8:
        uVar10 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
        uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
        uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar10 < 2) {
          unaff_x21 = uVar15 - 1 & uVar9;
        }
        else {
          unaff_x21 = uVar9;
          if (uVar15 <= uVar9) {
            uVar7 = 0;
            if (uVar15 != 0) {
              uVar7 = uVar9 / uVar15;
            }
            unaff_x21 = uVar9 - uVar7 * uVar15;
          }
        }
        plVar11 = *(long **)(*plVar1 + unaff_x21 * 8);
        if (plVar11 == (long *)0x0) goto LAB_01e64180;
        if (uVar10 < 2) {
          do {
            plVar11 = (long *)*plVar11;
            if ((plVar11 == (long *)0x0) ||
               (plVar11[1] != uVar9 && (plVar11[1] & uVar15 - 1) != unaff_x21)) goto LAB_01e64180;
          } while (plVar11[2] != uVar9);
        }
        else {
          do {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_01e64180;
            uVar10 = plVar11[1];
            if (uVar10 != uVar9) {
              if (uVar15 <= uVar10) {
                uVar7 = 0;
                if (uVar15 != 0) {
                  uVar7 = uVar10 / uVar15;
                }
                uVar10 = uVar10 - uVar7 * uVar15;
              }
              if (uVar10 != unaff_x21) goto LAB_01e64180;
            }
          } while (plVar11[2] != uVar9);
        }
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar4);
  }
  return;
}


