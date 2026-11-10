/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032195cc; name: FUN_032195cc
 */


void FUN_032195cc(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  undefined4 local_80;
  undefined2 local_7c;
  ulong local_70;
  undefined *puStack_68;
  int *local_60;
  uint *puStack_58;
  uint local_48;
  int local_44;
  
  local_80 = 0x8000010;
  local_7c = 0x12;
  FUN_031aa380(param_1 + 0x28,param_1,&local_80);
  puVar3 = PTR_PTR_0434a090;
  lVar6 = *(long *)(param_1 + 0x130);
  uVar8 = *(uint *)(lVar6 + 0x40);
  local_48 = uVar8;
  if ((int)uVar8 < 1) {
    plVar5 = (long *)0x0;
    lVar13 = 0;
    uVar14 = 0x80000000;
  }
  else {
    lVar13 = (long)(int)uVar8;
    local_44 = 0x60;
    if (((ulong)(lVar13 * 3) >> 0x1a & 0x1ffffffff) != 0) {
      local_70 = 2;
      puStack_68 = &DAT_0411b3a0;
      local_60 = &local_44;
      puStack_58 = &local_48;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_70);
    }
    local_70 = -((ulong)(uVar8 * 3 >> 0x1a) & 1) & 0xffffffff00000000 |
               ((ulong)(uVar8 * 3) & 0x7ffffff) << 5;
    plVar5 = (long *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_70,&local_70);
    uVar14 = 0;
    if (local_44 != 0) {
      uVar14 = (int)local_70 / local_44;
    }
    lVar6 = *(long *)(param_1 + 0x130);
    uVar8 = *(uint *)(lVar6 + 0x40);
    local_48 = uVar14;
  }
  if (0 < (int)uVar8) {
    plVar10 = *(long **)(lVar6 + 0x38);
    if ((*plVar10 != 0) || (plVar10[2] != 0)) {
      lVar11 = plVar10[4];
      plVar5[1] = plVar10[5];
      *plVar5 = lVar11;
      lVar11 = plVar10[6];
      plVar5[3] = plVar10[7];
      plVar5[2] = lVar11;
      lVar11 = plVar10[8];
      plVar5[5] = plVar10[9];
      plVar5[4] = lVar11;
      lVar11 = plVar10[10];
      plVar5[7] = plVar10[0xb];
      plVar5[6] = lVar11;
      lVar11 = plVar10[0xc];
      plVar5[9] = plVar10[0xd];
      plVar5[8] = lVar11;
      lVar11 = plVar10[0xe];
      plVar5[0xb] = plVar10[0xf];
      plVar5[10] = lVar11;
      uVar8 = *(uint *)(lVar6 + 0x40);
    }
    if (1 < (int)uVar8) {
      lVar11 = *(long *)(lVar6 + 0x38);
      if ((*(long *)(lVar11 + 0xf0) != 0) || (*(long *)(lVar11 + 0x100) != 0)) {
        lVar12 = *(long *)(lVar11 + 0x110);
        plVar5[0xd] = *(long *)(lVar11 + 0x118);
        plVar5[0xc] = lVar12;
        lVar12 = *(long *)(lVar11 + 0x120);
        plVar5[0xf] = *(long *)(lVar11 + 0x128);
        plVar5[0xe] = lVar12;
        lVar12 = *(long *)(lVar11 + 0x130);
        plVar5[0x11] = *(long *)(lVar11 + 0x138);
        plVar5[0x10] = lVar12;
        lVar12 = *(long *)(lVar11 + 0x140);
        plVar5[0x13] = *(long *)(lVar11 + 0x148);
        plVar5[0x12] = lVar12;
        lVar12 = *(long *)(lVar11 + 0x150);
        plVar5[0x15] = *(long *)(lVar11 + 0x158);
        plVar5[0x14] = lVar12;
        lVar12 = *(long *)(lVar11 + 0x160);
        plVar5[0x17] = *(long *)(lVar11 + 0x168);
        plVar5[0x16] = lVar12;
        uVar8 = *(uint *)(lVar6 + 0x40);
      }
      if (2 < (int)uVar8) {
        plVar10 = plVar5 + 0x22;
        lVar11 = 2;
        lVar12 = 0x250;
        do {
          plVar1 = (long *)(*(long *)(lVar6 + 0x38) + lVar12);
          if ((plVar1[-0xe] != 0) || (plVar1[-0xc] != 0)) {
            lVar15 = plVar1[-10];
            plVar10[-9] = plVar1[-9];
            plVar10[-10] = lVar15;
            lVar15 = plVar1[-8];
            plVar10[-7] = plVar1[-7];
            plVar10[-8] = lVar15;
            lVar15 = plVar1[-6];
            plVar10[-5] = plVar1[-5];
            plVar10[-6] = lVar15;
            lVar15 = plVar1[-4];
            plVar10[-3] = plVar1[-3];
            plVar10[-4] = lVar15;
            lVar15 = plVar1[-2];
            plVar10[-1] = plVar1[-1];
            plVar10[-2] = lVar15;
            lVar15 = *plVar1;
            plVar10[1] = plVar1[1];
            *plVar10 = lVar15;
            uVar8 = *(uint *)(lVar6 + 0x40);
          }
          lVar11 = lVar11 + 1;
          lVar12 = lVar12 + 0xf0;
          plVar10 = plVar10 + 0xc;
        } while (lVar11 < (int)uVar8);
      }
    }
  }
  bVar4 = *(char *)(param_1 + 0x230) != '\0';
  lVar6 = *(long *)(param_1 + 0x170);
  FUN_031e9808(lVar6,bVar4);
  FUN_031e9a84(lVar6,bVar4,plVar5,plVar5 + lVar13 * 0xc);
  puVar7 = *(uint **)(lVar6 + 0x90);
  iVar2 = *(int *)(lVar6 + 0x98);
  if (param_2 == (long *)0x0) {
    if (((iVar2 != 0) && (*(undefined1 *)(puVar7 + 0x32) = 1, iVar2 != 1)) &&
       (*(undefined1 *)(puVar7 + 0x66) = 1, iVar2 != 2)) {
      lVar6 = (long)iVar2 * 0xd0 + -0x1a0;
      puVar7 = puVar7 + 0x9a;
      do {
        lVar6 = lVar6 + -0xd0;
        *(undefined1 *)puVar7 = 1;
        puVar7 = puVar7 + 0x34;
      } while (lVar6 != 0);
    }
  }
  else if (iVar2 != 0) {
    puVar9 = puVar7 + (long)iVar2 * 0x34;
    do {
      *(bool *)(puVar7 + 0x32) =
           (*(uint *)(*param_2 + (long)((int)*puVar7 >> 5) * 4) & 1 << (ulong)(*puVar7 & 0x1f)) != 0
      ;
      puVar7 = puVar7 + 0x34;
    } while (puVar7 != puVar9);
  }
  if ((plVar5 != (long *)0x0) && (-1 < (int)uVar14)) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,plVar5,(ulong)(uVar14 & 0x3fffffff) * 0x60);
  }
  return;
}


