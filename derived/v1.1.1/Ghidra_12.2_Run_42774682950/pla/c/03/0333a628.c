/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333a628; name: FUN_0333a628
 */


void FUN_0333a628(long param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  long *plVar17;
  long *plVar18;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78;
  long *local_70;
  undefined8 local_68;
  
  puVar5 = PTR_PTR_0434a080;
  local_70 = (long *)0x0;
  local_68 = -0x8000000000000000;
  plVar17 = (long *)0x0;
  if (*(int *)(param_1 + 0x10) < 1) {
    uVar16 = 0;
  }
  else {
    plVar18 = (long *)0x0;
    uVar16 = 0;
    lVar13 = 0;
    do {
      lVar15 = *(long *)(param_1 + 8);
      lVar10 = *(long *)(lVar15 + lVar13 * 8);
      if (*(int *)(lVar10 + 0xc) == 0) {
        uVar8 = local_68._4_4_;
        uVar9 = uVar16 + 1;
        uVar7 = uVar16;
        if ((int)(local_68._4_4_ & 0x3fffffff) <= (int)uVar16) {
          if (0x3ffffffe < (int)uVar16) {
            FUN_032bd0a8(uVar9);
          }
          uVar7 = (uVar8 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar7) {
            uVar7 = 0x3fffffff;
          }
          uVar8 = uVar9;
          if ((int)uVar9 <= (int)uVar7) {
            uVar8 = uVar7;
          }
          plVar17 = (long *)FUN_032bd1d4(puVar5,uVar8,8,plVar18,uVar16,(long)&local_68 + 4);
          lVar10 = *(long *)(lVar15 + lVar13 * 8);
          uVar7 = (uint)local_68;
          local_70 = plVar17;
        }
        plVar17[(int)uVar7] = lVar10;
        local_68 = CONCAT44(local_68._4_4_,uVar9);
        if (0 < (int)uVar16) {
          lVar10 = plVar17[(int)uVar16];
          do {
            uVar7 = uVar16 - 1;
            if (*(byte *)(plVar17[(int)uVar7 >> 1] + 8) < *(byte *)(lVar10 + 8)) break;
            plVar17[(int)uVar16] = plVar17[(int)uVar7 >> 1];
            plVar17[(long)((ulong)uVar7 << 0x20) >> 0x21] = lVar10;
            uVar16 = (int)uVar7 >> 1;
          } while (1 < (int)uVar7);
        }
        plVar18 = plVar17;
        uVar16 = uVar9;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x10));
  }
  do {
    if (uVar16 == 0) break;
    plVar18 = (long *)*plVar17;
    uVar16 = uVar16 - 1;
    local_68._4_4_ = (uint)((ulong)local_68 >> 0x20);
    if (uVar16 == 0) {
      local_68 = (ulong)local_68._4_4_ << 0x20;
LAB_0333a780:
      lVar13 = *plVar18;
    }
    else {
      bVar1 = *(byte *)(plVar17[(int)uVar16] + 8);
      bVar2 = *(byte *)(plVar18 + 1);
      *plVar17 = plVar17[(int)uVar16];
      local_68 = CONCAT44(local_68._4_4_,uVar16);
      if (bVar1 < bVar2) goto LAB_0333a780;
      FUN_0333ae54(&local_70);
      lVar13 = *plVar18;
    }
    if (lVar13 != 0) {
      local_78 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_90 = param_1;
      if (0 < (int)plVar18[2]) {
        local_78 = 0;
        (**(code **)(*(long *)*plVar18 + 0x18))((long *)*plVar18,&local_90);
        if (1 < (int)plVar18[2]) {
          iVar14 = 1;
          do {
            local_78 = iVar14;
            (**(code **)(*(long *)*plVar18 + 0x18))((long *)*plVar18,&local_90);
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)plVar18[2]);
        }
      }
    }
    *(undefined1 *)((long)plVar18 + 0x14) = 1;
    if (0 < (int)plVar18[4]) {
      lVar13 = 0;
      do {
        plVar3 = local_70;
        lVar10 = *(long *)(plVar18[3] + lVar13 * 8);
        iVar14 = *(int *)(lVar10 + 0xc) + -1;
        *(int *)(lVar10 + 0xc) = iVar14;
        if (iVar14 == 0) {
          uVar7 = local_68._4_4_;
          uVar9 = uVar16 + 1;
          uVar8 = uVar16;
          if ((int)(local_68._4_4_ & 0x3fffffff) <= (int)uVar16) {
            if (0x3ffffffe < (int)uVar16) {
              FUN_032bd0a8(uVar9);
            }
            uVar7 = (uVar7 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar7) {
              uVar7 = 0x3fffffff;
            }
            uVar8 = uVar9;
            if ((int)uVar9 <= (int)uVar7) {
              uVar8 = uVar7;
            }
            plVar17 = (long *)FUN_032bd1d4(puVar5,uVar8,8,plVar3,uVar16,(long)&local_68 + 4);
            uVar8 = (uint)local_68;
            local_70 = plVar17;
          }
          plVar17[(int)uVar8] = lVar10;
          local_68 = CONCAT44(local_68._4_4_,uVar9);
          if ((int)uVar16 < 1) {
            uVar16 = uVar9;
          }
          else {
            lVar10 = plVar17[(int)uVar16];
            do {
              uVar7 = uVar16 - 1;
              if (*(byte *)(plVar17[(int)uVar7 >> 1] + 8) < *(byte *)(lVar10 + 8)) break;
              plVar17[(int)uVar16] = plVar17[(int)uVar7 >> 1];
              plVar17[(long)((ulong)uVar7 << 0x20) >> 0x21] = lVar10;
              uVar16 = (int)uVar7 >> 1;
            } while (1 < (int)uVar7);
            uVar16 = uVar9;
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)plVar18[4]);
    }
  } while (plVar18 != param_2);
  uVar16 = local_68._4_4_;
  iVar14 = *(int *)(param_1 + 0x10);
  if (iVar14 == 0) {
    iVar14 = 0;
    uVar9 = 0;
  }
  else {
    plVar17 = *(long **)(param_1 + 8);
    plVar18 = plVar17 + (long)iVar14 + -1;
    bVar6 = *(char *)(*plVar18 + 0x14) != '\0';
    plVar3 = plVar17;
    if (bVar6) {
      plVar18 = (long *)0x0;
      plVar3 = plVar17 + (long)iVar14 + -2;
    }
    uVar9 = (uint)bVar6;
    if (iVar14 != 1) {
      if (*(char *)(*plVar3 + 0x14) == '\0') {
        plVar4 = plVar3;
        plVar12 = plVar17;
        if (plVar18 != (long *)0x0) {
          plVar4 = plVar18;
          plVar12 = plVar3 + 1;
        }
      }
      else {
        uVar9 = uVar9 + 1;
        if (plVar18 == (long *)0x0) {
          plVar4 = (long *)0x0;
          plVar12 = plVar3 + -1;
        }
        else {
          if (plVar3 != plVar18) {
            *plVar3 = *plVar18;
          }
          plVar17 = plVar3 + 1;
          plVar4 = (long *)0x0;
          plVar12 = plVar18 + -1;
        }
      }
      if (iVar14 != 2) {
        if (*(char *)(*plVar12 + 0x14) == '\0') {
          plVar18 = plVar12;
          plVar3 = plVar17;
          if (plVar4 != (long *)0x0) {
            plVar18 = plVar4;
            plVar3 = plVar12 + 1;
          }
        }
        else {
          uVar9 = uVar9 + 1;
          if (plVar4 != (long *)0x0) {
            if (plVar12 != plVar4) {
              *plVar12 = *plVar4;
            }
            plVar17 = plVar12 + 1;
            plVar12 = plVar4;
          }
          plVar18 = (long *)0x0;
          plVar3 = plVar12 + -1;
        }
        for (iVar14 = iVar14 + -3; iVar14 != 0; iVar14 = iVar14 + -1) {
          if (*(char *)(*plVar3 + 0x14) == '\0') {
            plVar12 = plVar17;
            if (plVar18 != (long *)0x0) {
              plVar12 = plVar3 + 1;
              plVar3 = plVar18;
            }
            plVar18 = plVar3;
          }
          else {
            uVar9 = uVar9 + 1;
            if (plVar18 == (long *)0x0) {
              plVar12 = plVar3 + -1;
            }
            else {
              if (plVar3 != plVar18) {
                *plVar3 = *plVar18;
              }
              plVar17 = plVar3 + 1;
              plVar12 = plVar18 + -1;
              plVar18 = (long *)0x0;
            }
          }
          plVar3 = plVar12;
        }
      }
    }
    iVar14 = *(int *)(param_1 + 0x10);
  }
  *(uint *)(param_1 + 0x10) = iVar14 - uVar9;
  uVar11 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < (int)uVar16) && (local_70 != (long *)0x0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_70,(uVar11 & 0x3fffffff) << 3);
  }
  return;
}


