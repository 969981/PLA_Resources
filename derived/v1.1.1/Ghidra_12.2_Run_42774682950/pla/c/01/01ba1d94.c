/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba1d94; name: FUN_01ba1d94
 */


void FUN_01ba1d94(undefined1 *param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  
  uVar10 = *(ulong *)(param_2 + 0x978);
  if (uVar10 != 0) {
    uVar5 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar6 = *param_3;
    uVar1 = 0;
    if (uVar10 != 0) {
      uVar1 = uVar6 / uVar10;
    }
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar17 = uVar10 - 1 & uVar6;
    }
    else {
      uVar17 = uVar6;
      if (uVar10 <= uVar6) {
        uVar17 = uVar6 - uVar1 * uVar10;
      }
    }
    lVar16 = *(long *)(param_2 + 0x970);
    plVar12 = *(long **)(lVar16 + uVar17 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      uVar13 = uVar10 - 1;
      if (uVar5 < 2) {
        do {
          if (plVar12[1] == uVar6) {
            if (plVar12[2] == uVar6) goto LAB_01ba1e48;
          }
          else if ((plVar12[1] & uVar13) != uVar17) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar12[1];
          if (uVar18 == uVar6) {
            if (plVar12[2] == uVar6) goto LAB_01ba1e48;
          }
          else {
            if (uVar10 <= uVar18) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar18 / uVar10;
              }
              uVar18 = uVar18 - uVar2 * uVar10;
            }
            if (uVar18 != uVar17) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  return;
LAB_01ba1e90:
  *param_1 = 0;
  uVar10 = puVar15[5];
  uVar1 = puVar15[6];
  uVar5 = puVar15[7];
  uVar6 = puVar15[8];
  plVar19 = (long *)(param_1 + 8);
  *plVar19 = 0;
  *(ulong *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(ulong *)(param_1 + 0x18) = uVar10;
  *(ulong *)(param_1 + 0x28) = uVar5;
  *(ulong *)(param_1 + 0x30) = uVar6;
  uVar10 = puVar15[10];
  uVar1 = puVar15[0xb];
  uVar5 = puVar15[0xc];
  uVar6 = puVar15[0xd];
  plVar7 = (long *)(param_1 + 0x38);
  *plVar7 = 0;
  puVar14 = (ulong *)(param_1 + 0x40);
  *puVar14 = uVar10;
  *(ulong *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(ulong *)(param_1 + 0x50) = uVar5;
  *(ulong *)(param_1 + 0x58) = uVar6;
  *(int *)(param_1 + 0x68) = (int)puVar15[0xf];
  FUN_00ced110(plVar19,puVar15[4]);
  plVar12 = (long *)puVar15[9];
  do {
    if (plVar12 == (long *)0x0) {
      *param_1 = 1;
      return;
    }
    puVar20 = plVar12 + 2;
    puVar22 = (ulong *)*puVar20;
    puVar21 = *(ulong **)(param_1 + 0x10);
    if (puVar21 == (ulong *)0x0) {
LAB_01ba1f84:
      plVar8 = (long *)(**(code **)(*(long *)*puVar14 + 0x10))((long *)*puVar14,0x58,8);
      if (plVar8 == (long *)0x0) {
        (**(code **)(*(long *)*puVar14 + 0xb8))();
      }
      uVar10 = *puVar14;
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (lVar16 == 0) {
        FUN_01ba75ac(plVar8 + 2,puVar20);
      }
      else {
        if (0xf < *(ulong *)(lVar16 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(ulong *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar10;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
        FUN_01ba75ac(plVar8 + 2,puVar20);
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
      }
      *plVar8 = 0;
      plVar8[1] = (long)puVar22;
      if ((puVar21 == (ulong *)0x0) ||
         (*(float *)(param_1 + 0x68) * (float)puVar21 < (float)(*(long *)(param_1 + 0x60) + 1))) {
        uVar10 = (ulong)(puVar21 < (ulong *)0x3 || ((ulong)puVar21 & (long)puVar21 - 1U) != 0) |
                 (long)puVar21 << 1;
        uVar5 = (ulong)((float)(*(long *)(param_1 + 0x60) + 1) / *(float *)(param_1 + 0x68));
        if (uVar5 <= uVar10) {
          uVar5 = uVar10;
        }
        FUN_00ced110(plVar19,uVar5);
        puVar21 = *(ulong **)(param_1 + 0x10);
        if (((ulong)puVar21 & (long)puVar21 - 1U) == 0) {
          puVar15 = (ulong *)((long)puVar21 - 1U & (ulong)puVar22);
        }
        else if (puVar22 < puVar21) {
          puVar15 = puVar22;
        }
        else {
          uVar10 = 0;
          if (puVar21 != (ulong *)0x0) {
            uVar10 = (ulong)puVar22 / (ulong)puVar21;
          }
          puVar15 = (ulong *)((long)puVar22 - uVar10 * (long)puVar21);
        }
      }
      plVar9 = *(long **)(*plVar19 + (long)puVar15 * 8);
      if (plVar9 == (long *)0x0) {
        *plVar8 = *plVar7;
        *plVar7 = (long)plVar8;
        *(long **)(*plVar19 + (long)puVar15 * 8) = plVar7;
        if (*plVar8 != 0) {
          puVar22 = *(ulong **)(*plVar8 + 8);
          if (((ulong)puVar21 & (long)puVar21 - 1U) == 0) {
            puVar22 = (ulong *)((ulong)puVar22 & (long)puVar21 - 1U);
          }
          else if (puVar21 <= puVar22) {
            uVar10 = 0;
            if (puVar21 != (ulong *)0x0) {
              uVar10 = (ulong)puVar22 / (ulong)puVar21;
            }
            puVar22 = (ulong *)((long)puVar22 - uVar10 * (long)puVar21);
          }
          plVar9 = (long *)(*plVar19 + (long)puVar22 * 8);
          goto LAB_01ba20e0;
        }
      }
      else {
        *plVar8 = *plVar9;
LAB_01ba20e0:
        *plVar9 = (long)plVar8;
      }
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
    }
    else {
      uVar10 = (long)puVar21 - ((ulong)puVar21 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        puVar15 = (ulong *)((long)puVar21 - 1U & (ulong)puVar22);
      }
      else {
        puVar15 = puVar22;
        if (puVar21 <= puVar22) {
          uVar5 = 0;
          if (puVar21 != (ulong *)0x0) {
            uVar5 = (ulong)puVar22 / (ulong)puVar21;
          }
          puVar15 = (ulong *)((long)puVar22 - uVar5 * (long)puVar21);
        }
      }
      plVar8 = *(long **)(*plVar19 + (long)puVar15 * 8);
      if (plVar8 == (long *)0x0) goto LAB_01ba1f84;
      if (uVar10 < 2) {
        do {
          plVar8 = (long *)*plVar8;
          if ((plVar8 == (long *)0x0) ||
             ((ulong *)plVar8[1] != puVar22 &&
              (ulong *)((ulong)plVar8[1] & (long)puVar21 - 1U) != puVar15)) goto LAB_01ba1f84;
        } while ((ulong *)plVar8[2] != puVar22);
      }
      else {
        do {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_01ba1f84;
          puVar11 = (ulong *)plVar8[1];
          if (puVar11 != puVar22) {
            if (puVar21 <= puVar11) {
              uVar10 = 0;
              if (puVar21 != (ulong *)0x0) {
                uVar10 = (ulong)puVar11 / (ulong)puVar21;
              }
              puVar11 = (ulong *)((long)puVar11 - uVar10 * (long)puVar21);
            }
            if (puVar11 != puVar15) goto LAB_01ba1f84;
          }
        } while ((ulong *)plVar8[2] != puVar22);
      }
    }
    plVar12 = (long *)*plVar12;
  } while( true );
LAB_01ba1e48:
  if (uVar5 < 2) {
    uVar17 = uVar13 & uVar6;
    puVar15 = *(ulong **)(lVar16 + uVar17 * 8);
  }
  else {
    uVar17 = uVar6;
    if (uVar10 <= uVar6) {
      uVar17 = uVar6 - uVar1 * uVar10;
    }
    puVar15 = *(ulong **)(lVar16 + uVar17 * 8);
  }
  if ((puVar15 != (ulong *)0x0) && (puVar15 = (ulong *)*puVar15, puVar15 != (ulong *)0x0)) {
    if (uVar5 < 2) {
      do {
        if (puVar15[1] == uVar6) {
          if (puVar15[2] == uVar6) goto LAB_01ba1e90;
        }
        else if ((puVar15[1] & uVar13) != uVar17) break;
        puVar15 = (ulong *)*puVar15;
      } while (puVar15 != (ulong *)0x0);
    }
    else {
      do {
        uVar5 = puVar15[1];
        if (uVar5 == uVar6) {
          if (puVar15[2] == uVar6) goto LAB_01ba1e90;
        }
        else {
          if (uVar10 <= uVar5) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar5 / uVar10;
            }
            uVar5 = uVar5 - uVar1 * uVar10;
          }
          if (uVar5 != uVar17) break;
        }
        puVar15 = (ulong *)*puVar15;
      } while (puVar15 != (ulong *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ba75a0();
}


