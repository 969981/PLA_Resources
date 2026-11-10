/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016144bc; name: FUN_016144bc
 */


void FUN_016144bc(long param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong unaff_x26;
  undefined8 uVar14;
  float fVar15;
  
  puVar7 = *(uint **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x250);
  piVar3 = (int *)((long)puVar7 + (ulong)*puVar7);
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
     (uVar11 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar11 == 0)) {
    puVar7 = (uint *)0x0;
  }
  else {
    puVar7 = (uint *)((long)piVar3 + uVar11);
    puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
  }
  plVar1 = (long *)(param_1 + 0x98);
  fVar15 = (float)NEON_ucvtf(*puVar7);
  FUN_01615af0(plVar1,(long)(fVar15 / *(float *)(param_1 + 0xf8)));
  if (*puVar7 != 0) {
    uVar11 = 0;
    plVar2 = (long *)(param_1 + 200);
    do {
      piVar3 = (int *)((long)(puVar7 + uVar11 + 1) + (ulong)puVar7[uVar11 + 1]);
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
         (uVar8 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar8 == 0)) {
        uVar8 = 0;
        uVar12 = *(ulong *)(param_1 + 0xa0);
        if (uVar12 != 0) goto LAB_01614590;
LAB_016145e8:
        plVar13 = (long *)(**(code **)(**(long **)(param_1 + 0xd0) + 0x10))
                                    (*(long **)(param_1 + 0xd0),0x20,8);
        if (plVar13 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0xd0) + 0xb8))();
        }
        uVar14 = *(undefined8 *)(param_1 + 0xd0);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), iVar5 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar6 == 0) {
          plVar13[2] = uVar8;
          plVar13[3] = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar14;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          plVar13[2] = uVar8;
          plVar13[3] = 0;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        *plVar13 = 0;
        plVar13[1] = uVar8;
        fVar15 = (float)(*(long *)(param_1 + 0xf0) + 1);
        if ((uVar12 == 0) || (*(float *)(param_1 + 0xf8) * (float)uVar12 < fVar15)) {
          uVar12 = (ulong)(uVar12 < 3 || (uVar12 & uVar12 - 1) != 0) | uVar12 << 1;
          uVar9 = (ulong)(fVar15 / *(float *)(param_1 + 0xf8));
          if (uVar9 <= uVar12) {
            uVar9 = uVar12;
          }
          FUN_01615af0(plVar1,uVar9);
          uVar12 = *(ulong *)(param_1 + 0xa0);
          if ((uVar12 & uVar12 - 1) == 0) {
            unaff_x26 = uVar12 - 1 & uVar8;
          }
          else if (uVar8 < uVar12) {
            unaff_x26 = uVar8;
          }
          else {
            uVar9 = 0;
            if (uVar12 != 0) {
              uVar9 = uVar8 / uVar12;
            }
            unaff_x26 = uVar8 - uVar9 * uVar12;
          }
        }
        plVar10 = *(long **)(*plVar1 + unaff_x26 * 8);
        if (plVar10 == (long *)0x0) {
          *plVar13 = *plVar2;
          *plVar2 = (long)plVar13;
          *(long **)(*plVar1 + unaff_x26 * 8) = plVar2;
          if (*plVar13 != 0) {
            uVar8 = *(ulong *)(*plVar13 + 8);
            if ((uVar12 & uVar12 - 1) == 0) {
              uVar8 = uVar8 & uVar12 - 1;
            }
            else if (uVar12 <= uVar8) {
              uVar9 = 0;
              if (uVar12 != 0) {
                uVar9 = uVar8 / uVar12;
              }
              uVar8 = uVar8 - uVar9 * uVar12;
            }
            plVar10 = (long *)(*plVar1 + uVar8 * 8);
            goto LAB_016146d8;
          }
        }
        else {
          *plVar13 = *plVar10;
LAB_016146d8:
          *plVar10 = (long)plVar13;
        }
        *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + 1;
      }
      else {
        uVar8 = *(ulong *)((long)piVar3 + uVar8);
        uVar12 = *(ulong *)(param_1 + 0xa0);
        if (uVar12 == 0) goto LAB_016145e8;
LAB_01614590:
        uVar9 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
        uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar9 < 2) {
          unaff_x26 = uVar12 - 1 & uVar8;
        }
        else {
          unaff_x26 = uVar8;
          if (uVar12 <= uVar8) {
            uVar4 = 0;
            if (uVar12 != 0) {
              uVar4 = uVar8 / uVar12;
            }
            unaff_x26 = uVar8 - uVar4 * uVar12;
          }
        }
        plVar13 = *(long **)(*plVar1 + unaff_x26 * 8);
        if (plVar13 == (long *)0x0) goto LAB_016145e8;
        if (uVar9 < 2) {
          do {
            plVar13 = (long *)*plVar13;
            if ((plVar13 == (long *)0x0) ||
               (plVar13[1] != uVar8 && (plVar13[1] & uVar12 - 1) != unaff_x26)) goto LAB_016145e8;
          } while (plVar13[2] != uVar8);
        }
        else {
          do {
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) goto LAB_016145e8;
            uVar9 = plVar13[1];
            if (uVar9 != uVar8) {
              if (uVar12 <= uVar9) {
                uVar4 = 0;
                if (uVar12 != 0) {
                  uVar4 = uVar9 / uVar12;
                }
                uVar9 = uVar9 - uVar4 * uVar12;
              }
              if (uVar9 != unaff_x26) goto LAB_016145e8;
            }
          } while (plVar13[2] != uVar8);
        }
      }
      plVar13[3] = (long)piVar3;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *puVar7);
  }
  return;
}


