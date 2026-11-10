/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d109c; name: FUN_001d109c
 */


undefined4
FUN_001d109c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 *param_6,int *param_7,int *param_8,long param_9,
            undefined8 *param_10)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  iVar6 = *param_8;
  if (iVar6 < 3) {
    iVar2 = *param_7;
    if (iVar2 < 3) {
      uVar12 = param_1[1];
      uVar10 = *param_1;
      uVar3 = 1;
      puVar4 = param_1 + 0xc;
      uVar14 = param_1[0xd];
      uVar13 = *puVar4;
      (param_1 + (long)iVar2 * 2)[1] = uVar12;
      param_1[(long)iVar2 * 2] = uVar10;
      iVar6 = *param_7;
      param_1[(long)iVar6 * 2 + 3] = uVar12;
      param_1[(long)iVar6 * 2 + 2] = uVar10;
      iVar6 = *param_8;
      (puVar4 + (long)iVar6 * 2)[1] = uVar14;
      puVar4[(long)iVar6 * 2] = uVar13;
      iVar6 = *param_8;
      puVar4[(long)iVar6 * 2 + 3] = uVar14;
      puVar4[(long)iVar6 * 2 + 2] = uVar13;
      lVar5 = tpidr_el0;
      lVar7 = *(long *)(lVar5 + 0x38d490);
    }
    else {
      if (iVar2 == 3) {
        if (1 < iVar6) {
          puVar4 = param_1 + 0xe;
          param_1[7] = param_1[1];
          param_1[6] = *param_1;
          goto LAB_001d14f8;
        }
        uVar3 = 3;
      }
      else {
        puVar4 = param_1 + 0xc;
LAB_001d14f8:
        uVar10 = *puVar4;
        uVar3 = 4;
        param_1[0x13] = puVar4[1];
        param_1[0x12] = uVar10;
      }
      param_1[0xf] = param_1[0xd];
      param_1[0xe] = param_1[0xc];
      param_1[0x11] = param_1[0xd];
      param_1[0x10] = param_1[0xc];
      lVar5 = tpidr_el0;
      lVar7 = *(long *)(lVar5 + 0x38d490);
    }
  }
  else {
    if (iVar6 == 3) {
      if (1 < *param_7) {
        param_1[7] = param_1[3];
        param_1[6] = param_1[2];
        param_1[0x13] = param_1[0xd];
        param_1[0x12] = param_1[0xc];
        goto LAB_001d113c;
      }
      uVar3 = 3;
    }
    else {
      param_1[7] = param_1[1];
      param_1[6] = *param_1;
LAB_001d113c:
      uVar3 = 4;
    }
    param_1[3] = param_1[1];
    param_1[2] = *param_1;
    param_1[5] = param_1[1];
    param_1[4] = *param_1;
    lVar5 = tpidr_el0;
    lVar7 = *(long *)(lVar5 + 0x38d490);
  }
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar7;
  }
  lVar8 = *(long *)(lVar7 + 0x10);
  if (lVar8 != 0) {
    FUN_032d5af0(lVar8,"TthkcdConvexPenetrationUtilExact",0x20);
    lVar7 = *(long *)(lVar5 + 0x38d490);
  }
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar7;
  }
  lVar7 = *(long *)(lVar7 + 8);
  if (*(ulong *)(lVar7 + 0x10) >> 7 < 0x9d) {
LAB_001d126c:
    puVar4 = (undefined8 *)FUN_032ce670(lVar7,0x4e80);
  }
  else {
    puVar4 = *(undefined8 **)(lVar7 + 0x18);
    if (*(undefined8 **)(lVar7 + 0x20) < puVar4 + 0x9d0) goto LAB_001d126c;
    *(undefined8 **)(lVar7 + 0x18) = puVar4 + 0x9d0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    local_68 = 0;
    local_78 = 0;
    puStack_70 = PTR_DAT_04372528;
    FUN_03320b50(0x54e4dc08,"../..\\Common/Base/Container/LocalArray/hkLocalObject.h",0x1f,
                 "Out of memory initializing an hkLocalObject",&local_78);
  }
  *puVar4 = param_2;
  puVar4[1] = param_3;
  puVar4[2] = param_4;
  uVar10 = *param_5;
  puVar4[5] = param_5[1];
  puVar4[4] = uVar10;
  uVar10 = param_5[2];
  puVar4[7] = param_5[3];
  puVar4[6] = uVar10;
  uVar10 = param_5[4];
  puVar4[9] = param_5[5];
  puVar4[8] = uVar10;
  uVar10 = param_5[6];
  puVar4[0xb] = param_5[7];
  puVar4[10] = uVar10;
  puVar4[0xc] = *param_6;
  uVar10 = *param_6;
  puVar4[0xe] = param_1;
  puVar4[0xf] = param_1 + 0xc;
  *(undefined4 *)(puVar4 + 0x10) = uVar3;
  fVar9 = (float)uVar10;
  fVar11 = (float)((ulong)uVar10 >> 0x20);
  puVar4[0xd] = CONCAT44(fVar11 * fVar11,fVar9 * fVar9);
  uVar3 = FUN_001d3418(puVar4,param_9);
  *param_6 = puVar4[0xc];
  lVar7 = *(long *)(lVar5 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar7;
  }
  lVar5 = *(long *)(lVar7 + 8);
  if (((*(ulong *)(lVar5 + 0x10) >> 7 < 0x9d) || (*(undefined8 **)(lVar5 + 0x18) != puVar4 + 0x9d0))
     || (*(undefined8 **)(lVar5 + 0x28) == puVar4)) {
    FUN_032cedf0(lVar5,puVar4,0x4e80);
  }
  else {
    *(undefined8 **)(lVar5 + 0x18) = puVar4;
  }
  if (lVar8 != 0) {
    FUN_032d5b34(lVar8,&DAT_0390f40e);
  }
  *param_7 = 3;
  *param_8 = 3;
  if (*(short *)((long)param_1 + 0x1c) == *(short *)((long)param_1 + 0x2c)) {
    iVar6 = *param_7;
LAB_001d13d8:
    iVar6 = iVar6 + -1;
    *param_7 = iVar6;
  }
  else {
    iVar6 = *param_7;
    if (*(short *)((long)param_1 + 0xc) == *(short *)((long)param_1 + 0x2c)) goto LAB_001d13d8;
  }
  if ((1 < iVar6) && (*(short *)((long)param_1 + 0xc) == *(short *)((long)param_1 + 0x1c))) {
    *param_7 = (int)((long)iVar6 + -1);
    uVar10 = param_1[((long)iVar6 + -1) * 2];
    param_1[1] = (param_1 + ((long)iVar6 + -1) * 2)[1];
    *param_1 = uVar10;
  }
  if (*(short *)((long)param_1 + 0x7c) == *(short *)((long)param_1 + 0x8c)) {
    iVar6 = *param_8;
  }
  else {
    iVar6 = *param_8;
    if (*(short *)((long)param_1 + 0x6c) != *(short *)((long)param_1 + 0x8c)) goto LAB_001d143c;
  }
  iVar6 = iVar6 + -1;
  *param_8 = iVar6;
LAB_001d143c:
  if ((1 < iVar6) && (*(short *)((long)param_1 + 0x6c) == *(short *)((long)param_1 + 0x7c))) {
    *param_8 = (int)((long)iVar6 + -1);
    uVar10 = param_1[((long)iVar6 + -1) * 2 + 0xc];
    param_1[0xd] = (param_1 + ((long)iVar6 + -1) * 2 + 0xc)[1];
    param_1[0xc] = uVar10;
    iVar6 = *param_8;
  }
  iVar2 = *param_7;
  if (4 < iVar6 + iVar2) {
    piVar1 = param_7;
    if (iVar2 <= iVar6) {
      piVar1 = param_8;
    }
    *piVar1 = 3;
    if (iVar2 <= iVar6) {
      param_8 = param_7;
    }
    *param_8 = 1;
    *(undefined1 *)((long)param_1 + 0xd4) = 1;
  }
  uVar10 = *(undefined8 *)(param_9 + 0x10);
  param_10[1] = *(undefined8 *)(param_9 + 0x18);
  *param_10 = uVar10;
  return uVar3;
}


