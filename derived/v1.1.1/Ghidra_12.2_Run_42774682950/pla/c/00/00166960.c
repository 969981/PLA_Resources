/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00166960; name: FUN_00166960
 */


void FUN_00166960(long param_1,int param_2,int param_3,int *param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined1 auVar11 [12];
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  
  plVar9 = *(long **)(param_1 + 0x30);
  bVar1 = *(char *)((long)plVar9 + 0x3a) + 3;
  *(byte *)((long)plVar9 + 0x3a) = bVar1;
  *(int *)(*(long *)(*plVar9 + 0x50) +
           (long)*(short *)(**(long **)(plVar9[2] + 0x58) +
                           (long)(int)(*(int *)((long)plVar9 + 0x34) + (uint)bVar1 + -3) * 2) * 0x10
          + 8) = (int)plVar9[4];
  *(int *)(*(long *)(*plVar9 + 0x50) +
           (long)*(short *)(**(long **)(plVar9[2] + 0x58) +
                           (long)(int)((uint)*(byte *)((long)plVar9 + 0x3a) +
                                       *(int *)((long)plVar9 + 0x34) + -2) * 2) * 0x10 + 8) =
       (int)plVar9[4];
  *(int *)(*(long *)(*plVar9 + 0x50) +
           (long)*(short *)(**(long **)(plVar9[2] + 0x58) +
                           (long)(int)((uint)*(byte *)((long)plVar9 + 0x3a) +
                                       *(int *)((long)plVar9 + 0x34) + -1) * 2) * 0x10 + 8) =
       (int)plVar9[4];
  if (*(int *)(param_1 + 0x10) != 0x103) {
    auVar11 = FUN_00166920(param_1,0x103);
    lVar7 = *(long *)(auVar11._0_8_ + 0x30);
    iVar8 = auVar11._8_4_ - param_3;
    if (*param_4 - 0xdU < 2) {
      iVar4 = iVar8;
      if (iVar8 < 0) {
        iVar4 = -1;
      }
      FUN_001679a0(lVar7,param_4,iVar4 + 1);
      if (0 < iVar4) {
        FUN_00167750(lVar7,iVar4);
      }
    }
    else {
      if (*param_4 != 0) {
        FUN_00167c00(lVar7,param_4);
      }
      if (0 < iVar8) {
        uVar3 = *(undefined1 *)(lVar7 + 0x3c);
        FUN_00167750(lVar7,iVar8);
        FUN_00166fb0(lVar7,uVar3,iVar8);
      }
    }
    if (auVar11._8_4_ < param_3) {
      lVar7 = *(long *)(auVar11._0_8_ + 0x30);
      *(char *)(lVar7 + 0x3c) = *(char *)(lVar7 + 0x3c) + (char)iVar8;
    }
    return;
  }
  iVar8 = (int)param_4;
  FUN_0016a400(param_1);
  if (param_5 == 0) {
    iVar4 = FUN_001670f0(plVar9);
  }
  else {
    iVar4 = FUN_001671c0(plVar9,0x28,param_2,0x1fffe);
  }
  local_7e = 0;
  local_80 = *(undefined1 *)((long)plVar9 + 0x3a);
  local_88 = *(undefined4 *)(*(long *)(plVar9[2] + 0x58) + 0x28);
  uStack_84 = *(undefined4 *)(*(long *)(plVar9[2] + 0x58) + 0x18);
  local_7f = 0;
  local_90 = plVar9[3];
  plVar9[3] = (long)&local_90;
  plVar6 = *(long **)(param_1 + 0x30);
  uVar2 = (uint)*(byte *)((long)plVar6 + 0x3a) + iVar8;
  *(char *)((long)plVar6 + 0x3a) = (char)uVar2;
  if ((iVar8 != 0) &&
     (*(int *)(*(long *)(*plVar6 + 0x50) +
               (long)*(short *)(**(long **)(plVar6[2] + 0x58) +
                               (long)(int)(((uVar2 & 0xff) - iVar8) + *(int *)((long)plVar6 + 0x34))
                               * 2) * 0x10 + 8) = (int)plVar6[4], iVar8 != 1)) {
    iVar8 = -iVar8;
    do {
      iVar8 = iVar8 + 1;
      *(int *)(*(long *)(*plVar6 + 0x50) +
               (long)*(short *)(**(long **)(plVar6[2] + 0x58) +
                               (long)(int)(iVar8 + *(int *)((long)plVar6 + 0x34) +
                                                   (uint)*(byte *)((long)plVar6 + 0x3a)) * 2) * 0x10
              + 8) = (int)plVar6[4];
    } while (iVar8 != -1);
  }
  FUN_00167750(plVar9,(ulong)param_4 & 0xffffffff);
  lVar10 = *(long *)(param_1 + 0x30);
  local_66 = 0;
  local_68 = *(undefined1 *)(lVar10 + 0x3a);
  lVar7 = *(long *)(*(long *)(lVar10 + 0x10) + 0x58);
  local_70 = *(undefined4 *)(lVar7 + 0x28);
  uStack_6c = *(undefined4 *)(lVar7 + 0x18);
  local_67 = 0;
  local_78 = *(undefined8 *)(lVar10 + 0x18);
  *(undefined8 **)(lVar10 + 0x18) = &local_78;
  do {
    iVar8 = *(int *)(param_1 + 0x10);
    uVar2 = iVar8 - 0x104;
    if (uVar2 < 0x1e && (1 << (ulong)(uVar2 & 0x1f) & 0x20020007U) != 0) break;
    FUN_00163c30(param_1);
  } while (iVar8 != 0x112);
  FUN_00165020(lVar10);
  FUN_00165020(plVar9);
  FUN_00167200(plVar9,iVar4);
  if (param_5 == 0) {
    FUN_00167040(plVar9,0x29,param_2,0,(ulong)param_4 & 0xffffffff);
    FUN_00169ae0(plVar9,param_3);
    uVar5 = FUN_001671c0(plVar9,0x2a,param_2 + 2,0x1fffe);
  }
  else {
    uVar5 = FUN_001671c0(plVar9,0x27,param_2,0x1fffe);
  }
  FUN_001672a0(plVar9,uVar5,iVar4 + 1);
  FUN_00169ae0(plVar9,param_3);
  return;
}


