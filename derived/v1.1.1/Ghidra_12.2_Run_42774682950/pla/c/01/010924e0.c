/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010924e0; name: FUN_010924e0
 */


int FUN_010924e0(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,uint param_5,
                undefined8 *param_6)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ulong uVar4;
  int iVar5;
  int *piVar6;
  ushort *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulong unaff_x19;
  long lVar20;
  undefined1 auStack_b0 [128];
  
  uVar12 = param_3;
  uVar15 = param_4;
  if ((*PTR_DAT_0437a708 & 1) == 0) {
    param_2 = param_2 & 0xffffffff;
    iVar5 = __cxa_guard_acquire(PTR_DAT_0437a708);
    uVar12 = param_3 & 0xffffffff;
    uVar15 = param_4 & 0xffffffff;
    if (iVar5 != 0) {
      FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000,uVar15);
      __cxa_guard_release(PTR_DAT_0437a708);
      uVar12 = param_3 & 0xffffffff;
      uVar15 = param_4 & 0xffffffff;
    }
  }
  lVar20 = *(long *)PTR_DAT_0437a710;
  *(long *)PTR_DAT_0437a718 = lVar20;
  piVar6 = (int *)FUN_010aa4a0(lVar20,param_2,uVar12,uVar15);
  puVar11 = (undefined1 *)*param_6;
  if (puVar11 == &DAT_cbf29ce484222645) {
    puVar7 = (ushort *)((long)piVar6 - (long)*piVar6);
    if ((param_5 & 1) == 0) {
      if ((*puVar7 < 0x13) || ((ulong)puVar7[9] == 0)) {
        uVar12 = 0;
        uVar15 = *(ulong *)(lVar20 + 0x4d70);
      }
      else {
        uVar12 = *(ulong *)((long)piVar6 + (ulong)puVar7[9]);
        uVar15 = *(ulong *)(lVar20 + 0x4d70);
      }
      if (uVar15 != 0) {
        uVar8 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
        uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
        uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar8 < 2) {
          uVar17 = uVar15 - 1 & uVar12;
        }
        else {
          uVar17 = uVar12;
          if (uVar15 <= uVar12) {
            uVar17 = 0;
            if (uVar15 != 0) {
              uVar17 = uVar12 / uVar15;
            }
            uVar17 = uVar12 - uVar17 * uVar15;
          }
        }
        plVar9 = *(long **)(*(long *)(lVar20 + 0x4d68) + uVar17 * 8);
        if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
          if (uVar8 < 2) {
            do {
              if (plVar9[1] == uVar12) {
                if (plVar9[2] == uVar12) goto LAB_01092880;
              }
              else if ((plVar9[1] & uVar15 - 1) != uVar17) break;
              plVar9 = (long *)*plVar9;
            } while (plVar9 != (long *)0x0);
          }
          else {
            do {
              uVar8 = plVar9[1];
              if (uVar8 == uVar12) {
                if (plVar9[2] == uVar12) goto LAB_01092880;
              }
              else {
                if (uVar15 <= uVar8) {
                  uVar4 = 0;
                  if (uVar15 != 0) {
                    uVar4 = uVar8 / uVar15;
                  }
                  uVar8 = uVar8 - uVar4 * uVar15;
                }
                if (uVar8 != uVar17) break;
              }
              plVar9 = (long *)*plVar9;
            } while (plVar9 != (long *)0x0);
          }
        }
      }
    }
    else {
      if ((*puVar7 < 0x15) || ((ulong)puVar7[10] == 0)) {
        uVar12 = 0;
        uVar15 = *(ulong *)(lVar20 + 0x4d70);
      }
      else {
        uVar12 = *(ulong *)((long)piVar6 + (ulong)puVar7[10]);
        uVar15 = *(ulong *)(lVar20 + 0x4d70);
      }
      if (uVar15 != 0) {
        uVar8 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
        uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
        uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar8 < 2) {
          uVar17 = uVar15 - 1 & uVar12;
        }
        else {
          uVar17 = uVar12;
          if (uVar15 <= uVar12) {
            uVar17 = 0;
            if (uVar15 != 0) {
              uVar17 = uVar12 / uVar15;
            }
            uVar17 = uVar12 - uVar17 * uVar15;
          }
        }
        puVar10 = *(undefined8 **)(*(long *)(lVar20 + 0x4d68) + uVar17 * 8);
        if ((puVar10 != (undefined8 *)0x0) && (plVar9 = (long *)*puVar10, plVar9 != (long *)0x0)) {
          if (uVar8 < 2) {
            do {
              if (plVar9[1] == uVar12) {
                if (plVar9[2] == uVar12) goto LAB_01092880;
              }
              else if ((plVar9[1] & uVar15 - 1) != uVar17) break;
              plVar9 = (long *)*plVar9;
            } while (plVar9 != (long *)0x0);
          }
          else {
            do {
              uVar8 = plVar9[1];
              if (uVar8 == uVar12) {
                if (plVar9[2] == uVar12) goto LAB_01092880;
              }
              else {
                if (uVar15 <= uVar8) {
                  uVar4 = 0;
                  if (uVar15 != 0) {
                    uVar4 = uVar8 / uVar15;
                  }
                  uVar8 = uVar8 - uVar4 * uVar15;
                }
                if (uVar8 != uVar17) break;
              }
              plVar9 = (long *)*plVar9;
            } while (plVar9 != (long *)0x0);
          }
        }
      }
    }
  }
  else {
    puVar16 = *(undefined1 **)(lVar20 + 0x4d70);
    if (puVar16 != (undefined1 *)0x0) {
      uVar12 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        puVar18 = (undefined1 *)((ulong)(puVar16 + -1) & (ulong)puVar11);
      }
      else if (puVar11 < puVar16) {
        puVar18 = puVar11;
      }
      else {
        uVar15 = 0;
        if (puVar16 != (undefined1 *)0x0) {
          uVar15 = (ulong)puVar11 / (ulong)puVar16;
        }
        puVar18 = puVar11 + -(uVar15 * (long)puVar16);
      }
      puVar10 = *(undefined8 **)(*(long *)(lVar20 + 0x4d68) + (long)puVar18 * 8);
      if ((puVar10 != (undefined8 *)0x0) && (plVar9 = (long *)*puVar10, plVar9 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if ((undefined1 *)plVar9[1] == puVar11) {
              if ((undefined1 *)plVar9[2] == puVar11) goto LAB_01092880;
            }
            else if ((undefined1 *)((ulong)plVar9[1] & (ulong)(puVar16 + -1)) != puVar18) break;
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            puVar19 = (undefined1 *)plVar9[1];
            if (puVar19 == puVar11) {
              if ((undefined1 *)plVar9[2] == puVar11) goto LAB_01092880;
            }
            else {
              if (puVar16 <= puVar19) {
                uVar12 = 0;
                if (puVar16 != (undefined1 *)0x0) {
                  uVar12 = (ulong)puVar19 / (ulong)puVar16;
                }
                puVar19 = puVar19 + -(uVar12 * (long)puVar16);
              }
              if (puVar19 != puVar18) break;
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
  }
  plVar9 = *(long **)(lVar20 + 0x4d98);
LAB_01092880:
  piVar6 = (int *)plVar9[3];
  nn::crypto::GenerateCryptographicallyRandomBytes(auStack_b0 + 0x98,8);
  puVar7 = (ushort *)((long)piVar6 - (long)*piVar6);
  uVar3 = *puVar7;
  if (uVar3 < 7) {
LAB_01092ac0:
    iVar5 = 0;
  }
  else {
    uVar12 = 0x82a2b175229d6a5b;
    if (((ulong)puVar7[3] == 0) || (iVar5 = *(int *)((long)piVar6 + (ulong)puVar7[3]), iVar5 < 1)) {
LAB_0109294c:
      iVar5 = 0;
    }
    else {
      if (uVar3 < 9) goto LAB_01092ac0;
      if (((ulong)puVar7[4] == 0) ||
         (iVar14 = *(int *)((long)piVar6 + (ulong)puVar7[4]), iVar14 < 1)) goto LAB_0109294c;
      do {
        uVar15 = unaff_x19 ^ uVar12;
        iVar13 = (int)uVar12;
        uVar12 = uVar15 >> 0x1b | uVar15 << 0x25;
        uVar1 = (int)unaff_x19 + iVar13 & 0x7f;
        unaff_x19 = uVar15 ^ (unaff_x19 >> 0x28 | unaff_x19 << 0x18) ^ uVar15 << 0x10;
      } while (99 < uVar1);
      if (iVar14 <= (int)uVar1) {
        iVar5 = 0;
      }
    }
    if (10 < uVar3) {
      iVar14 = iVar5;
      if (((ulong)puVar7[5] != 0) &&
         (iVar13 = *(int *)((long)piVar6 + (ulong)puVar7[5]), 0 < iVar13)) {
        if (uVar3 < 0xd) {
          return iVar5;
        }
        if (((ulong)puVar7[6] != 0) &&
           (iVar2 = *(int *)((long)piVar6 + (ulong)puVar7[6]), 0 < iVar2)) {
          do {
            uVar15 = unaff_x19 ^ uVar12;
            iVar14 = (int)uVar12;
            uVar12 = uVar15 >> 0x1b | uVar15 << 0x25;
            uVar1 = (int)unaff_x19 + iVar14 & 0x7f;
            unaff_x19 = uVar15 ^ (unaff_x19 >> 0x28 | unaff_x19 << 0x18) ^ uVar15 << 0x10;
          } while (99 < uVar1);
          iVar14 = iVar13;
          if (iVar2 <= (int)uVar1) {
            iVar14 = iVar5;
          }
        }
      }
      iVar5 = iVar14;
      if (0xe < uVar3) {
        if (((ulong)puVar7[7] != 0) &&
           (iVar13 = *(int *)((long)piVar6 + (ulong)puVar7[7]), 0 < iVar13)) {
          if (uVar3 < 0x11) {
            return iVar14;
          }
          if (((ulong)puVar7[8] != 0) &&
             (iVar2 = *(int *)((long)piVar6 + (ulong)puVar7[8]), 0 < iVar2)) {
            do {
              uVar15 = unaff_x19 ^ uVar12;
              iVar5 = (int)uVar12;
              uVar12 = uVar15 >> 0x1b | uVar15 << 0x25;
              uVar1 = (int)unaff_x19 + iVar5 & 0x7f;
              unaff_x19 = uVar15 ^ (unaff_x19 >> 0x28 | unaff_x19 << 0x18) ^ uVar15 << 0x10;
            } while (99 < uVar1);
            iVar5 = iVar13;
            if (iVar2 <= (int)uVar1) {
              iVar5 = iVar14;
            }
          }
        }
        if (0x12 < uVar3) {
          iVar14 = iVar5;
          if (((ulong)puVar7[9] != 0) &&
             (iVar13 = *(int *)((long)piVar6 + (ulong)puVar7[9]), 0 < iVar13)) {
            if (uVar3 < 0x15) {
              return iVar5;
            }
            if (((ulong)puVar7[10] != 0) &&
               (iVar2 = *(int *)((long)piVar6 + (ulong)puVar7[10]), 0 < iVar2)) {
              do {
                uVar15 = unaff_x19 ^ uVar12;
                iVar14 = (int)uVar12;
                uVar12 = uVar15 >> 0x1b | uVar15 << 0x25;
                uVar1 = (int)unaff_x19 + iVar14 & 0x7f;
                unaff_x19 = uVar15 ^ (unaff_x19 >> 0x28 | unaff_x19 << 0x18) ^ uVar15 << 0x10;
              } while (99 < uVar1);
              iVar14 = iVar13;
              if (iVar2 <= (int)uVar1) {
                iVar14 = iVar5;
              }
            }
          }
          iVar5 = iVar14;
          if ((((0x16 < uVar3) && ((ulong)puVar7[0xb] != 0)) && (0x18 < uVar3)) &&
             (((iVar13 = *(int *)((long)piVar6 + (ulong)puVar7[0xb]), 0 < iVar13 &&
               ((ulong)puVar7[0xc] != 0)) &&
              (iVar2 = *(int *)((long)piVar6 + (ulong)puVar7[0xc]), 0 < iVar2)))) {
            do {
              uVar15 = unaff_x19 ^ uVar12;
              iVar5 = (int)uVar12;
              uVar12 = uVar15 >> 0x1b | uVar15 << 0x25;
              uVar1 = (int)unaff_x19 + iVar5 & 0x7f;
              unaff_x19 = uVar15 ^ (unaff_x19 >> 0x28 | unaff_x19 << 0x18) ^ uVar15 << 0x10;
            } while (99 < uVar1);
            iVar5 = iVar13;
            if (iVar2 <= (int)uVar1) {
              iVar5 = iVar14;
            }
          }
        }
      }
    }
  }
  return iVar5;
}


