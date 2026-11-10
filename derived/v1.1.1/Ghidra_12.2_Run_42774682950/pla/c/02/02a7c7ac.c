/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a7c7ac; name: FUN_02a7c7ac
 */


void FUN_02a7c7ac(char *param_1,long param_2,long *param_3)

{
  uint *puVar1;
  ulong *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ushort uVar6;
  long *plVar7;
  int iVar8;
  size_t __n;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  uint *puVar12;
  ulong *puVar13;
  ushort *puVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  char *__s1;
  long local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined4 local_58;
  
  puVar4 = (undefined8 *)PTR_PTR_04379d00;
  if (*param_3 != 0) {
    puVar4 = (undefined8 *)(*param_3 + 0x60);
  }
  __s1 = (char *)*puVar4;
  __n = strlen(s_data___0427f778);
  iVar8 = strncmp(__s1,s_data___0427f778,__n);
  if (iVar8 != 0) {
    *param_1 = '\0';
    return;
  }
  if (*(long *)(param_2 + 0x218) != 0) {
    puVar12 = *(uint **)(*(long *)(*(long *)(param_2 + 0x218) + 8) + 0x250);
    piVar16 = (int *)((long)puVar12 + (ulong)*puVar12);
    puVar14 = (ushort *)((long)piVar16 - (long)*piVar16);
    puVar12 = (uint *)0x0;
    if ((ulong)puVar14[2] != 0) {
      puVar12 = (uint *)((long)piVar16 + (ulong)puVar14[2]);
      puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
    }
    if ((*puVar14 < 7) || ((ulong)puVar14[3] == 0)) {
      lVar11 = 0;
    }
    else {
      puVar1 = (uint *)((long)piVar16 + (ulong)puVar14[3]);
      lVar11 = (long)puVar1 + (ulong)*puVar1;
    }
    puVar13 = (ulong *)(puVar12 + 1);
    uVar15 = (ulong)*puVar12;
    puVar2 = puVar13 + uVar15;
    puVar5 = puVar13;
    if (uVar15 != 0) {
      puVar18 = puVar13;
      do {
        uVar19 = uVar15 >> 1;
        puVar5 = puVar18 + uVar19 + 1;
        uVar15 = uVar15 + ~uVar19;
        if ((ulong)param_3[1] <= puVar18[uVar19]) {
          puVar5 = puVar18;
          uVar15 = uVar19;
        }
        puVar18 = puVar5;
      } while (uVar15 != 0);
    }
    if ((puVar5 != puVar2) && (*puVar5 == param_3[1])) {
      puVar12 = (uint *)(lVar11 + ((ulong)((long)puVar5 - (long)puVar13) >> 3 & 0xffffffff) * 4 + 4)
      ;
      piVar16 = (int *)((long)puVar12 + (ulong)*puVar12);
      if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 5) ||
         (uVar15 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2], uVar15 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)((long)piVar16 + uVar15);
      }
      *(undefined8 *)(param_1 + 8) = uVar10;
      uVar10 = *(undefined8 *)(param_1 + 8);
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *(undefined1 **)(param_1 + 0x20) = &DAT_cbf29ce484222645;
      *(undefined1 **)(param_1 + 0x28) = &DAT_03996322;
      param_1[0x30] = '\0';
      param_1[0x31] = '\0';
      param_1[0x32] = '\0';
      param_1[0x33] = '\0';
      param_1[0x34] = '\0';
      param_1[0x35] = '\0';
      param_1[0x36] = '\0';
      param_1[0x37] = '\0';
      *param_1 = '\x01';
      param_1[0x10] = '\0';
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
      param_1[0x3c] = '\0';
      param_1[0x3d] = '\0';
      param_1[0x3e] = '\0';
      param_1[0x3f] = '\0';
      param_1[0x40] = '\0';
      param_1[0x41] = '\0';
      param_1[0x42] = '\0';
      param_1[0x43] = '\0';
      uStack_79 = (undefined1)uVar10;
      uStack_78 = (undefined7)((ulong)uVar10 >> 8);
      local_71 = 0;
      param_1[0x10] = '\0';
      *(undefined8 *)(param_1 + 8) = uVar10;
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
      param_1[0x3c] = '\0';
      param_1[0x3d] = '\0';
      param_1[0x3e] = '\0';
      param_1[0x3f] = '\0';
      lVar11 = *(long *)(param_2 + 0x1f8);
      goto joined_r0x02a7c990;
    }
  }
  *param_1 = '\0';
  lVar11 = *(long *)(param_2 + 0x1f8);
joined_r0x02a7c990:
  if (lVar11 == 0) {
    return;
  }
  lVar11 = *(long *)(lVar11 + 8);
  if (lVar11 == 0) {
    piVar16 = (int *)0x0;
  }
  else {
    piVar16 = (int *)((long)*(uint **)(lVar11 + 0x250) + (ulong)**(uint **)(lVar11 + 0x250));
  }
  if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 5) ||
     (uVar15 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2], uVar15 == 0)) {
    puVar12 = (uint *)0x0;
  }
  else {
    puVar12 = (uint *)((long)piVar16 + uVar15);
    puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
  }
  if (lVar11 == 0) {
    piVar16 = (int *)0x0;
  }
  else {
    piVar16 = (int *)((long)*(uint **)(lVar11 + 0x250) + (ulong)**(uint **)(lVar11 + 0x250));
  }
  if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 9) ||
     (uVar15 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[4], uVar15 == 0)) {
    lVar17 = 0;
  }
  else {
    puVar1 = (uint *)((long)piVar16 + uVar15);
    lVar17 = (long)puVar1 + (ulong)*puVar1;
  }
  puVar13 = (ulong *)(puVar12 + 1);
  uVar15 = (ulong)*puVar12;
  puVar2 = puVar13 + uVar15;
  puVar5 = puVar13;
  if (uVar15 != 0) {
    puVar18 = puVar13;
    do {
      uVar19 = uVar15 >> 1;
      puVar5 = puVar18 + uVar19 + 1;
      uVar15 = uVar15 + ~uVar19;
      if ((ulong)param_3[1] <= puVar18[uVar19]) {
        puVar5 = puVar18;
        uVar15 = uVar19;
      }
      puVar18 = puVar5;
    } while (uVar15 != 0);
  }
  if (puVar5 == puVar2) {
    return;
  }
  if (*puVar5 != param_3[1]) {
    return;
  }
  puVar12 = (uint *)(lVar17 + ((ulong)((long)puVar5 - (long)puVar13) >> 3 & 0xffffffff) * 4 + 4);
  piVar16 = (int *)((long)puVar12 + (ulong)*puVar12);
  puVar14 = (ushort *)((long)piVar16 - (long)*piVar16);
  if (*puVar14 < 7) {
    return;
  }
  if ((ulong)puVar14[3] == 0) {
    return;
  }
  puVar12 = (uint *)((long)piVar16 + (ulong)puVar14[3]);
  piVar3 = (int *)((long)puVar12 + (ulong)*puVar12);
  if (piVar3 == (int *)0x0) {
    return;
  }
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
     (uVar15 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar15 == 0)) {
    uVar15 = 0;
    uVar6 = puVar14[2];
  }
  else {
    uVar15 = *(ulong *)((long)piVar3 + uVar15);
    uVar6 = puVar14[2];
  }
  if ((ulong)uVar6 == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = (ulong)*(uint *)((long)piVar16 + (ulong)uVar6);
  }
  piVar16 = (int *)((long)*(uint **)(lVar11 + 0x250) + (ulong)**(uint **)(lVar11 + 0x250));
  puVar12 = (uint *)((long)piVar16 + (ulong)*(ushort *)((long)piVar16 + (6 - (long)*piVar16)));
  puVar12 = (uint *)((long)puVar12 + uVar19 * 4 + (ulong)*puVar12 + 4);
  local_88 = (long)puVar12 + (ulong)*puVar12;
  FUN_0158b394(&local_80,&local_88);
  plVar7 = (long *)CONCAT17(uStack_79,local_80);
  uVar10 = CONCAT17(local_71,uStack_78);
  if (*param_1 == '\0') {
    *(ulong *)(param_1 + 8) = uVar15;
    *(long **)(param_1 + 0x18) = plVar7;
    param_1[0x10] = '\x01';
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    *(undefined8 *)(param_1 + 0x20) = uVar10;
    *(undefined8 *)(param_1 + 0x28) = local_70;
    *(undefined8 *)(param_1 + 0x30) = uStack_68;
    *(long **)(param_1 + 0x38) = local_60;
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x18))(local_60);
    }
    *(undefined4 *)(param_1 + 0x40) = local_58;
    *param_1 = '\x01';
  }
  else if (*(ulong *)(param_1 + 8) <= uVar15) {
    *(ulong *)(param_1 + 8) = uVar15;
    param_1[0x10] = '\x01';
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    plVar9 = *(long **)(param_1 + 0x18);
    *(long **)(param_1 + 0x18) = plVar7;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))();
    }
    *(undefined8 *)(param_1 + 0x20) = uVar10;
    *(undefined8 *)(param_1 + 0x28) = local_70;
    *(undefined8 *)(param_1 + 0x30) = uStack_68;
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x18))(local_60);
    }
    plVar9 = *(long **)(param_1 + 0x38);
    *(long **)(param_1 + 0x38) = local_60;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))();
    }
    *(undefined4 *)(param_1 + 0x40) = local_58;
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))(local_60);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  return;
}


