/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00262abc; name: FUN_00262abc
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_00262abc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 undefined4 param_6,undefined4 param_7)

{
  void *__s;
  int iVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  
  local_70 = param_6;
  uStack_6c = param_7;
  local_80 = param_2;
  uStack_78 = param_3;
  plVar14 = (long *)((long)&local_a0 - ((ulong)*(uint *)(param_5 + 0x10) * 8 + 0xf & 0xffffffff0));
  if (*(uint *)(param_5 + 0x10) == 0) {
    return 0;
  }
  local_a0 = param_4;
  local_68 = (undefined4 *)0x0;
  uVar16 = 0;
  lVar13 = 0;
  uVar15 = 0;
  lVar6 = param_1 + 0x100;
  local_98 = PTR_DAT_04372e30 + 0x10;
  local_90 = PTR_DAT_04372e10 + 0x10;
LAB_00262b60:
  do {
    puVar17 = *(undefined4 **)(*(long *)(param_5 + 0x18) + uVar16 * 8);
    uVar3 = local_80;
    switch(*puVar17) {
    case 0:
      plVar7 = *(long **)(param_1 + 0x110);
      *(long **)(param_1 + 0x110) = plVar7 + 0x14;
      if (plVar7 != (long *)0x0) {
        *(undefined4 *)(plVar7 + 10) = 0;
        plVar7[4] = 0;
        plVar7[5] = (long)puVar17;
        plVar7[2] = (long)(plVar7 + 1);
        plVar7[0xb] = 0;
        plVar7[0xc] = 0;
        plVar7[0xd] = 0;
        plVar7[0xe] = 0;
        *plVar7 = (long)local_90;
        plVar7[1] = (long)(plVar7 + 1);
        *(undefined4 *)(plVar7 + 3) = 0x3f800000;
        *(undefined1 *)((long)plVar7 + 0x1c) = 1;
        plVar7[6] = (long)local_68;
        plVar7[7] = 0;
        plVar7[0x13] = (long)(plVar7 + 0x12);
        plVar7[8] = 0;
        plVar7[9] = 0;
        plVar7[0xf] = 0;
        plVar7[0x10] = lVar6;
        plVar7[0x11] = lVar6;
        plVar7[0x12] = (long)(plVar7 + 0x12);
      }
      local_88 = lVar13;
      piVar5 = (int *)nn::util::BinaryFileHeader::GetFirstBlock();
      lVar13 = local_88;
      uVar3 = local_80;
      if (piVar5 != (int *)0x0) {
        iVar12 = 0;
        iVar1 = *piVar5;
        do {
          if (iVar1 == 0x50434756) {
            if (iVar12 == puVar17[0x26]) {
              lVar13 = FUN_00262abc(param_1,local_80,uStack_78,plVar7,piVar5,local_70,uStack_6c);
              lVar13 = lVar13 + local_88;
              uVar3 = local_80;
              break;
            }
            iVar12 = iVar12 + 1;
            piVar5 = (int *)nn::util::BinaryBlockHeader::GetNextBlock();
          }
          else {
            piVar5 = (int *)nn::util::BinaryBlockHeader::GetNextBlock();
          }
          lVar13 = local_88;
          uVar3 = local_80;
          if (piVar5 == (int *)0x0) break;
          iVar1 = *piVar5;
        } while( true );
      }
      goto joined_r0x00262dd8;
    case 1:
    case 2:
    case 3:
    case 5:
      plVar7 = *(long **)(param_1 + 0x110);
      *(long **)(param_1 + 0x110) = plVar7 + 0x14;
      puVar4 = PTR_DAT_04372e10;
      if (plVar7 != (long *)0x0) {
        plVar7[2] = (long)(plVar7 + 1);
        plVar7[4] = 0;
        plVar7[5] = (long)puVar17;
        *plVar7 = (long)(puVar4 + 0x10);
        plVar7[1] = (long)(plVar7 + 1);
        *(undefined4 *)(plVar7 + 3) = 0x3f800000;
        plVar7[0xb] = 0;
        plVar7[0xc] = 0;
        *(undefined1 *)((long)plVar7 + 0x1c) = 1;
        *(undefined4 *)(plVar7 + 10) = 0;
        plVar7[0xd] = 0;
        plVar7[0xe] = 0;
        plVar7[6] = (long)local_68;
        plVar7[7] = 0;
        plVar7[0x13] = (long)(plVar7 + 0x12);
        plVar7[8] = 0;
        plVar7[9] = 0;
        plVar7[0xf] = 0;
        plVar7[0x10] = lVar6;
        plVar7[0x11] = lVar6;
        plVar7[0x12] = (long)(plVar7 + 0x12);
        goto joined_r0x00262dd8;
      }
      break;
    case 4:
      plVar7 = *(long **)(param_1 + 0x110);
      *(long **)(param_1 + 0x110) = plVar7 + 0x20;
      if (plVar7 != (long *)0x0) {
        *(undefined4 *)(plVar7 + 10) = 0;
        plVar7[4] = 0;
        plVar7[5] = (long)puVar17;
        plVar7[2] = (long)(plVar7 + 1);
        plVar7[0xb] = 0;
        plVar7[0xc] = 0;
        plVar7[0xd] = 0;
        plVar7[0xe] = 0;
        *plVar7 = (long)local_98;
        plVar7[1] = (long)(plVar7 + 1);
        *(undefined4 *)(plVar7 + 3) = 0x3f800000;
        *(undefined1 *)((long)plVar7 + 0x1c) = 1;
        plVar7[6] = (long)local_68;
        plVar7[7] = 0;
        plVar7[0x13] = (long)(plVar7 + 0x12);
        plVar7[8] = 0;
        plVar7[9] = 0;
        plVar7[0xf] = 0;
        plVar7[0x10] = lVar6;
        plVar7[0x11] = lVar6;
        plVar7[0x12] = (long)(plVar7 + 0x12);
        plVar7[0x14] = *(long *)(puVar17 + 0x2c);
        plVar7[0x15] = 0;
        plVar7[0x16] = 0;
        plVar7[0x17] = 0;
        *(undefined4 *)(plVar7 + 0x18) = puVar17[0x2a];
        *(undefined8 *)((long)plVar7 + 0xc4) = 0x3dcccccd00000000;
        *(undefined8 *)((long)plVar7 + 0xcc) = 0;
        plVar7[0x1f] = 0;
        plVar7[0x1b] = 0;
        plVar7[0x1c] = 0;
        plVar7[0x1d] = 0;
        plVar7[0x1e] = 0;
        uVar2 = *(ushort *)(puVar17 + 0x2b);
        if (uVar2 != 0) {
          *(uint *)((long)plVar7 + 0xc4) = (uint)uVar2;
          plVar7[0x16] = *(long *)(puVar17 + 0x28);
          __s = (void *)(*(long *)(param_1 + 0x110) + 0xfU & 0xfffffffffffffff0);
          *(void **)(param_1 + 0x110) = (void *)((long)__s + (ulong)uVar2 * 0x40);
          if (__s != (void *)0x0) {
            memset(__s,0,(ulong)uVar2 * 0x40);
          }
          plVar7[0x17] = (long)__s;
          uVar3 = local_80;
        }
      }
joined_r0x00262dd8:
      local_80 = uVar3;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,uVar3,uStack_78,local_70,uStack_6c);
        lVar8 = (**(code **)(*plVar7 + 0x30))(plVar7,uVar3);
        plVar14[(int)uVar15] = (long)plVar7;
        lVar13 = lVar8 + lVar13;
        uVar15 = uVar15 + 1;
        uVar16 = uVar16 + 1;
        if (*(uint *)(param_5 + 0x10) <= uVar16) goto LAB_00262e04;
        goto LAB_00262b60;
      }
      break;
    case 6:
      local_68 = puVar17;
    }
    uVar16 = uVar16 + 1;
    if (*(uint *)(param_5 + 0x10) <= uVar16) {
LAB_00262e04:
      if ((int)uVar15 < 1) {
        return lVar13;
      }
      uVar16 = 0;
      lVar6 = *plVar14;
      iVar12 = *(int *)(*(long *)(lVar6 + 0x28) + 0x8c);
      if (-1 < iVar12) goto LAB_00262e68;
      do {
        plVar7 = (long *)(lVar6 + 8);
        lVar8 = *plVar7;
        *plVar7 = *(long *)(local_a0 + 0x90);
        *(long *)(lVar8 + 8) = local_a0 + 0x90;
        *(long **)(*(long *)(local_a0 + 0x90) + 8) = plVar7;
        *(long *)(local_a0 + 0x90) = lVar8;
        *(long *)(lVar6 + 0x38) = local_a0;
joined_r0x00262e54:
        uVar16 = uVar16 + 1;
        if (uVar16 == uVar15) {
          return lVar13;
        }
        lVar6 = plVar14[uVar16];
        iVar12 = *(int *)(*(long *)(lVar6 + 0x28) + 0x8c);
      } while (iVar12 < 0);
LAB_00262e68:
      if (*(uint *)(param_5 + 0x10) != 0) {
        uVar11 = 0;
        do {
          lVar8 = plVar14[uVar11];
          if (*(int *)(*(long *)(lVar8 + 0x28) + 0x78) == iVar12) {
            plVar7 = (long *)(lVar6 + 8);
            lVar9 = *plVar7;
            plVar10 = (long *)(lVar8 + 0x90);
            *plVar7 = *plVar10;
            *(long **)(lVar9 + 8) = plVar10;
            *(long **)(*plVar10 + 8) = plVar7;
            *plVar10 = lVar9;
            *(long *)(lVar6 + 0x38) = lVar8;
            break;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(param_5 + 0x10));
      }
      goto joined_r0x00262e54;
    }
  } while( true );
}


