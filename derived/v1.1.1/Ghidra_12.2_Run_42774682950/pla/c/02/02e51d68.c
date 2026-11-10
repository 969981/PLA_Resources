/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e51d68; name: FUN_02e51d68
 */


void FUN_02e51d68(long param_1,undefined8 param_2,long param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar15;
  long alStack_d0 [2];
  int aiStack_c0 [4];
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_68;
  int local_64;
  
  lVar6 = *(long *)(param_4 + 8);
  if (*(uint *)(lVar6 + 0x40) < 8) {
    if (*(uint *)(lVar6 + 0x40) < 3) {
      uVar8 = 0;
      lVar6 = 0;
      goto LAB_02e51db8;
    }
    lVar6 = *(long *)(lVar6 + 0x38);
    uVar8 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x38);
    uVar8 = *(undefined8 *)(lVar6 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
LAB_02e51db8:
  local_80 = *(undefined4 *)(lVar6 + 0x78);
  local_7c = *(undefined4 *)(lVar6 + 0x7c);
  local_78 = *(undefined4 *)(lVar6 + 0x80);
  local_90 = *(undefined4 *)(lVar6 + 0x6c);
  local_8c = *(undefined4 *)(lVar6 + 0x70);
  uStack_88 = *(undefined4 *)(lVar6 + 0x74);
  lVar6 = *(long *)(*(long *)(param_3 + (ulong)(*(int *)(param_3 + 0x80) - 1) * 8 + 0x40) + 0x40);
  local_94 = param_5;
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar12 = 0;
    bVar3 = true;
  }
  else {
    plVar7 = *(long **)(param_1 + 0x28);
    uVar12 = 0;
    do {
      lVar9 = *plVar7;
      if ((*(char *)(lVar9 + 0x690) != '\0') &&
         (uVar4 = FUN_02e546b0(lVar9,lVar6), (uVar4 & 1) != 0)) {
        FUN_02e54d94(lVar9,*(undefined8 *)(param_1 + 0x40),uVar8,&local_80);
        uVar12 = *(int *)(lVar9 + 0xa0) + uVar12;
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != (long *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x30) * 8));
    bVar3 = *(uint *)(param_1 + 0x30) == 0;
  }
  uVar15 = local_94;
  uVar4 = (ulong)uVar12 * 4 + 0xf & 0x7fffffff0;
  puVar10 = auStack_b0 + -uVar4;
  lVar11 = (long)puVar10 - uVar4;
  lVar9 = lVar11 - ((ulong)uVar12 * 8 + 0xf & 0xffffffff0);
  lVar13 = lVar9 - ((ulong)uVar12 * 0x28 + 0xf & 0x7ffffffff0);
  local_64 = 0;
  if (bVar3) {
    uVar8 = *(undefined8 *)(*(long *)(param_4 + 8) + 0x48);
    *(undefined4 *)(lVar13 + -0x10) = 0;
    *(undefined4 *)(lVar13 + -8) = uVar15;
    FUN_02e52200(0,param_1,param_2,uVar8,&local_80,lVar9,lVar13,puVar10,lVar11);
  }
  else {
    plVar7 = *(long **)(param_1 + 0x28);
    uVar15 = 0x3f800000;
    bVar3 = false;
    local_a8 = param_4;
    local_a0 = param_2;
    do {
      lVar14 = *plVar7;
      if ((*(char *)(lVar14 + 0x690) == '\0') ||
         (uVar4 = FUN_02e546b0(lVar14,lVar6), uVar1 = local_94, (uVar4 & 1) == 0)) {
        if (*(long *)(lVar14 + 0x98) != 0) {
          *(undefined4 *)(lVar14 + 0xa0) = 0;
          (*DAT_0442d158)(9);
          *(undefined8 *)(lVar14 + 0x98) = 0;
          *(undefined4 *)(lVar14 + 0xa4) = 0;
        }
      }
      else {
        local_68 = 0;
        *(long *)(lVar13 + -0x20) = lVar9;
        *(undefined4 **)(lVar13 + -0x18) = &local_68;
        *(int **)(lVar13 + -0x10) = &local_64;
        FUN_02e52380(param_1,lVar14,&local_80,&local_90,uVar1,lVar13,puVar10,lVar11);
        uVar15 = NEON_fminnm(uVar15,local_68);
        bVar3 = true;
      }
      iVar2 = local_64;
      uVar1 = local_94;
      uVar8 = local_a0;
      plVar7 = plVar7 + 1;
    } while (plVar7 != (long *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x30) * 8));
    if (!bVar3) {
      uVar15 = 0;
    }
    uVar5 = *(undefined8 *)(*(long *)(local_a8 + 8) + 0x48);
    *(int *)(lVar13 + -0x10) = local_64;
    *(undefined4 *)(lVar13 + -8) = uVar1;
    FUN_02e52200(uVar15,param_1,uVar8,uVar5,&local_80,lVar9,lVar13,puVar10,lVar11);
    if ((iVar2 != 0) && (lVar11 = FUN_02e52664(uVar8), lVar11 != 0)) {
      lVar13 = -4;
      if (lVar6 != -1) {
        lVar13 = lVar6;
      }
      FUN_02ef1254(lVar11,lVar13,lVar9,iVar2);
    }
  }
  return;
}


