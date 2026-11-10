/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f2620; name: FUN_031f2620
 */


void FUN_031f2620(long param_1,long param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_280 [16];
  undefined8 *local_270 [66];
  
  switch(*(undefined1 *)(param_3 + 0x5c)) {
  case 0:
    FUN_0331fefc(auStack_280,local_270,0x200);
    FUN_0332448c(auStack_280,
                 "Output status shouldn\'t be SEARCH_IN_PROGRESS if path request is marked as processed."
                );
    iVar4 = FUN_03320b30(0x45c0fd69,local_270,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Ai/Pathfinding/Navigator/hkaiVolumeNavigator.cpp"
                         ,0x2fe);
    if (iVar4 != 0) {
      CallSupervisor(0x26);
    }
    break;
  case 1:
    uVar17 = *(undefined8 *)(param_2 + 0x28);
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar14 = *(undefined4 *)(param_3 + 0x50);
    uVar13 = *(undefined4 *)(*(long *)(param_2 + 0x48) + (long)*(int *)(param_3 + 0x54) * 4);
    puVar5 = (undefined8 *)(*(long *)(param_2 + 0x30) + (long)*(int *)(param_3 + 0x54) * 0x10);
    uVar18 = puVar5[1];
    uVar11 = *puVar5;
    iVar7 = *(int *)(param_1 + 0x1a8);
    uVar15 = *(undefined4 *)(param_2 + 0x40);
    uVar16 = *(undefined4 *)(param_3 + 0x58);
    iVar4 = iVar7 + 1;
    lVar9 = *(long *)(param_1 + 0x1a0);
    if ((int)(*(uint *)(param_1 + 0x1ac) & 0x3fffffff) <= iVar7) {
      lVar9 = FUN_031f35d8(PTR_PTR_0434a080,iVar4);
      *(long *)(param_1 + 0x1a0) = lVar9;
      iVar7 = *(int *)(param_1 + 0x1a8);
    }
    puVar10 = (undefined4 *)(lVar9 + (long)iVar7 * 0x50);
    bVar3 = false;
    *(int *)(param_1 + 0x1a8) = iVar4;
    *puVar10 = 0;
    puVar10[0xc] = uVar15;
    puVar10[0xd] = uVar13;
    puVar10[0xe] = uVar16;
    puVar10[0xf] = uVar14;
    uVar13 = 8;
    *(undefined8 *)(puVar10 + 6) = uVar17;
    *(undefined8 *)(puVar10 + 4) = uVar6;
    *(undefined8 *)(puVar10 + 10) = uVar18;
    *(undefined8 *)(puVar10 + 8) = uVar11;
    goto LAB_031f2748;
  case 2:
    uVar17 = *(undefined8 *)(param_2 + 0x28);
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    iVar7 = *(int *)(param_1 + 0x1a8);
    uVar14 = *(undefined4 *)(param_2 + 0x40);
    uVar15 = *(undefined4 *)(param_3 + 0x50);
    uVar16 = *(undefined4 *)(param_3 + 0x58);
    iVar4 = iVar7 + 1;
    lVar9 = *(long *)(param_1 + 0x1a0);
    if ((int)(*(uint *)(param_1 + 0x1ac) & 0x3fffffff) <= iVar7) {
      lVar9 = FUN_031f35d8(PTR_PTR_0434a080,iVar4);
      *(long *)(param_1 + 0x1a0) = lVar9;
      iVar7 = *(int *)(param_1 + 0x1a8);
    }
    puVar10 = (undefined4 *)(lVar9 + (long)iVar7 * 0x50);
    *(int *)(param_1 + 0x1a8) = iVar4;
    *puVar10 = 1;
    *(undefined8 *)(puVar10 + 8) = 0;
    *(undefined8 *)(puVar10 + 10) = 0;
    puVar10[0xc] = uVar14;
    puVar10[0xd] = 0xffffffff;
    puVar10[0xe] = uVar16;
    puVar10[0xf] = uVar15;
    puVar10[0x10] = 2;
    *(undefined8 *)(puVar10 + 6) = uVar17;
    *(undefined8 *)(puVar10 + 4) = uVar6;
    return;
  case 3:
    cVar1 = *(char *)(param_3 + 0x5d);
    if ((*(int *)(param_1 + 0x90) < 1) || (cVar1 != '\x01')) {
      uVar17 = *(undefined8 *)(param_2 + 0x28);
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      uVar14 = *(undefined4 *)(param_2 + 0x40);
      iVar4 = *(int *)(param_3 + 0x50);
      uVar15 = *(undefined4 *)(param_3 + 0x58);
      if (cVar1 == '\x01') {
        uVar16 = 0;
      }
      else if (cVar1 == '\x02') {
        uVar16 = 1;
      }
      else {
        if (cVar1 != '\x03') {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar16 = 2;
      }
LAB_031f2a38:
      iVar8 = *(int *)(param_1 + 0x1a8);
      iVar7 = iVar8 + 1;
      lVar9 = *(long *)(param_1 + 0x1a0);
      if ((int)(*(uint *)(param_1 + 0x1ac) & 0x3fffffff) <= iVar8) {
        lVar9 = FUN_031f35d8(PTR_PTR_0434a080,iVar7);
        *(long *)(param_1 + 0x1a0) = lVar9;
        iVar8 = *(int *)(param_1 + 0x1a8);
      }
      puVar10 = (undefined4 *)(lVar9 + (long)iVar8 * 0x50);
      bVar3 = false;
      *(int *)(param_1 + 0x1a8) = iVar7;
      uVar13 = 2;
      *puVar10 = 2;
      *(undefined8 *)(puVar10 + 8) = 0;
      *(undefined8 *)(puVar10 + 10) = 0;
      puVar10[0xc] = uVar14;
      puVar10[0xd] = 0xffffffff;
      puVar10[0xe] = uVar15;
      puVar10[0xf] = iVar4;
      puVar10[0x10] = uVar16;
      *(undefined8 *)(puVar10 + 6) = uVar17;
      *(undefined8 *)(puVar10 + 4) = uVar6;
      bVar2 = *(byte *)(param_1 + 0x1e8);
    }
    else {
      iVar4 = *(int *)(param_3 + 0x50);
      if (*(int *)(param_1 + 0x90) <= iVar4) {
        uVar17 = *(undefined8 *)(param_2 + 0x28);
        uVar6 = *(undefined8 *)(param_2 + 0x20);
        uVar16 = 0;
        uVar14 = *(undefined4 *)(param_2 + 0x40);
        uVar15 = *(undefined4 *)(param_3 + 0x58);
        goto LAB_031f2a38;
      }
      uVar13 = 1;
      bVar3 = true;
      bVar2 = *(byte *)(param_1 + 0x1e8);
    }
    if ((bVar2 >> 1 & 1) == 0) goto joined_r0x031f2ab4;
LAB_031f2748:
    puVar5 = (undefined8 *)FUN_032cf5b0(0x30);
    *puVar5 = &PTR_LAB_0430a990;
    puVar5[1] = 0xffffffff;
    puVar5[2] = 1;
    puVar5[3] = 0;
    puVar5[4] = 0x8000000000000000;
    *(undefined4 *)(puVar5 + 5) = 0;
    lVar9 = *(long *)(param_1 + 0x160);
    *(undefined8 **)(param_1 + 0x160) = puVar5;
    if (lVar9 != 0) {
      FUN_032d647c(lVar9);
      puVar5 = *(undefined8 **)(param_1 + 0x160);
    }
    FUN_031f4268(puVar5,param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0x108) + 0x130));
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
    *(undefined4 *)(param_1 + 400) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x114) = uVar13;
    *(undefined2 *)(param_1 + 0x118) = 0;
    *(undefined1 *)(param_1 + 0x158) = 0;
    if (*(long *)(param_1 + 0x168) != 0) {
      FUN_031f3d28();
      lVar9 = *(long *)(param_1 + 0x168);
      *(undefined8 *)(param_1 + 0x168) = 0;
      if (lVar9 != 0) {
        FUN_032d647c();
      }
    }
    uVar12 = *(undefined8 *)(param_1 + 0x160);
    puVar5 = (undefined8 *)FUN_032cf5b0(0xa0);
    *puVar5 = &PTR_LAB_0430b4a0;
    puVar5[1] = 0xffffffff;
    puVar5[2] = 1;
    uVar6 = *(undefined8 *)(param_1 + 200);
    uVar17 = *(undefined8 *)(param_1 + 0xd0);
    uVar11 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined4 *)(puVar5 + 0x10) = *(undefined4 *)(param_1 + 0xe0);
    puVar5[0xf] = uVar11;
    puVar5[0xd] = uVar6;
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    uVar11 = *(undefined8 *)(param_1 + 0xb0);
    uVar18 = *(undefined8 *)(param_1 + 0xc0);
    puVar5[0xb] = *(undefined8 *)(param_1 + 0xb8);
    puVar5[0xc] = uVar18;
    puVar5[9] = uVar6;
    puVar5[10] = uVar11;
    uVar6 = *(undefined8 *)(param_1 + 0x88);
    uVar11 = *(undefined8 *)(param_1 + 0x90);
    uVar18 = *(undefined8 *)(param_1 + 0xa0);
    puVar5[7] = *(undefined8 *)(param_1 + 0x98);
    puVar5[8] = uVar18;
    puVar5[5] = uVar6;
    puVar5[6] = uVar11;
    puVar5[4] = *(undefined8 *)(param_1 + 0x80);
    puVar5[0xe] = uVar17;
    lVar9 = *(long *)(param_1 + 0xf0);
    puVar5[0x12] = lVar9;
    if (lVar9 != 0) {
      FUN_032d645c();
    }
    lVar9 = *(long *)(param_1 + 0xf8);
    puVar5[0x13] = lVar9;
    if (lVar9 != 0) {
      FUN_032d645c();
    }
    uVar6 = FUN_032cf5b0(0x70);
    local_270[0] = puVar5;
    FUN_031f3660(uVar6,uVar12,param_1,param_1 + 0x30,*(long *)(param_1 + 0x20),
                 *(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x28) * 0x10,local_270);
    if (local_270[0] != (undefined8 *)0x0) {
      FUN_032d647c();
    }
    lVar9 = *(long *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x168) = uVar6;
    if (lVar9 != 0) {
      FUN_032d647c();
    }
joined_r0x031f2ab4:
    if (!bVar3) {
      return;
    }
    if (*(char *)(param_1 + 0x100) == '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      return;
    }
    FUN_031f1fa4(param_1);
    return;
  case 4:
    FUN_0331fefc(auStack_280,local_270,0x200);
    FUN_0332448c(auStack_280,"We don\'t expect result truncation in hkaiVolumeNavigator.");
    iVar4 = FUN_03320b30(0x16844053,local_270,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Ai/Pathfinding/Navigator/hkaiVolumeNavigator.cpp"
                         ,0x302);
    if (iVar4 != 0) {
      CallSupervisor(0x26);
    }
    break;
  case 5:
    goto switchD_031f266c_caseD_5;
  default:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  FUN_0331ff7c(auStack_280);
switchD_031f266c_caseD_5:
  return;
}


