/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001184d0; name: FUN_001184d0
 */


undefined8
FUN_001184d0(int param_1,byte *param_2,byte *param_3,byte *param_4,long param_5,long param_6,
            long param_7,long param_8,undefined8 *param_9)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  code *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  byte bVar15;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long local_68;
  
  if (1 < param_1) {
    return 0xffffffffffffffff;
  }
  *param_9 = param_4;
  param_9[1] = param_7;
  if ((long)param_3 - (long)param_2 < 0xd) {
    return 0xffffffffffffffff;
  }
  if (param_6 == 0) {
    pbVar10 = param_2 + 8;
    *(undefined8 *)param_4 = *(undefined8 *)param_2;
    pbVar11 = pbVar10;
    if (pbVar10 < param_3) goto LAB_00118544;
LAB_00118594:
    uVar14 = 0;
    bVar15 = 0;
LAB_0011859c:
    bVar4 = param_4 <= param_3 && param_2 <= param_4 + param_5;
    lVar6 = param_5;
    if (param_8 - param_7 <= param_5) {
      lVar6 = param_8 - param_7;
    }
    local_68 = param_7;
    lVar6 = FUN_00118920(&local_68,pbVar11,param_3,&local_70,lVar6,bVar4,param_7,param_8);
    if (lVar6 < 0) {
      return 0xffffffffffffffff;
    }
    param_7 = param_7 + local_70;
    param_9[8] = local_68;
    param_9[9] = local_70;
    pbVar11 = pbVar11 + lVar6;
    local_70 = 0;
    lVar6 = param_5;
    if (param_8 - param_7 <= param_5) {
      lVar6 = param_8 - param_7;
    }
    local_68 = param_7;
    lVar6 = FUN_00118920(&local_68,pbVar11,param_3,&local_70,lVar6,bVar4,param_7,param_8);
    pbVar10 = pbVar11 + lVar6;
    if (lVar6 < 0) {
      return 0xffffffffffffffff;
    }
    local_88 = 0;
    param_7 = param_7 + local_70;
    local_80 = 0;
    if ((long)param_3 - (long)pbVar10 < 3) {
      return 0xffffffffffffffff;
    }
    bVar3 = pbVar11[lVar6];
    lStack_78 = param_7;
    if ((char)bVar3 < '\0') {
      lVar6 = local_70;
      if (param_8 - param_7 <= local_70) {
        lVar6 = param_8 - param_7;
      }
      lVar6 = FUN_00118920(&lStack_78,pbVar10 + 1,param_3,&local_88,lVar6,0,param_7,param_8);
      if (lVar6 < 0) {
        return 0xffffffffffffffff;
      }
      iVar5 = bVar3 - 0x7f;
      pbVar10 = pbVar10 + 1 + lVar6;
      param_7 = param_7 + local_88;
      if (iVar5 != 1) {
        lVar6 = local_88;
        if (param_8 - param_7 <= local_88) {
          lVar6 = param_8 - param_7;
        }
        local_90 = 0;
        local_80 = param_7;
        lVar6 = FUN_00118920(&local_80,pbVar10,param_3,&local_90,lVar6,0,param_7,param_8);
        if (lVar6 < 0) {
          return 0xffffffffffffffff;
        }
        if (local_88 != local_90) {
          FUN_0010a430();
          pcVar9 = *(code **)PTR_PTR_043722f8;
          if (pcVar9 == (code *)0x0) goto LAB_001188c4;
          pcVar8 = "OODLE ERROR : corruption : offsets_count == offsets_count_2\n";
          uVar7 = 0xaa8;
          goto LAB_001188bc;
        }
        param_7 = param_7 + local_88;
        pbVar10 = pbVar10 + lVar6;
      }
    }
    else {
      lVar6 = local_70;
      if (param_8 - param_7 <= local_70) {
        lVar6 = param_8 - param_7;
      }
      lVar6 = FUN_00118920(&lStack_78,pbVar10,param_3,&local_88,lVar6,0,param_7,param_8);
      if (lVar6 < 0) {
        return 0xffffffffffffffff;
      }
      iVar5 = 0;
      pbVar10 = pbVar10 + lVar6;
      param_7 = param_7 + local_88;
    }
    lVar6 = param_5 + 3;
    if (-1 < param_5) {
      lVar6 = param_5;
    }
    local_98 = 0;
    lVar2 = lVar6 >> 2;
    if (param_8 - param_7 <= lVar6 >> 2) {
      lVar2 = param_8 - param_7;
    }
    local_90 = param_7;
    lVar6 = FUN_00118920(&local_90,pbVar10,param_3,&local_98,lVar2,0,param_7,param_8);
    if (lVar6 < 0) {
      return 0xffffffffffffffff;
    }
    uVar12 = param_7 + local_98 + 0xfU & 0xfffffffffffffff0;
    uVar13 = uVar12 + local_88 * 4 + 0xf & 0xfffffffffffffff0;
    if (local_98 * 4 + 0x40 <= (long)(param_8 - uVar13)) {
      puVar1 = (undefined8 *)(uVar13 + local_98 * 4);
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      iVar5 = FUN_0012f4a0(pbVar10 + lVar6,param_3,lStack_78,local_80,local_88,iVar5,local_90,
                           local_98,uVar12,uVar13,param_6 + param_5,bVar15,uVar14);
      if (iVar5 < 0) {
        return 0xffffffffffffffff;
      }
      param_9[2] = uVar12;
      param_9[3] = local_88;
      param_9[4] = uVar13;
      param_9[5] = local_98;
      param_9[6] = local_68;
      param_9[7] = local_70;
      return 1;
    }
    FUN_0010a430();
    pcVar9 = *(code **)PTR_PTR_043722f8;
    if (pcVar9 == (code *)0x0) goto LAB_001188c4;
    pcVar8 = "OODLE ERROR : newlz scratch overflow\n";
    uVar7 = 0xae7;
  }
  else {
    pbVar10 = param_2;
    pbVar11 = param_2;
    if (param_3 <= param_2) goto LAB_00118594;
LAB_00118544:
    bVar15 = *pbVar10;
    pbVar11 = pbVar10;
    if (-1 < (char)bVar15) goto LAB_00118594;
    if ((bVar15 & 0xc0) == 0x80) {
      uVar14 = bVar15 & 0x3f;
      pbVar11 = pbVar10 + 1;
      if (0x1f < uVar14) {
        if (pbVar11 == param_3) {
          FUN_0010a430();
          pcVar9 = *(code **)PTR_PTR_043722f8;
          if (pcVar9 == (code *)0x0) goto LAB_001188c4;
          pcVar8 = "OODLE ERROR : corruption : truncated excess byte count\n";
          uVar7 = 0xa29;
          goto LAB_001188bc;
        }
        pbVar11 = pbVar10 + 2;
        uVar14 = uVar14 + (uint)pbVar10[1] * 0x20;
      }
      goto LAB_0011859c;
    }
    FUN_0010a430();
    pcVar9 = *(code **)PTR_PTR_043722f8;
    if (pcVar9 == (code *)0x0) goto LAB_001188c4;
    pcVar8 = "OODLE ERROR : corruption : excess reserved flag bit nonzero\n";
    uVar7 = 0xa20;
  }
LAB_001188bc:
  (*pcVar9)(0,"v:\\devel\\projects\\oodle2\\core\\newlz.cpp",uVar7,pcVar8);
LAB_001188c4:
  FUN_0010a450();
  return 0xffffffffffffffff;
}


