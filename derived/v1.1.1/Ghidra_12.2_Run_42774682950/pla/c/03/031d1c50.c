/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d1c50; name: FUN_031d1c50
 */


void FUN_031d1c50(undefined4 *param_1,long param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  byte *pbVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int local_a8 [2];
  int local_a0;
  int local_9c;
  short local_98;
  undefined2 local_96;
  byte local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 auStack_78 [16];
  int local_68 [2];
  
  lVar8 = *(long *)(param_2 + 0x20);
  local_68[0] = *param_3;
  iVar13 = local_68[0] - *(int *)(lVar8 + 0x20);
  if (local_68[0] < *(int *)(lVar8 + 0x20)) {
    lVar20 = *(long *)(lVar8 + 0x18);
    iVar13 = local_68[0];
    if (*(int *)(lVar8 + 0x98) != 0) {
      iVar13 = *(int *)(*(long *)(lVar8 + 0x90) + (long)local_68[0] * 4);
    }
    if (iVar13 == -1) {
      iVar13 = local_68[0];
      goto LAB_031d1cc4;
    }
    plVar15 = (long *)(lVar8 + 0xb0);
  }
  else {
    plVar15 = (long *)(lVar8 + 0xd0);
  }
  lVar20 = *plVar15;
LAB_031d1cc4:
  lVar22 = lVar20 + (long)iVar13 * 0x10;
  sVar5 = *(short *)(lVar22 + 10);
  sVar6 = *(short *)(lVar22 + 8);
  *param_1 = *(undefined4 *)(lVar8 + 0xd8);
  local_88 = auStack_78;
  local_80 = -0x7ffffffc00000000;
  FUN_0318f46c(lVar8,local_68,&local_a0);
  local_90 = local_90 ^ 2;
  uVar3 = *(uint *)(*(long *)(param_2 + 0x20) + 0xe8);
  param_4 = sVar5 + param_4;
  lVar8 = FUN_0318aeac(param_2,param_4 + sVar6);
  local_a0 = *(int *)(*(long *)(param_2 + 0x20) + 0x30) + uVar3;
  local_98 = sVar6;
  if (0 < sVar6) {
    lVar21 = (long)(int)uVar3;
    lVar18 = 0;
    lVar22 = 0;
    do {
      iVar4 = *(int *)(lVar20 + (long)iVar13 * 0x10);
      iVar7 = (int)lVar22;
      iVar17 = iVar7 + iVar4;
      if (*(char *)(param_2 + 0x30) == '\x01') {
        lVar9 = *(long *)(param_2 + 0x20);
      }
      else {
        lVar9 = FUN_02898b44((long *)(param_2 + 0x20));
      }
      if (iVar17 < *(int *)(lVar9 + 0x30)) {
        lVar14 = *(long *)(lVar9 + 0x28);
        iVar10 = iVar17;
        if (*(int *)(lVar9 + 0x78) != 0) {
          iVar10 = *(int *)(*(long *)(lVar9 + 0x70) + (long)iVar17 * 4);
        }
        iVar11 = iVar17;
        if (iVar10 != -1) {
          plVar15 = (long *)(lVar9 + 0xc0);
          goto LAB_031d1e30;
        }
      }
      else {
        iVar10 = iVar7 + (iVar4 - *(int *)(lVar9 + 0x30));
        plVar15 = (long *)(lVar9 + 0xe0);
LAB_031d1e30:
        lVar14 = *plVar15;
        iVar11 = iVar10;
      }
      puVar12 = (undefined4 *)(lVar14 + (long)iVar11 * 0x14);
      puVar1 = (undefined4 *)(*(long *)(lVar9 + 0xe0) + lVar21 * 0x14 + lVar18);
      *puVar1 = *puVar12;
      puVar1[1] = puVar12[1];
      uVar16 = *(undefined8 *)(puVar12 + 2);
      *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(puVar12 + 4);
      *(undefined8 *)(puVar1 + 2) = uVar16;
      *(undefined2 *)((long)puVar1 + 0x12) = *(undefined2 *)((long)puVar12 + 0x12);
      *(short *)(*(long *)(lVar9 + 0x110) + lVar21 * 2 + lVar22 * 2) = (short)lVar22;
      iVar10 = *(int *)(lVar9 + 0x60);
      lVar14 = *(long *)(lVar9 + 0x150);
      pvVar2 = (void *)(lVar14 + (lVar21 + lVar22) * (long)iVar10 * 4);
      if (iVar17 < *(int *)(lVar9 + 0x30)) {
        lVar14 = *(long *)(lVar9 + 0x58);
        iVar4 = iVar17;
        if (*(int *)(lVar9 + 0x78) != 0) {
          iVar4 = *(int *)(*(long *)(lVar9 + 0x70) + (long)iVar17 * 4);
        }
        if (iVar4 != -1) {
          lVar14 = *(long *)(lVar9 + 0x130);
          iVar17 = iVar4;
        }
      }
      else {
        iVar17 = iVar7 + (iVar4 - *(int *)(lVar9 + 0x30));
      }
      memcpy(pvVar2,(void *)(lVar14 + (long)(iVar17 * iVar10) * 4),(long)iVar10 << 2);
      lVar9 = lVar8 + lVar18;
      *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
      *(byte *)(lVar9 + 0x10) = *(byte *)(lVar9 + 0x10) & 0xbf | 4;
      lVar22 = lVar22 + 1;
      lVar18 = lVar18 + 0x14;
    } while ((int)sVar6 != (int)lVar22);
    uVar3 = uVar3 + (int)lVar22;
    lVar8 = lVar8 + lVar18;
  }
  if (param_4 == 0) {
    local_9c = -1;
    local_96 = 0;
  }
  else {
    local_96 = (undefined2)param_4;
    local_9c = local_a0 + sVar6;
    if (0 < sVar5) {
      lVar22 = 0;
      lVar18 = ((long)(int)uVar3 + (long)(int)uVar3 * 4) * 4;
      pbVar19 = (byte *)(lVar8 + 0x10);
      do {
        iVar4 = *(int *)(lVar20 + (long)iVar13 * 0x10 + 4);
        iVar7 = (int)lVar22;
        iVar17 = iVar7 + iVar4;
        if (*(char *)(param_2 + 0x30) == '\x01') {
          lVar8 = *(long *)(param_2 + 0x20);
        }
        else {
          lVar8 = FUN_02898b44((long *)(param_2 + 0x20));
        }
        if (iVar17 < *(int *)(lVar8 + 0x30)) {
          lVar21 = *(long *)(lVar8 + 0x28);
          iVar10 = iVar17;
          if (*(int *)(lVar8 + 0x78) != 0) {
            iVar10 = *(int *)(*(long *)(lVar8 + 0x70) + (long)iVar17 * 4);
          }
          iVar11 = iVar17;
          if (iVar10 != -1) {
            plVar15 = (long *)(lVar8 + 0xc0);
            goto LAB_031d2004;
          }
        }
        else {
          iVar10 = iVar7 + (iVar4 - *(int *)(lVar8 + 0x30));
          plVar15 = (long *)(lVar8 + 0xe0);
LAB_031d2004:
          lVar21 = *plVar15;
          iVar11 = iVar10;
        }
        puVar12 = (undefined4 *)(lVar21 + (long)iVar11 * 0x14);
        puVar1 = (undefined4 *)(*(long *)(lVar8 + 0xe0) + lVar18);
        *puVar1 = *puVar12;
        puVar1[1] = puVar12[1];
        uVar16 = *(undefined8 *)(puVar12 + 2);
        *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(puVar12 + 4);
        *(undefined8 *)(puVar1 + 2) = uVar16;
        *(undefined2 *)((long)puVar1 + 0x12) = *(undefined2 *)((long)puVar12 + 0x12);
        *(short *)(*(long *)(lVar8 + 0x110) +
                   (-(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1) + lVar22 * 2)
             = sVar6 + (short)lVar22;
        iVar10 = *(int *)(lVar8 + 0x60);
        lVar21 = *(long *)(lVar8 + 0x150);
        pvVar2 = (void *)(lVar21 + ((int)uVar3 + lVar22) * (long)iVar10 * 4);
        if (iVar17 < *(int *)(lVar8 + 0x30)) {
          lVar21 = *(long *)(lVar8 + 0x58);
          iVar4 = iVar17;
          if (*(int *)(lVar8 + 0x78) != 0) {
            iVar4 = *(int *)(*(long *)(lVar8 + 0x70) + (long)iVar17 * 4);
          }
          if (iVar4 != -1) {
            lVar21 = *(long *)(lVar8 + 0x130);
            iVar17 = iVar4;
          }
        }
        else {
          iVar17 = iVar7 + (iVar4 - *(int *)(lVar8 + 0x30));
        }
        memcpy(pvVar2,(void *)(lVar21 + (long)(iVar17 * iVar10) * 4),(long)iVar10 << 2);
        pbVar19[-8] = 0xff;
        pbVar19[-7] = 0xff;
        pbVar19[-6] = 0xff;
        pbVar19[-5] = 0xff;
        pbVar19[-4] = 0xff;
        pbVar19[-3] = 0xff;
        pbVar19[-2] = 0xff;
        pbVar19[-1] = 0xff;
        lVar22 = lVar22 + 1;
        *pbVar19 = *pbVar19 & 0xbf | 4;
        lVar18 = lVar18 + 0x14;
        pbVar19 = pbVar19 + 0x14;
      } while ((int)sVar5 != (int)lVar22);
    }
  }
  local_a8[0] = *param_3;
  FUN_0318aaa8(param_2,local_a8,&local_a0,1);
  lVar8 = local_80;
  uVar3 = local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_88 != (undefined1 *)0x0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_88,4,uVar3 & 0x3fffffff);
  }
  return;
}


