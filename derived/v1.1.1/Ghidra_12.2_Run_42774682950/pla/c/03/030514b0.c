/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030514b0; name: FUN_030514b0
 */


/* WARNING: Removing unreachable block (ram,0x03051ba8) */

void FUN_030514b0(long *param_1,ulong param_2,int param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  int *piVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  undefined8 uVar26;
  uint uVar27;
  uint uVar28;
  undefined8 *puVar29;
  undefined *local_a8;
  undefined8 local_90;
  undefined8 local_88;
  uint *local_80;
  int local_78;
  ulong local_70;
  uint local_64;
  
  puVar8 = PTR_PTR_0434a080;
  lVar21 = *param_1;
  lVar14 = *(long *)(lVar21 + 0x38);
  iVar7 = *(int *)(lVar14 + (param_2 & 0xffffff) * 0xc0 + 0x80);
  lVar18 = param_1[0x71];
  uVar19 = (uint)param_2;
  if ((*(int *)(lVar21 + 0x808) != 1) && (*(int *)(lVar21 + 0x808) != 0x40)) {
    local_a8 = PTR_PTR_0434a080;
    uVar23 = param_2 & 0xffffffff;
    do {
      uVar23 = (ulong)((uint)uVar23 & 0xffffff);
      if ((*(byte *)(lVar14 + uVar23 * 0xc0 + 0x88) & 1) != 0) {
        lVar14 = lVar14 + uVar23 * 0xc0;
        uVar27 = *(uint *)((long)param_1 + 0x35c);
        uVar28 = *(uint *)(param_1 + 0x6b);
        uVar22 = uVar27 & 0x3fffffff;
        uVar6 = *(undefined4 *)(lVar14 + 0x50);
        uVar26 = *(undefined8 *)(lVar14 + 0xb0);
        puVar29 = (undefined8 *)param_1[0x6a];
        uVar11 = uVar28 + 1;
        puVar10 = puVar29;
        if ((int)uVar22 <= (int)uVar28) {
          if (0x3ffffffe < (int)uVar28) {
            FUN_032bd0a8(uVar11);
            uVar27 = *(uint *)((long)param_1 + 0x35c);
            uVar22 = uVar27 & 0x3fffffff;
          }
          uVar12 = (uVar27 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar12) {
            uVar12 = 0x3fffffff;
          }
          local_64 = uVar11;
          if ((int)uVar11 <= (int)uVar12) {
            local_64 = uVar12;
          }
          local_70 = (ulong)local_64 << 5;
          if (((int)local_64 < (int)uVar22) || (0x3fffffff < (int)local_64)) {
            local_90 = (uint *)0x1;
            local_88 = &DAT_0411b3b8;
            local_80 = &local_64;
            FUN_03320b50(0x65816502,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                         ,0x5a,"Invalid requestedCapacity {}",&local_90);
            uVar27 = *(uint *)((long)param_1 + 0x35c);
            uVar22 = uVar27 & 0x3fffffff;
          }
          puVar10 = (undefined8 *)(**(code **)(*(long *)puVar8 + 0x10))(puVar8,local_70,&local_70);
          if (0 < (int)uVar28) {
            uVar3 = *puVar29;
            uVar4 = puVar29[1];
            uVar5 = puVar29[3];
            puVar10[2] = puVar29[2];
            puVar10[3] = uVar5;
            *puVar10 = uVar3;
            puVar10[1] = uVar4;
            if (uVar28 != 1) {
              uVar3 = puVar29[4];
              uVar4 = puVar29[5];
              uVar5 = puVar29[7];
              puVar10[6] = puVar29[6];
              puVar10[7] = uVar5;
              puVar10[4] = uVar3;
              puVar10[5] = uVar4;
              if (uVar28 != 2) {
                lVar14 = (ulong)uVar28 - 2;
                puVar16 = puVar29 + 8;
                puVar17 = puVar10 + 8;
                do {
                  uVar3 = *puVar16;
                  uVar4 = puVar16[1];
                  lVar14 = lVar14 + -1;
                  puVar1 = puVar16 + 2;
                  uVar5 = puVar16[3];
                  puVar16 = puVar16 + 4;
                  puVar17[2] = *puVar1;
                  puVar17[3] = uVar5;
                  *puVar17 = uVar3;
                  puVar17[1] = uVar4;
                  puVar17 = puVar17 + 4;
                } while (lVar14 != 0);
              }
            }
          }
          if (-1 < (int)uVar27) {
            (**(code **)(*(long *)puVar8 + 0x18))(puVar8,puVar29,(ulong)uVar22 << 5);
          }
          if (local_70 < 0x7ffffffe0) {
            uVar13 = (undefined4)(local_70 >> 5);
          }
          else {
            uVar13 = 0x3fffffff;
          }
          uVar28 = *(uint *)(param_1 + 0x6b);
          *(undefined4 *)((long)param_1 + 0x35c) = uVar13;
          param_1[0x6a] = (long)puVar10;
        }
        puVar10 = puVar10 + (long)(int)uVar28 * 4;
        *(undefined4 *)puVar10 = 0x3000020;
        *(undefined2 *)((long)puVar10 + 4) = 5;
        *(undefined4 *)(puVar10 + 1) = uVar6;
        puVar10[2] = uVar26;
        *(bool *)(puVar10 + 3) = param_3 == 0;
        uVar6 = (undefined4)local_90;
        *(undefined4 *)((long)puVar10 + 0x1c) = local_90._3_4_;
        *(undefined4 *)((long)puVar10 + 0x19) = uVar6;
        *(uint *)(param_1 + 0x6b) = uVar11;
        lVar14 = *(long *)(lVar21 + 0x38);
      }
      uVar11 = *(uint *)(lVar14 + uVar23 * 0xc0 + 0x84);
      uVar23 = (ulong)uVar11;
    } while (uVar11 != uVar19);
    goto LAB_030516d0;
  }
  local_90 = (uint *)0x0;
  local_88 = (undefined *)0x8000000000000000;
  local_78 = 10;
  lVar14 = tpidr_el0;
  lVar21 = *(long *)(lVar14 + 0x38d490);
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar21;
  }
  lVar21 = *(long *)(lVar21 + 8);
  if (*(ulong *)(lVar21 + 0x10) < 0x80) {
LAB_03051960:
    local_80 = (uint *)FUN_032ce670(lVar21,0x80);
  }
  else {
    local_80 = *(uint **)(lVar21 + 0x18);
    if (*(uint **)(lVar21 + 0x20) < local_80 + 0x20) goto LAB_03051960;
    *(uint **)(lVar21 + 0x18) = local_80 + 0x20;
  }
  puVar8 = PTR_PTR_0434a080;
  lVar21 = *param_1;
  lVar24 = *(long *)(lVar21 + 0x38);
  local_a8 = PTR_PTR_0434a080;
  uVar23 = param_2 & 0xffffff;
  bVar2 = (*(byte *)(lVar24 + uVar23 * 0xc0 + 0x88) & 1) != 0;
  if (bVar2) {
    *(undefined8 *)local_80 = *(undefined8 *)(lVar24 + uVar23 * 0xc0 + 0xb0);
    local_88._0_4_ = 1;
    lVar24 = *(long *)(lVar21 + 0x38);
  }
  uVar22 = (uint)bVar2;
  local_88._4_4_ = 0x8000000a;
  uVar11 = *(uint *)(lVar24 + uVar23 * 0xc0 + 0x84);
  local_90 = local_80;
  if (uVar11 == uVar19) {
    lVar21 = *param_1;
    if (param_3 == 0) goto LAB_03051640;
LAB_030518c4:
    lVar24 = lVar21 + 0x750;
  }
  else {
    do {
      uVar23 = (ulong)(uVar11 & 0xffffff);
      if ((*(byte *)(lVar24 + uVar23 * 0xc0 + 0x88) & 1) != 0) {
        uVar11 = uVar22 + 1;
        if ((int)(local_88._4_4_ & 0x3fffffff) <= (int)uVar22) {
          local_90 = (uint *)FUN_02f6b138(puVar8,uVar11,local_90,uVar22,(long)&local_88 + 4);
          uVar22 = (uint)local_88;
        }
        *(undefined8 *)(local_90 + (long)(int)uVar22 * 2) =
             *(undefined8 *)(lVar24 + uVar23 * 0xc0 + 0xb0);
        lVar24 = *(long *)(lVar21 + 0x38);
        uVar22 = uVar11;
        local_88._0_4_ = uVar11;
      }
      uVar11 = *(uint *)(lVar24 + uVar23 * 0xc0 + 0x84);
    } while (uVar11 != uVar19);
    lVar21 = *param_1;
    if (param_3 != 0) goto LAB_030518c4;
LAB_03051640:
    lVar24 = lVar21 + 0x748;
  }
  FUN_030376f0(lVar24,lVar21,local_90,uVar22);
  iVar20 = local_78;
  puVar9 = local_80;
  if (local_80 == local_90) {
    local_88._0_4_ = 0;
  }
  lVar21 = *(long *)(lVar14 + 0x38d490);
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar21;
  }
  lVar14 = *(long *)(lVar21 + 8);
  uVar23 = (ulong)(int)(iVar20 * 8 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar14 + 0x10) < uVar23) || (*(long *)(lVar14 + 0x18) != uVar23 + (long)puVar9))
     || (*(uint **)(lVar14 + 0x28) == puVar9)) {
    if (puVar9 != (uint *)0x0) {
      if (*(ulong *)(lVar14 + 0x10) < uVar23) {
        *(int *)(*(long *)(lVar14 + 8) + 0x20) = *(int *)(*(long *)(lVar14 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar14 + 0x40) + 0x18))(*(long **)(lVar14 + 0x40),puVar9);
      }
      else if (*(long *)(lVar14 + 0x18) == uVar23 + (long)puVar9) {
        *(uint **)(lVar14 + 0x18) = puVar9;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar14,puVar9);
      }
    }
  }
  else {
    *(uint **)(lVar14 + 0x18) = puVar9;
  }
  uVar11 = local_88._4_4_;
  uVar23 = (ulong)local_88._4_4_;
  local_88 = (undefined *)((ulong)local_88._4_4_ << 0x20);
  if ((-1 < (int)uVar11) && (local_90 != (uint *)0x0)) {
    (**(code **)(*(long *)puVar8 + 0x18))(puVar8,local_90,(uVar23 & 0x3fffffff) << 3);
  }
LAB_030516d0:
  if ((char)param_1[0x6c] == '\0') {
    piVar15 = (int *)(lVar18 + (long)iVar7 * 0x20 + 0x10);
    iVar7 = *piVar15;
    if ((param_3 == 0) && (iVar7 != -1)) {
      plVar25 = *(long **)(param_1[0x73] + (long)iVar7 * 8);
      *piVar15 = -1;
      param_2 = param_2 & 0xffffffff;
      do {
        uVar11 = *(uint *)(plVar25 + 1);
        uVar23 = (ulong)uVar11;
        if (0 < (int)uVar11) {
          lVar21 = *plVar25;
          lVar18 = 0;
          lVar14 = 0;
          do {
            if (*(uint *)(lVar21 + lVar14 * 4) == (uint)param_2) {
              if ((int)lVar14 != -1) {
                *(int *)(plVar25 + 1) = (int)((long)(int)uVar11 + -1);
                if ((int)uVar23 != 1) {
                  *(undefined4 *)(lVar21 + (lVar18 >> 0x1e)) =
                       *(undefined4 *)(lVar21 + ((long)(int)uVar11 + -1) * 4);
                }
              }
              break;
            }
            lVar14 = lVar14 + 1;
            lVar18 = lVar18 + 0x100000000;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
        uVar11 = *(uint *)(*(long *)(*param_1 + 0x38) + (ulong)((uint)param_2 & 0xffffff) * 0xc0 +
                          0x84);
        param_2 = (ulong)uVar11;
      } while (uVar11 != uVar19);
      *(undefined1 *)((long)plVar25 + 0x24) = 1;
      if (*(char *)((long)plVar25 + 0x25) == '\0') {
        uVar11 = *(uint *)((long)param_1 + 0x33c);
        iVar20 = (int)param_1[0x67];
        uVar19 = iVar20 + 1;
        if (iVar20 < (int)(uVar11 & 0x3fffffff)) {
          lVar14 = param_1[0x66];
        }
        else {
          lVar14 = param_1[0x66];
          if (0x3ffffffe < iVar20) {
            FUN_032bd0a8(uVar19);
            uVar11 = *(uint *)((long)param_1 + 0x33c);
          }
          uVar11 = (uVar11 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar11) {
            uVar11 = 0x3fffffff;
          }
          uVar22 = uVar19;
          if ((int)uVar19 <= (int)uVar11) {
            uVar22 = uVar11;
          }
          lVar14 = FUN_032bd1d4(local_a8,uVar22,4,lVar14,iVar20,(uint *)((long)param_1 + 0x33c));
          iVar20 = (int)param_1[0x67];
          param_1[0x66] = lVar14;
        }
        *(int *)(lVar14 + (long)iVar20 * 4) = iVar7;
        *(uint *)(param_1 + 0x67) = uVar19;
        *(undefined1 *)((long)plVar25 + 0x25) = 1;
      }
    }
  }
  return;
}


