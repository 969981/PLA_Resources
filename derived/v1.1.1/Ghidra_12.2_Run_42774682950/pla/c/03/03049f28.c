/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03049f28; name: FUN_03049f28
 */


void FUN_03049f28(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [64];
  uint local_58;
  uint local_54;
  
  plVar6 = *(long **)(*param_1 + 0x4a0);
  local_a8 = auStack_98;
  local_a0 = 0x8000000800000000;
  local_58 = 0;
  uVar5 = (**(code **)(*plVar6 + 0x50))();
  if (7 < (int)uVar5) {
    uVar5 = 8;
  }
  local_54 = uVar5;
  if ((int)(local_a0._4_4_ & 0x3fffffff) < (int)uVar5) {
    uVar9 = (local_a0._4_4_ & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
    uVar1 = uVar5;
    if ((int)uVar5 <= (int)uVar9) {
      uVar1 = uVar9;
    }
    local_a8 = (undefined1 *)
               FUN_032bd1d4(PTR_PTR_0434a080,uVar1,8,local_a8,local_a0 & 0xffffffff,
                            (long)&local_a0 + 4);
  }
  if ((uint)local_a0 != uVar5) {
    local_a0 = CONCAT44(local_a0._4_4_,uVar5);
  }
  uVar5 = *(uint *)(param_1 + 5);
  if (*(char *)((long)param_1 + 0x1c) != '\0') {
    plVar7 = (long *)param_1[4];
    if ((int)uVar5 < 1) {
      plVar13 = plVar7;
    }
    else {
      plVar13 = plVar7;
      if (*plVar7 != 0) {
        *plVar7 = *plVar7;
        plVar13 = plVar7 + 1;
      }
      if (uVar5 != 1) {
        if (plVar7[1] != 0) {
          *plVar13 = plVar7[1];
          plVar13 = plVar13 + 1;
        }
        if (uVar5 != 2) {
          iVar8 = uVar5 - 2;
          plVar7 = plVar7 + 2;
          plVar12 = plVar13;
          do {
            plVar13 = plVar12;
            if (*plVar7 != 0) {
              plVar13 = plVar12 + 1;
              *plVar12 = *plVar7;
            }
            plVar7 = plVar7 + 1;
            iVar8 = iVar8 + -1;
            plVar12 = plVar13;
          } while (iVar8 != 0);
        }
      }
      plVar7 = plVar13;
      plVar13 = (long *)param_1[4];
    }
    *(undefined1 *)((long)param_1 + 0x1c) = 0;
    uVar5 = (uint)((ulong)((long)plVar7 - (long)plVar13) >> 3);
  }
  if (uVar5 != 0) {
    puVar16 = (undefined8 *)param_1[4];
    if ((int)uVar5 < 6) {
      if ((int)local_54 <= (int)(local_58 + uVar5)) {
        uVar9 = local_58;
        if (5 < (int)local_58) {
          uVar9 = 6;
        }
        uVar9 = local_58 - uVar9;
        (**(code **)(*plVar6 + 0x28))(plVar6,local_a8 + (long)(int)uVar9 * 8);
        local_58 = uVar9;
      }
      if ((0 < (int)uVar5) &&
         (*(undefined8 *)(local_a8 + (long)(int)local_58 * 8) = *puVar16, uVar5 != 1)) {
        uVar14 = 1;
        do {
          *(undefined8 *)(local_a8 + (long)(int)((int)uVar14 + local_58) * 8) = puVar16[uVar14];
          uVar14 = uVar14 + 1;
        } while (uVar5 != uVar14);
      }
      local_58 = local_58 + uVar5;
      if ((int)local_54 < (int)local_58) {
        (**(code **)(*plVar6 + 0x28))(plVar6,local_a8 + (long)(int)local_54 * 8,local_58 - local_54)
        ;
        local_58 = local_54;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x28))(plVar6,puVar16,uVar5);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x25);
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(char *)((long)param_1 + 0x11c) != '\0') {
    plVar7 = (long *)param_1[0x24];
    if ((int)uVar5 < 1) {
      plVar13 = plVar7;
    }
    else {
      plVar13 = plVar7;
      if (*plVar7 != 0) {
        *plVar7 = *plVar7;
        plVar13 = plVar7 + 1;
      }
      if (uVar5 != 1) {
        if (plVar7[1] != 0) {
          *plVar13 = plVar7[1];
          plVar13 = plVar13 + 1;
        }
        if (uVar5 != 2) {
          iVar8 = uVar5 - 2;
          plVar7 = plVar7 + 2;
          plVar12 = plVar13;
          do {
            plVar13 = plVar12;
            if (*plVar7 != 0) {
              plVar13 = plVar12 + 1;
              *plVar12 = *plVar7;
            }
            plVar7 = plVar7 + 1;
            iVar8 = iVar8 + -1;
            plVar12 = plVar13;
          } while (iVar8 != 0);
        }
      }
      plVar7 = plVar13;
      plVar13 = (long *)param_1[0x24];
    }
    *(undefined1 *)((long)param_1 + 0x11c) = 0;
    uVar5 = (uint)((ulong)((long)plVar7 - (long)plVar13) >> 3);
  }
  if (uVar5 != 0) {
    puVar16 = (undefined8 *)param_1[0x24];
    if ((int)uVar5 < 6) {
      if ((int)local_54 <= (int)(local_58 + uVar5)) {
        uVar9 = local_58;
        if (5 < (int)local_58) {
          uVar9 = 6;
        }
        uVar9 = local_58 - uVar9;
        (**(code **)(*plVar6 + 0x28))(plVar6,local_a8 + (long)(int)uVar9 * 8);
        local_58 = uVar9;
      }
      if ((0 < (int)uVar5) &&
         (*(undefined8 *)(local_a8 + (long)(int)local_58 * 8) = *puVar16, uVar5 != 1)) {
        uVar14 = 1;
        do {
          *(undefined8 *)(local_a8 + (long)(int)((int)uVar14 + local_58) * 8) = puVar16[uVar14];
          uVar14 = uVar14 + 1;
        } while (uVar5 != uVar14);
      }
      local_58 = local_58 + uVar5;
      if ((int)local_54 < (int)local_58) {
        (**(code **)(*plVar6 + 0x28))(plVar6,local_a8 + (long)(int)local_54 * 8,local_58 - local_54)
        ;
        local_58 = local_54;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x28))(plVar6,puVar16,uVar5);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x45);
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (*(char *)((long)param_1 + 0x21c) != '\0') {
    plVar7 = (long *)param_1[0x44];
    if ((int)uVar5 < 1) {
      plVar13 = plVar7;
    }
    else {
      plVar13 = plVar7;
      if (*plVar7 != 0) {
        *plVar7 = *plVar7;
        plVar13 = plVar7 + 1;
      }
      if (uVar5 != 1) {
        if (plVar7[1] != 0) {
          *plVar13 = plVar7[1];
          plVar13 = plVar13 + 1;
        }
        if (uVar5 != 2) {
          iVar8 = uVar5 - 2;
          plVar7 = plVar7 + 2;
          plVar12 = plVar13;
          do {
            plVar13 = plVar12;
            if (*plVar7 != 0) {
              plVar13 = plVar12 + 1;
              *plVar12 = *plVar7;
            }
            plVar7 = plVar7 + 1;
            iVar8 = iVar8 + -1;
            plVar12 = plVar13;
          } while (iVar8 != 0);
        }
      }
      plVar7 = plVar13;
      plVar13 = (long *)param_1[0x44];
    }
    *(undefined1 *)((long)param_1 + 0x21c) = 0;
    uVar5 = (uint)((ulong)((long)plVar7 - (long)plVar13) >> 3);
  }
  if (uVar5 != 0) {
    puVar16 = (undefined8 *)param_1[0x44];
    if ((int)uVar5 < 6) {
      if ((int)local_54 <= (int)(local_58 + uVar5)) {
        uVar9 = local_58;
        if (5 < (int)local_58) {
          uVar9 = 6;
        }
        uVar9 = local_58 - uVar9;
        (**(code **)(*plVar6 + 0x28))(plVar6,local_a8 + (long)(int)uVar9 * 8);
        local_58 = uVar9;
      }
      if ((0 < (int)uVar5) &&
         (*(undefined8 *)(local_a8 + (long)(int)local_58 * 8) = *puVar16, uVar5 != 1)) {
        uVar14 = 1;
        do {
          *(undefined8 *)(local_a8 + (long)(int)((int)uVar14 + local_58) * 8) = puVar16[uVar14];
          uVar14 = uVar14 + 1;
        } while (uVar5 != uVar14);
      }
      local_58 = local_58 + uVar5;
      if ((int)local_54 < (int)local_58) {
        (**(code **)(*plVar6 + 0x28))(plVar6,local_a8 + (long)(int)local_54 * 8,local_58 - local_54)
        ;
        local_58 = local_54;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x28))(plVar6,puVar16,uVar5);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x79);
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  if (*(char *)((long)param_1 + 0x3bc) != '\0') {
    plVar7 = (long *)param_1[0x78];
    if ((int)uVar5 < 1) {
      plVar13 = plVar7;
    }
    else {
      plVar13 = plVar7;
      if (*plVar7 != 0) {
        *plVar7 = *plVar7;
        plVar13 = plVar7 + 1;
      }
      if (uVar5 != 1) {
        if (plVar7[1] != 0) {
          *plVar13 = plVar7[1];
          plVar13 = plVar13 + 1;
        }
        if (uVar5 != 2) {
          iVar8 = uVar5 - 2;
          plVar7 = plVar7 + 2;
          plVar12 = plVar13;
          do {
            plVar13 = plVar12;
            if (*plVar7 != 0) {
              plVar13 = plVar12 + 1;
              *plVar12 = *plVar7;
            }
            plVar7 = plVar7 + 1;
            iVar8 = iVar8 + -1;
            plVar12 = plVar13;
          } while (iVar8 != 0);
        }
      }
      plVar7 = plVar13;
      plVar13 = (long *)param_1[0x78];
    }
    *(undefined1 *)((long)param_1 + 0x3bc) = 0;
    uVar5 = (uint)((ulong)((long)plVar7 - (long)plVar13) >> 3);
  }
  if (uVar5 != 0) {
    puVar16 = (undefined8 *)param_1[0x78];
    if ((int)uVar5 < 6) {
      if ((int)local_54 <= (int)(local_58 + uVar5)) {
        uVar9 = local_58;
        if (5 < (int)local_58) {
          uVar9 = 6;
        }
        uVar9 = local_58 - uVar9;
        (**(code **)(*plVar6 + 0x28))(plVar6,local_a8 + (long)(int)uVar9 * 8);
        local_58 = uVar9;
      }
      if ((0 < (int)uVar5) &&
         (*(undefined8 *)(local_a8 + (long)(int)local_58 * 8) = *puVar16, uVar5 != 1)) {
        uVar14 = 1;
        do {
          *(undefined8 *)(local_a8 + (long)(int)((int)uVar14 + local_58) * 8) = puVar16[uVar14];
          uVar14 = uVar14 + 1;
        } while (uVar5 != uVar14);
      }
      local_58 = local_58 + uVar5;
      if ((int)local_54 < (int)local_58) {
        (**(code **)(*plVar6 + 0x28))(plVar6,local_a8 + (long)(int)local_54 * 8,local_58 - local_54)
        ;
        local_58 = local_54;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x28))(plVar6,puVar16,uVar5);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x99);
  *(undefined4 *)(param_1 + 0x79) = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  if (*(char *)((long)param_1 + 0x4bc) != '\0') {
    plVar7 = (long *)param_1[0x98];
    if ((int)uVar5 < 1) {
      plVar13 = plVar7;
    }
    else {
      plVar13 = plVar7;
      if (*plVar7 != 0) {
        *plVar7 = *plVar7;
        plVar13 = plVar7 + 1;
      }
      if (uVar5 != 1) {
        if (plVar7[1] != 0) {
          *plVar13 = plVar7[1];
          plVar13 = plVar13 + 1;
        }
        if (uVar5 != 2) {
          iVar8 = uVar5 - 2;
          plVar7 = plVar7 + 2;
          plVar12 = plVar13;
          do {
            plVar13 = plVar12;
            if (*plVar7 != 0) {
              plVar13 = plVar12 + 1;
              *plVar12 = *plVar7;
            }
            plVar7 = plVar7 + 1;
            iVar8 = iVar8 + -1;
            plVar12 = plVar13;
          } while (iVar8 != 0);
        }
      }
      plVar7 = plVar13;
      plVar13 = (long *)param_1[0x98];
    }
    *(undefined1 *)((long)param_1 + 0x4bc) = 0;
    uVar5 = (uint)((ulong)((long)plVar7 - (long)plVar13) >> 3);
  }
  if (uVar5 != 0) {
    puVar16 = (undefined8 *)param_1[0x98];
    if ((int)uVar5 < 6) {
      if ((int)local_54 <= (int)(local_58 + uVar5)) {
        uVar9 = local_58;
        if (5 < (int)local_58) {
          uVar9 = 6;
        }
        uVar9 = local_58 - uVar9;
        (**(code **)(*plVar6 + 0x28))(plVar6,local_a8 + (long)(int)uVar9 * 8);
        local_58 = uVar9;
      }
      if ((0 < (int)uVar5) &&
         (*(undefined8 *)(local_a8 + (long)(int)local_58 * 8) = *puVar16, uVar5 != 1)) {
        uVar14 = 1;
        do {
          *(undefined8 *)(local_a8 + (long)(int)((int)uVar14 + local_58) * 8) = puVar16[uVar14];
          uVar14 = uVar14 + 1;
        } while (uVar5 != uVar14);
      }
      local_58 = local_58 + uVar5;
      if ((int)local_54 < (int)local_58) {
        (**(code **)(*plVar6 + 0x28))(plVar6,local_a8 + (long)(int)local_54 * 8,local_58 - local_54)
        ;
        local_58 = local_54;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x28))(plVar6,puVar16,uVar5);
    }
  }
  iVar8 = (int)param_1[0x74];
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  if (0 < iVar8) {
    lVar10 = 0;
    lVar2 = tpidr_el0;
    do {
      if (*(long *)(param_1[0x73] + lVar10 * 8) != 0) {
        uVar9 = *(uint *)((long)param_1 + 0x34c);
        iVar8 = (int)param_1[0x69];
        uVar5 = iVar8 + 1;
        if (iVar8 < (int)(uVar9 & 0x3fffffff)) {
          lVar15 = param_1[0x68];
        }
        else {
          lVar15 = param_1[0x68];
          if (0x3ffffffe < iVar8) {
            FUN_032bd0a8(uVar5);
            uVar9 = *(uint *)((long)param_1 + 0x34c);
          }
          uVar9 = (uVar9 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar9) {
            uVar9 = 0x3fffffff;
          }
          uVar1 = uVar5;
          if ((int)uVar5 <= (int)uVar9) {
            uVar1 = uVar9;
          }
          lVar15 = FUN_032bd1d4(PTR_PTR_0434a080,uVar1,4,lVar15,iVar8);
          iVar8 = (int)param_1[0x69];
          param_1[0x68] = lVar15;
        }
        *(int *)(lVar15 + (long)iVar8 * 4) = (int)lVar10;
        lVar15 = param_1[0x73];
        *(uint *)(param_1 + 0x69) = uVar5;
        lVar11 = *(long *)(lVar15 + lVar10 * 8);
        if (lVar11 != 0) {
          FUN_0304f680(lVar11);
          lVar15 = *(long *)(lVar2 + 0x38d490);
          if (lVar15 == 0) {
            lVar15 = FUN_0333d16c(0,1);
            *(long *)(lVar2 + 0x38d490) = lVar15;
          }
          plVar7 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,0x70);
          lVar15 = param_1[0x73];
        }
        *(undefined8 *)(lVar15 + lVar10 * 8) = 0;
        iVar8 = (int)param_1[0x74];
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar8);
  }
  if (local_58 != 0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,local_a8);
    local_58 = 0;
  }
  uVar4 = local_a0;
  puVar3 = PTR_PTR_0434a080;
  uVar14 = local_a0 >> 0x20;
  local_a0 = uVar14 << 0x20;
  if (((long)uVar4 < 0) || (local_a8 == (undefined1 *)0x0)) {
    lVar10 = param_1[0x96];
  }
  else {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_a8,(uVar14 & 0x3fffffff) << 3);
    lVar10 = param_1[0x96];
  }
  if (lVar10 != 0) {
    iVar8 = (int)param_1[0x99];
    if (*(char *)((long)param_1 + 0x4bc) != '\0') {
      plVar6 = (long *)param_1[0x98];
      if (iVar8 < 1) {
        plVar7 = plVar6;
      }
      else {
        plVar7 = plVar6;
        if (*plVar6 != 0) {
          *plVar6 = *plVar6;
          plVar7 = plVar6 + 1;
        }
        if (iVar8 != 1) {
          if (plVar6[1] != 0) {
            *plVar7 = plVar6[1];
            plVar7 = plVar7 + 1;
          }
          if (iVar8 != 2) {
            iVar8 = iVar8 + -2;
            plVar6 = plVar6 + 2;
            plVar13 = plVar7;
            do {
              plVar7 = plVar13;
              if (*plVar6 != 0) {
                plVar7 = plVar13 + 1;
                *plVar13 = *plVar6;
              }
              plVar6 = plVar6 + 1;
              iVar8 = iVar8 + -1;
              plVar13 = plVar7;
            } while (iVar8 != 0);
          }
        }
        plVar6 = plVar7;
        plVar7 = (long *)param_1[0x98];
      }
      *(undefined1 *)((long)param_1 + 0x4bc) = 0;
      iVar8 = (int)((ulong)((long)plVar6 - (long)plVar7) >> 3);
    }
    if (iVar8 != 0) {
      (**(code **)(*(long *)param_1[0x96] + 0x28))((long *)param_1[0x96],param_1[0x98]);
    }
    *(undefined4 *)(param_1 + 0x99) = 0;
    *(undefined4 *)(param_1 + 0x97) = 0;
  }
  *(undefined4 *)(param_1 + 0x99) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4cc)) && (param_1[0x98] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x98],((ulong)*(uint *)((long)param_1 + 0x4cc) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x4cc) = 0x80000000;
  param_1[0x98] = 0;
  if (param_1[0x76] != 0) {
    iVar8 = (int)param_1[0x79];
    if (*(char *)((long)param_1 + 0x3bc) != '\0') {
      plVar6 = (long *)param_1[0x78];
      if (iVar8 < 1) {
        plVar7 = plVar6;
      }
      else {
        plVar7 = plVar6;
        if (*plVar6 != 0) {
          *plVar6 = *plVar6;
          plVar7 = plVar6 + 1;
        }
        if (iVar8 != 1) {
          if (plVar6[1] != 0) {
            *plVar7 = plVar6[1];
            plVar7 = plVar7 + 1;
          }
          if (iVar8 != 2) {
            iVar8 = iVar8 + -2;
            plVar6 = plVar6 + 2;
            plVar13 = plVar7;
            do {
              plVar7 = plVar13;
              if (*plVar6 != 0) {
                plVar7 = plVar13 + 1;
                *plVar13 = *plVar6;
              }
              plVar6 = plVar6 + 1;
              iVar8 = iVar8 + -1;
              plVar13 = plVar7;
            } while (iVar8 != 0);
          }
        }
        plVar6 = plVar7;
        plVar7 = (long *)param_1[0x78];
      }
      *(undefined1 *)((long)param_1 + 0x3bc) = 0;
      iVar8 = (int)((ulong)((long)plVar6 - (long)plVar7) >> 3);
    }
    if (iVar8 != 0) {
      (**(code **)(*(long *)param_1[0x76] + 0x28))((long *)param_1[0x76],param_1[0x78]);
    }
    *(undefined4 *)(param_1 + 0x79) = 0;
    *(undefined4 *)(param_1 + 0x77) = 0;
  }
  *(undefined4 *)(param_1 + 0x79) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3cc)) && (param_1[0x78] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x78],((ulong)*(uint *)((long)param_1 + 0x3cc) & 0x3fffffff) << 3);
  }
  param_1[0x78] = 0;
  *(undefined4 *)((long)param_1 + 0x3cc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x74) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3a4)) && (param_1[0x73] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x73],((ulong)*(uint *)((long)param_1 + 0x3a4) & 0x3fffffff) << 3);
  }
  param_1[0x73] = 0;
  *(undefined4 *)((long)param_1 + 0x3a4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x72) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x394)) && (param_1[0x71] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x71],((ulong)*(uint *)((long)param_1 + 0x394) & 0x3fffffff) << 5);
  }
  param_1[0x71] = 0;
  *(undefined4 *)((long)param_1 + 0x394) = 0x80000000;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x35c)) && (param_1[0x6a] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x6a],((ulong)*(uint *)((long)param_1 + 0x35c) & 0x3fffffff) << 5);
  }
  param_1[0x6a] = 0;
  *(undefined4 *)((long)param_1 + 0x35c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x69) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x34c)) && (param_1[0x68] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,param_1[0x68],*(int *)((long)param_1 + 0x34c) << 2)
    ;
  }
  param_1[0x68] = 0;
  *(undefined4 *)((long)param_1 + 0x34c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x67) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x33c)) && (param_1[0x66] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,param_1[0x66],*(int *)((long)param_1 + 0x33c) << 2)
    ;
  }
  param_1[0x66] = 0;
  *(undefined4 *)((long)param_1 + 0x33c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x65) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x32c)) && (param_1[100] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,param_1[100],*(int *)((long)param_1 + 0x32c) << 2);
  }
  lVar10 = param_1[0x62];
  param_1[100] = 0;
  *(undefined4 *)((long)param_1 + 0x32c) = 0x80000000;
  if (lVar10 != 0) {
    lVar15 = *(long *)(lVar10 + 8);
    lVar2 = tpidr_el0;
    lVar11 = *(long *)(lVar2 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar11;
    }
    plVar6 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar10,0x410);
    while (lVar15 != 0) {
      lVar11 = *(long *)(lVar15 + 8);
      lVar10 = *(long *)(lVar2 + 0x38d490);
      if (lVar10 == 0) {
        lVar10 = FUN_0333d16c(0,1);
        *(long *)(lVar2 + 0x38d490) = lVar10;
      }
      plVar6 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar15,0x410);
      lVar15 = lVar11;
    }
  }
  if (param_1[0x42] != 0) {
    iVar8 = (int)param_1[0x45];
    if (*(char *)((long)param_1 + 0x21c) != '\0') {
      plVar6 = (long *)param_1[0x44];
      if (iVar8 < 1) {
        plVar7 = plVar6;
      }
      else {
        plVar7 = plVar6;
        if (*plVar6 != 0) {
          *plVar6 = *plVar6;
          plVar7 = plVar6 + 1;
        }
        if (iVar8 != 1) {
          if (plVar6[1] != 0) {
            *plVar7 = plVar6[1];
            plVar7 = plVar7 + 1;
          }
          if (iVar8 != 2) {
            iVar8 = iVar8 + -2;
            plVar6 = plVar6 + 2;
            plVar13 = plVar7;
            do {
              plVar7 = plVar13;
              if (*plVar6 != 0) {
                plVar7 = plVar13 + 1;
                *plVar13 = *plVar6;
              }
              plVar6 = plVar6 + 1;
              iVar8 = iVar8 + -1;
              plVar13 = plVar7;
            } while (iVar8 != 0);
          }
        }
        plVar6 = plVar7;
        plVar7 = (long *)param_1[0x44];
      }
      *(undefined1 *)((long)param_1 + 0x21c) = 0;
      iVar8 = (int)((ulong)((long)plVar6 - (long)plVar7) >> 3);
    }
    if (iVar8 != 0) {
      (**(code **)(*(long *)param_1[0x42] + 0x28))((long *)param_1[0x42],param_1[0x44]);
    }
    *(undefined4 *)(param_1 + 0x45) = 0;
    *(undefined4 *)(param_1 + 0x43) = 0;
  }
  *(undefined4 *)(param_1 + 0x45) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x22c)) && (param_1[0x44] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x44],((ulong)*(uint *)((long)param_1 + 0x22c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x22c) = 0x80000000;
  param_1[0x44] = 0;
  if (param_1[0x22] != 0) {
    iVar8 = (int)param_1[0x25];
    if (*(char *)((long)param_1 + 0x11c) != '\0') {
      plVar6 = (long *)param_1[0x24];
      if (iVar8 < 1) {
        plVar7 = plVar6;
      }
      else {
        plVar7 = plVar6;
        if (*plVar6 != 0) {
          *plVar6 = *plVar6;
          plVar7 = plVar6 + 1;
        }
        if (iVar8 != 1) {
          if (plVar6[1] != 0) {
            *plVar7 = plVar6[1];
            plVar7 = plVar7 + 1;
          }
          if (iVar8 != 2) {
            iVar8 = iVar8 + -2;
            plVar6 = plVar6 + 2;
            plVar13 = plVar7;
            do {
              plVar7 = plVar13;
              if (*plVar6 != 0) {
                plVar7 = plVar13 + 1;
                *plVar13 = *plVar6;
              }
              plVar6 = plVar6 + 1;
              iVar8 = iVar8 + -1;
              plVar13 = plVar7;
            } while (iVar8 != 0);
          }
        }
        plVar6 = plVar7;
        plVar7 = (long *)param_1[0x24];
      }
      *(undefined1 *)((long)param_1 + 0x11c) = 0;
      iVar8 = (int)((ulong)((long)plVar6 - (long)plVar7) >> 3);
    }
    if (iVar8 != 0) {
      (**(code **)(*(long *)param_1[0x22] + 0x28))((long *)param_1[0x22],param_1[0x24]);
    }
    *(undefined4 *)(param_1 + 0x25) = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 300)) && (param_1[0x24] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x24],((ulong)*(uint *)((long)param_1 + 300) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 300) = 0x80000000;
  param_1[0x24] = 0;
  if (param_1[2] != 0) {
    iVar8 = (int)param_1[5];
    if (*(char *)((long)param_1 + 0x1c) != '\0') {
      plVar6 = (long *)param_1[4];
      if (iVar8 < 1) {
        plVar7 = plVar6;
      }
      else {
        plVar7 = plVar6;
        if (*plVar6 != 0) {
          *plVar6 = *plVar6;
          plVar7 = plVar6 + 1;
        }
        if (iVar8 != 1) {
          if (plVar6[1] != 0) {
            *plVar7 = plVar6[1];
            plVar7 = plVar7 + 1;
          }
          if (iVar8 != 2) {
            iVar8 = iVar8 + -2;
            plVar6 = plVar6 + 2;
            plVar13 = plVar7;
            do {
              plVar7 = plVar13;
              if (*plVar6 != 0) {
                plVar7 = plVar13 + 1;
                *plVar13 = *plVar6;
              }
              plVar6 = plVar6 + 1;
              iVar8 = iVar8 + -1;
              plVar13 = plVar7;
            } while (iVar8 != 0);
          }
        }
        plVar6 = plVar7;
        plVar7 = (long *)param_1[4];
      }
      *(undefined1 *)((long)param_1 + 0x1c) = 0;
      iVar8 = (int)((ulong)((long)plVar6 - (long)plVar7) >> 3);
    }
    if (iVar8 != 0) {
      (**(code **)(*(long *)param_1[2] + 0x28))((long *)param_1[2],param_1[4]);
    }
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[4],((ulong)*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) << 3);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  return;
}


