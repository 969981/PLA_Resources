/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315b65c; name: FUN_0315b65c
 */


long FUN_0315b65c(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  long lVar11;
  void *pvVar12;
  undefined4 uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  void *pvVar18;
  undefined4 *puVar19;
  long lVar20;
  uint *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong local_68;
  
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  lVar11 = *(long *)(param_1 + 0x68);
  lVar15 = *(long *)(param_2 + 0x68);
  if (lVar11 != lVar15) {
    if ((lVar15 != 0) && (*(long *)(lVar15 + 8) != 0)) {
      plVar1 = (long *)(lVar15 + 0x10);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = *plVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      lVar11 = *(long *)(param_1 + 0x68);
      lVar15 = *(long *)(param_2 + 0x68);
    }
    *(long *)(param_1 + 0x68) = lVar15;
    if (lVar11 != 0) {
      FUN_032d647c();
    }
  }
  if (param_2 != param_1) {
    pvVar18 = *(void **)(param_2 + 0x70);
    iVar5 = *(int *)(param_2 + 0x78);
    pvVar12 = *(void **)(param_1 + 0x70);
    if ((int)(*(uint *)(param_1 + 0x7c) & 0x3fffffff) < iVar5) {
      pvVar12 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar5,4,pvVar12,
                                     *(undefined4 *)(param_1 + 0x78));
      *(void **)(param_1 + 0x70) = pvVar12;
    }
    memcpy(pvVar12,pvVar18,(long)iVar5 << 2);
    *(int *)(param_1 + 0x78) = iVar5;
    iVar5 = *(int *)(param_2 + 0x88);
    pvVar18 = *(void **)(param_2 + 0x80);
    pvVar12 = *(void **)(param_1 + 0x80);
    if ((int)(*(uint *)(param_1 + 0x8c) & 0x3fffffff) < iVar5) {
      pvVar12 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar5,8,pvVar12,
                                     *(undefined4 *)(param_1 + 0x88));
      *(void **)(param_1 + 0x80) = pvVar12;
    }
    memcpy(pvVar12,pvVar18,(long)iVar5 << 3);
    *(int *)(param_1 + 0x88) = iVar5;
    iVar5 = *(int *)(param_2 + 0x98);
    pvVar18 = *(void **)(param_2 + 0x90);
    pvVar12 = *(void **)(param_1 + 0x90);
    if ((int)(*(uint *)(param_1 + 0x9c) & 0x3fffffff) < iVar5) {
      pvVar12 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar5,8,pvVar12,
                                     *(undefined4 *)(param_1 + 0x98));
      *(void **)(param_1 + 0x90) = pvVar12;
    }
    memcpy(pvVar12,pvVar18,(long)iVar5 << 3);
    *(int *)(param_1 + 0x98) = iVar5;
    iVar5 = *(int *)(param_2 + 0xa8);
    pvVar18 = *(void **)(param_2 + 0xa0);
    pvVar12 = *(void **)(param_1 + 0xa0);
    if ((int)(*(uint *)(param_1 + 0xac) & 0x3fffffff) < iVar5) {
      pvVar12 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar5,4,pvVar12,
                                     *(undefined4 *)(param_1 + 0xa8));
      *(void **)(param_1 + 0xa0) = pvVar12;
    }
    memcpy(pvVar12,pvVar18,(long)iVar5 << 2);
    *(int *)(param_1 + 0xa8) = iVar5;
    puVar10 = PTR_PTR_0434a080;
    iVar5 = *(int *)(param_2 + 0xb8);
    pvVar18 = *(void **)(param_2 + 0xb0);
    pvVar12 = *(void **)(param_1 + 0xb0);
    if ((int)(*(uint *)(param_1 + 0xbc) & 0x3fffffff) < iVar5) {
      pvVar12 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar5,4,pvVar12,
                                     *(undefined4 *)(param_1 + 0xb8));
      *(void **)(param_1 + 0xb0) = pvVar12;
    }
    memcpy(pvVar12,pvVar18,(long)iVar5 << 2);
    *(int *)(param_1 + 0xb8) = iVar5;
    lVar11 = *(long *)(param_2 + 0xc0);
    iVar5 = *(int *)(param_2 + 200);
    if ((int)(*(uint *)(param_1 + 0xcc) & 0x3fffffff) < iVar5) {
      lVar16 = *(long *)(param_1 + 0xc0);
      uVar6 = *(uint *)(param_1 + 200);
      uVar23 = (ulong)uVar6;
      FUN_032bd100(iVar5,0x10,*(uint *)(param_1 + 0xcc),&local_68);
      uVar7 = *(uint *)(param_1 + 0xcc);
      lVar15 = (**(code **)(*(long *)puVar10 + 0x10))(puVar10,local_68,&local_68);
      if (0 < (int)uVar6) {
        lVar20 = lVar15;
        lVar22 = lVar16;
        uVar24 = uVar23;
        do {
          FUN_0315c820(lVar20,lVar22);
          uVar24 = uVar24 - 1;
          lVar22 = lVar22 + 0x10;
          lVar20 = lVar20 + 0x10;
        } while (uVar24 != 0);
        puVar21 = (uint *)(lVar16 + 0xc);
        do {
          puVar21[-1] = 0;
          if ((-1 < (int)*puVar21) && (*(long *)(puVar21 + -3) != 0)) {
            FUN_032cf244(puVar10,*(long *)(puVar21 + -3),4,*puVar21 & 0x3fffffff);
          }
          puVar21[-3] = 0;
          puVar21[-2] = 0;
          uVar23 = uVar23 - 1;
          *puVar21 = 0x80000000;
          puVar21 = puVar21 + 4;
        } while (uVar23 != 0);
      }
      if (-1 < (int)uVar7) {
        (**(code **)(*(long *)puVar10 + 0x18))(puVar10,lVar16,((ulong)uVar7 & 0x3fffffff) << 4);
      }
      if (local_68 < 0x3fffffff0) {
        uVar13 = (undefined4)(local_68 >> 4);
      }
      else {
        uVar13 = 0x3fffffff;
      }
      *(undefined4 *)(param_1 + 0xcc) = uVar13;
      *(long *)(param_1 + 0xc0) = lVar15;
    }
    iVar14 = *(int *)(param_1 + 200);
    if (iVar5 < iVar14) {
      lVar15 = (long)iVar5 * 0x10 + (long)iVar14 * -0x10;
      puVar19 = (undefined4 *)(*(long *)(param_1 + 0xc0) + (long)iVar14 * 0x10 + -8);
      do {
        *puVar19 = 0;
        if ((-1 < (int)puVar19[1]) && (*(long *)(puVar19 + -2) != 0)) {
          FUN_032cf244(puVar10,*(long *)(puVar19 + -2),4,puVar19[1] & 0x3fffffff);
        }
        *(undefined8 *)(puVar19 + -2) = 0;
        lVar15 = lVar15 + 0x10;
        puVar19[1] = 0x80000000;
        puVar19 = puVar19 + -4;
      } while (lVar15 != 0);
      iVar14 = *(int *)(param_1 + 200);
    }
    if (iVar5 <= iVar14) {
      iVar14 = iVar5;
    }
    if (0 < iVar5 - iVar14) {
      iVar17 = iVar5 - iVar14;
      lVar15 = *(long *)(param_1 + 0xc0) + (long)iVar14 * 0x10;
      lVar11 = lVar11 + (long)iVar14 * 0x10;
      do {
        FUN_0315c820(lVar15,lVar11);
        iVar17 = iVar17 + -1;
        lVar15 = lVar15 + 0x10;
        lVar11 = lVar11 + 0x10;
      } while (iVar17 != 0);
    }
    *(int *)(param_1 + 200) = iVar5;
  }
  return param_1;
}


