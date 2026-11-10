/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e727c; name: FUN_001e727c
 */


undefined8 FUN_001e727c(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint local_94 [5];
  int local_80 [6];
  int local_68;
  int local_64;
  
  local_80[0] = -1;
  local_80[1] = -1;
  local_80[2] = -1;
  local_80[3] = -1;
  local_80[4] = 0xffffffff;
  uVar6 = FUN_001e7640(param_2,local_80);
  uVar14 = 0;
  lVar1 = param_1 + 0xb8;
  do {
    uVar13 = (uint)uVar14;
    uVar3 = 1 << (ulong)(uVar13 & 0x1f);
    uVar4 = 1 << (ulong)(uVar13 + 0x10 & 0x1f);
    if (((uVar4 | uVar3) & uVar6) == 0) break;
    iVar2 = local_80[(int)uVar13];
    local_64 = iVar2;
    if (iVar2 == -1) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_001e0c94(lVar1,&local_64,4);
    }
    uVar10 = (uint)((uVar3 & uVar6) != 0);
    if ((uVar4 & uVar6) != 0) {
      uVar10 = uVar10 | 2;
    }
    local_94[(int)uVar13] = uVar10;
    if (lVar7 == 0) {
      local_68 = iVar2;
      local_64 = iVar2;
      if ((iVar2 == -1) || (lVar7 = FUN_001e0c94(lVar1,&local_64,4), lVar7 == 0)) {
        lVar7 = FUN_00204504(1,0x40);
        if (lVar7 == 0) {
          return 3;
        }
        FUN_001e370c(lVar7,0);
        lVar8 = FUN_001e0b00(lVar1,&local_68,4,lVar7);
        if (lVar8 == 0) {
          FUN_002044d4(lVar7);
          return 3;
        }
      }
    }
    else if (*(int *)(param_2 + 0xc0) < 1) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        lVar8 = param_2 + uVar14 * 4;
        if (iVar2 == *(int *)(lVar8 + 0x98)) {
          uVar4 = *(uint *)(lVar8 + 0xac);
          if (uVar4 != uVar10) {
            if ((uVar4 & 1) != 0) {
              *(int *)(lVar7 + 0x34) = *(int *)(lVar7 + 0x34) + -1;
            }
            if ((uVar4 >> 1 & 1) != 0) {
              *(int *)(lVar7 + 0x38) = *(int *)(lVar7 + 0x38) + -1;
            }
            if ((uVar3 & uVar6) != 0) {
              *(int *)(lVar7 + 0x34) = *(int *)(lVar7 + 0x34) + 1;
            }
            if (uVar10 >> 1 != 0) {
              *(int *)(lVar7 + 0x38) = *(int *)(lVar7 + 0x38) + 1;
            }
          }
          goto LAB_001e7414;
        }
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)*(int *)(param_2 + 0xc0));
    }
    *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
    if ((uVar3 & uVar6) != 0) {
      *(int *)(lVar7 + 0x34) = *(int *)(lVar7 + 0x34) + 1;
    }
    if (uVar10 >> 1 != 0) {
      *(int *)(lVar7 + 0x38) = *(int *)(lVar7 + 0x38) + 1;
    }
    FUN_001e3718(lVar7,*(undefined8 *)(lVar7 + 8),param_2,param_2 + 0x48);
LAB_001e7414:
    uVar3 = (uint)(*(int *)(lVar7 + 0x34) != 0) | (uint)(*(int *)(lVar7 + 0x38) != 0) << 1;
    if (*(uint *)(lVar7 + 0x20) != uVar3) {
      if (*(code **)(param_1 + 0x60) != (code *)0x0) {
        (**(code **)(param_1 + 0x60))
                  (param_2,iVar2,uVar3,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(lVar7 + 0x28)
                  );
      }
      *(uint *)(lVar7 + 0x20) = uVar3;
    }
    uVar3 = (int)uVar14 + 1;
    uVar14 = (ulong)uVar3;
  } while ((int)uVar3 < 5);
  if (0 < *(int *)(param_2 + 0xc0)) {
    lVar7 = 0;
    do {
      lVar8 = param_2 + lVar7 * 4;
      iVar2 = *(int *)(lVar8 + 0x98);
      if (0 < (int)uVar14) {
        piVar11 = local_80;
        uVar12 = uVar14;
        do {
          if (iVar2 == *piVar11) goto LAB_001e75b4;
          piVar11 = piVar11 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      local_64 = iVar2;
      if ((iVar2 != -1) && (lVar9 = FUN_001e0c94(lVar1,&local_64,4), lVar9 != 0)) {
        iVar5 = *(int *)(lVar9 + 0x30) + -1;
        uVar6 = *(uint *)(lVar8 + 0xac);
        *(int *)(lVar9 + 0x30) = iVar5;
        if ((uVar6 >> 1 & 1) != 0) {
          *(int *)(lVar9 + 0x38) = *(int *)(lVar9 + 0x38) + -1;
        }
        if ((uVar6 & 1) != 0) {
          *(int *)(lVar9 + 0x34) = *(int *)(lVar9 + 0x34) + -1;
        }
        if (iVar5 == 0) {
          if (*(code **)(param_1 + 0x60) != (code *)0x0) {
            (**(code **)(param_1 + 0x60))
                      (param_2,iVar2,4,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(lVar9 + 0x28)
                      );
          }
          local_64 = iVar2;
          FUN_001e0bf0(lVar1,&local_64,4);
        }
        else {
          FUN_001e3790(lVar9,param_2 + 0x48,0);
        }
      }
LAB_001e75b4:
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_2 + 0xc0));
  }
  uVar12 = -(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2;
  memcpy((void *)(param_2 + 0x98),local_80,uVar12);
  memcpy((void *)(param_2 + 0xac),local_94,uVar12);
  *(int *)(param_2 + 0xc0) = (int)uVar14;
  return 0;
}


