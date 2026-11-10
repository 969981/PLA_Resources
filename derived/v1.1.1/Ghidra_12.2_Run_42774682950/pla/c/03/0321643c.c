/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0321643c; name: FUN_0321643c
 */


void FUN_0321643c(undefined4 *param_1,undefined8 *param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  size_t sVar6;
  undefined8 *puVar7;
  long *plVar8;
  void *__dest;
  int iVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  void *__src;
  char *__s;
  undefined1 *puVar16;
  ulong local_90;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  undefined *local_78;
  uint *local_70;
  undefined4 *puStack_68;
  
  *param_1 = 0x8000050;
  *(undefined2 *)(param_1 + 1) = 0x18;
  FUN_03329a68(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = *param_2;
  if ((undefined8 *)(param_1 + 2) == param_2) goto LAB_03216624;
  __src = (void *)param_2[1];
  iVar9 = *(int *)(param_2 + 2);
  __dest = *(void **)(param_1 + 4);
  if ((int)(param_1[7] & 0x3fffffff) < iVar9) {
    __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar9,4,__dest,param_1[6]);
    *(void **)(param_1 + 4) = __dest;
  }
  memcpy(__dest,__src,(long)iVar9 << 2);
  param_1[6] = iVar9;
  *(undefined8 *)(param_1 + 8) = param_2[3];
  puVar4 = PTR_PTR_0434a080;
  uVar14 = *(ulong *)(param_1 + 10);
  __s = (char *)(param_2[4] & 0xfffffffffffffffe);
  if ((char *)(uVar14 & 0xfffffffffffffffe) != __s) {
    if (__s == (char *)0x0) {
      *(undefined8 *)(param_1 + 10) = 0;
    }
    else {
      sVar6 = strlen(__s);
      uVar1 = (int)sVar6 + 1;
      puVar7 = (undefined8 *)
               (**(code **)(*(long *)puVar4 + 0x10))
                         (puVar4,(long)((sVar6 << 0x20) + 0x1100000000) >> 0x20,0);
      *puVar7 = puVar4;
      *(uint *)(puVar7 + 1) = uVar1;
      memcpy(puVar7 + 2,__s,(ulong)uVar1);
      *(ulong *)(param_1 + 10) = (ulong)(puVar7 + 2) | 1;
    }
    if ((uVar14 & 1) != 0) {
      lVar12 = tpidr_el0;
      lVar10 = *(long *)(lVar12 + 0x38d490);
      if (lVar10 == 0) {
        lVar10 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar10;
      }
      plVar8 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
      *(undefined8 *)(uVar14 - 0x11) = 0;
      (**(code **)(*plVar8 + 0x18))
                (plVar8,(undefined8 *)(uVar14 - 0x11),(long)*(int *)(uVar14 - 9) + 0x10);
    }
  }
  puVar4 = PTR_PTR_0434a080;
  uVar1 = param_1[0xf] & 0x3fffffff;
  uVar2 = *(uint *)(param_2 + 6);
  puVar16 = (undefined1 *)param_2[5];
  puVar15 = *(undefined1 **)(param_1 + 0xc);
  if ((int)uVar1 < (int)uVar2) {
    uVar3 = param_1[0xe];
    uVar14 = (ulong)uVar3;
    local_88 = 1;
    local_90 = (ulong)(int)uVar2;
    local_84 = uVar2;
    if ((int)uVar2 < 0) {
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_70 = &local_84;
      puStack_68 = &local_88;
      FUN_03320b50(0x1bd2a77e,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x53,"Array size overflow {}*{}",&local_80);
      if ((int)uVar1 <= (int)local_84) goto LAB_03216538;
LAB_03216544:
      local_80 = 1;
      local_70 = &local_84;
      local_78 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_80);
    }
    else {
      if ((int)uVar2 < (int)uVar1) goto LAB_03216544;
LAB_03216538:
      if (0x3fffffff < (int)local_84) goto LAB_03216544;
    }
    uVar1 = param_1[0xf];
    puVar5 = (undefined1 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_90,&local_90);
    if (0 < (int)uVar3) {
      puVar11 = puVar5;
      puVar13 = puVar15;
      do {
        uVar14 = uVar14 - 1;
        *puVar11 = *puVar13;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      } while (uVar14 != 0);
    }
    if (-1 < (int)uVar1) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4,puVar15,uVar1 & 0x3fffffff);
    }
    if (0x3ffffffe < local_90) {
      local_90 = 0x3fffffff;
    }
    param_1[0xf] = (int)local_90;
    *(undefined1 **)(param_1 + 0xc) = puVar5;
    puVar15 = puVar5;
  }
  uVar1 = param_1[0xe];
  if ((int)uVar2 <= (int)param_1[0xe]) {
    uVar1 = uVar2;
  }
  if ((puVar15 != puVar16) && (0 < (int)uVar1)) {
    uVar14 = (ulong)uVar1;
    puVar5 = puVar16;
    do {
      uVar14 = uVar14 - 1;
      *puVar15 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar15 = puVar15 + 1;
    } while (uVar14 != 0);
    puVar15 = *(undefined1 **)(param_1 + 0xc);
  }
  if (0 < (int)(uVar2 - uVar1)) {
    lVar12 = (long)(int)uVar1;
    puVar15[lVar12] = puVar16[lVar12];
    if (uVar2 - uVar1 != 1) {
      iVar9 = ~uVar1 + uVar2;
      puVar16 = puVar16 + lVar12 + 1;
      puVar15 = puVar15 + lVar12 + 1;
      do {
        iVar9 = iVar9 + -1;
        *puVar15 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar15 = puVar15 + 1;
      } while (iVar9 != 0);
    }
  }
  param_1[0xe] = uVar2;
LAB_03216624:
  param_1[0x10] = *(undefined4 *)(param_2 + 7);
  *(byte *)(param_1 + 0x12) = param_3 & 1;
  return;
}


