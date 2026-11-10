/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f9a88; name: FUN_029f9a88
 */


void FUN_029f9a88(long param_1,undefined1 *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long local_118 [10];
  undefined6 uStack_c8;
  undefined2 local_c2;
  undefined2 uStack_c0;
  byte bStack_be;
  undefined1 uStack_bd;
  byte bStack_bc;
  undefined1 uStack_bb;
  undefined1 local_b8 [8];
  long *local_b0;
  long local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_92;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  
  *param_2 = 0;
  uStack_c0 = 0;
  bStack_be = 0;
  uStack_bd = 0;
  bStack_bc = 0;
  uStack_bb = 0;
  local_118[9] = 0;
  uStack_c8 = 0;
  local_c2 = 0;
  local_118[0] = 0;
  local_118[7] = 0;
  local_118[8] = 0;
  local_118[5] = 0;
  local_118[6] = 0;
  local_118[3] = 0;
  local_118[4] = 0;
  local_118[1] = 0;
  local_118[2] = 0;
  lVar8 = *(long *)(*(long *)(param_1 + 0x60) + 0x12c0);
  FUN_029e9bc4(lVar8,local_118);
  local_b0 = local_118;
  FUN_029f7874(*(undefined8 *)(*(long *)(lVar8 + 0x60) + 0x17e0),local_b8,&local_b0);
  uVar7 = 0x26;
  uVar9 = 1;
  do {
    bStack_bc = 0;
    if (bStack_be != 0) {
      uVar4 = 0;
      do {
        bStack_bc = (char)uVar4 + 1;
        lVar8 = local_118[uVar4];
        if ((lVar8 == 0) ||
           (FUN_029f9e34(param_1,lVar8,uVar7),
           **(char **)(*(long *)(param_1 + 0x40) + 0x28) == '\x05')) break;
        uVar4 = (ulong)bStack_bc;
      } while (bStack_bc < bStack_be);
    }
    uVar4 = FUN_029cddec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    if ((0x31 < uVar9) || ((uVar4 & 1) != 0)) break;
    uVar7 = *(undefined4 *)(&UNK_03a7f7ac + uVar9 * 4);
    uVar9 = uVar9 + 1;
  } while( true );
  uVar9 = FUN_029cddec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (((uVar9 & 1) == 0) && (bStack_bc = 0, bStack_be != 0)) {
    bStack_bc = 1;
    lVar8 = local_118[0];
    while (lVar8 != 0) {
      if ((*(byte *)(lVar8 + 900) >> 1 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 0x20);
        bVar1 = *(byte *)(lVar8 + 0x7d);
        lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 8) +
                          (ulong)bVar1 * 8 + 0x120);
        cVar2 = *(char *)(lVar6 + 0x2e7);
        if ('\0' < cVar2) {
          *(char *)(lVar6 + 0x2e7) = cVar2 + -1;
        }
        FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0xa2,(ulong)bVar1,1);
        lVar5 = *(long *)(param_1 + 0x20);
        bVar1 = *(byte *)(lVar8 + 0x7d);
        lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 8) +
                          (ulong)bVar1 * 8 + 0x120);
        cVar2 = *(char *)(lVar6 + 0x2e8);
        if ('\0' < cVar2) {
          *(char *)(lVar6 + 0x2e8) = cVar2 + -1;
        }
        FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0xa2,(ulong)bVar1,2);
        lVar5 = *(long *)(param_1 + 0x20);
        bVar1 = *(byte *)(lVar8 + 0x7d);
        lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 8) +
                          (ulong)bVar1 * 8 + 0x120);
        cVar2 = *(char *)(lVar6 + 0x2e9);
        if ('\0' < cVar2) {
          *(char *)(lVar6 + 0x2e9) = cVar2 + -1;
        }
        FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0xa2,(ulong)bVar1,5);
        iVar3 = FUN_029506a8(lVar8,1);
        if ((iVar3 != 1) && (*(char *)(lVar8 + 0x2e7) == '\0')) {
          iVar3 = FUN_029506a8(lVar8,1);
          uStack_9c = 1;
          if (1 < iVar3) {
            uStack_9c = 0xffffffff;
          }
          local_78 = 0;
          local_88 = 0;
          local_94 = 0;
          local_98 = 0;
          local_92 = 0;
          local_b0 = (long *)CONCAT71(local_b0._1_7_,*(undefined1 *)(lVar8 + 0x7d));
          local_a0 = 1;
          local_80 = 1;
          local_70 = 0;
          local_a8 = lVar8;
          FUN_029ee8bc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x15a0),local_b8,&local_b0);
        }
        iVar3 = FUN_029506a8(lVar8,2);
        if ((iVar3 != 1) && (*(char *)(lVar8 + 0x2e8) == '\0')) {
          iVar3 = FUN_029506a8(lVar8,2);
          local_78 = 0;
          local_88 = 0;
          uStack_9c = 1;
          if (1 < iVar3) {
            uStack_9c = 0xffffffff;
          }
          local_94 = 0;
          local_98 = 0;
          local_92 = 0;
          local_b0 = (long *)CONCAT71(local_b0._1_7_,*(undefined1 *)(lVar8 + 0x7d));
          local_a0 = 2;
          local_80 = 1;
          local_70 = 0;
          local_a8 = lVar8;
          FUN_029ee8bc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x15a0),local_b8,&local_b0);
        }
        iVar3 = FUN_029506a8(lVar8,5);
        if ((iVar3 != 1) && (*(char *)(lVar8 + 0x2e9) == '\0')) {
          iVar3 = FUN_029506a8(lVar8,5);
          uStack_9c = 1;
          if (1 < iVar3) {
            uStack_9c = 0xffffffff;
          }
          local_78 = 0;
          local_88 = 0;
          local_94 = 0;
          local_98 = 0;
          local_92 = 0;
          local_b0 = (long *)CONCAT71(local_b0._1_7_,*(undefined1 *)(lVar8 + 0x7d));
          local_a0 = 5;
          local_80 = 1;
          local_70 = 0;
          local_a8 = lVar8;
          FUN_029ee8bc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x15a0),local_b8,&local_b0);
        }
      }
      uVar9 = (ulong)bStack_bc;
      if (bStack_be <= bStack_bc) break;
      bStack_bc = bStack_bc + 1;
      lVar8 = local_118[uVar9];
    }
  }
  FUN_029d3abc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x2e0),local_b8,&local_b0);
  *param_2 = local_b8[0];
  return;
}


