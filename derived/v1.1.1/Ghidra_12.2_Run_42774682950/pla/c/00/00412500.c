/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00412500; name: FUN_00412500
 */


void FUN_00412500(long param_1,long param_2,long param_3,uint param_4,uint param_5,uint param_6,
                 long param_7)

{
  long lVar1;
  long lVar2;
  void *__s;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  
  if ((int)param_4 < 8) {
    FUN_004123c0(param_1,param_2,param_5 + param_4,param_3,param_6 + param_4);
    return;
  }
  lVar10 = (long)(int)param_4;
  iVar8 = param_4 - param_5;
  lVar1 = param_2 + lVar10 * 4;
  uVar4 = (ulong)param_4 << 1;
  iVar6 = FUN_0040cf20(param_2,lVar1,param_5,iVar8);
  lVar2 = param_3 + lVar10 * 4;
  iVar9 = param_6 - param_4;
  iVar7 = FUN_0040cf20(lVar2,param_3,param_6,iVar9);
  iVar12 = (int)uVar4;
  switch(iVar6 * 3 + iVar7) {
  case 3:
  case 4:
    FUN_00411c90(param_7,param_2,lVar1,param_5,iVar8);
    FUN_00411c90(param_7 + lVar10 * 4,lVar2,param_3,param_6,iVar9);
    goto joined_r0x0041281c;
  case -4:
    FUN_00411c90(param_7,lVar1,param_2,param_5,param_5 - param_4);
    FUN_00411c90(param_7 + lVar10 * 4,param_3,lVar2,param_6,param_4 - param_6);
    bVar5 = false;
    break;
  case -3:
  case -2:
    FUN_00411c90(param_7,lVar1,param_2,param_5,param_5 - param_4);
    FUN_00411c90(param_7 + lVar10 * 4,lVar2,param_3,param_6,iVar9);
    bVar5 = true;
    break;
  case -1:
  case 0:
  case 1:
  case 2:
    FUN_00411c90(param_7,param_2,lVar1,param_5,iVar8);
    FUN_00411c90(param_7 + lVar10 * 4,param_3,lVar2,param_6,param_4 - param_6);
    bVar5 = true;
    break;
  default:
joined_r0x0041281c:
    bVar5 = false;
  }
  if (param_4 == 8) {
    lVar13 = (-(ulong)(param_4 >> 0x1f) & 0xfffffffe00000000 | uVar4) * 4;
    FUN_0040f550(param_7 + lVar13,param_7,param_7 + 0x20);
    FUN_0040f550(param_1,param_2,param_3);
    FUN_004123c0(param_1 + lVar13,lVar1,param_5,lVar2,param_6);
    uVar15 = (0x10 - param_5) - param_6;
    memset((void *)(param_1 + (long)(int)(param_5 + 0x10 + param_6) * 4),0,
           -(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2);
    lVar14 = 0x10;
  }
  else {
    lVar13 = param_7 + lVar10 * 0x10;
    lVar14 = (long)iVar12;
    FUN_00411f50(param_7 + (long)iVar12 * 4,param_7,param_7 + lVar10 * 4,param_4,0,0,lVar13);
    FUN_00411f50(param_1,param_2,param_3,param_4,0,0,lVar13);
    uVar15 = param_4 >> 1;
    uVar3 = param_5;
    if ((int)param_5 <= (int)param_6) {
      uVar3 = param_6;
    }
    if (uVar3 == uVar15) {
      FUN_00411f50(param_1 + lVar14 * 4,lVar1,lVar2,uVar15,param_5 - uVar15,param_6 - uVar15,lVar13)
      ;
      iVar8 = iVar12 + (param_4 & 0xfffffffe);
      param_6 = iVar12 - (param_4 & 0xfffffffe);
    }
    else {
      __s = (void *)(param_1 + lVar14 * 4);
      if ((int)(uVar3 - uVar15) < 1) {
        memset(__s,0,lVar14 << 2);
        if (((int)param_5 < 0x10) && ((int)param_6 < 0x10)) {
          FUN_004123c0(__s,lVar1,param_5,lVar2,param_6);
        }
        else {
          do {
            if ((int)uVar15 < 0) {
              uVar15 = uVar15 + 1;
            }
            uVar15 = (int)uVar15 >> 1;
            if ((int)uVar15 < (int)param_5 || (int)uVar15 < (int)param_6) {
              FUN_00412500(__s,lVar1,lVar2,uVar15,param_5 - uVar15,param_6 - uVar15,lVar13);
              goto LAB_004128bc;
            }
          } while ((uVar15 != param_5) && (uVar15 != param_6));
          FUN_00411f50(__s,lVar1,lVar2,uVar15,param_5 - uVar15,param_6 - uVar15,lVar13);
        }
        goto LAB_004128bc;
      }
      FUN_00412500(__s,lVar1,lVar2,uVar15,param_5 - uVar15,param_6 - uVar15,lVar13);
      iVar8 = iVar12 + param_5 + param_6;
      param_6 = (iVar12 - param_5) - param_6;
    }
    memset((void *)(param_1 + (long)iVar8 * 4),0,
           -(ulong)(param_6 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_6 << 2);
  }
LAB_004128bc:
  iVar8 = FUN_0040f2e0(param_7,param_1,param_1 + lVar14 * 4,uVar4 & 0xffffffff);
  lVar1 = param_7 + lVar14 * 4;
  if (bVar5) {
    iVar9 = FUN_0040f430(lVar1,param_7,lVar1,uVar4 & 0xffffffff);
    iVar9 = -iVar9;
  }
  else {
    iVar9 = FUN_0040f2e0(lVar1,lVar1,param_7,uVar4 & 0xffffffff);
  }
  lVar2 = param_1 + lVar10 * 4;
  iVar6 = FUN_0040f2e0(lVar2,lVar2,lVar1,uVar4 & 0xffffffff);
  uVar15 = iVar6 + iVar8 + iVar9;
  if ((uVar15 != 0) &&
     (uVar3 = *(uint *)(param_1 + lVar10 * 0xc), *(uint *)(param_1 + lVar10 * 0xc) = uVar3 + uVar15,
     CARRY4(uVar3,uVar15))) {
    puVar11 = (uint *)(param_1 + lVar10 * 0xc);
    do {
      puVar11 = puVar11 + 1;
      uVar15 = *puVar11;
      *puVar11 = uVar15 + 1;
    } while (0xfffffffe < uVar15);
  }
  return;
}


