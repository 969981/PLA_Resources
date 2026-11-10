/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03178b6c; name: FUN_03178b6c
 */


void FUN_03178b6c(long param_1,undefined4 param_2,ulong param_3,long param_4)

{
  int *piVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long *plVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  int local_98 [2];
  int *local_90;
  undefined8 local_88;
  int aiStack_80 [4];
  uint local_70 [2];
  int local_68 [2];
  
  uVar19 = param_3 >> 0x16 & 0x3ff;
  iVar17 = (int)uVar19;
  uVar2 = (uint)param_3 & 0x3fffff;
  lVar12 = *(long *)(*(long *)(param_1 + 0x38) + uVar19 * 0xf0);
  local_68[0] = iVar17;
  if (lVar12 == 0) {
    lVar12 = 0;
  }
  else if (*(char *)(lVar12 + 0x30) == '\x01') {
    lVar12 = *(long *)(lVar12 + 0x20);
  }
  else {
    lVar12 = FUN_02898b44();
  }
  local_70[0] = uVar2;
  FUN_03190ea0(lVar12,param_2,local_70,param_4);
  puVar7 = PTR_PTR_0434a090;
  if (*(char *)(param_4 + 0x28) == '\0') {
    return;
  }
  uVar11 = uVar2 - *(int *)(lVar12 + 0x20);
  if ((int)uVar2 < *(int *)(lVar12 + 0x20)) {
    if (*(int *)(lVar12 + 0x98) == 0) {
      uVar11 = uVar2;
    }
    else {
      uVar11 = *(uint *)(*(long *)(lVar12 + 0x90) + (ulong)uVar2 * 4);
      if (uVar11 == 0xffffffff) {
        lVar12 = *(long *)(lVar12 + 0x18) + (ulong)uVar2 * 0x10;
        goto LAB_03178c30;
      }
    }
    lVar12 = *(long *)(lVar12 + 0xb0);
  }
  else {
    lVar12 = *(long *)(lVar12 + 0xd0);
  }
  lVar12 = lVar12 + (long)(int)uVar11 * 0x10;
LAB_03178c30:
  uVar3 = *(ushort *)(lVar12 + 8);
  local_90 = aiStack_80;
  uVar4 = *(ushort *)(lVar12 + 10);
  local_88 = 0x8000000400000000;
  lVar12 = *(long *)(param_1 + 0x38);
  lVar22 = lVar12 + uVar19 * 0xf0;
  plVar23 = (long *)(lVar22 + 0xa0);
  piVar21 = (int *)*plVar23;
  iVar16 = *(int *)(lVar22 + 0xa8);
  if (iVar16 != 0) {
    piVar1 = piVar21 + (long)iVar16 * 2;
    do {
      iVar16 = *piVar21;
      iVar5 = piVar21[1];
      lVar22 = *(long *)(param_1 + 0x48);
      plVar25 = (long *)(lVar22 + (long)iVar5 * 0x18);
      lVar20 = *plVar25;
      iVar18 = *(int *)(lVar20 + 0x30);
      if (0 < iVar18) {
        uVar24 = (ulong)iVar18;
        bVar8 = *(int *)(lVar20 + 0x18) != iVar17;
        lVar27 = uVar24 * 0xc;
        do {
          lVar26 = *(long *)(lVar20 + 0x28);
          uVar24 = uVar24 - 1;
          if (*(uint *)(lVar26 + (ulong)bVar8 * 4 + -0xc + lVar27) == uVar2) {
            if (*(char *)(lVar22 + (long)iVar5 * 0x18 + 0x10) == '\x01') {
              lVar9 = *plVar25;
            }
            else {
              lVar9 = FUN_0317cc14(plVar25);
            }
            uVar11 = (int)*(short *)(lVar26 + ((ulong)bVar8 << 1 | 0xfffffffffffffffc) + lVar27) -
                     ((uint)uVar4 + (uint)uVar3 & 0xffff);
            if ((1 << (ulong)(uVar11 & 0x1f) &
                *(uint *)(*(long *)(param_4 + 0x10) + (long)((int)uVar11 >> 5) * 4)) != 0) {
              uVar13 = (long)*(int *)(lVar9 + 0x30) - 1;
              *(int *)(lVar9 + 0x30) = (int)uVar13;
              if (uVar24 != (uVar13 & 0xffffffff)) {
                puVar14 = (undefined4 *)(*(long *)(lVar9 + 0x28) + uVar13 * 0xc);
                lVar26 = *(long *)(lVar9 + 0x28) + lVar27;
                *(undefined4 *)(lVar26 + -0xc) = *puVar14;
                *(undefined4 *)(lVar26 + -8) = puVar14[1];
                *(undefined4 *)(lVar26 + -4) = puVar14[2];
              }
            }
          }
          lVar27 = lVar27 + -0xc;
        } while (0 < (long)uVar24);
        iVar18 = *(int *)(lVar20 + 0x30);
      }
      if ((iVar18 == 0) && (*(long *)(lVar20 + 0x20) == 0)) {
        iVar18 = (int)local_88 + 1;
        if ((int)(local_88._4_4_ & 0x3fffffff) <= (int)local_88) {
          local_90 = (int *)FUN_0317d1f0(puVar7,iVar18,local_90,local_88 & 0xffffffff,
                                         (long)&local_88 + 4);
        }
        local_90[(int)local_88] = iVar16;
        local_88 = CONCAT44(local_88._4_4_,iVar18);
      }
      piVar21 = piVar21 + 2;
    } while (piVar21 != piVar1);
    if ((int)local_88 != 0) {
      lVar12 = lVar12 + uVar19 * 0xf0;
      piVar1 = local_90 + (int)local_88;
      plVar25 = (long *)(lVar12 + 0xb0);
      piVar21 = local_90;
      do {
        local_98[0] = *piVar21;
        lVar20 = (long)local_98[0];
        lVar22 = FUN_0317c8b8(plVar23,local_98);
        if (lVar22 == 0) {
          uVar19 = 0xffffffff00000000;
          uVar24 = 0xffffffff;
        }
        else {
          uVar24 = (ulong)*(uint *)(lVar22 + 4);
          uVar19 = (lVar22 - *plVar25) * 0x20000000;
        }
        iVar17 = *(int *)(*plVar23 + ((long)((uVar24 | uVar19) << 0x20) >> 0x1d) + 4);
        iVar16 = (int)(uVar24 | uVar19);
        if ((*(uint *)(lVar12 + 0xb8) < (uint)(uVar19 >> 0x20)) ||
           (lVar22 = *plVar25 + ((long)uVar19 >> 0x20) * 8, *(int *)(lVar22 + 4) != iVar16)) {
          lVar22 = FUN_0317c8b8(plVar23,*plVar23 + (long)iVar16 * 8);
        }
        FUN_0317c938(plVar23,lVar22);
        lVar22 = *(long *)(param_1 + 0x38) + lVar20 * 0xf0 + 0xa0;
        lVar20 = FUN_0317c8b8(lVar22,local_68);
        if (lVar20 != 0) {
          FUN_0317c938(lVar22,lVar20);
        }
        plVar15 = (long *)(*(long *)(param_1 + 0x48) + (long)iVar17 * 0x18);
        *(undefined1 *)(plVar15 + 2) = 1;
        plVar10 = (long *)*plVar15;
        *plVar15 = 0;
        if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
          plVar15 = plVar10 + 2;
          do {
            lVar22 = *plVar15;
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar8) {
              *plVar15 = lVar22 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar22 + -1 == 0) {
            (**(code **)(*plVar10 + 0x18))();
          }
        }
        piVar21 = piVar21 + 1;
      } while (piVar21 != piVar1);
    }
  }
  uVar19 = local_88;
  uVar2 = local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < (long)uVar19) && (local_90 != (int *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))(PTR_PTR_0434a090,local_90,uVar2 << 2);
  }
  return;
}


