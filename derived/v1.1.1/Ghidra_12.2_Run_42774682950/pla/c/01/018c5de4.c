/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018c5de4; name: FUN_018c5de4
 */


void FUN_018c5de4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  uint *puVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  float fVar17;
  
  FUN_018c736c(param_1 + 0x100,param_3);
  FUN_00b26ad8(param_1 + 0x68,param_2);
  puVar10 = *(uint **)(*(long *)(param_1 + 0x70) + 0x250);
  piVar3 = (int *)((long)puVar10 + (ulong)*puVar10);
  puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (4 - (long)*piVar3)));
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  puVar10 = puVar4 + 1;
  uVar11 = (ulong)*puVar4;
  if (uVar11 != 0) {
    puVar4 = puVar10 + uVar11;
    plVar1 = (long *)(param_1 + 0x98);
    plVar2 = (long *)(param_1 + 200);
    do {
      piVar3 = (int *)((long)puVar10 + (ulong)*puVar10);
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
         (uVar11 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar11 == 0)) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(ulong *)((long)piVar3 + uVar11);
      }
      plVar8 = (long *)(**(code **)(**(long **)(param_1 + 0xd0) + 0x10))
                                 (*(long **)(param_1 + 0xd0),0x20,8);
      if (plVar8 == (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0xd0) + 0xb8))();
      }
      uVar16 = *(undefined8 *)(param_1 + 0xd0);
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), iVar7 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (lVar9 == 0) {
        plVar8[2] = uVar11;
        plVar8[3] = (long)piVar3;
      }
      else {
        if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar16;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        plVar8[2] = uVar11;
        plVar8[3] = (long)piVar3;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        uVar11 = plVar8[2];
      }
      *plVar8 = 0;
      plVar8[1] = uVar11;
      uVar15 = *(ulong *)(param_1 + 0xa0);
      if (uVar15 == 0) {
LAB_018c5fa0:
        fVar17 = (float)(*(long *)(param_1 + 0xf0) + 1);
        if ((uVar15 == 0) || (*(float *)(param_1 + 0xf8) * (float)uVar15 < fVar17)) {
          uVar11 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
          uVar12 = (ulong)(fVar17 / *(float *)(param_1 + 0xf8));
          if (uVar12 <= uVar11) {
            uVar12 = uVar11;
          }
          if (uVar12 - 1 == 0) {
            uVar12 = 2;
            bVar6 = uVar15 < 3;
            uVar11 = uVar12;
            if (1 < uVar15) goto LAB_018c613c;
LAB_018c60dc:
            FUN_018c75e4(plVar1,uVar11);
          }
          else {
            if ((uVar12 & uVar12 - 1) != 0) {
              uVar12 = std::__next_prime(uVar12);
              uVar15 = *(ulong *)(param_1 + 0xa0);
            }
            bVar6 = uVar15 <= uVar12;
            uVar11 = uVar12;
            if (uVar15 < uVar12) goto LAB_018c60dc;
LAB_018c613c:
            if (!bVar6) {
              uVar11 = (ulong)((float)*(ulong *)(param_1 + 0xf0) / *(float *)(param_1 + 0xf8));
              if ((uVar15 < 3) ||
                 (uVar13 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
                 uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333),
                 1 < (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                uVar11 = std::__next_prime(uVar11);
              }
              else if (1 < uVar11) {
                uVar11 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar11 - 1) & 0x3f);
              }
              if (uVar11 <= uVar12) {
                uVar11 = uVar12;
              }
              if (uVar11 < uVar15) goto LAB_018c60dc;
            }
          }
          uVar15 = *(ulong *)(param_1 + 0xa0);
          uVar11 = plVar8[1];
        }
        uVar12 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar12 < 2) {
          uVar11 = uVar15 - 1 & uVar11;
        }
        else if (uVar15 <= uVar11) {
          uVar13 = 0;
          if (uVar15 != 0) {
            uVar13 = uVar11 / uVar15;
          }
          uVar11 = uVar11 - uVar13 * uVar15;
        }
        plVar14 = *(long **)(*plVar1 + uVar11 * 8);
        if (plVar14 == (long *)0x0) {
          *plVar8 = *plVar2;
          *plVar2 = (long)plVar8;
          *(long **)(*plVar1 + uVar11 * 8) = plVar2;
          if (*plVar8 != 0) {
            uVar11 = *(ulong *)(*plVar8 + 8);
            if (uVar12 < 2) {
              uVar11 = uVar11 & uVar15 - 1;
            }
            else if (uVar15 <= uVar11) {
              uVar12 = 0;
              if (uVar15 != 0) {
                uVar12 = uVar11 / uVar15;
              }
              uVar11 = uVar11 - uVar12 * uVar15;
            }
            plVar14 = (long *)(*plVar1 + uVar11 * 8);
            goto LAB_018c6054;
          }
        }
        else {
          *plVar8 = *plVar14;
LAB_018c6054:
          *plVar14 = (long)plVar8;
        }
        *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + 1;
      }
      else {
        uVar12 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar12 < 2) {
          uVar13 = uVar15 - 1 & uVar11;
        }
        else {
          uVar13 = uVar11;
          if (uVar15 <= uVar11) {
            uVar13 = 0;
            if (uVar15 != 0) {
              uVar13 = uVar11 / uVar15;
            }
            uVar13 = uVar11 - uVar13 * uVar15;
          }
        }
        plVar14 = *(long **)(*plVar1 + uVar13 * 8);
        if (plVar14 == (long *)0x0) goto LAB_018c5fa0;
        if (uVar12 < 2) {
          do {
            plVar14 = (long *)*plVar14;
            if ((plVar14 == (long *)0x0) || ((plVar14[1] & uVar15 - 1) != uVar13))
            goto LAB_018c5fa0;
          } while (plVar14[2] != uVar11);
        }
        else {
          do {
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) goto LAB_018c5fa0;
            uVar12 = plVar14[1];
            if (uVar15 <= uVar12) {
              uVar5 = 0;
              if (uVar15 != 0) {
                uVar5 = uVar12 / uVar15;
              }
              uVar12 = uVar12 - uVar5 * uVar15;
            }
            if (uVar12 != uVar13) goto LAB_018c5fa0;
          } while (plVar14[2] != uVar11);
        }
        if (plVar8 != (long *)0x0) {
          plVar14 = *(long **)(param_1 + 0xd0);
          uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
          if ((uVar11 & 1) != 0) {
            lVar9 = tpidr_el0;
            if (*(char *)(lVar9 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar9 + 0x38d488) = 1;
              *(undefined8 *)(lVar9 + 0x38d478) = 0;
              *(undefined8 *)(lVar9 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar9 + 0x38d480)) {
              FUN_02bcc824(plVar14,plVar8,0x20,8);
              goto LAB_018c6064;
            }
          }
          (**(code **)(*plVar14 + 0x18))(plVar14,plVar8,0x20,8);
        }
      }
LAB_018c6064:
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar4);
  }
  *(undefined1 *)(param_1 + 0x110) = 1;
  return;
}


