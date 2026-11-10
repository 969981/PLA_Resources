/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00171860; name: FUN_00171860
 */


void FUN_00171860(undefined8 param_1,long param_2,uint param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long local_70;
  undefined4 local_68;
  
  uVar2 = *(uint *)(param_2 + 0xc);
  uVar16 = (ulong)uVar2;
  if (*(long *)(param_2 + 0x20) == 0) {
    uVar15 = 0;
    lVar17 = *(long *)(param_2 + 0x18);
  }
  else {
    uVar15 = (ulong)(uint)(1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f));
    lVar17 = *(long *)(param_2 + 0x18);
  }
  if (uVar2 < param_3) {
    uVar18 = (ulong)param_3;
    lVar6 = FUN_00161510(param_1,*(undefined8 *)(param_2 + 0x10),uVar16 << 4,uVar18 << 4);
    uVar5 = *(uint *)(param_2 + 0xc);
    uVar11 = (ulong)uVar5;
    *(long *)(param_2 + 0x10) = lVar6;
    if (uVar5 < param_3) {
      *(undefined4 *)(lVar6 + uVar11 * 0x10 + 8) = 0;
      uVar13 = uVar11 + 1;
      if (uVar13 != uVar18) {
        if ((~uVar5 + param_3 & 1) != 0) {
          *(undefined4 *)(*(long *)(param_2 + 0x10) + uVar13 * 0x10 + 8) = 0;
          uVar13 = uVar11 + 2;
        }
        if (uVar18 - 2 != uVar11) {
          lVar10 = uVar18 - uVar13;
          lVar6 = uVar13 << 4;
          do {
            *(undefined4 *)(*(long *)(param_2 + 0x10) + lVar6 + 8) = 0;
            lVar12 = *(long *)(param_2 + 0x10) + lVar6;
            lVar10 = lVar10 + -2;
            lVar6 = lVar6 + 0x20;
            *(undefined4 *)(lVar12 + 0x18) = 0;
          } while (lVar10 != 0);
        }
      }
    }
    *(uint *)(param_2 + 0xc) = param_3;
  }
  if (param_4 == 0) {
    *(undefined **)(param_2 + 0x18) = &DAT_039c62f0;
    lVar6 = 0;
    *(undefined1 *)(param_2 + 0xb) = 0;
  }
  else {
    uVar5 = FUN_00162320(param_4);
    if (0x1e < (int)uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_001599d0(param_1,"table overflow");
    }
    uVar4 = 1 << (ulong)(uVar5 & 0x1f);
    lVar6 = FUN_00161510(param_1,0,0,(ulong)uVar4 << 5);
    lVar10 = 0;
    lVar12 = 0;
    *(long *)(param_2 + 0x18) = lVar6;
    do {
      lVar6 = lVar6 + lVar10;
      lVar10 = lVar10 + 0x20;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(undefined4 *)(lVar6 + 8) = 0;
      lVar6 = *(long *)(param_2 + 0x18);
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)uVar4);
    lVar6 = lVar6 + (ulong)uVar4 * 0x20;
    *(char *)(param_2 + 0xb) = (char)uVar5;
  }
  *(long *)(param_2 + 0x20) = lVar6;
  if (param_3 < uVar2) {
    uVar18 = (ulong)param_3;
    *(uint *)(param_2 + 0xc) = param_3;
    puVar9 = (undefined8 *)(*(long *)(param_2 + 0x10) + uVar18 * 0x10);
    iVar14 = *(int *)(puVar9 + 1);
    uVar11 = uVar18;
    lVar6 = local_70;
    do {
      local_70 = lVar6;
      if (iVar14 != 0) {
        local_70 = uVar11 + 1;
        puVar7 = puVar9;
        if (*(uint *)(param_2 + 0xc) <= uVar11) {
          puVar7 = (undefined8 *)
                   (*(long *)(param_2 + 0x18) +
                   (long)(int)((uint)local_70 &
                              (-1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f) ^ 0xffffffffU)) * 0x20
                   );
          if (*(int *)(puVar7 + 3) == 0x13) goto LAB_00171a8c;
          do {
            do {
              piVar1 = (int *)((long)puVar7 + 0x1c);
              puVar7 = puVar7 + (long)*piVar1 * 4;
              if (*piVar1 == 0) goto LAB_00171aa0;
            } while (*(int *)(puVar7 + 3) != 0x13);
LAB_00171a8c:
          } while (puVar7[2] != local_70);
        }
        if (puVar7 == &DAT_039c5c28) {
LAB_00171aa0:
          local_68 = 0x13;
          puVar7 = (undefined8 *)FUN_00171da0(param_1,param_2,&local_70);
          lVar6 = local_70;
        }
        local_70 = lVar6;
        uVar8 = puVar9[1];
        *puVar7 = *puVar9;
        puVar7[1] = uVar8;
      }
      if (uVar11 + 1 == uVar16) goto LAB_00171acc;
      uVar11 = uVar11 + 1;
      puVar9 = (undefined8 *)(*(long *)(param_2 + 0x10) + uVar11 * 0x10);
      iVar14 = *(int *)(puVar9 + 1);
      lVar6 = local_70;
    } while( true );
  }
LAB_00171ae8:
  iVar14 = (int)uVar15;
  if (0 < iVar14) {
    lVar10 = (long)iVar14;
    lVar6 = lVar17 + lVar10 * 0x20;
    iVar3 = *(int *)(lVar6 + -0x18);
    lVar6 = lVar6 + -0x10;
    while( true ) {
      lVar10 = lVar10 + -1;
      if (iVar3 != 0) {
        puVar9 = (undefined8 *)FUN_00172500(param_2,lVar6);
        if (puVar9 == &DAT_039c5c28) {
          puVar9 = (undefined8 *)FUN_00171da0(param_1,param_2,lVar6);
        }
        uVar8 = *(undefined8 *)(lVar6 + -8);
        *puVar9 = *(undefined8 *)(lVar6 + -0x10);
        puVar9[1] = uVar8;
      }
      if (lVar10 < 1) break;
      iVar3 = *(int *)(lVar6 + -0x28);
      lVar6 = lVar6 + -0x20;
    }
    if (0 < iVar14) {
      FUN_00161510(param_1,lVar17,-(uVar15 >> 0x1f) & 0xffffffe000000000 | uVar15 << 5,0);
    }
  }
  return;
LAB_00171acc:
  uVar8 = FUN_00161510(param_1,*(undefined8 *)(param_2 + 0x10),uVar16 << 4,uVar18 << 4);
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  goto LAB_00171ae8;
}


