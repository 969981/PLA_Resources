/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b549b0; name: FUN_00b549b0
 */


void FUN_00b549b0(long param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong unaff_x22;
  ulong uVar14;
  undefined8 uVar15;
  float fVar16;
  
  plVar1 = (long *)(param_1 + 0xb8);
  FUN_00b583f0(plVar1);
  puVar9 = *(uint **)(*(long *)(param_1 + 0x90) + 0x250);
  piVar3 = (int *)((long)puVar9 + (ulong)*puVar9);
  puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (4 - (long)*piVar3)));
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  puVar9 = puVar4 + 1;
  uVar5 = *puVar4;
  if (uVar5 != 0) {
    puVar4 = puVar9 + uVar5;
    plVar2 = (long *)(param_1 + 0xe8);
    do {
      piVar3 = (int *)((long)puVar9 + (ulong)*puVar9);
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
         (uVar10 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar10 == 0)) {
        uVar10 = 0;
        uVar14 = *(ulong *)(param_1 + 0xc0);
        if (uVar14 != 0) goto LAB_00b54a4c;
LAB_00b54af4:
        plVar12 = (long *)(**(code **)(**(long **)(param_1 + 0xf0) + 0x10))
                                    (*(long **)(param_1 + 0xf0),0x20,8);
        if (plVar12 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0xf0) + 0xb8))();
        }
        uVar15 = *(undefined8 *)(param_1 + 0xf0);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), iVar7 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar8 == 0) {
          plVar12[2] = uVar10;
          plVar12[3] = (long)piVar3;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar15;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          plVar12[2] = uVar10;
          plVar12[3] = (long)piVar3;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        *plVar12 = 0;
        plVar12[1] = uVar10;
        fVar16 = (float)(*(long *)(param_1 + 0x110) + 1);
        if ((uVar14 == 0) || (*(float *)(param_1 + 0x118) * (float)uVar14 < fVar16)) {
          uVar14 = (ulong)(uVar14 < 3 || (uVar14 & uVar14 - 1) != 0) | uVar14 << 1;
          uVar11 = (ulong)(fVar16 / *(float *)(param_1 + 0x118));
          if (uVar11 <= uVar14) {
            uVar11 = uVar14;
          }
          FUN_00b584ac(plVar1,uVar11);
          uVar14 = *(ulong *)(param_1 + 0xc0);
          if ((uVar14 & uVar14 - 1) == 0) {
            unaff_x22 = uVar14 - 1 & uVar10;
          }
          else if (uVar10 < uVar14) {
            unaff_x22 = uVar10;
          }
          else {
            uVar11 = 0;
            if (uVar14 != 0) {
              uVar11 = uVar10 / uVar14;
            }
            unaff_x22 = uVar10 - uVar11 * uVar14;
          }
        }
        plVar13 = *(long **)(*plVar1 + unaff_x22 * 8);
        if (plVar13 == (long *)0x0) {
          *plVar12 = *plVar2;
          *plVar2 = (long)plVar12;
          *(long **)(*plVar1 + unaff_x22 * 8) = plVar2;
          if (*plVar12 != 0) {
            uVar10 = *(ulong *)(*plVar12 + 8);
            if ((uVar14 & uVar14 - 1) == 0) {
              uVar10 = uVar10 & uVar14 - 1;
            }
            else if (uVar14 <= uVar10) {
              uVar11 = 0;
              if (uVar14 != 0) {
                uVar11 = uVar10 / uVar14;
              }
              uVar10 = uVar10 - uVar11 * uVar14;
            }
            plVar13 = (long *)(*plVar1 + uVar10 * 8);
            goto LAB_00b54be0;
          }
        }
        else {
          *plVar12 = *plVar13;
LAB_00b54be0:
          *plVar13 = (long)plVar12;
        }
        *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + 1;
      }
      else {
        uVar10 = *(ulong *)((long)piVar3 + uVar10);
        uVar14 = *(ulong *)(param_1 + 0xc0);
        if (uVar14 == 0) goto LAB_00b54af4;
LAB_00b54a4c:
        uVar11 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          unaff_x22 = uVar14 - 1 & uVar10;
        }
        else {
          unaff_x22 = uVar10;
          if (uVar14 <= uVar10) {
            uVar6 = 0;
            if (uVar14 != 0) {
              uVar6 = uVar10 / uVar14;
            }
            unaff_x22 = uVar10 - uVar6 * uVar14;
          }
        }
        plVar12 = *(long **)(*plVar1 + unaff_x22 * 8);
        if (plVar12 == (long *)0x0) goto LAB_00b54af4;
        if (uVar11 < 2) {
          do {
            plVar12 = (long *)*plVar12;
            if ((plVar12 == (long *)0x0) ||
               (plVar12[1] != uVar10 && (plVar12[1] & uVar14 - 1) != unaff_x22)) goto LAB_00b54af4;
          } while (plVar12[2] != uVar10);
        }
        else {
          do {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_00b54af4;
            uVar11 = plVar12[1];
            if (uVar11 != uVar10) {
              if (uVar14 <= uVar11) {
                uVar6 = 0;
                if (uVar14 != 0) {
                  uVar6 = uVar11 / uVar14;
                }
                uVar11 = uVar11 - uVar6 * uVar14;
              }
              if (uVar11 != unaff_x22) goto LAB_00b54af4;
            }
          } while (plVar12[2] != uVar10);
        }
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar4);
  }
  return;
}


