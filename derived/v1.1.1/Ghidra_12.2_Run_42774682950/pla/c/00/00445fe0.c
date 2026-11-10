/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00445fe0; name: FUN_00445fe0
 */


uint FUN_00445fe0(uint *param_1,long param_2,int *param_3,byte *param_4,int param_5)

{
  long lVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  uVar7 = *param_1;
  if (((int)uVar7 < 1) || (*(char *)((long)param_1 + (long)(int)uVar7 + 7) != '=')) {
    iVar10 = 0;
  }
  else {
    iVar10 = 1;
    if ((1 < (int)uVar7) && (iVar10 = 1, *(char *)((long)param_1 + (long)(int)uVar7 + 6) == '=')) {
      iVar10 = 2;
    }
  }
  if (param_5 == 0) {
    uVar8 = 0;
    iVar9 = 0;
    goto LAB_004461d4;
  }
  puVar2 = &DAT_03a0bcfc;
  if ((param_1[0x17] & 2) != 0) {
    puVar2 = &DAT_03a0bc7c;
  }
  if (0 < param_5) {
    iVar9 = 0;
    uVar8 = 0xffffffff;
    bVar4 = *param_4;
    if (-1 < (char)bVar4) {
      while( true ) {
        param_4 = param_4 + 1;
        bVar3 = puVar2[bVar4];
        if (bVar3 == 0xff) break;
        if (bVar4 == 0x3d) {
          iVar10 = iVar10 + 1;
        }
        else if ((0 < iVar10) && ((bVar3 | 0x13) != 0xf3)) break;
        if (2 < iVar10) break;
        if (bVar3 == 0xf2) {
          bVar5 = true;
          goto joined_r0x004461c8;
        }
        if ((bVar3 | 0x13) != 0xf3) {
          if (0x3f < (int)uVar7) break;
          lVar1 = (long)(int)uVar7;
          uVar7 = uVar7 + 1;
          *(byte *)((long)param_1 + lVar1 + 8) = bVar4;
        }
        if (uVar7 == 0x40) {
          iVar6 = FUN_00446200(param_1,param_2,param_1 + 2);
          uVar7 = 0;
          if ((iVar6 < 0) || (iVar6 < iVar10)) break;
          param_2 = param_2 + (iVar6 - iVar10);
          iVar9 = (iVar6 - iVar10) + iVar9;
          uVar7 = 0;
        }
        param_5 = param_5 + -1;
        if (param_5 == 0) goto LAB_00446158;
        bVar4 = *param_4;
        if ((char)bVar4 < '\0') break;
      }
    }
    goto LAB_004461d4;
  }
  iVar9 = 0;
LAB_00446158:
  bVar5 = false;
joined_r0x004461c8:
  if ((int)uVar7 < 1) {
joined_r0x004461cc:
    if (bVar5) {
      uVar8 = 0;
      goto LAB_004461d4;
    }
  }
  else {
    if ((uVar7 & 3) == 0) {
      iVar6 = FUN_00446200(param_1,param_2,param_1 + 2);
      uVar7 = 0;
      uVar8 = 0xffffffff;
      if ((iVar6 < 0) || (iVar6 < iVar10)) goto LAB_004461d4;
      uVar7 = 0;
      iVar9 = (iVar9 - iVar10) + iVar6;
      goto joined_r0x004461cc;
    }
    if (bVar5) {
      uVar8 = 0xffffffff;
      goto LAB_004461d4;
    }
  }
  uVar8 = (uint)(iVar10 == 0 || uVar7 != 0);
LAB_004461d4:
  *param_3 = iVar9;
  *param_1 = uVar7;
  return uVar8;
}


