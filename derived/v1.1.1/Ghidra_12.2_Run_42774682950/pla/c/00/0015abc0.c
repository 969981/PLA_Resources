/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015abc0; name: FUN_0015abc0
 */


undefined8 FUN_0015abc0(long param_1,long *param_2,undefined2 param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  long *plVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  code *pcVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  
  iVar7 = 1000000;
  uVar10 = *(uint *)(param_2 + 1);
  while (uVar10 = uVar10 & 0x3f, uVar10 != 6) {
    if (uVar10 == 0x16) {
      plVar8 = param_2;
LAB_0015aeb8:
      pcVar18 = (code *)*plVar8;
      if (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x10) < 0x150) {
        lVar17 = *(long *)(param_1 + 0x38);
        if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
          FUN_0015dc70(param_1);
        }
        if (1000000 < *(int *)(param_1 + 0xb8)) goto LAB_0015b0b0;
        iVar12 = *(int *)(param_1 + 0xb8) * 2;
        if (999999 < iVar12) {
          iVar12 = iVar7;
        }
        iVar7 = (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x38)) >> 4) + 0x19;
        if (iVar7 <= iVar12) {
          iVar7 = iVar12;
        }
        if (1000000 < iVar7) goto LAB_0015b0bc;
        FUN_0015a490(param_1);
        param_2 = (long *)((long)param_2 + (*(long *)(param_1 + 0x38) - lVar17));
      }
      plVar8 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)FUN_0016ca50(param_1);
      }
      *(long **)(param_1 + 0x20) = plVar8;
      *(undefined2 *)(plVar8 + 8) = param_3;
      *plVar8 = (long)param_2;
      plVar8[1] = *(long *)(param_1 + 0x10) + 0x140;
      *(undefined2 *)((long)plVar8 + 0x42) = 0;
      if ((*(byte *)(param_1 + 200) & 1) != 0) {
        FUN_0015a800(param_1,0,0xffffffff);
      }
      iVar7 = (*pcVar18)(param_1);
      FUN_0015a930(param_1,plVar8,*(long *)(param_1 + 0x10) + (long)iVar7 * -0x10,iVar7);
      return 1;
    }
    if (uVar10 == 0x26) {
      plVar8 = (long *)(*param_2 + 0x18);
      goto LAB_0015aeb8;
    }
    if (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x10) < 0x20) {
      lVar17 = *(long *)(param_1 + 0x38);
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_0015dc70(param_1);
      }
      if (1000000 < *(int *)(param_1 + 0xb8)) goto LAB_0015b0b0;
      iVar12 = *(int *)(param_1 + 0xb8) * 2;
      if (999999 < iVar12) {
        iVar12 = iVar7;
      }
      iVar2 = (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x38)) >> 4) + 6;
      if (iVar2 <= iVar12) {
        iVar2 = iVar12;
      }
      if (1000000 < iVar2) goto LAB_0015b0bc;
      FUN_0015a490(param_1);
      param_2 = (long *)((long)param_2 + (*(long *)(param_1 + 0x38) - lVar17));
    }
    plVar8 = (long *)FUN_00173900(param_1,param_2,0x17);
    if ((*(uint *)(plVar8 + 1) & 0xf) != 6) {
      FUN_00159980(param_1,param_2,&DAT_038aa230);
      goto LAB_0015b0b0;
    }
    plVar19 = *(long **)(param_1 + 0x10);
    if (param_2 < plVar19) {
      do {
        plVar11 = plVar19 + -2;
        *plVar19 = *plVar11;
        plVar19[1] = plVar19[-1];
        plVar19 = plVar11;
      } while (param_2 < plVar11);
      plVar19 = *(long **)(param_1 + 0x10);
    }
    *(long **)(param_1 + 0x10) = plVar19 + 2;
    lVar17 = plVar8[1];
    *param_2 = *plVar8;
    param_2[1] = lVar17;
    uVar10 = *(uint *)(param_2 + 1);
  }
  lVar21 = *(long *)(param_1 + 0x10);
  lVar17 = *(long *)(*param_2 + 0x18);
  bVar4 = *(byte *)(lVar17 + 0xc);
  plVar8 = param_2;
  if (*(long *)(param_1 + 0x30) - lVar21 >> 4 <= (long)(ulong)bVar4) {
    lVar20 = *(long *)(param_1 + 0x38);
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      FUN_0015dc70(param_1);
    }
    if (1000000 < *(int *)(param_1 + 0xb8)) {
LAB_0015b0b0:
                    /* WARNING: Subroutine does not return */
      FUN_0015a320(param_1,6);
    }
    iVar12 = *(int *)(param_1 + 0xb8) * 2;
    if (999999 < iVar12) {
      iVar12 = iVar7;
    }
    iVar7 = (uint)bVar4 + (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x38)) >> 4)
            + 5;
    if (iVar7 <= iVar12) {
      iVar7 = iVar12;
    }
    if (1000000 < iVar7) {
LAB_0015b0bc:
      FUN_0015a490(param_1,0xf4308);
                    /* WARNING: Subroutine does not return */
      FUN_001599d0(param_1,"stack overflow");
    }
    FUN_0015a490(param_1);
    plVar8 = (long *)((long)param_2 + (*(long *)(param_1 + 0x38) - lVar20));
  }
  bVar5 = *(byte *)(lVar17 + 10);
  iVar12 = (int)((ulong)(lVar21 - (long)param_2) >> 4);
  iVar7 = iVar12 + -1;
  uVar10 = (uint)bVar5;
  if (*(char *)(lVar17 + 0xb) == '\0') {
    if (iVar12 <= (int)uVar10) {
      do {
        lVar21 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar21 + 0x10;
        *(undefined4 *)(lVar21 + 8) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)(uint)*(byte *)(lVar17 + 10));
    }
    plVar19 = plVar8 + 2;
  }
  else {
    plVar19 = *(long **)(param_1 + 0x10);
    uVar13 = 0;
    if ((0 < iVar7) && (bVar5 != 0)) {
      *(long **)(param_1 + 0x10) = plVar19 + 2;
      lVar21 = (plVar19 + (long)iVar7 * -2)[1];
      lVar20 = (long)iVar7;
      *plVar19 = plVar19[(long)iVar7 * -2];
      plVar19[1] = lVar21;
      uVar13 = 1;
      *(undefined4 *)(plVar19 + lVar20 * -2 + 1) = 0;
      if ((1 < bVar5) && (1 < iVar7)) {
        plVar11 = plVar19 + (1 - lVar20) * 2 + 1;
        uVar14 = 2;
        do {
          plVar15 = *(long **)(param_1 + 0x10);
          *(long **)(param_1 + 0x10) = plVar15 + 2;
          lVar21 = *plVar11;
          *plVar15 = plVar11[-1];
          plVar15[1] = lVar21;
          uVar3 = uVar14 + 1;
          *(undefined4 *)plVar11 = 0;
          if (bVar5 <= uVar14) break;
          plVar11 = plVar11 + 2;
          bVar1 = (long)uVar14 < lVar20;
          uVar14 = uVar3;
        } while (bVar1);
        uVar13 = (int)uVar3 - 1;
      }
    }
    if (uVar13 < uVar10) {
      uVar6 = ~uVar13;
      if ((uVar10 - uVar13 & 1) != 0) {
        lVar21 = *(long *)(param_1 + 0x10);
        uVar13 = uVar13 + 1;
        *(long *)(param_1 + 0x10) = lVar21 + 0x10;
        *(undefined4 *)(lVar21 + 8) = 0;
      }
      if (uVar6 + uVar10 != 0) {
        iVar7 = uVar10 - uVar13;
        do {
          lVar21 = *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x10) = lVar21 + 0x10;
          *(undefined4 *)(lVar21 + 8) = 0;
          lVar21 = *(long *)(param_1 + 0x10);
          iVar7 = iVar7 + -2;
          *(long *)(param_1 + 0x10) = lVar21 + 0x10;
          *(undefined4 *)(lVar21 + 8) = 0;
        } while (iVar7 != 0);
      }
    }
  }
  puVar16 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x18);
  if (puVar16 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)FUN_0016ca50(param_1);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar16;
  *(undefined2 *)(puVar16 + 8) = param_3;
  puVar16[4] = plVar19;
  *puVar16 = plVar8;
  puVar16[1] = plVar19 + (ulong)bVar4 * 2;
  *(long **)(param_1 + 0x10) = plVar19 + (ulong)bVar4 * 2;
  lVar17 = *(long *)(lVar17 + 0x38);
  puVar16[5] = lVar17;
  *(undefined2 *)((long)puVar16 + 0x42) = 2;
  if ((*(byte *)(param_1 + 200) & 1) != 0) {
    puVar16[5] = lVar17 + 4;
    if (((*(byte *)(puVar16[2] + 0x42) >> 1 & 1) == 0) ||
       ((*(uint *)(*(long *)(puVar16[2] + 0x28) + -4) & 0x3f) != 0x25)) {
      uVar9 = 0;
    }
    else {
      uVar9 = 4;
      *(undefined2 *)((long)puVar16 + 0x42) = 0x22;
    }
    FUN_0015a800(param_1,uVar9,0xffffffff);
    puVar16[5] = puVar16[5] + -4;
  }
  return 0;
}


