/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00411f50; name: FUN_00411f50
 */


void FUN_00411f50(long param_1,long param_2,long param_3,uint param_4,int param_5,int param_6,
                 long param_7)

{
  undefined8 *puVar1;
  void *__s;
  long lVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  
  uVar3 = param_4;
  if ((int)param_4 < 0) {
    uVar3 = param_4 + 1;
  }
  if ((param_4 == 8) && (param_6 == 0 && param_5 == 0)) {
    FUN_0040f550(param_1,param_2,param_3);
    return;
  }
  if ((int)param_4 < 0x10) {
    FUN_004123c0(param_1,param_2,param_5 + param_4,param_3,param_6 + param_4);
    param_6 = param_6 + param_5;
    if (param_6 < 0) {
      memset((void *)(param_1 + (long)(int)(param_6 + param_4 * 2) * 4),0,
             -(ulong)((uint)-param_6 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)-param_6 << 2);
      return;
    }
    return;
  }
  uVar3 = (int)uVar3 >> 1;
  uVar16 = (ulong)uVar3;
  uVar18 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2;
  iVar11 = -param_5;
  iVar9 = uVar3 + param_5;
  lVar14 = (long)(int)uVar3;
  lVar17 = param_2 + uVar18;
  iVar10 = uVar3 + param_6;
  iVar7 = FUN_0040cf20(param_2,lVar17,iVar9,iVar11);
  lVar2 = param_3 + uVar18;
  iVar8 = FUN_0040cf20(lVar2,param_3,iVar10,param_6);
  switch(iVar7 * 3 + iVar8) {
  case 2:
    FUN_00411c90(param_7,param_2,lVar17,iVar9,iVar11);
    lVar12 = param_3;
    lVar13 = lVar2;
    iVar9 = -param_6;
LAB_004121bc:
    FUN_00411c90(param_7 + lVar14 * 4,lVar12,lVar13,iVar10,iVar9);
    bVar6 = false;
    bVar5 = true;
    goto joined_r0x004121d4;
  case 4:
    FUN_00411c90(param_7,param_2,lVar17,iVar9,iVar11);
    lVar12 = lVar2;
    lVar13 = param_3;
    iVar9 = param_6;
LAB_0041220c:
    FUN_00411c90(param_7 + lVar14 * 4,lVar12,lVar13,iVar10,iVar9);
    bVar6 = false;
    break;
  case -4:
    FUN_00411c90(param_7,lVar17,param_2,iVar9,param_5);
    iVar9 = -param_6;
    lVar12 = param_3;
    lVar13 = lVar2;
    goto LAB_0041220c;
  case -3:
  case -1:
  case 0:
  case 1:
  case 3:
    bVar6 = true;
    break;
  case -2:
    FUN_00411c90(param_7,lVar17,param_2,iVar9,param_5);
    lVar12 = lVar2;
    lVar13 = param_3;
    iVar9 = param_6;
    goto LAB_004121bc;
  default:
    bVar6 = false;
  }
  bVar5 = false;
joined_r0x004121d4:
  if (((param_4 & 0xfffffffe) == 8) && (param_6 == 0 && param_5 == 0)) {
    puVar1 = (undefined8 *)(param_7 + (long)(int)param_4 * 4);
    if (bVar6) {
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
    }
    else {
      FUN_0040fba0(puVar1,param_7,param_7 + lVar14 * 4);
    }
    FUN_0040fba0(param_1,param_2,param_3);
    FUN_0040fba0(param_1 + (long)(int)param_4 * 4,lVar17,lVar2);
  }
  else if (((param_4 & 0xfffffffe) == 0x10) && (param_6 == 0 && param_5 == 0)) {
    puVar1 = (undefined8 *)(param_7 + (long)(int)param_4 * 4);
    if (bVar6) {
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
    }
    else {
      FUN_0040f550(puVar1,param_7,param_7 + lVar14 * 4);
    }
    FUN_0040f550(param_1,param_2,param_3);
    FUN_0040f550(param_1 + (long)(int)param_4 * 4,lVar17,lVar2);
  }
  else {
    lVar12 = param_7 + (long)(int)param_4 * 8;
    __s = (void *)(param_7 + (long)(int)param_4 * 4);
    if (bVar6) {
      memset(__s,0,(long)(int)param_4 << 2);
    }
    else {
      FUN_00411f50(__s,param_7,param_7 + lVar14 * 4,uVar16,0,0,lVar12);
    }
    FUN_00411f50(param_1,param_2,param_3,uVar16,0,0,lVar12);
    FUN_00411f50(param_1 + (long)(int)param_4 * 4,lVar17,lVar2,uVar16,param_5,param_6,lVar12);
  }
  iVar9 = FUN_0040f2e0(param_7,param_1,param_1 + (long)(int)param_4 * 4,param_4);
  lVar17 = param_7 + (long)(int)param_4 * 4;
  if (bVar5) {
    iVar10 = FUN_0040f430(lVar17,param_7,lVar17,param_4);
    iVar10 = -iVar10;
  }
  else {
    iVar10 = FUN_0040f2e0(lVar17,lVar17,param_7,param_4);
  }
  lVar2 = param_1 + lVar14 * 4;
  iVar11 = FUN_0040f2e0(lVar2,lVar2,lVar17,param_4);
  uVar3 = iVar11 + iVar9 + iVar10;
  if (uVar3 != 0) {
    lVar17 = (lVar14 + (int)param_4) * 4;
    uVar4 = *(uint *)(param_1 + lVar17);
    *(uint *)(param_1 + lVar17) = uVar4 + uVar3;
    if (CARRY4(uVar4,uVar3)) {
      puVar15 = (uint *)(param_1 + (lVar14 + (int)param_4) * 4);
      do {
        puVar15 = puVar15 + 1;
        uVar3 = *puVar15;
        *puVar15 = uVar3 + 1;
      } while (0xfffffffe < uVar3);
    }
  }
  return;
}


