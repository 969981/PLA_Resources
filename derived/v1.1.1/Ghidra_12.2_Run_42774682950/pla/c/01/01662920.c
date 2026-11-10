/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01662920; name: FUN_01662920
 */


void FUN_01662920(long param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x24;
  long *plVar13;
  undefined8 uVar14;
  float fVar15;
  
  plVar1 = (long *)(param_1 + 0x78);
  FUN_016657d0(plVar1);
  puVar7 = *(uint **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x250);
  piVar3 = (int *)((long)puVar7 + (ulong)*puVar7);
  if (((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
      (uVar10 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar10 != 0)) &&
     (puVar7 = (uint *)((long)piVar3 + uVar10), puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7),
     puVar7 != (uint *)0x0)) {
    fVar15 = (float)NEON_ucvtf(*puVar7);
    FUN_01665878(plVar1,(long)(fVar15 / *(float *)(param_1 + 0xd8)));
    if (*puVar7 != 0) {
      uVar10 = 0;
      plVar2 = (long *)(param_1 + 0xa8);
      do {
        piVar3 = (int *)((long)(puVar7 + uVar10 + 1) + (ulong)puVar7[uVar10 + 1]);
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
           (uVar11 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar11 == 0)) {
          uVar12 = 0;
          uVar11 = *(ulong *)(param_1 + 0x80);
          if (uVar11 != 0) goto LAB_01662a00;
LAB_01662a58:
          plVar13 = (long *)(**(code **)(**(long **)(param_1 + 0xb0) + 0x10))
                                      (*(long **)(param_1 + 0xb0),0x20,8);
          if (plVar13 == (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0xb0) + 0xb8))();
          }
          uVar14 = *(undefined8 *)(param_1 + 0xb0);
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), iVar5 != 0)) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar6 == 0) {
            plVar13[2] = uVar12;
            *(undefined1 *)((long)plVar13 + 0x1a) = 0;
            *(undefined2 *)(plVar13 + 3) = 0xff00;
          }
          else {
            if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar14;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
            plVar13[2] = uVar12;
            *(undefined2 *)(plVar13 + 3) = 0xff00;
            *(undefined1 *)((long)plVar13 + 0x1a) = 0;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          }
          *plVar13 = 0;
          plVar13[1] = uVar12;
          fVar15 = (float)(*(long *)(param_1 + 0xd0) + 1);
          if ((uVar11 == 0) || (*(float *)(param_1 + 0xd8) * (float)uVar11 < fVar15)) {
            uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
            uVar8 = (ulong)(fVar15 / *(float *)(param_1 + 0xd8));
            if (uVar8 <= uVar11) {
              uVar8 = uVar11;
            }
            FUN_01665878(plVar1,uVar8);
            uVar11 = *(ulong *)(param_1 + 0x80);
            if ((uVar11 & uVar11 - 1) == 0) {
              unaff_x24 = uVar11 - 1 & uVar12;
            }
            else if (uVar12 < uVar11) {
              unaff_x24 = uVar12;
            }
            else {
              uVar8 = 0;
              if (uVar11 != 0) {
                uVar8 = uVar12 / uVar11;
              }
              unaff_x24 = uVar12 - uVar8 * uVar11;
            }
          }
          plVar9 = *(long **)(*plVar1 + unaff_x24 * 8);
          if (plVar9 == (long *)0x0) {
            *plVar13 = *plVar2;
            *plVar2 = (long)plVar13;
            *(long **)(*plVar1 + unaff_x24 * 8) = plVar2;
            if (*plVar13 != 0) {
              uVar12 = *(ulong *)(*plVar13 + 8);
              if ((uVar11 & uVar11 - 1) == 0) {
                uVar12 = uVar12 & uVar11 - 1;
              }
              else if (uVar11 <= uVar12) {
                uVar8 = 0;
                if (uVar11 != 0) {
                  uVar8 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar8 * uVar11;
              }
              plVar9 = (long *)(*plVar1 + uVar12 * 8);
              goto LAB_01662b50;
            }
          }
          else {
            *plVar13 = *plVar9;
LAB_01662b50:
            *plVar9 = (long)plVar13;
          }
          *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + 1;
        }
        else {
          uVar12 = *(ulong *)((long)piVar3 + uVar11);
          uVar11 = *(ulong *)(param_1 + 0x80);
          if (uVar11 == 0) goto LAB_01662a58;
LAB_01662a00:
          uVar8 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
          uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
          uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar8 < 2) {
            unaff_x24 = uVar11 - 1 & uVar12;
          }
          else {
            unaff_x24 = uVar12;
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              unaff_x24 = uVar12 - uVar4 * uVar11;
            }
          }
          plVar13 = *(long **)(*plVar1 + unaff_x24 * 8);
          if (plVar13 == (long *)0x0) goto LAB_01662a58;
          if (uVar8 < 2) {
            do {
              plVar13 = (long *)*plVar13;
              if ((plVar13 == (long *)0x0) ||
                 (plVar13[1] != uVar12 && (plVar13[1] & uVar11 - 1) != unaff_x24))
              goto LAB_01662a58;
            } while (plVar13[2] != uVar12);
          }
          else {
            do {
              plVar13 = (long *)*plVar13;
              if (plVar13 == (long *)0x0) goto LAB_01662a58;
              uVar8 = plVar13[1];
              if (uVar8 != uVar12) {
                if (uVar11 <= uVar8) {
                  uVar4 = 0;
                  if (uVar11 != 0) {
                    uVar4 = uVar8 / uVar11;
                  }
                  uVar8 = uVar8 - uVar4 * uVar11;
                }
                if (uVar8 != unaff_x24) goto LAB_01662a58;
              }
            } while (plVar13[2] != uVar12);
          }
        }
        *(undefined2 *)(plVar13 + 3) = 0xff00;
        uVar10 = uVar10 + 1;
        *(undefined1 *)((long)plVar13 + 0x1a) = 0;
      } while (uVar10 < *puVar7);
    }
  }
  return;
}


