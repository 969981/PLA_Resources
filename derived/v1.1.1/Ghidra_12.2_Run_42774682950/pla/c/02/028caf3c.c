/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028caf3c; name: FUN_028caf3c
 */


void FUN_028caf3c(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  uint *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  uint *puVar16;
  ulong unaff_x26;
  ulong uVar17;
  long local_1e0;
  ulong local_1d8;
  long local_1d0;
  long local_1c8;
  long *local_1c0;
  long local_1b8;
  undefined1 auStack_1b0 [104];
  undefined1 auStack_148 [56];
  long local_110;
  undefined1 auStack_108 [104];
  undefined1 auStack_a0 [64];
  
  *param_1 = param_2;
  plVar14 = param_1 + 1;
  *plVar14 = 0;
  param_1[2] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar5 = DAT_043f1798;
  lVar8 = tpidr_el0;
  if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
      (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) &&
     (lVar7 = *(long *)(lVar8 + 0x20), *(long *)(lVar8 + 0x20) == 0)) {
    *(long *)(lVar8 + 0x20) = DAT_043f1798;
    lVar7 = lVar5;
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = lVar7;
  param_1[4] = 0xa0a0a0a0a0a0a0;
  param_1[7] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar5 = DAT_043f1798;
  if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
      (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) &&
     (lVar7 = *(long *)(lVar8 + 0x20), *(long *)(lVar8 + 0x20) == 0)) {
    *(long *)(lVar8 + 0x20) = DAT_043f1798;
    lVar7 = lVar5;
  }
  param_1[8] = lVar7;
  param_1[9] = 0xa0a0a0a0a0a0a0;
  piVar9 = (int *)*param_1;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  if (((piVar9 != (int *)0x0) && (6 < *(ushort *)((long)piVar9 - (long)*piVar9))) &&
     (uVar13 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar13 != 0)) {
    puVar2 = (uint *)((long)piVar9 + uVar13);
    puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
    if (*puVar2 != 0) {
      FUN_028cba40(plVar14,(long)(float)*puVar2);
      puVar16 = puVar2 + 1;
      if ((ulong)*puVar2 != 0) {
        puVar2 = puVar16 + *puVar2;
        plVar1 = param_1 + 7;
        do {
          FUN_028cc90c(&local_1e0,(long)puVar16 + (ulong)*puVar16);
          uVar13 = local_1d8;
          uVar17 = param_1[2];
          if (uVar17 == 0) {
LAB_028cb1f4:
            plVar11 = (long *)(**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],0x1a8,8);
            if (plVar11 == (long *)0x0) {
              (**(code **)(*(long *)param_1[8] + 0xb8))();
            }
            uVar15 = param_1[8];
            if (((*PTR_DAT_04379520 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0
               )) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
            lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (lVar8 != 0) {
              if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar15;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
            }
            plVar11[2] = local_1d8;
            plVar11[3] = local_1d0;
            plVar11[4] = local_1c8;
            plVar11[5] = (long)local_1c0;
            if (local_1c0 != (long *)0x0) {
              (**(code **)(*local_1c0 + 0x18))();
            }
            plVar11[6] = local_1e0;
            plVar11[7] = local_1d8;
            plVar11[8] = local_1d0;
            plVar11[9] = local_1c8;
            plVar11[10] = (long)local_1c0;
            if (local_1c0 != (long *)0x0) {
              (**(code **)(*local_1c0 + 0x18))();
            }
            plVar11[0xb] = local_1b8;
            FUN_028cbfa0(plVar11 + 0xc,auStack_1b0);
            FUN_028cc3dc(plVar11 + 0x19,auStack_148);
            plVar11[0x20] = local_110;
            FUN_028cbfa0(plVar11 + 0x21,auStack_108);
            FUN_028cc3dc(plVar11 + 0x2e,auStack_a0);
            if (lVar8 != 0) {
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            }
            *plVar11 = 0;
            plVar11[1] = uVar13;
            if ((uVar17 == 0) ||
               (*(float *)(param_1 + 0xd) * (float)uVar17 < (float)(param_1[0xc] + 1))) {
              uVar17 = (ulong)(uVar17 < 3 || (uVar17 & uVar17 - 1) != 0) | uVar17 << 1;
              uVar10 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
              if (uVar10 <= uVar17) {
                uVar10 = uVar17;
              }
              FUN_028cba40(plVar14,uVar10);
              uVar17 = param_1[2];
              if ((uVar17 & uVar17 - 1) == 0) {
                unaff_x26 = uVar17 - 1 & uVar13;
              }
              else if (uVar13 < uVar17) {
                unaff_x26 = uVar13;
              }
              else {
                uVar10 = 0;
                if (uVar17 != 0) {
                  uVar10 = uVar13 / uVar17;
                }
                unaff_x26 = uVar13 - uVar10 * uVar17;
              }
            }
            plVar12 = *(long **)(*plVar14 + unaff_x26 * 8);
            if (plVar12 == (long *)0x0) {
              *plVar11 = *plVar1;
              *plVar1 = (long)plVar11;
              *(long **)(*plVar14 + unaff_x26 * 8) = plVar1;
              if (*plVar11 != 0) {
                uVar13 = *(ulong *)(*plVar11 + 8);
                if ((uVar17 & uVar17 - 1) == 0) {
                  uVar13 = uVar13 & uVar17 - 1;
                }
                else if (uVar17 <= uVar13) {
                  uVar10 = 0;
                  if (uVar17 != 0) {
                    uVar10 = uVar13 / uVar17;
                  }
                  uVar13 = uVar13 - uVar10 * uVar17;
                }
                plVar12 = (long *)(*plVar14 + uVar13 * 8);
                goto LAB_028cb3e8;
              }
            }
            else {
              *plVar11 = *plVar12;
LAB_028cb3e8:
              *plVar12 = (long)plVar11;
            }
            param_1[0xc] = param_1[0xc] + 1;
          }
          else {
            uVar10 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
            uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
            uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar10 < 2) {
              unaff_x26 = uVar17 - 1 & local_1d8;
            }
            else {
              unaff_x26 = local_1d8;
              if (uVar17 <= local_1d8) {
                uVar3 = 0;
                if (uVar17 != 0) {
                  uVar3 = local_1d8 / uVar17;
                }
                unaff_x26 = local_1d8 - uVar3 * uVar17;
              }
            }
            plVar11 = *(long **)(*plVar14 + unaff_x26 * 8);
            if (plVar11 == (long *)0x0) goto LAB_028cb1f4;
            if (uVar10 < 2) {
              do {
                plVar11 = (long *)*plVar11;
                if ((plVar11 == (long *)0x0) ||
                   (plVar11[1] != local_1d8 && (plVar11[1] & uVar17 - 1) != unaff_x26))
                goto LAB_028cb1f4;
              } while (plVar11[2] != local_1d8);
            }
            else {
              do {
                plVar11 = (long *)*plVar11;
                if (plVar11 == (long *)0x0) goto LAB_028cb1f4;
                uVar10 = plVar11[1];
                if (uVar10 != local_1d8) {
                  if (uVar17 <= uVar10) {
                    uVar3 = 0;
                    if (uVar17 != 0) {
                      uVar3 = uVar10 / uVar17;
                    }
                    uVar10 = uVar10 - uVar3 * uVar17;
                  }
                  if (uVar10 != unaff_x26) goto LAB_028cb1f4;
                }
              } while (plVar11[2] != local_1d8);
            }
          }
          FUN_028cb6ac(&local_110);
          FUN_028cb6ac(&local_1b8);
          if (local_1c0 != (long *)0x0) {
            (**(code **)(*local_1c0 + 0x20))();
          }
          puVar16 = puVar16 + 1;
        } while (puVar16 != puVar2);
      }
    }
  }
  return;
}


