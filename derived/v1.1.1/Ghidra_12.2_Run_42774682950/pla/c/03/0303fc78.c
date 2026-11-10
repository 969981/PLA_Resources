/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303fc78; name: FUN_0303fc78
 */


void FUN_0303fc78(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  MutexType *pMVar15;
  long lVar16;
  ulong uVar17;
  uint *puVar18;
  
  pMVar15 = *(MutexType **)(param_1 + 0x48);
  lVar16 = *(long *)(param_2 + 0x78);
  nn::os::LockMutex(pMVar15);
  uVar5 = *(uint *)(param_1 + 0x24);
  plVar1 = (long *)(param_1 + 0x18);
  if ((int)uVar5 < 1) {
    lVar8 = *plVar1;
  }
  else {
    uVar11 = (int)lVar16 * -0x61c8864f;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uVar2 = uVar11 >> 0x10 | uVar11 << 0x10;
    uVar11 = (int)((ulong)lVar16 >> 0x20) * -0x61c8864f;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
    uVar17 = (ulong)((uVar2 + (uVar2 >> 2) + uVar11 * 0x40 + 0x9e3779b9 ^ uVar11) & uVar5);
    lVar8 = *plVar1;
    lVar10 = *(long *)(lVar8 + uVar17 * 0x10);
    if (lVar10 != -1) {
      if (lVar10 != lVar16) {
        do {
          uVar17 = (ulong)((int)uVar17 + 1U & uVar5);
          lVar10 = *(long *)(lVar8 + uVar17 * 0x10);
          if (lVar10 == -1) goto LAB_0303fed4;
        } while (lVar10 != lVar16);
      }
      goto LAB_0303fd0c;
    }
  }
LAB_0303fed4:
  uVar17 = (long)(int)uVar5 + 1;
LAB_0303fd0c:
  lVar16 = *(long *)(lVar8 + ((long)(uVar17 << 0x20) >> 0x1c) + 8);
  uVar6 = (long)*(int *)(lVar16 + 0x18) - 1;
  uVar5 = (uint)uVar6;
  if (0 < (int)uVar5) {
    uVar11 = *(int *)(param_2 + 0x50) * -0x61c8864f;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
    while( true ) {
      uVar11 = uVar5 & uVar11;
      iVar14 = *(int *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar11 * 4);
      if (iVar14 == -1) break;
      if (iVar14 == *(int *)(param_2 + 0x50)) {
        uVar9 = (ulong)uVar11;
        if ((int)uVar11 < *(int *)(lVar16 + 0x18)) {
          *(int *)(lVar16 + 0x20) = *(int *)(lVar16 + 0x20) + -1;
          *(undefined4 *)
           (*(long *)(lVar16 + 0x10) + (-(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 | uVar9 << 2))
               = 0xffffffff;
          lVar8 = *(long *)(lVar16 + 0x10);
          uVar2 = uVar11;
          do {
            uVar2 = uVar5 + uVar2 & uVar5;
          } while (*(int *)(lVar8 + (long)(int)uVar2 * 4) != -1);
          uVar6 = (long)(int)(uVar11 + 1) & uVar6;
          iVar14 = *(int *)(lVar8 + uVar6 * 4);
          if (iVar14 != -1) {
            uVar11 = uVar2 + 1 & uVar5;
            uVar13 = uVar6 & 0xffffffff;
            do {
              uVar2 = (iVar14 * -0x61c8864f & 0xff00ff00U) >> 8 |
                      (iVar14 * -0x61c8864f & 0xff00ffU) << 8;
              uVar2 = (uVar2 >> 0x10 | uVar2 << 0x10) & uVar5;
              uVar12 = (uint)uVar13;
              uVar7 = (uint)uVar9;
              if ((((uVar12 < uVar11) || (uVar2 <= uVar7)) &&
                  ((uVar7 <= uVar12 || ((uVar2 <= uVar7 && (uVar12 < uVar2)))))) &&
                 ((uVar2 <= uVar7 || (uVar11 <= uVar2)))) {
                *(int *)(lVar8 + (long)(int)uVar7 * 4) = iVar14;
                *(undefined4 *)(*(long *)(lVar16 + 0x10) + uVar6 * 4) = 0xffffffff;
                lVar8 = *(long *)(lVar16 + 0x10);
                uVar9 = uVar13;
              }
              uVar2 = uVar12 + 1 & uVar5;
              uVar13 = (ulong)uVar2;
              uVar6 = (ulong)(int)uVar2;
              iVar14 = *(int *)(lVar8 + (long)(int)uVar2 * 4);
            } while (iVar14 != -1);
          }
        }
        break;
      }
      uVar11 = uVar11 + 1;
    }
  }
  if ((*(uint *)(lVar16 + 0x20) & 0x7fffffff) == 0) {
    lVar8 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(lVar16 + 8) + 0x18) * 0x200 +
                        0x48))();
    FUN_03040ae0(lVar8,lVar16,&LAB_03040688,0);
    FUN_03040ce8(lVar8 + 8,lVar16,&LAB_03040850,0);
    *(undefined8 *)(lVar16 + 8) = 0;
    *(undefined1 *)(lVar16 + 0x28) = 0;
    FUN_02fecac8(plVar1,uVar17);
    puVar3 = PTR_PTR_0434a080;
    puVar18 = (uint *)(param_1 + 0x34);
    uVar11 = *puVar18;
    iVar14 = *(int *)(param_1 + 0x30);
    uVar5 = iVar14 + 1;
    if (iVar14 < (int)(uVar11 & 0x3fffffff)) {
      lVar8 = *(long *)(param_1 + 0x28);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      if (0x3ffffffe < iVar14) {
        FUN_032bd0a8(uVar5);
        uVar11 = *puVar18;
      }
      uVar11 = (uVar11 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar11) {
        uVar11 = 0x3fffffff;
      }
      uVar2 = uVar5;
      if ((int)uVar5 <= (int)uVar11) {
        uVar2 = uVar11;
      }
      lVar8 = FUN_032bd1d4(puVar3,uVar2,8,uVar4,iVar14,puVar18);
      iVar14 = *(int *)(param_1 + 0x30);
      *(long *)(param_1 + 0x28) = lVar8;
    }
    *(long *)(lVar8 + (long)iVar14 * 8) = lVar16;
    *(uint *)(param_1 + 0x30) = uVar5;
  }
  nn::os::UnlockMutex(pMVar15);
  return;
}


