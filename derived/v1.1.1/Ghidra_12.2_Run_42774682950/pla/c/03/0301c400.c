/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301c400; name: FUN_0301c400
 */


void FUN_0301c400(long *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  long *local_1090;
  undefined8 local_1088;
  long local_1080 [256];
  uint *local_880;
  undefined8 local_878;
  uint local_870 [256];
  long local_470;
  uint *local_468 [64];
  uint *local_268 [65];
  
  puVar5 = PTR_PTR_0434a080;
  local_1090 = local_1080;
  local_1088 = 0x8000010000000000;
  local_880 = local_870;
  local_878 = 0x8000010000000000;
  iVar8 = (int)param_1[1];
  if (0 < iVar8) {
    lVar23 = 0;
    do {
      puVar21 = (uint *)**(undefined8 **)(*(long *)(*param_1 + lVar23 * 8) + 0x630);
      if ((*puVar21 & 0xffff) != 0) {
        puVar14 = puVar21 + 8;
        uVar24 = *puVar21 & 0xffff;
        uVar20 = 0x7fffffff;
        do {
          while( true ) {
            uVar11 = local_878;
            puVar16 = local_880;
            if ((short)puVar14[1] == 4) {
              uVar2 = (int)local_878 + 1;
              if ((int)(local_878._4_4_ & 0x3fffffff) <= (int)local_878) {
                if (0x3ffffffe < (int)local_878) {
                  FUN_032bd0a8(uVar2);
                }
                uVar9 = (local_878._4_4_ & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar9) {
                  uVar9 = 0x3fffffff;
                }
                uVar3 = uVar2;
                if ((int)uVar2 <= (int)uVar9) {
                  uVar3 = uVar9;
                }
                local_880 = (uint *)FUN_032bd1d4(puVar5,uVar3,4,puVar16,uVar11 & 0xffffffff,
                                                 (long)&local_878 + 4);
              }
              local_880[(int)local_878] = puVar14[2];
              local_878 = CONCAT44(local_878._4_4_,uVar2);
            }
            else if ((short)puVar14[1] == 3) {
              iVar8 = (int)local_1088 + 1;
              if ((int)(local_1088._4_4_ & 0x3fffffff) <= (int)local_1088) {
                local_1090 = (long *)FUN_0301d7b8(puVar5,iVar8,local_1090,local_1088 & 0xffffffff,
                                                  (long)&local_1088 + 4);
              }
              local_1090[(int)local_1088] = (long)puVar14;
              local_1088 = CONCAT44(local_1088._4_4_,iVar8);
            }
            uVar24 = uVar24 - 1;
            if (0 < (int)uVar24) break;
            if ((uVar20 == 0) || (puVar21 = *(uint **)(puVar21 + 2), puVar21 == (uint *)0x0))
            goto LAB_0301c500;
            uVar24 = *puVar21 & 0xffff;
            if ((int)uVar20 <= (int)(*puVar21 & 0xffff)) {
              uVar24 = uVar20;
            }
            if ((int)uVar24 < 1) goto LAB_0301c500;
            uVar20 = uVar20 - uVar24;
            puVar14 = puVar21 + 8;
            Hint_Prefetch(*(long *)(puVar21 + 2),0,0,0);
            Hint_Prefetch(*(long *)(puVar21 + 2) + 0x40,0,0,0);
            Hint_Prefetch(puVar21 + 0x20,0,0,0);
            Hint_Prefetch(puVar21 + 0x30,0,0,0);
            if (puVar14 == (uint *)0x0) goto LAB_0301c500;
          }
          puVar14 = (uint *)((long)puVar14 + (ulong)(ushort)*puVar14);
        } while (puVar14 != (uint *)0x0);
LAB_0301c500:
        iVar8 = (int)param_1[1];
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 < iVar8);
    if ((int)local_878 != 0) {
      lVar23 = tpidr_el0;
      if (*(long *)(lVar23 + 0x38d490) == 0) {
        lVar15 = FUN_0333d16c(0,1);
        *(long *)(lVar23 + 0x38d490) = lVar15;
        local_470 = *(long *)(lVar15 + 0x10);
      }
      else {
        local_470 = *(long *)(*(long *)(lVar23 + 0x38d490) + 0x10);
      }
      if (local_470 != 0) {
        puVar4 = *(undefined8 **)(local_470 + 8);
        uVar11 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
        if ((uVar11 <= *(ulong *)(local_470 + 0x10)) &&
           (*(ulong *)(local_470 + 8) = uVar11, puVar4 != (undefined8 *)0x0)) {
          *puVar4 = "TtBody AABB breached";
          uVar7 = nn::os::GetSystemTick();
          puVar4[1] = uVar7;
        }
      }
      if ((int)local_878 + -1 != 0 && 0 < (int)local_878) {
        puVar21 = local_880 + ((int)local_878 + -1);
        lVar23 = 0;
        local_268[0] = local_880;
        local_468[0] = puVar21;
        puVar14 = local_880;
LAB_0301c69c:
        lVar23 = (long)(int)lVar23;
LAB_0301c740:
        do {
          do {
            puVar16 = puVar21;
            uVar24 = puVar14[(long)puVar16 - (long)puVar14 >> 3] & 0xffffff;
            puVar17 = puVar16;
            puVar19 = puVar14;
            do {
              while( true ) {
                while( true ) {
                  puVar19 = puVar19 + -1;
                  do {
                    puVar21 = puVar19;
                    puVar19 = puVar21 + 1;
                  } while ((*puVar19 & 0xffffff) < uVar24);
                  puVar18 = puVar17 + -1;
                  uVar20 = *puVar17;
                  if (uVar24 < (uVar20 & 0xffffff)) {
                    do {
                      puVar17 = puVar18;
                      puVar18 = puVar17 + -1;
                      uVar20 = *puVar17;
                    } while (uVar24 < (uVar20 & 0xffffff));
                  }
                  if (puVar19 <= puVar17) break;
                  if (puVar17 < puVar19) goto LAB_0301c72c;
                }
                puVar21 = puVar21 + 2;
                if (puVar17 != puVar19) break;
                puVar17 = puVar18;
                puVar19 = puVar21;
                if (puVar18 < puVar21) goto LAB_0301c72c;
              }
              *puVar17 = *puVar19;
              *puVar19 = uVar20;
              puVar17 = puVar18;
              puVar19 = puVar21;
            } while (puVar21 <= puVar18);
LAB_0301c72c:
            if (puVar17 <= puVar14) {
              puVar14 = puVar19;
              puVar21 = puVar16;
              if (puVar19 < puVar16) goto LAB_0301c740;
              if ((int)lVar23 < 1) goto LAB_0301c5b4;
              lVar23 = (long)(int)lVar23 + -1;
              puVar14 = local_268[lVar23];
              puVar21 = local_468[lVar23];
              goto LAB_0301c69c;
            }
            puVar21 = puVar17;
          } while (puVar16 <= puVar19);
          puVar18 = puVar14;
          if ((long)puVar16 - (long)puVar19 <= (long)puVar17 - (long)puVar14) {
            puVar21 = puVar16;
            puVar18 = puVar19;
            puVar16 = puVar17;
            puVar19 = puVar14;
          }
          puVar14 = puVar18;
          local_268[lVar23] = puVar19;
          local_468[lVar23] = puVar16;
          lVar23 = lVar23 + 1;
        } while( true );
      }
LAB_0301c5b4:
      lVar23 = *(long *)(param_2 + 8);
      if (0 < (int)local_878) {
        lVar15 = (long)(int)local_878;
        uVar11 = lVar15 - 1;
        if ((*(byte *)(*(long *)(lVar23 + 0x38) + ((ulong)local_880[uVar11] & 0xffffff) * 0xc0 +
                      0x88) >> 2 & 1) == 0) {
          uVar10 = (long)(int)local_878 - 1;
          local_878 = CONCAT44(local_878._4_4_,(int)uVar10);
          if (uVar11 != (uVar10 & 0xffffffff)) {
            local_880[uVar11] = local_880[uVar10];
            lVar23 = *(long *)(param_2 + 8);
          }
        }
        if (0 < (long)uVar11) {
          uVar11 = lVar15 - 2;
          if ((*(byte *)(*(long *)(lVar23 + 0x38) + ((ulong)local_880[uVar11] & 0xffffff) * 0xc0 +
                        0x88) >> 2 & 1) == 0) {
            uVar10 = (long)(int)local_878 - 1;
            local_878._4_4_ = (uint)(local_878 >> 0x20);
            local_878 = CONCAT44(local_878._4_4_,(int)uVar10);
            if (uVar11 != (uVar10 & 0xffffffff)) {
              local_880[uVar11] = local_880[uVar10];
              lVar23 = *(long *)(param_2 + 8);
            }
          }
          if (0 < (long)uVar11) {
            uVar11 = lVar15 - 3;
            if ((*(byte *)(*(long *)(lVar23 + 0x38) + ((ulong)local_880[uVar11] & 0xffffff) * 0xc0 +
                          0x88) >> 2 & 1) == 0) {
              uVar10 = (long)(int)local_878 - 1;
              local_878._4_4_ = (uint)(local_878 >> 0x20);
              local_878 = CONCAT44(local_878._4_4_,(int)uVar10);
              if (uVar11 != (uVar10 & 0xffffffff)) {
                local_880[uVar11] = local_880[uVar10];
                lVar23 = *(long *)(param_2 + 8);
              }
            }
            if (0 < (long)uVar11) {
              uVar11 = lVar15 - 4;
              do {
                if ((*(byte *)(*(long *)(lVar23 + 0x38) +
                               ((ulong)local_880[uVar11] & 0xffffff) * 0xc0 + 0x88) >> 2 & 1) == 0)
                {
                  uVar10 = (long)(int)local_878 - 1;
                  local_878 = CONCAT44(local_878._4_4_,(int)uVar10);
                  if (uVar11 != (uVar10 & 0xffffffff)) {
                    local_880[uVar11] = local_880[uVar10];
                    lVar23 = *(long *)(param_2 + 8);
                  }
                }
                bVar1 = 0 < (long)uVar11;
                uVar11 = uVar11 - 1;
              } while (bVar1);
            }
          }
        }
      }
      (**(code **)(**(long **)(lVar23 + 0x4c0) + 0x50))
                (*(long **)(lVar23 + 0x4c0),local_880,(int)local_878);
      uVar11 = local_878;
      uVar24 = local_878._4_4_;
      local_878 = (ulong)local_878._4_4_ << 0x20;
      if ((-1 < (long)uVar11) && (0x100 < (uVar24 & 0x3fffffff))) {
        FUN_032bd3f0(puVar5,&local_880,4,0,0x100);
      }
      if (local_470 != 0) {
        puVar4 = *(undefined8 **)(local_470 + 8);
        uVar11 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
        if ((uVar11 <= *(ulong *)(local_470 + 0x10)) &&
           (*(ulong *)(local_470 + 8) = uVar11, puVar4 != (undefined8 *)0x0)) {
          *puVar4 = &DAT_0390f40e;
          uVar7 = nn::os::GetSystemTick();
          puVar4[1] = uVar7;
          goto joined_r0x0301c514;
        }
      }
    }
  }
joined_r0x0301c514:
  if ((int)local_1088 != 0) {
    lVar23 = tpidr_el0;
    if (*(long *)(lVar23 + 0x38d490) == 0) {
      lVar15 = FUN_0333d16c(0,1);
      *(long *)(lVar23 + 0x38d490) = lVar15;
      puVar21 = *(uint **)(lVar15 + 0x10);
    }
    else {
      puVar21 = *(uint **)(*(long *)(lVar23 + 0x38d490) + 0x10);
    }
    if (puVar21 != (uint *)0x0) {
      puVar4 = *(undefined8 **)(puVar21 + 2);
      uVar11 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= *(ulong *)(puVar21 + 4)) &&
         (*(ulong *)(puVar21 + 2) = uVar11, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = "TtTOI plane breached";
        uVar7 = nn::os::GetSystemTick();
        puVar4[1] = uVar7;
      }
    }
    local_268[0] = puVar21;
    FUN_0301d840(local_1090,local_1088 & 0xffffffff);
    if ((int)local_1088 < 2) {
      iVar8 = 0;
      iVar13 = 1;
    }
    else {
      lVar23 = 0;
      iVar8 = 0;
      lVar15 = *(long *)(*local_1090 + 8);
      iVar12 = (int)local_1088;
      while( true ) {
        lVar22 = *(long *)(local_1090[lVar23 + 1] + 8);
        iVar13 = (int)lVar23;
        if (lVar22 != lVar15) {
          lVar15 = (long)iVar8;
          iVar12 = iVar13 - iVar8;
          plVar6 = *(long **)(*(long *)(param_2 + 8) + 0x650);
          iVar8 = iVar13 + 1;
          (**(code **)(*plVar6 + 0x30))(plVar6,param_2,local_1090 + lVar15,iVar12 + 1);
          lVar15 = lVar22;
          iVar12 = (int)local_1088;
        }
        if ((long)iVar12 <= lVar23 + 2) break;
        lVar23 = lVar23 + 1;
      }
      iVar13 = iVar13 + 2;
    }
    plVar6 = *(long **)(*(long *)(param_2 + 8) + 0x650);
    (**(code **)(*plVar6 + 0x30))(plVar6,param_2,local_1090 + iVar8,iVar13 - iVar8);
    uVar11 = local_1088;
    uVar24 = local_1088._4_4_;
    local_1088 = (ulong)local_1088._4_4_ << 0x20;
    if ((-1 < (long)uVar11) && (0x100 < (uVar24 & 0x3fffffff))) {
      FUN_032bd3f0(PTR_PTR_0434a080,&local_1090,8,0,0x100);
    }
    if (puVar21 != (uint *)0x0) {
      puVar4 = *(undefined8 **)(puVar21 + 2);
      uVar11 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= *(ulong *)(puVar21 + 4)) &&
         (*(ulong *)(puVar21 + 2) = uVar11, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_0390f40e;
        uVar7 = nn::os::GetSystemTick();
        puVar4[1] = uVar7;
      }
    }
  }
  uVar10 = local_878;
  puVar5 = PTR_PTR_0434a080;
  uVar11 = local_878 >> 0x20;
  local_878 = local_878 & 0xffffffff00000000;
  if ((-1 < (long)uVar10) && (local_880 != (uint *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,local_880,(int)uVar11 << 2);
  }
  uVar11 = local_1088;
  local_878 = CONCAT44(0x80000000,(int)local_878);
  uVar10 = (ulong)local_1088._4_4_;
  local_880 = (uint *)0x0;
  local_1088 = (ulong)local_1088._4_4_ << 0x20;
  if ((-1 < (long)uVar11) && (local_1090 != (long *)0x0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_1090,(uVar10 & 0x3fffffff) << 3);
  }
  return;
}


