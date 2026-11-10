/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325f3f4; name: FUN_0325f3f4
 */


void FUN_0325f3f4(undefined8 *param_1,long param_2,undefined8 *param_3,ulong param_4,ulong param_5,
                 long param_6)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  int local_5c;
  undefined8 local_58;
  
  lVar15 = tpidr_el0;
  if (*(long *)(lVar15 + 0x38d490) == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar15 + 0x38d490) = lVar12;
    lVar15 = *(long *)(lVar12 + 0x10);
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar15 + 0x38d490) + 0x10);
  }
  if (lVar15 != 0) {
    FUN_032d5af0(lVar15,"TtaddFaceLoop",0xd);
  }
  uVar9 = *param_3;
  param_5 = param_5 & 0x3fffff;
  param_1[1] = param_3[1];
  *param_1 = uVar9;
  puVar3 = (undefined4 *)(*(long *)(param_2 + 0x18) + param_5 * 0x10);
  local_60 = *puVar3;
  local_5c = puVar3[1];
  local_58 = *(undefined8 *)(puVar3 + 2);
  iVar16 = (short)local_58 + 1;
  if (*(int *)(param_6 + 8) <= (int)(short)local_58 || iVar16 < *(int *)(param_6 + 8)) {
    *(int *)(param_6 + 8) = iVar16;
  }
  thunk_FUN_03193130(param_2,&local_60,param_6);
  FUN_03198e54(param_6,&local_70);
  if ((param_4 & 1) != 0) {
    param_1[1] = uStack_68;
    *param_1 = local_70;
  }
  *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + -1;
  FUN_032626a0(*(undefined4 *)((long)param_1 + 0x144),param_1,&local_70,param_6);
  FUN_03262890(param_1,param_6);
  local_78[0] = (undefined4)param_5;
  iVar16 = (int)local_58._2_2_;
  if ((*(int *)(param_2 + 0x108) == 0) ||
     ((*(byte *)(*(long *)(param_2 + 0x100) + param_5) >> 3 & 1) == 0)) {
    bVar18 = false;
    puVar17 = (undefined8 *)0x0;
  }
  else {
    lVar12 = FUN_031920dc((long *)(param_2 + 0x188),local_78);
    if (lVar12 == 0) {
      uVar11 = 0;
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = *(uint *)(lVar12 + 4);
      uVar11 = ((int)lVar12 - (int)*(undefined8 *)(param_2 + 0x198)) * 0x20000000;
    }
    lVar12 = *(long *)(param_2 + 0x188) + (long)(int)(uVar10 | uVar11) * 0x38;
    puVar17 = (undefined8 *)(lVar12 + 8);
    iVar16 = *(int *)(lVar12 + 0x10) + iVar16;
    bVar18 = true;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((int)(*(uint *)((long)param_1 + 0x164) & 0x3fffffff) < iVar16) {
    uVar9 = FUN_032607a8(PTR_PTR_0434a080,iVar16,param_1[0x2b],(long)param_1 + 0x164);
    param_1[0x2b] = uVar9;
  }
  if (0 < local_58._2_2_) {
    iVar16 = 0;
    do {
      iVar2 = iVar16 + local_5c;
      iVar5 = iVar2 - *(int *)(param_2 + 0x30);
      if (iVar2 < *(int *)(param_2 + 0x30)) {
        if (*(int *)(param_2 + 0x78) == 0) {
          iVar13 = iVar2;
        }
        else {
          iVar13 = *(int *)(*(long *)(param_2 + 0x70) + (long)iVar2 * 4);
        }
        lVar12 = *(long *)(param_2 + 0x28);
        iVar5 = iVar2;
        if (iVar13 != -1) {
          lVar12 = *(long *)(param_2 + 0xc0);
          iVar5 = iVar13;
        }
      }
      else {
        lVar12 = *(long *)(param_2 + 0xe0);
      }
      iVar2 = *(int *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x2c) = iVar2 + 1;
      iVar13 = *(int *)(lVar12 + (long)iVar5 * 0x14);
      puVar7 = (undefined8 *)(*(long *)(param_2 + 0x38) + (long)iVar13 * 0x10);
      if (*(int *)(param_2 + 0x40) <= iVar13) {
        puVar7 = (undefined8 *)
                 (*(long *)(param_2 + 0xf0) + (long)(iVar13 - *(int *)(param_2 + 0x40)) * 0x10);
      }
      uVar9 = *puVar7;
      lVar14 = param_1[0x2b];
      puVar6 = (undefined8 *)(lVar14 + (long)iVar2 * 0x30);
      puVar6[1] = puVar7[1];
      *puVar6 = uVar9;
      iVar5 = *(int *)(lVar12 + (long)iVar5 * 0x14 + 4);
      puVar7 = (undefined8 *)(*(long *)(param_2 + 0x38) + (long)iVar5 * 0x10);
      if (*(int *)(param_2 + 0x40) <= iVar5) {
        puVar7 = (undefined8 *)
                 (*(long *)(param_2 + 0xf0) + (long)(iVar5 - *(int *)(param_2 + 0x40)) * 0x10);
      }
      uVar19 = puVar7[1];
      uVar9 = *puVar7;
      lVar14 = lVar14 + (long)iVar2 * 0x30;
      *(short *)(lVar14 + 0x20) = (short)iVar16;
      iVar16 = iVar16 + 1;
      *(undefined8 *)(lVar14 + 0x18) = uVar19;
      *(undefined8 *)(lVar14 + 0x10) = uVar9;
    } while (iVar16 < local_58._2_2_);
  }
  if ((bVar18) && (*(int *)(puVar17 + 1) != 0)) {
    lVar12 = (long)*(int *)(puVar17 + 1) * 0x14;
    bVar4 = *(byte *)((int *)*puVar17 + 4);
    piVar8 = (int *)*puVar17;
    sVar1 = local_58._2_2_;
    while( true ) {
      if ((bVar4 >> 3 & 1) == 0) {
        iVar16 = *(int *)(param_1 + 0x2c);
        *(int *)(param_1 + 0x2c) = iVar16 + 1;
        iVar2 = *piVar8;
        puVar17 = (undefined8 *)(*(long *)(param_2 + 0x38) + (long)iVar2 * 0x10);
        if (*(int *)(param_2 + 0x40) <= iVar2) {
          puVar17 = (undefined8 *)
                    (*(long *)(param_2 + 0xf0) + (long)(iVar2 - *(int *)(param_2 + 0x40)) * 0x10);
        }
        uVar9 = *puVar17;
        lVar14 = param_1[0x2b] + (long)iVar16 * 0x30;
        puVar7 = (undefined8 *)(param_1[0x2b] + (long)iVar16 * 0x30);
        puVar7[1] = puVar17[1];
        *puVar7 = uVar9;
        iVar16 = piVar8[1];
        puVar17 = (undefined8 *)(*(long *)(param_2 + 0x38) + (long)iVar16 * 0x10);
        if (*(int *)(param_2 + 0x40) <= iVar16) {
          puVar17 = (undefined8 *)
                    (*(long *)(param_2 + 0xf0) + (long)(iVar16 - *(int *)(param_2 + 0x40)) * 0x10);
        }
        uVar9 = *puVar17;
        *(undefined8 *)(lVar14 + 0x18) = puVar17[1];
        *(undefined8 *)(lVar14 + 0x10) = uVar9;
        *(short *)(lVar14 + 0x20) = sVar1;
      }
      sVar1 = sVar1 + 1;
      lVar12 = lVar12 + -0x14;
      if (lVar12 == 0) break;
      bVar4 = *(byte *)(piVar8 + 9);
      piVar8 = piVar8 + 5;
    }
  }
  if (lVar15 != 0) {
    FUN_032d5b34(lVar15,&DAT_0390f40e);
  }
  return;
}


