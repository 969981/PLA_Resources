/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002655dc; name: FUN_002655dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002655dc(undefined8 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 local_70;
  undefined8 *puStack_68;
  
  lVar10 = param_1[4];
  lVar12 = *(long *)(*(long *)(lVar10 + 0x98) + (long)param_4 * 8);
  if ((lVar12 == 0) || (*(char *)(lVar12 + 9) == '\0')) {
    FUN_00271770("The Resource is not found in VfxSystem. ResourceId : %d.\n",param_4);
    return 0;
  }
  *param_1 = *(undefined8 *)(lVar12 + 0x10);
  if (param_2 < *(int *)(lVar12 + 0x4c)) {
    lVar11 = *(long *)(*(long *)(lVar12 + 0x60) + (long)param_2 * 8);
    if (lVar11 == 0) {
      lVar11 = *(long *)(lVar12 + 0x58) + (long)param_2 * 0x38;
      param_1[0x47] = lVar11;
      if (lVar11 == 0) goto LAB_00265678;
      lVar11 = *(long *)(lVar11 + 0x18);
    }
    else {
      param_1[0x47] = lVar11;
      lVar11 = *(long *)(lVar11 + 0x18);
    }
    if (lVar11 == 0) {
LAB_00265738:
      *(undefined4 *)(param_1 + 1) = 0x1010000;
      param_1[0x2a] = 0;
      param_1[0x2b] = 0;
      *(undefined2 *)((long)param_1 + 0x264) = 0x100;
      *(undefined2 *)((long)param_1 + 0xf) = 0x8000;
      uVar3 = _UNK_03888fc8;
      uVar2 = _DAT_03888fc0;
      *(int *)(param_1 + 5) = param_2;
      *(undefined4 *)((long)param_1 + 0x2c) = param_3;
      param_1[0x3c] = param_7;
      *(int *)(param_1 + 6) = param_4;
      *(undefined4 *)((long)param_1 + 0x14) = param_5;
      param_1[0x2c] = 0;
      *(undefined4 *)(param_1 + 0x2d) = 0;
      *(undefined1 *)((long)param_1 + 0xd) = 0;
      *(undefined4 *)(param_1 + 0x46) = 0;
      *(undefined4 *)(param_1 + 0x2e) = 0;
      param_1[0x38] = 0;
      *(undefined4 *)(param_1 + 0x39) = 0;
      *(undefined4 *)(param_1 + 7) = 0;
      *(undefined4 *)(param_1 + 0x42) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x35) = 0;
      param_1[10] = 0x3f8000003f800000;
      *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
      *(undefined8 *)((long)param_1 + 0x3c) = 0;
      *(undefined1 *)((long)param_1 + 0xe) = 0;
      *(undefined4 *)((long)param_1 + 0x25c) = 0;
      param_1[0x3a] = 0;
      param_1[0x3b] = 0;
      *(undefined4 *)(param_1 + 9) = 0xffffffff;
      *(undefined4 *)((long)param_1 + 0x4c) = 0x3f800000;
      param_1[0x2f] = 0;
      param_1[0x30] = 0;
      param_1[0x29] = uVar3;
      param_1[0x28] = uVar2;
      param_1[0x31] = 0;
      param_1[0x32] = 0;
      param_1[0x33] = 0;
      param_1[0x34] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
      param_1[0x1d] = uVar3;
      param_1[0x1c] = uVar2;
      param_1[0x1f] = uVar3;
      param_1[0x1e] = uVar2;
      param_1[0x23] = 0;
      param_1[0x22] = 0;
      param_1[0x45] = 0;
      param_1[0x44] = 0;
      param_1[0x48] = *(undefined8 *)(lVar10 + 0x1178);
      param_1[0x49] = *(undefined8 *)(lVar10 + 0x1180);
      uVar7 = DAT_0388a148;
      uVar6 = DAT_0388a140;
      uVar5 = _UNK_03889a88;
      uVar4 = _DAT_03889a80;
      uVar1 = _UNK_03888d18;
      uVar9 = _DAT_03888d10;
      *(undefined4 *)(param_1 + 3) = 0;
      *(undefined4 *)((long)param_1 + 0x44) = param_6;
      param_1[0x4a] = 0;
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar4;
      param_1[0xf] = uVar7;
      param_1[0xe] = uVar6;
      param_1[0x11] = uVar1;
      param_1[0x10] = uVar9;
      param_1[0x13] = 0;
      param_1[0x12] = 0;
      param_1[0x15] = uVar5;
      param_1[0x14] = uVar4;
      param_1[0x17] = uVar7;
      param_1[0x16] = uVar6;
      param_1[0x19] = uVar1;
      param_1[0x18] = uVar9;
      param_1[0x1b] = 0;
      param_1[0x1a] = 0;
      FUN_00265898(param_1);
      auVar13 = NEON_fmov(0x3f800000,4);
      uVar9 = 1;
      param_1[0x21] = auVar13._8_8_;
      param_1[0x20] = auVar13._0_8_;
      param_1[0x3d] = 0x3f8000003f800000;
      *(undefined4 *)(param_1 + 0x42) = 0x3f800000;
      *(undefined4 *)(param_1 + 3) = 1;
      param_1[0x25] = uVar3;
      param_1[0x24] = uVar2;
      param_1[0x27] = uVar3;
      param_1[0x26] = uVar2;
      param_1[0x3f] = 0;
      param_1[0x3e] = 0;
      if ((code *)param_1[0x48] != (code *)0x0) {
        local_70 = param_1[4];
        puStack_68 = param_1;
        (*(code *)param_1[0x48])(&local_70);
        uVar9 = 1;
      }
    }
    else {
      uVar8 = FUN_002678e8(lVar11,lVar12);
      while ((uVar8 & 1) != 0) {
        if (0 < *(int *)(lVar11 + 0x88)) {
          lVar10 = 0;
          do {
            uVar8 = FUN_002678e8(*(undefined8 *)(lVar11 + 0x90 + lVar10 * 8),lVar12);
            if ((uVar8 & 1) == 0) goto LAB_0026571c;
            lVar10 = lVar10 + 1;
          } while (lVar10 < *(int *)(lVar11 + 0x88));
        }
        lVar11 = *(long *)(lVar11 + 0x110);
        if (lVar11 == 0) {
          lVar10 = param_1[4];
          goto LAB_00265738;
        }
        uVar8 = FUN_002678e8(lVar11,lVar12);
      }
LAB_0026571c:
      FUN_00271770("EmitterResource Setup Failed.\n");
      uVar9 = 0;
    }
  }
  else {
    param_1[0x47] = 0;
LAB_00265678:
    FUN_00271770("The EmitterSet is not found in this resource. EmitterSet Id : %d. ResourceId : %d\n"
                 ,param_2,param_4);
    uVar9 = 0;
  }
  return uVar9;
}


