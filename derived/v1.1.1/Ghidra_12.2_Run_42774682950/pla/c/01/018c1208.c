/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018c1208; name: FUN_018c1208
 */


void FUN_018c1208(long param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  ushort uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ushort *puVar14;
  undefined4 uVar15;
  ulong unaff_x22;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined4 uVar20;
  
  puVar10 = *(uint **)(*(long *)(param_1 + 400) + 0x250);
  piVar3 = (int *)((long)puVar10 + (ulong)*puVar10);
  puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (4 - (long)*piVar3)));
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  puVar10 = puVar4 + 1;
  uVar5 = *puVar4;
  if (uVar5 != 0) {
    puVar4 = puVar10 + uVar5;
    plVar1 = (long *)(param_1 + 0x490);
    plVar2 = (long *)(param_1 + 0x4c0);
    do {
      piVar3 = (int *)((long)puVar10 + (ulong)*puVar10);
      puVar14 = (ushort *)((long)piVar3 - (long)*piVar3);
      uVar6 = *puVar14;
      if (uVar6 < 5) {
        uVar15 = 0;
        uVar17 = 0;
LAB_018c1380:
        uVar20 = 0;
        uVar16 = *(ulong *)(param_1 + 0x498);
        if (uVar16 == 0) goto LAB_018c138c;
LAB_018c12cc:
        uVar11 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          unaff_x22 = uVar16 - 1 & uVar17;
        }
        else {
          unaff_x22 = uVar17;
          if (uVar16 <= uVar17) {
            uVar7 = 0;
            if (uVar16 != 0) {
              uVar7 = uVar17 / uVar16;
            }
            unaff_x22 = uVar17 - uVar7 * uVar16;
          }
        }
        plVar12 = *(long **)(*plVar1 + unaff_x22 * 8);
        if (plVar12 == (long *)0x0) goto LAB_018c138c;
        if (uVar11 < 2) {
          do {
            plVar12 = (long *)*plVar12;
            if ((plVar12 == (long *)0x0) ||
               (plVar12[1] != uVar17 && (plVar12[1] & uVar16 - 1) != unaff_x22)) goto LAB_018c138c;
          } while (plVar12[2] != uVar17);
        }
        else {
          do {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_018c138c;
            uVar11 = plVar12[1];
            if (uVar11 != uVar17) {
              if (uVar16 <= uVar11) {
                uVar7 = 0;
                if (uVar16 != 0) {
                  uVar7 = uVar11 / uVar16;
                }
                uVar11 = uVar11 - uVar7 * uVar16;
              }
              if (uVar11 != unaff_x22) goto LAB_018c138c;
            }
          } while (plVar12[2] != uVar17);
        }
      }
      else {
        if ((ulong)puVar14[2] == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = *(ulong *)((long)piVar3 + (ulong)puVar14[2]);
        }
        if (uVar6 < 7) {
          uVar15 = 0;
          goto LAB_018c1380;
        }
        if ((ulong)puVar14[3] == 0) {
          uVar15 = 0;
          if (8 < uVar6) goto LAB_018c12b8;
          goto LAB_018c1380;
        }
        uVar15 = *(undefined4 *)((long)piVar3 + (ulong)puVar14[3]);
        if (uVar6 < 9) goto LAB_018c1380;
LAB_018c12b8:
        if ((ulong)puVar14[4] == 0) goto LAB_018c1380;
        uVar20 = *(undefined4 *)((long)piVar3 + (ulong)puVar14[4]);
        uVar16 = *(ulong *)(param_1 + 0x498);
        if (uVar16 != 0) goto LAB_018c12cc;
LAB_018c138c:
        plVar12 = (long *)(**(code **)(**(long **)(param_1 + 0x4c8) + 0x10))
                                    (*(long **)(param_1 + 0x4c8),0x20,8);
        if (plVar12 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x4c8) + 0xb8))();
        }
        uVar18 = *(undefined8 *)(param_1 + 0x4c8);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), iVar8 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar9 == 0) {
          plVar12[2] = uVar17;
          *(undefined4 *)(plVar12 + 3) = uVar15;
          *(undefined4 *)((long)plVar12 + 0x1c) = uVar20;
        }
        else {
          if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar18;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          plVar12[2] = uVar17;
          *(undefined4 *)(plVar12 + 3) = uVar15;
          *(undefined4 *)((long)plVar12 + 0x1c) = uVar20;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        *plVar12 = 0;
        plVar12[1] = uVar17;
        fVar19 = (float)(*(long *)(param_1 + 0x4e8) + 1);
        if ((uVar16 == 0) || (*(float *)(param_1 + 0x4f0) * (float)uVar16 < fVar19)) {
          uVar16 = (ulong)(uVar16 < 3 || (uVar16 & uVar16 - 1) != 0) | uVar16 << 1;
          uVar11 = (ulong)(fVar19 / *(float *)(param_1 + 0x4f0));
          if (uVar11 <= uVar16) {
            uVar11 = uVar16;
          }
          FUN_018c55a0(plVar1,uVar11);
          uVar16 = *(ulong *)(param_1 + 0x498);
          if ((uVar16 & uVar16 - 1) == 0) {
            unaff_x22 = uVar16 - 1 & uVar17;
          }
          else if (uVar17 < uVar16) {
            unaff_x22 = uVar17;
          }
          else {
            uVar11 = 0;
            if (uVar16 != 0) {
              uVar11 = uVar17 / uVar16;
            }
            unaff_x22 = uVar17 - uVar11 * uVar16;
          }
        }
        plVar13 = *(long **)(*plVar1 + unaff_x22 * 8);
        if (plVar13 == (long *)0x0) {
          *plVar12 = *plVar2;
          *plVar2 = (long)plVar12;
          *(long **)(*plVar1 + unaff_x22 * 8) = plVar2;
          if (*plVar12 != 0) {
            uVar17 = *(ulong *)(*plVar12 + 8);
            if ((uVar16 & uVar16 - 1) == 0) {
              uVar17 = uVar17 & uVar16 - 1;
            }
            else if (uVar16 <= uVar17) {
              uVar11 = 0;
              if (uVar16 != 0) {
                uVar11 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar11 * uVar16;
            }
            plVar13 = (long *)(*plVar1 + uVar17 * 8);
            goto LAB_018c1444;
          }
        }
        else {
          *plVar12 = *plVar13;
LAB_018c1444:
          *plVar13 = (long)plVar12;
        }
        *(long *)(param_1 + 0x4e8) = *(long *)(param_1 + 0x4e8) + 1;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar4);
  }
  return;
}


