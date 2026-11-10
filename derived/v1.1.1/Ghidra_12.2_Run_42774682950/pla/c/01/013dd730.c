/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013dd730; name: FUN_013dd730
 */


void FUN_013dd730(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar11;
  undefined8 *puVar10;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 *puVar12;
  ulong unaff_x27;
  undefined8 *puVar14;
  undefined8 *puVar13;
  ulong local_110;
  ulong local_108;
  ulong local_e8;
  undefined8 *local_d8;
  ulong local_d0;
  ulong local_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  int local_9c;
  ulong local_98;
  
  local_d8 = param_2;
LAB_013dd75c:
  do {
    puVar8 = (undefined8 *)((long)local_d8 - 0xc);
    puVar9 = param_1;
    local_a8 = unaff_x20;
LAB_013dd774:
    param_1 = puVar9;
    while( true ) {
      uVar4 = (long)local_d8 - (long)param_1;
      switch(((long)uVar4 >> 2) * -0x5555555555555555) {
      case 0:
      case 1:
        goto switchD_013ddcd8_caseD_0;
      case 2:
        uVar4 = FUN_013dde4c(param_3,*(undefined8 *)((long)local_d8 - 0xc),
                             *(undefined4 *)((long)local_d8 - 4),*param_1,
                             *(undefined4 *)(param_1 + 1));
        if ((uVar4 & 1) == 0) {
          return;
        }
        uVar6 = *param_1;
        uVar1 = *(undefined4 *)(param_1 + 1);
        uVar7 = *puVar8;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)local_d8 - 4);
        *param_1 = uVar7;
        *(undefined4 *)((long)local_d8 - 4) = uVar1;
        *puVar8 = uVar6;
        return;
      case 3:
        FUN_013ddea0(param_1,(long)param_1 + 0xc,puVar8,param_3);
        return;
      case 4:
        FUN_013de070(param_1,(long)param_1 + 0xc,param_1 + 3,puVar8,param_3);
        return;
      case 5:
        FUN_013de1c0(param_1,(long)param_1 + 0xc,param_1 + 3,(long)param_1 + 0x24,puVar8,param_3);
        return;
      }
      if ((long)uVar4 < 0x174) {
        FUN_013de370(param_1,local_d8,param_3);
        return;
      }
      puVar9 = (undefined8 *)((long)param_1 + (uVar4 / 0x18) * 0xc);
      if ((long)uVar4 < 0x2ed5) {
        local_9c = FUN_013ddea0(param_1,puVar9,puVar8,param_3);
      }
      else {
        lVar5 = (uVar4 / 0x30) * 0xc;
        local_9c = FUN_013de1c0(param_1,(long)param_1 + lVar5,puVar9,(long)puVar9 + lVar5,puVar8,
                                param_3);
      }
      local_e8 = local_e8 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 + 1);
      uVar4 = FUN_013dde4c(param_3,*param_1,local_e8,*puVar9);
      if ((uVar4 & 1) != 0) break;
      puVar10 = local_d8 + -3;
      while (puVar13 = puVar10, param_1 != puVar13) {
        unaff_x27 = unaff_x27 & 0xffffffff00000000 | (ulong)*(uint *)(puVar13 + 1);
        uVar4 = FUN_013dde4c(param_3,*puVar13,unaff_x27,*puVar9);
        puVar10 = (undefined8 *)((long)puVar13 + -0xc);
        if ((uVar4 & 1) != 0) {
          uVar6 = *param_1;
          uVar1 = *(undefined4 *)(param_1 + 1);
          uVar7 = *puVar13;
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar13 + 1);
          *param_1 = uVar7;
          *puVar13 = uVar6;
          local_9c = local_9c + 1;
          *(undefined4 *)(puVar13 + 1) = uVar1;
          goto LAB_013ddabc;
        }
      }
      puVar9 = (undefined8 *)((long)param_1 + 0xc);
      local_108 = local_108 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 + 1);
      uVar4 = FUN_013dde4c(param_3,*param_1,local_108,*(undefined8 *)((long)local_d8 - 0xc));
      if ((uVar4 & 1) == 0) {
        if (puVar9 == puVar8) {
          return;
        }
        puVar9 = param_1 + 3;
        while( true ) {
          local_c0 = local_c0 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 + 1);
          local_d0 = local_d0 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar9 + -4);
          uVar4 = FUN_013dde4c(param_3,*param_1,local_c0,*(undefined8 *)((long)puVar9 + -0xc),
                               local_d0);
          if ((uVar4 & 1) != 0) break;
          bVar2 = puVar9 == puVar8;
          puVar9 = (undefined8 *)((long)puVar9 + 0xc);
          if (bVar2) {
            return;
          }
        }
        uVar6 = *(undefined8 *)((long)puVar9 + -0xc);
        uVar1 = *(undefined4 *)((long)puVar9 + -4);
        uVar7 = *puVar8;
        *(undefined4 *)((long)puVar9 + -4) = *(undefined4 *)((long)local_d8 - 4);
        *(undefined8 *)((long)puVar9 + -0xc) = uVar7;
        *(undefined4 *)((long)local_d8 - 4) = uVar1;
        *puVar8 = uVar6;
      }
      if (puVar9 == puVar8) {
        return;
      }
      puVar13 = puVar8;
      while( true ) {
        puVar10 = (undefined8 *)((long)puVar9 + -0xc);
        do {
          puVar12 = puVar10;
          unaff_x25 = unaff_x25 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 + 1);
          puVar10 = (undefined8 *)((long)puVar12 + 0xc);
          unaff_x24 = unaff_x24 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar12 + 0x14);
          uVar4 = FUN_013dde4c(param_3,*param_1,unaff_x25,*puVar10,unaff_x24);
        } while ((uVar4 & 1) == 0);
        puVar9 = puVar12 + 3;
        do {
          puVar11 = puVar13;
          unaff_x23 = unaff_x23 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 + 1);
          puVar13 = (undefined8 *)((long)puVar11 + -0xc);
          local_98 = local_98 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar11 + -4);
          uVar4 = FUN_013dde4c(param_3,*param_1,unaff_x23,*puVar13,local_98);
        } while ((uVar4 & 1) != 0);
        if (puVar13 <= puVar10) break;
        uVar6 = *puVar10;
        uVar1 = *(undefined4 *)((long)puVar12 + 0x14);
        uVar7 = *puVar13;
        *(undefined4 *)((long)puVar12 + 0x14) = *(undefined4 *)((long)puVar11 + -4);
        *puVar10 = uVar7;
        *(undefined4 *)((long)puVar11 + -4) = uVar1;
        *puVar13 = uVar6;
      }
      param_1 = puVar10;
    }
    puVar13 = puVar8;
LAB_013ddabc:
    puVar10 = (undefined8 *)((long)param_1 + 0xc);
    if (puVar10 < puVar13) {
      puVar12 = puVar10;
      while( true ) {
        puVar10 = (undefined8 *)((long)puVar12 - 0xc);
        do {
          puVar11 = puVar10;
          puVar10 = (undefined8 *)((long)puVar11 + 0xc);
          uStack_b0 = uStack_b0 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar11 + 0x14);
          local_b8 = local_b8 & 0xffffffff00000000 | (ulong)*(uint *)(puVar9 + 1);
          uVar4 = FUN_013dde4c(param_3,*puVar10,uStack_b0,*puVar9,local_b8);
        } while ((uVar4 & 1) != 0);
        puVar12 = puVar11 + 3;
        do {
          puVar14 = puVar13;
          puVar13 = (undefined8 *)((long)puVar14 + -0xc);
          unaff_x21 = unaff_x21 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar14 + -4);
          local_a8 = local_a8 & 0xffffffff00000000 | (ulong)*(uint *)(puVar9 + 1);
          uVar4 = FUN_013dde4c(param_3,*puVar13,unaff_x21,*puVar9,local_a8);
        } while ((uVar4 & 1) == 0);
        if (puVar13 < puVar10) break;
        uVar6 = *puVar10;
        uVar1 = *(undefined4 *)((long)puVar11 + 0x14);
        uVar7 = *puVar13;
        *(undefined4 *)((long)puVar11 + 0x14) = *(undefined4 *)((long)puVar14 + -4);
        *puVar10 = uVar7;
        *puVar13 = uVar6;
        local_9c = local_9c + 1;
        *(undefined4 *)((long)puVar14 + -4) = uVar1;
        puVar11 = puVar13;
        if (puVar9 != puVar10) {
          puVar11 = puVar9;
        }
        puVar9 = puVar11;
      }
    }
    unaff_x20 = local_a8;
    if (puVar10 != puVar9) {
      local_110 = local_110 & 0xffffffff00000000 | (ulong)*(uint *)(puVar9 + 1);
      uVar4 = FUN_013dde4c(param_3,*puVar9,local_110,*puVar10);
      if ((uVar4 & 1) == 0) goto LAB_013ddc34;
      uVar6 = *puVar10;
      uVar1 = *(undefined4 *)(puVar10 + 1);
      uVar7 = *puVar9;
      *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar9 + 1);
      *puVar10 = uVar7;
      *puVar9 = uVar6;
      *(undefined4 *)(puVar9 + 1) = uVar1;
      if (local_9c == -1) goto LAB_013ddc7c;
      goto LAB_013ddc3c;
    }
LAB_013ddc34:
    if (local_9c != 0) goto LAB_013ddc3c;
LAB_013ddc7c:
    uVar4 = FUN_013de4b0(param_1,puVar10,param_3);
    puVar9 = (undefined8 *)((long)puVar10 + 0xc);
    uVar3 = FUN_013de4b0(puVar9,local_d8,param_3);
    if ((uVar3 & 1) == 0) break;
    local_d8 = puVar10;
    if ((uVar4 & 1) != 0) {
switchD_013ddcd8_caseD_0:
      return;
    }
  } while( true );
  if ((uVar4 & 1) == 0) {
LAB_013ddc3c:
    if (((long)local_d8 - (long)puVar10 >> 2) * -0x5555555555555555 <=
        ((long)puVar10 - (long)param_1 >> 2) * -0x5555555555555555) {
      FUN_013dd730((long)puVar10 + 0xc,local_d8,param_3);
      local_d8 = puVar10;
      goto LAB_013dd75c;
    }
    FUN_013dd730(param_1,puVar10,param_3);
    puVar9 = (undefined8 *)((long)puVar10 + 0xc);
  }
  goto LAB_013dd774;
}


