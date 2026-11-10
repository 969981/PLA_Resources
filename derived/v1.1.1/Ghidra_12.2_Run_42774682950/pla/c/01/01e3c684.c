/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e3c684; name: FUN_01e3c684
 */


void FUN_01e3c684(long param_1)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  undefined8 local_e8;
  long local_e0 [4];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  int local_64;
  
  FUN_00b26ad8(param_1 + 0x68);
  lVar3 = *(long *)(param_1 + 0x70);
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x1e1) == '\0')) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  piVar1 = (int *)((long)*(uint **)(lVar3 + 0x250) + (ulong)**(uint **)(lVar3 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar5 == 0)) {
    puVar9 = (uint *)0x0;
  }
  else {
    puVar9 = (uint *)((long)piVar1 + uVar5);
    puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
  }
  local_64 = 0;
  puVar8 = puVar9 + 1;
  if (*puVar9 != 0) {
    puVar9 = puVar8 + *puVar9;
    iVar10 = 0;
    do {
      piVar1 = (int *)((long)puVar8 + (ulong)*puVar8);
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
        local_70 = 0;
      }
      else {
        uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
        local_70 = 0;
        if (uVar5 != 0) {
          local_70 = *(undefined8 *)((long)piVar1 + uVar5);
        }
      }
      local_e0[3] = *(undefined8 *)(param_1 + 8);
      local_e0[1] = 0;
      local_b0 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0x3f800000;
      local_c0 = 0xfffffffffffffff;
      uStack_b8 = 0;
      local_a8 = 0;
      local_e0[2] = 0;
      local_98 = 0xfffffffffffffff;
      uStack_90 = 0;
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar5 == 0)) {
        puVar4 = (uint *)0x0;
        uVar2 = uRam0000000000000000;
      }
      else {
        puVar4 = (uint *)((long)piVar1 + uVar5);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        uVar2 = *puVar4;
      }
      uStack_a0 = local_e0[3];
      if (uVar2 != 0) {
        lVar3 = (ulong)uVar2 << 2;
        do {
          puVar4 = puVar4 + 1;
          uVar5 = (ulong)*puVar4;
          local_e0[0] = (long)puVar4 + uVar5;
          lVar6 = uVar5 - (long)*(int *)((long)puVar4 + uVar5);
          if ((*(ushort *)((long)puVar4 + lVar6) < 5) ||
             (uVar7 = (ulong)*(ushort *)((long)puVar4 + lVar6 + 4), uVar7 == 0)) {
            local_e8 = 0;
          }
          else {
            local_e8 = *(undefined8 *)((long)puVar4 + uVar5 + uVar7);
          }
          FUN_01e3dba4(local_e0 + 1,&local_e8,local_e0);
          lVar3 = lVar3 + -4;
        } while (lVar3 != 0);
      }
      FUN_01e3e460(param_1 + 0x98,&local_70,local_e0 + 1);
      FUN_01e3f1e8(param_1 + 0x100,&local_64,&local_70);
      iVar10 = iVar10 + 1;
      local_64 = iVar10;
      FUN_01e3d730(local_e0 + 1);
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar9);
  }
  return;
}


