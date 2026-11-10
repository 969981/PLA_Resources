/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018bfd60; name: FUN_018bfd60
 */


void FUN_018bfd60(long param_1)

{
  long *plVar1;
  long *plVar2;
  char *__s;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  ulong uVar7;
  int iVar8;
  size_t sVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ushort *puVar15;
  byte *pbVar16;
  ulong uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  float fVar22;
  
  puVar11 = *(uint **)(*(long *)(param_1 + 0x100) + 0x250);
  piVar3 = (int *)((long)puVar11 + (ulong)*puVar11);
  puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (4 - (long)*piVar3)));
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  puVar11 = puVar4 + 1;
  uVar12 = (ulong)*puVar4;
  if (uVar12 != 0) {
    puVar4 = puVar11 + uVar12;
    plVar1 = (long *)(param_1 + 0x358);
    plVar2 = (long *)(param_1 + 0x388);
    do {
      piVar3 = (int *)((long)puVar11 + (ulong)*puVar11);
      puVar15 = (ushort *)((long)piVar3 - (long)*piVar3);
      if (*puVar15 < 5) {
        uVar20 = 0;
        uVar12 = 0;
      }
      else {
        if ((ulong)puVar15[2] == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = *(ulong *)((long)piVar3 + (ulong)puVar15[2]);
        }
        if ((*puVar15 < 7) || ((ulong)puVar15[3] == 0)) {
          uVar12 = 0;
        }
        else {
          puVar5 = (uint *)((long)piVar3 + (ulong)puVar15[3]);
          uVar12 = (long)puVar5 + (ulong)*puVar5;
        }
      }
      __s = (char *)(uVar12 + 4);
      sVar9 = strlen(__s);
      bVar6 = *(byte *)(uVar12 + 4);
      puVar18 = &DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        puVar18 = &DAT_cbf29ce484222645;
        pbVar16 = (byte *)(uVar12 + 5);
        do {
          puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar6 != 0);
      }
      uVar19 = *(ulong *)(param_1 + 0x360);
      if (uVar19 == 0) {
LAB_018bfec4:
        plVar13 = (long *)(**(code **)(**(long **)(param_1 + 0x390) + 0x10))
                                    (*(long **)(param_1 + 0x390),0x38,8);
        if (plVar13 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x390) + 0xb8))();
        }
        uVar21 = *(undefined8 *)(param_1 + 0x390);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), iVar8 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar10 != 0) {
          if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar21;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        }
        plVar13[2] = uVar20;
        plVar13[3] = (long)puVar18;
        plVar13[6] = 0;
        plVar13[4] = (long)__s;
        plVar13[5] = sVar9;
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
        *plVar13 = 0;
        plVar13[1] = uVar20;
        fVar22 = (float)(*(long *)(param_1 + 0x3b0) + 1);
        if ((uVar19 == 0) || (*(float *)(param_1 + 0x3b8) * (float)uVar19 < fVar22)) {
          uVar12 = (ulong)(uVar19 < 3 || (uVar19 & uVar19 - 1) != 0) | uVar19 << 1;
          uVar19 = (ulong)(fVar22 / *(float *)(param_1 + 0x3b8));
          if (uVar19 <= uVar12) {
            uVar19 = uVar12;
          }
          FUN_00b7df98(plVar1,uVar19);
          uVar19 = *(ulong *)(param_1 + 0x360);
          if ((uVar19 & uVar19 - 1) == 0) {
            uVar12 = uVar19 - 1 & uVar20;
          }
          else if (uVar20 < uVar19) {
            uVar12 = uVar20;
          }
          else {
            uVar12 = 0;
            if (uVar19 != 0) {
              uVar12 = uVar20 / uVar19;
            }
            uVar12 = uVar20 - uVar12 * uVar19;
          }
        }
        plVar14 = *(long **)(*plVar1 + uVar12 * 8);
        if (plVar14 == (long *)0x0) {
          *plVar13 = *plVar2;
          *plVar2 = (long)plVar13;
          *(long **)(*plVar1 + uVar12 * 8) = plVar2;
          if (*plVar13 != 0) {
            uVar12 = *(ulong *)(*plVar13 + 8);
            if ((uVar19 & uVar19 - 1) == 0) {
              uVar12 = uVar12 & uVar19 - 1;
            }
            else if (uVar19 <= uVar12) {
              uVar20 = 0;
              if (uVar19 != 0) {
                uVar20 = uVar12 / uVar19;
              }
              uVar12 = uVar12 - uVar20 * uVar19;
            }
            plVar14 = (long *)(*plVar1 + uVar12 * 8);
            goto LAB_018bffd4;
          }
        }
        else {
          *plVar13 = *plVar14;
LAB_018bffd4:
          *plVar14 = (long)plVar13;
        }
        *(long *)(param_1 + 0x3b0) = *(long *)(param_1 + 0x3b0) + 1;
      }
      else {
        uVar12 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar17 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          uVar12 = uVar19 - 1 & uVar20;
        }
        else {
          uVar12 = uVar20;
          if (uVar19 <= uVar20) {
            uVar12 = 0;
            if (uVar19 != 0) {
              uVar12 = uVar20 / uVar19;
            }
            uVar12 = uVar20 - uVar12 * uVar19;
          }
        }
        plVar13 = *(long **)(*plVar1 + uVar12 * 8);
        if (plVar13 == (long *)0x0) goto LAB_018bfec4;
        if (uVar17 < 2) {
          do {
            plVar13 = (long *)*plVar13;
            if ((plVar13 == (long *)0x0) ||
               (plVar13[1] != uVar20 && (plVar13[1] & uVar19 - 1) != uVar12)) goto LAB_018bfec4;
          } while (plVar13[2] != uVar20);
        }
        else {
          do {
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) goto LAB_018bfec4;
            uVar17 = plVar13[1];
            if (uVar17 != uVar20) {
              if (uVar19 <= uVar17) {
                uVar7 = 0;
                if (uVar19 != 0) {
                  uVar7 = uVar17 / uVar19;
                }
                uVar17 = uVar17 - uVar7 * uVar19;
              }
              if (uVar17 != uVar12) goto LAB_018bfec4;
            }
          } while (plVar13[2] != uVar20);
        }
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar4);
  }
  return;
}


