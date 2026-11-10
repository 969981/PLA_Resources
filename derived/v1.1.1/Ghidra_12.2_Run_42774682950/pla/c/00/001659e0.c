/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001659e0; name: FUN_001659e0
 */


void FUN_001659e0(long param_1,undefined4 *param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  
  plVar9 = *(long **)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  lVar13 = *plVar9;
  piVar14 = (int *)(lVar13 + 0x20);
  iVar11 = *piVar14;
  if (iVar11 <= (int)plVar9[6]) {
    lVar5 = FUN_00161400(uVar6,*(undefined8 *)(lVar13 + 0x40),piVar14,8,0x3ffff,"functions");
    *(long *)(lVar13 + 0x40) = lVar5;
    if (iVar11 < *(int *)(lVar13 + 0x20)) {
      *(undefined8 *)(lVar5 + (long)iVar11 * 8) = 0;
      lVar5 = (long)iVar11 + 1;
      if (lVar5 < *piVar14) {
        do {
          *(undefined8 *)(*(long *)(lVar13 + 0x40) + lVar5 * 8) = 0;
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(lVar13 + 0x20));
      }
    }
  }
  local_a0 = FUN_0015c910(uVar6);
  lVar5 = plVar9[6];
  lVar8 = *(long *)(lVar13 + 0x40);
  *(int *)(plVar9 + 6) = (int)lVar5 + 1;
  *(long *)(lVar8 + (long)(int)lVar5 * 8) = local_a0;
  if (((*(byte *)(lVar13 + 9) >> 2 & 1) != 0) && ((*(byte *)(local_a0 + 9) & 3) != 0)) {
    FUN_0015ca90(uVar6,lVar13,local_a0);
  }
  *(int *)(local_a0 + 0x28) = param_4;
  local_98 = *(undefined8 *)(param_1 + 0x30);
  *(long **)(param_1 + 0x30) = &local_a0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0xffffffff;
  local_70 = 0;
  local_64 = 0;
  local_6c = *(undefined4 *)(*(long *)(param_1 + 0x58) + 8);
  *(undefined8 *)(local_a0 + 0x68) = *(undefined8 *)(param_1 + 0x60);
  *(undefined1 *)(local_a0 + 0xc) = 2;
  local_a8 = 0;
  local_a6 = 0;
  local_b0 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x28);
  uStack_ac = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x18);
  local_b8 = 0;
  local_88 = &local_b8;
  local_a7 = 0;
  local_90 = param_1;
  if (*(int *)(param_1 + 0x10) == 0x28) {
    FUN_0016a400(param_1);
    if (param_3 != 0) {
      uVar6 = FUN_0016a2d0(param_1,&DAT_0395cafe,4);
      FUN_00166260(param_1,uVar6);
      plVar9 = *(long **)(param_1 + 0x30);
      bVar1 = *(char *)((long)plVar9 + 0x3a) + 1;
      *(byte *)((long)plVar9 + 0x3a) = bVar1;
      *(int *)(*(long *)(*plVar9 + 0x50) +
               (long)*(short *)(**(long **)(plVar9[2] + 0x58) +
                               (long)(int)(*(int *)((long)plVar9 + 0x34) + (uint)bVar1 + -1) * 2) *
               0x10 + 8) = (int)plVar9[4];
    }
    plVar9 = *(long **)(param_1 + 0x30);
    iVar11 = 0;
    lVar13 = *plVar9;
    *(undefined1 *)(lVar13 + 0xb) = 0;
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 != 0x29) {
      iVar11 = 0;
      while (iVar3 == 0x124) {
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        FUN_0016a400(param_1);
        FUN_00166260(param_1,uVar6);
        iVar11 = iVar11 + 1;
        if ((*(char *)(lVar13 + 0xb) != '\0') || (*(int *)(param_1 + 0x10) != 0x2c))
        goto LAB_00165c44;
        FUN_0016a400(param_1);
        iVar3 = *(int *)(param_1 + 0x10);
      }
      if (iVar3 != 0x119) goto LAB_00165dd8;
      FUN_0016a400(param_1);
      *(undefined1 *)(lVar13 + 0xb) = 1;
    }
LAB_00165c44:
    plVar10 = *(long **)(param_1 + 0x30);
    uVar2 = (uint)*(byte *)((long)plVar10 + 0x3a) + iVar11;
    *(char *)((long)plVar10 + 0x3a) = (char)uVar2;
    if ((iVar11 != 0) &&
       (*(int *)(*(long *)(*plVar10 + 0x50) +
                 (long)*(short *)(**(long **)(plVar10[2] + 0x58) +
                                 (long)(int)(((uVar2 & 0xff) - iVar11) +
                                            *(int *)((long)plVar10 + 0x34)) * 2) * 0x10 + 8) =
             (int)plVar10[4], iVar11 != 1)) {
      iVar11 = -iVar11;
      do {
        iVar11 = iVar11 + 1;
        *(int *)(*(long *)(*plVar10 + 0x50) +
                 (long)*(short *)(**(long **)(plVar10[2] + 0x58) +
                                 (long)(int)(iVar11 + *(int *)((long)plVar10 + 0x34) +
                                                      (uint)*(byte *)((long)plVar10 + 0x3a)) * 2) *
                 0x10 + 8) = (int)plVar10[4];
      } while (iVar11 != -1);
    }
    *(undefined1 *)(lVar13 + 10) = *(undefined1 *)((long)plVar9 + 0x3a);
    FUN_00167750(plVar9,*(undefined1 *)((long)plVar9 + 0x3a));
    if (*(int *)(param_1 + 0x10) == 0x29) {
      FUN_0016a400(param_1);
      do {
        iVar11 = *(int *)(param_1 + 0x10);
        uVar2 = iVar11 - 0x104;
        if (uVar2 < 0x1e && (1 << (ulong)(uVar2 & 0x1f) & 0x20020007U) != 0) break;
        FUN_00163c30(param_1);
      } while (iVar11 != 0x112);
      *(undefined4 *)(local_a0 + 0x2c) = *(undefined4 *)(param_1 + 4);
      if (*(int *)(param_1 + 0x10) == 0x106) {
        FUN_0016a400(param_1);
        lVar13 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        uVar4 = FUN_001671c0(lVar13,0x2c,0,*(int *)(lVar13 + 0x30) + -1);
        *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
        param_2[2] = uVar4;
        *param_2 = 0xc;
        FUN_00167c00(lVar13,param_2);
        FUN_00163a50(param_1);
        return;
      }
      if (*(int *)(param_1 + 4) == param_4) {
        FUN_00166920(param_1,0x106);
      }
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      uVar6 = FUN_0016a120(param_1,0x106);
      uVar7 = FUN_0016a120(param_1,0x109);
      uVar6 = FUN_00162fa0(uVar12,"%s expected (to close %s at line %d)",uVar6,uVar7,param_4);
                    /* WARNING: Subroutine does not return */
      FUN_0016a180(param_1,uVar6);
    }
  }
  else {
    FUN_00166920(param_1,0x28);
  }
  FUN_00166920(param_1,0x29);
LAB_00165dd8:
                    /* WARNING: Subroutine does not return */
  FUN_0016a180(param_1,"<name> or \'...\' expected");
}


