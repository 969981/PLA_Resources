/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec21d0; name: FUN_02ec21d0
 */


ulong FUN_02ec21d0(long param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *local_a8;
  long local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 uStack_68;
  
  plVar8 = (long *)(param_1 + 0x40);
  for (plVar6 = (long *)*plVar8; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    *(undefined4 *)(plVar6 + 5) = 0;
    *(undefined4 *)(plVar6 + 2) = 0;
    *(undefined4 *)(plVar6 + 4) = 0;
  }
  plVar7 = (long *)(param_1 + 0x28);
  for (plVar6 = (long *)*plVar7; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    *(undefined4 *)(plVar6 + 5) = 0;
    *(undefined4 *)(plVar6 + 2) = 0;
    *(undefined4 *)(plVar6 + 4) = 0;
  }
  plVar6 = (long *)(param_1 + 0x58);
  plVar12 = (long *)*plVar6;
  piVar10 = (int *)(param_1 + 0x30);
  piVar9 = (int *)(param_1 + 0x18);
  piVar11 = (int *)(param_1 + 0x48);
  local_90 = 0;
  if (plVar12 != (long *)0x0) {
    do {
      *(undefined4 *)(plVar12 + 5) = 0;
      *(undefined4 *)(plVar12 + 2) = 0;
      *(undefined4 *)(plVar12 + 4) = 0;
      plVar12 = (long *)*plVar12;
    } while (plVar12 != (long *)0x0);
    local_90 = *plVar6;
  }
  local_70 = *(long **)(param_1 + 0x40);
  uStack_68 = 0;
  local_80 = *(long **)(param_1 + 0x28);
  uStack_78 = 0;
  uStack_88 = 0;
  local_a8 = *(long **)(param_1 + 0x10);
  if (local_a8 != (long *)0x0) {
LAB_02ec22fc:
    (**(code **)(*local_a8 + 0x18))(local_a8,param_2);
    if ((*(int *)((long)local_a8 + 0x7c) == 3) ||
       (*(int *)((long)local_a8 + 0x8c) < *(int *)((long)local_a8 + 0x84))) {
      iVar2 = *(int *)(local_a8[2] + 0x18);
      if (iVar2 == 2) {
        uVar3 = FUN_02ec2adc(piVar11,&local_90,local_a8);
        iVar2 = (int)uVar3;
      }
      else {
        if (iVar2 != 1) {
          if (iVar2 == 0) {
            uVar3 = FUN_02ec28ec(piVar10,&local_70,local_a8);
            plVar12 = local_70;
            if ((int)uVar3 == 1) goto LAB_02ec23a0;
            goto joined_r0x02ec23d4;
          }
          goto LAB_02ec23a0;
        }
        uVar3 = FUN_02ec29e4(piVar9,&local_80,local_a8);
        iVar2 = (int)uVar3;
      }
      plVar12 = local_70;
      if (iVar2 != 1) goto joined_r0x02ec23d4;
    }
LAB_02ec23a0:
    local_a8 = (long *)local_a8[1];
    if (local_a8 == (long *)0x0) goto code_r0x02ec23b0;
    goto LAB_02ec22fc;
  }
  uVar3 = 1;
  plVar12 = local_70;
joined_r0x02ec23d4:
  local_70 = plVar12;
  if (((plVar12 != (long *)0x0) && (*(uint *)(plVar12 + 2) < *(uint *)((long)plVar12 + 0x14) >> 1))
     && ((long *)*plVar12 != (long *)0x0)) {
    plVar15 = (long *)*plVar12;
    do {
      *(undefined4 *)(plVar15 + 2) = 0;
      *(undefined4 *)(plVar15 + 4) = 0;
      plVar16 = plVar8;
      if (*(long **)(param_1 + 0x40) != plVar15) {
        plVar16 = plVar12;
      }
      *plVar16 = *plVar15;
      uVar3 = uVar3 & 0xffffffff;
      if (*(long **)(param_1 + 0x38) == plVar15) {
        *(long **)(param_1 + 0x38) = plVar12;
      }
      *piVar10 = *piVar10 + -1;
      plVar16 = (long *)*plVar12;
      FUN_02ec2c40(plVar15);
      FUN_02f59e60(0,plVar15);
      plVar15 = plVar16;
    } while (plVar16 != (long *)0x0);
  }
  plVar12 = local_80;
  if (local_80 != (long *)0x0) {
    uVar4 = *(uint *)(local_80 + 2);
    uVar5 = *(uint *)((long)local_80 + 0x14) >> 1;
    uVar3 = uVar3 & 0xffffffff;
    if ((uVar4 < uVar5) && (plVar15 = (long *)*local_80, plVar15 != (long *)0x0)) {
      do {
        *(undefined4 *)(plVar15 + 2) = 0;
        *(undefined4 *)(plVar15 + 4) = 0;
        plVar16 = plVar7;
        if (*(long **)(param_1 + 0x28) != plVar15) {
          plVar16 = plVar12;
        }
        *plVar16 = *plVar15;
        if (*(long **)(param_1 + 0x20) == plVar15) {
          *(long **)(param_1 + 0x20) = plVar12;
        }
        *piVar9 = *piVar9 + -1;
        plVar16 = (long *)*plVar12;
        FUN_02ec2bd4(plVar15);
        FUN_02f59e60(0,plVar15);
        plVar15 = plVar16;
      } while (plVar16 != (long *)0x0);
      uVar4 = *(uint *)(plVar12 + 2);
      uVar5 = *(uint *)((long)plVar12 + 0x14) >> 1;
    }
    if (uVar4 < uVar5) {
      plVar15 = (long *)*plVar12;
      while (plVar15 != (long *)0x0) {
        *(undefined4 *)(plVar15 + 2) = 0;
        *(undefined4 *)(plVar15 + 4) = 0;
        plVar16 = plVar6;
        if ((long *)*(long *)(param_1 + 0x58) != plVar15) {
          plVar16 = plVar12;
        }
        *plVar16 = *plVar15;
        if ((long *)*(long *)(param_1 + 0x50) == plVar15) {
          *(long **)(param_1 + 0x50) = plVar12;
        }
        *piVar11 = *piVar11 + -1;
        plVar16 = (long *)*plVar12;
        FUN_02ec2cac(plVar15);
        FUN_02f59e60(0,plVar15);
        plVar15 = plVar16;
      }
    }
  }
  plVar12 = *(long **)(param_1 + 0x10);
  if (local_a8 != plVar12) {
    plVar18 = (long *)*plVar6;
    plVar15 = (long *)*plVar7;
    plVar16 = (long *)*plVar8;
    do {
      uVar3 = uVar3 & 0xffffffff;
      if ((*(int *)((long)plVar12 + 0x7c) == 3) ||
         (*(int *)((long)plVar12 + 0x8c) < *(int *)((long)plVar12 + 0x84))) {
        iVar2 = *(int *)(plVar12[2] + 0x18);
        if (iVar2 == 2) {
          lVar13 = FUN_02ec348c(plVar18 + 3);
          plVar12[0xc] = lVar13;
          *(int *)(plVar18 + 5) = (int)plVar18[5] + (int)plVar12[0x11];
          if ((int)plVar18[2] == (int)plVar18[4]) {
            plVar18 = (long *)*plVar18;
          }
        }
        else if (iVar2 == 1) {
          lVar13 = FUN_02ec33b0(plVar15 + 3);
          plVar12[0xc] = lVar13;
          *(int *)(plVar15 + 5) = (int)plVar15[5] + (int)plVar12[0x11];
          if ((int)plVar15[2] == (int)plVar15[4]) {
            plVar15 = (long *)*plVar15;
          }
        }
        else if (iVar2 == 0) {
          lVar13 = FUN_02ec32d0(plVar16 + 3);
          plVar12[0xc] = lVar13;
          *(int *)(plVar16 + 5) = (int)plVar16[5] + (int)plVar12[0x11];
          if ((int)plVar16[2] == (int)plVar16[4]) {
            plVar16 = (long *)*plVar16;
          }
        }
      }
      else {
        plVar12[0xc] = 0;
      }
      plVar12 = (long *)plVar12[1];
    } while (local_a8 != plVar12);
  }
  for (; plVar12 != (long *)0x0; plVar12 = (long *)plVar12[1]) {
    plVar12[0xc] = 0;
  }
  for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
    uVar3 = uVar3 & 0xffffffff;
    iVar2 = FUN_02ec3568(plVar8);
    if (iVar2 != 1) break;
    if (*(uint *)(plVar8 + 2) != 0) {
      lVar13 = plVar8[1];
      lVar17 = lVar13 + (ulong)*(uint *)(plVar8 + 2) * 0x58;
      lVar14 = plVar8[6];
      plVar12 = (long *)plVar8[3];
      do {
        *plVar12 = lVar14;
        FUN_02ec35dc(lVar13,param_2,plVar12,lVar14);
        puVar1 = (uint *)(lVar13 + 0x14);
        lVar13 = lVar13 + 0x58;
        lVar14 = lVar14 + (ulong)*puVar1 * 4;
        plVar12 = plVar12 + 7;
      } while (lVar13 != lVar17);
    }
  }
  for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    uVar3 = uVar3 & 0xffffffff;
    iVar2 = FUN_02ec42bc(plVar7);
    if (iVar2 != 1) break;
    if (*(uint *)(plVar7 + 2) != 0) {
      lVar13 = plVar7[1];
      lVar17 = lVar13 + (ulong)*(uint *)(plVar7 + 2) * 0x30;
      lVar14 = plVar7[6];
      plVar8 = (long *)plVar7[3];
      do {
        *plVar8 = lVar14;
        FUN_02ec4330(lVar13,param_2,plVar8,lVar14);
        puVar1 = (uint *)(lVar13 + 0x14);
        lVar13 = lVar13 + 0x30;
        lVar14 = lVar14 + (ulong)*puVar1 * 4;
        plVar8 = plVar8 + 3;
      } while (lVar13 != lVar17);
    }
  }
  plVar6 = (long *)*plVar6;
  while( true ) {
    if (plVar6 == (long *)0x0) {
      return uVar3;
    }
    uVar3 = uVar3 & 0xffffffff;
    iVar2 = FUN_02ec4c78(plVar6);
    if (iVar2 != 1) break;
    if (*(uint *)(plVar6 + 2) != 0) {
      lVar13 = plVar6[1];
      lVar17 = lVar13 + (ulong)*(uint *)(plVar6 + 2) * 0x28;
      lVar14 = plVar6[6];
      plVar8 = (long *)plVar6[3];
      do {
        *plVar8 = lVar14;
        FUN_02ec4cec(lVar13,param_2,plVar8,lVar14);
        puVar1 = (uint *)(lVar13 + 0x14);
        lVar13 = lVar13 + 0x28;
        lVar14 = lVar14 + (ulong)*puVar1 * 4;
        plVar8 = plVar8 + 3;
      } while (lVar13 != lVar17);
    }
    plVar6 = (long *)*plVar6;
  }
  return uVar3;
code_r0x02ec23b0:
  uVar3 = 1;
  local_a8 = (long *)0x0;
  plVar12 = local_70;
  goto joined_r0x02ec23d4;
}


