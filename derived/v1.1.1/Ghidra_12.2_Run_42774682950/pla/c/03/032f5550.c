/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f5550; name: FUN_032f5550
 */


void FUN_032f5550(long *param_1,long *param_2,uint param_3)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong *puVar7;
  int iVar8;
  uint uVar9;
  ulong *puVar10;
  long lVar11;
  int iVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  long local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  
  puVar5 = PTR_PTR_0434a090;
  local_58 = -0x8000000000000000;
  local_60 = 0;
  iVar8 = (int)param_1[1];
  if (0 < iVar8) {
    local_60 = FUN_032f631c(PTR_PTR_0434a090,iVar8,0,0,(long)&local_58 + 4);
    iVar8 = (int)param_1[1];
  }
  local_70 = 0;
  local_68 = 0xffffffff00000000;
  iVar12 = 8;
  do {
    bVar1 = iVar12 < iVar8 * 2;
    iVar12 = iVar12 << 1;
  } while (bVar1);
  FUN_02fec8dc(&local_70,puVar5);
  iVar8 = (int)param_1[1];
  if (0 < iVar8) {
    lVar14 = 0;
    do {
      FUN_032f5ec0(*(undefined8 *)(*(long *)(*param_1 + lVar14 * 8) + 8),&local_60,&local_70,param_2
                  );
      iVar8 = (int)param_1[1];
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar8);
  }
  uVar16 = (ulong)(int)local_58;
  if (0 < (int)local_58) {
    uVar15 = 0;
    uVar6 = 0;
    piVar17 = (int *)(local_60 + 8);
    do {
      if (*piVar17 == -1) {
        uVar6 = FUN_032f6230(uVar15 & 0xffffffff,&local_60,uVar6,param_3);
      }
      uVar15 = uVar15 + 1;
      piVar17 = piVar17 + 6;
    } while (uVar16 != uVar15);
    iVar8 = (int)param_1[1];
  }
  if (iVar8 == 0) {
LAB_032f585c:
    if (0 < (int)local_68._4_4_) {
      lVar11 = 0;
      lVar14 = (ulong)local_68._4_4_ + 1;
      do {
        if (*(long *)(local_70 + lVar11) != -1) {
          *(undefined8 *)(local_70 + lVar11) = 0xffffffffffffffff;
        }
        lVar14 = lVar14 + -1;
        lVar11 = lVar11 + 0x10;
      } while (lVar14 != 0);
    }
    iVar8 = (int)local_68;
    local_68 = local_68 & 0xffffffff80000000;
    if ((-1 < iVar8) && (local_70 != 0)) {
      (**(code **)(*(long *)puVar5 + 0x18))
                (puVar5,local_70,(long)(int)(local_68._4_4_ * 0x10 + 0x10));
    }
    lVar14 = local_58;
    uVar16 = (ulong)local_58._4_4_;
    local_58 = (ulong)local_58._4_4_ << 0x20;
    if ((-1 < lVar14) && (local_60 != 0)) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_60,(uVar16 & 0x3fffffff) * 0x18);
    }
    return;
  }
  param_1 = (long *)*param_1;
  plVar2 = param_1 + iVar8;
LAB_032f5710:
  puVar10 = *(ulong **)(*param_1 + 8);
  puVar13 = puVar10;
  while( true ) {
    uVar9 = (uint)*puVar13;
    if ((uVar9 >> 0xd & 1) != 0) break;
    if (((*puVar13 & 1) != 0) || (puVar13 = (ulong *)puVar13[1], puVar13 == (ulong *)0x0))
    goto LAB_032f5704;
  }
  if ((puVar13 != (ulong *)0x0) &&
     (uVar9 = (uVar9 & 0x1fff) - (uVar9 >> 1 & 0x555),
     uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333),
     uVar16 = (ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18),
     ((uint)puVar13[uVar16 + 2] & 3) != param_3)) {
    if (puVar10 != (ulong *)0x0) goto LAB_032f5778;
    goto LAB_032f5780;
  }
  goto LAB_032f5704;
  while (puVar10 = (ulong *)puVar10[1], puVar10 != (ulong *)0x0) {
LAB_032f5778:
    if ((*puVar10 & 1) != 0) break;
  }
LAB_032f5780:
  puVar7 = puVar10;
  while( true ) {
    uVar9 = (uint)*puVar7;
    if ((uVar9 >> 0xf & 1) != 0) break;
    if (((*puVar7 & 9) != 0) || (puVar7 = (ulong *)puVar7[1], puVar7 == (ulong *)0x0))
    goto LAB_032f5794;
  }
  uVar9 = (uVar9 & 0x7fff) - (uVar9 >> 1 & 0x1555);
  uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
  if (((undefined8 *)puVar7[(ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] !=
       (undefined8 *)0x0) &&
     (puVar7 = *(ulong **)
                puVar7[(ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
     puVar7 != (ulong *)0x0)) goto LAB_032f5798;
LAB_032f5794:
  puVar7 = puVar10;
LAB_032f5798:
  uVar9 = *(uint *)((long)param_2 + 0xc);
  if ((int)uVar9 < 1) {
LAB_032f56c0:
    uVar9 = (uint)*puVar7;
    if ((uVar9 >> 0xd & 1) != 0) goto LAB_032f56c8;
  }
  else {
    uVar3 = (int)puVar7 * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar4 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (int)((ulong)puVar7 >> 0x20) * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar15 = (ulong)((uVar4 + (uVar4 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3) & uVar9);
    lVar14 = *param_2;
    puVar10 = *(ulong **)(lVar14 + uVar15 * 0x10);
    if (puVar10 == (ulong *)0xffffffffffffffff) goto LAB_032f56c0;
    if (puVar10 != puVar7) {
      do {
        uVar15 = (ulong)((int)uVar15 + 1U & uVar9);
        puVar10 = *(ulong **)(lVar14 + uVar15 * 0x10);
        if (puVar10 == (ulong *)0xffffffffffffffff) goto LAB_032f56c0;
      } while (puVar10 != puVar7);
    }
    puVar7 = (ulong *)(lVar14 + uVar15 * 0x10);
  }
  do {
    puVar7 = (ulong *)puVar7[1];
    uVar9 = (uint)*puVar7;
  } while ((uVar9 >> 0xd & 1) == 0);
LAB_032f56c8:
  uVar9 = (uVar9 & 0x1fff) - (uVar9 >> 1 & 0x555);
  uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
  puVar13[uVar16 + 2] =
       (long)(int)puVar7[(ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
LAB_032f5704:
  param_1 = param_1 + 1;
  if (param_1 == plVar2) goto LAB_032f585c;
  goto LAB_032f5710;
}


