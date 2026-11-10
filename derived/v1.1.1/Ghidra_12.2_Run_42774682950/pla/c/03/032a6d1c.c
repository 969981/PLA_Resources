/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a6d1c; name: FUN_032a6d1c
 */


/* WARNING: Removing unreachable block (ram,0x032a7088) */

undefined8 FUN_032a6d1c(int param_1,int param_2,byte param_3,long *param_4,int *param_5)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined4 local_b8;
  undefined3 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0 [8];
  
  *(undefined4 *)(param_4 + 1) = 0;
  *param_5 = 0;
  if (param_2 == param_1) {
    iVar8 = (int)param_4[1];
    lVar5 = *param_4;
    iVar15 = iVar8 + 1;
    if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar8) {
      lVar5 = FUN_032ad800(PTR_PTR_0434a080,iVar15);
      iVar8 = (int)param_4[1];
      *param_4 = lVar5;
    }
    puVar7 = (undefined8 *)(lVar5 + (long)iVar8 * 0x20);
    *puVar7 = 0;
    *(int *)(puVar7 + 1) = param_2;
    *(int *)((long)puVar7 + 0xc) = param_2;
    puVar7[2] = 0;
    *(byte *)(puVar7 + 3) = param_3 & 1;
    uVar4 = (undefined4)local_b0;
    *(undefined4 *)((long)puVar7 + 0x1c) = local_b0._3_4_;
    *(undefined4 *)((long)puVar7 + 0x19) = uVar4;
    *(int *)(param_4 + 1) = iVar15;
    return 0;
  }
  if ((DAT_04440330 & 1) == 0) {
    FUN_032a7194();
  }
  puVar3 = PTR_PTR_0434a080;
  iVar15 = param_1;
  do {
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    local_a0[0] = 0x7f7fffee00000000;
    lVar5 = FUN_032ad970(iVar15,param_2);
    if (lVar5 == 0) {
      plVar1 = &local_b0;
      lVar5 = (long)local_b0;
    }
    else {
      plVar1 = (long *)(DAT_044402e8 + (long)*(int *)(lVar5 + 4) * 0x20 + 8);
      lVar5 = *plVar1;
    }
    if (lVar5 == 0) {
      return 0x80040200;
    }
    lVar11 = plVar1[1];
    iVar15 = *(int *)((long)plVar1 + 0xc);
    lVar2 = plVar1[2];
    iVar9 = (int)param_4[1];
    lVar6 = *param_4;
    iVar8 = iVar9 + 1;
    if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar9) {
      lVar6 = FUN_032ad800(puVar3,iVar8,lVar6,iVar9,(long)param_4 + 0xc);
      iVar9 = (int)param_4[1];
      *param_4 = lVar6;
    }
    plVar1 = (long *)(lVar6 + (long)iVar9 * 0x20);
    *plVar1 = lVar5;
    *(int *)(plVar1 + 1) = (int)lVar11;
    *(int *)((long)plVar1 + 0xc) = iVar15;
    *(byte *)(plVar1 + 3) = (byte)lVar2 & 1;
    uVar4 = (undefined4)local_b0;
    *(undefined4 *)((long)plVar1 + 0x1c) = local_b0._3_4_;
    *(undefined4 *)((long)plVar1 + 0x19) = uVar4;
    *(int *)(param_4 + 1) = iVar8;
  } while (iVar15 != param_2);
  local_b0 = local_a0;
  local_a8 = 0x8000001000000000;
  uVar4 = FUN_032b5430(param_2);
  iVar15 = (int)local_a8 + 1;
  if ((int)(local_a8._4_4_ & 0x3fffffff) <= (int)local_a8) {
    local_b0 = (undefined8 *)
               FUN_032ad690(puVar3,iVar15,local_b0,local_a8 & 0xffffffff,(long)&local_a8 + 4);
  }
  *(undefined4 *)((long)local_b0 + (long)(int)local_a8 * 4) = uVar4;
  local_a8 = CONCAT44(local_a8._4_4_,iVar15);
  uVar10 = *(uint *)(param_4 + 1);
  if (0 < (int)uVar10) {
    lVar5 = (long)(int)uVar10 << 5;
    uVar13 = (long)(int)uVar10;
    while( true ) {
      if (uVar13 == uVar10) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(*param_4 + lVar5 + 0x10);
      }
      *(undefined4 *)(*param_4 + lVar5 + -0xc) = uVar4;
      if ((long)(uVar13 - 1) < 1) break;
      lVar11 = *param_4;
      lVar2 = lVar11 + lVar5;
      if (*(char *)(lVar2 + -8) == '\0') {
        uVar4 = FUN_032b5430(*(undefined4 *)(lVar2 + -0x18));
        uVar4 = FUN_032a75f0(&local_b0,uVar4,*(undefined4 *)(*param_4 + lVar5 + -0xc));
        lVar11 = *param_4;
      }
      else {
        uVar4 = *(undefined4 *)(lVar2 + -0xc);
      }
      lVar11 = lVar11 + lVar5;
      lVar5 = lVar5 + -0x20;
      *(undefined4 *)(lVar11 + -0x10) = uVar4;
      uVar10 = *(uint *)(param_4 + 1);
      uVar13 = uVar13 - 1;
    }
  }
  if ((param_3 & 1) == 0) {
    *(int *)(*param_4 + 0x10) = (int)local_a8;
    goto LAB_032a7098;
  }
  *(undefined4 *)(*param_4 + 0x10) = 0;
  lVar5 = *param_4;
  iVar15 = *(int *)(lVar5 + 0x10);
  if ((iVar15 != *(int *)(lVar5 + 0x14)) || (*(char *)(lVar5 + 0x18) != '\0')) goto LAB_032a7098;
  if ((int)param_4[1] != 1) {
    *(undefined1 *)(lVar5 + 0x38) = 0;
    uVar4 = FUN_032b5430(*(undefined4 *)(*param_4 + 0x28));
    uVar4 = FUN_032a75f0(&local_b0,uVar4,*(undefined4 *)(*param_4 + 0x10));
    *(undefined4 *)(*param_4 + 0x30) = uVar4;
    *(undefined4 *)(*param_4 + 0x14) = *(undefined4 *)(*param_4 + 0x30);
    goto LAB_032a7098;
  }
  uVar4 = FUN_032b5430(*(undefined4 *)(lVar5 + 8));
  uVar4 = FUN_032a75f0(&local_b0,uVar4,*(undefined4 *)(*param_4 + 0x10));
  *(undefined4 *)(*param_4 + 0x10) = uVar4;
  puVar7 = (undefined8 *)*param_4;
  uVar10 = *(uint *)(param_4 + 1);
  if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= (int)uVar10) {
    puVar7 = (undefined8 *)FUN_032ad800(puVar3,uVar10 + 1,puVar7,uVar10,(long)param_4 + 0xc);
    *param_4 = (long)puVar7;
  }
  if (0 < (int)uVar10) {
    puVar12 = puVar7 + (long)(int)uVar10 * 4;
    if (uVar10 != 1) {
      iVar8 = (uVar10 & 1) - uVar10;
      puVar14 = puVar12;
      do {
        iVar8 = iVar8 + 2;
        *puVar14 = puVar14[-4];
        puVar14[1] = puVar14[-3];
        puVar14[2] = puVar14[-2];
        puVar14[3] = puVar14[-1];
        puVar12 = puVar14 + -8;
        puVar14[-4] = *puVar12;
        puVar14[-3] = puVar14[-7];
        puVar14[-2] = puVar14[-6];
        puVar14[-1] = puVar14[-5];
        puVar14 = puVar12;
      } while (iVar8 != 0);
      if ((uVar10 & 1) == 0) goto LAB_032a7168;
    }
    puVar12[2] = puVar12[-2];
    puVar12[3] = puVar12[-1];
    *puVar12 = puVar12[-4];
    puVar12[1] = puVar12[-3];
  }
LAB_032a7168:
  *puVar7 = 0;
  *(int *)(puVar7 + 2) = iVar15;
  *(undefined4 *)((long)puVar7 + 0x14) = uVar4;
  *(undefined1 *)(puVar7 + 3) = 0;
  *(int *)(puVar7 + 1) = param_1;
  *(int *)((long)puVar7 + 0xc) = param_1;
  *(uint *)((long)puVar7 + 0x1c) = CONCAT31(uStack_b4,local_b8._3_1_);
  *(undefined4 *)((long)puVar7 + 0x19) = local_b8;
  *(uint *)(param_4 + 1) = uVar10 + 1;
LAB_032a7098:
  lVar5 = local_a8;
  *param_5 = (int)local_a8 + -1;
  uVar10 = local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_b0 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,local_b0,uVar10 << 2);
  }
  return 0;
}


