/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031beb28; name: FUN_031beb28
 */


long FUN_031beb28(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  void *pvVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong local_58;
  
  if (param_2 != param_1) {
    pvVar14 = *(void **)(param_2 + 0x18);
    iVar10 = *(int *)(param_2 + 0x20);
    pvVar6 = *(void **)(param_1 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < iVar10) {
      pvVar6 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar10,4,pvVar6,*(undefined4 *)(param_1 + 0x20)
                                   );
      *(void **)(param_1 + 0x18) = pvVar6;
    }
    memcpy(pvVar6,pvVar14,(long)iVar10 << 2);
    *(int *)(param_1 + 0x20) = iVar10;
    puVar4 = PTR_PTR_0434a080;
    iVar10 = *(int *)(param_2 + 0x30);
    pvVar14 = *(void **)(param_2 + 0x28);
    pvVar6 = *(void **)(param_1 + 0x28);
    if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) < iVar10) {
      pvVar6 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar10,4,pvVar6,*(undefined4 *)(param_1 + 0x30)
                                   );
      *(void **)(param_1 + 0x28) = pvVar6;
    }
    memcpy(pvVar6,pvVar14,(long)iVar10 << 2);
    *(int *)(param_1 + 0x30) = iVar10;
    uVar1 = *(uint *)(param_2 + 0x40);
    lVar16 = *(long *)(param_2 + 0x38);
    lVar15 = *(long *)(param_1 + 0x38);
    lVar5 = lVar15;
    if ((int)(*(uint *)(param_1 + 0x44) & 0x3fffffff) < (int)uVar1) {
      uVar2 = *(uint *)(param_1 + 0x40);
      uVar17 = (ulong)uVar2;
      FUN_032bd100(uVar1,0x30,*(uint *)(param_1 + 0x44),&local_58);
      uVar3 = *(uint *)(param_1 + 0x44);
      lVar5 = (**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_58,&local_58);
      if (0 < (int)uVar2) {
        puVar8 = (undefined1 *)(lVar15 + 0x28);
        puVar11 = (undefined1 *)(lVar5 + 0x28);
        do {
          uVar13 = *(undefined8 *)(puVar8 + -0x10);
          uVar17 = uVar17 - 1;
          uVar7 = *(undefined4 *)(puVar8 + -8);
          *(undefined8 *)(puVar11 + -0x20) = *(undefined8 *)(puVar8 + -0x20);
          *(undefined8 *)(puVar11 + -0x10) = uVar13;
          *(undefined8 *)(puVar11 + -0x28) = *(undefined8 *)(puVar8 + -0x28);
          uVar13 = *(undefined8 *)(puVar8 + -0x18);
          *(undefined4 *)(puVar11 + -8) = uVar7;
          *(undefined8 *)(puVar11 + -0x18) = uVar13;
          *(undefined4 *)(puVar11 + -4) = *(undefined4 *)(puVar8 + -4);
          *puVar11 = *puVar8;
          puVar8 = puVar8 + 0x30;
          puVar11 = puVar11 + 0x30;
        } while (uVar17 != 0);
      }
      if (-1 < (int)uVar3) {
        (**(code **)(*(long *)puVar4 + 0x18))(puVar4,lVar15,((ulong)uVar3 & 0x3fffffff) * 0x30);
      }
      if (local_58 < 0xbffffffd0) {
        uVar7 = (undefined4)(local_58 / 0x30);
      }
      else {
        uVar7 = 0x3fffffff;
      }
      *(undefined4 *)(param_1 + 0x44) = uVar7;
      *(long *)(param_1 + 0x38) = lVar5;
    }
    uVar2 = *(uint *)(param_1 + 0x40);
    if ((int)uVar1 <= (int)*(uint *)(param_1 + 0x40)) {
      uVar2 = uVar1;
    }
    if ((lVar5 != lVar16) && (0 < (int)uVar2)) {
      uVar17 = (ulong)uVar2;
      puVar8 = (undefined1 *)(lVar16 + 0x28);
      puVar11 = (undefined1 *)(lVar5 + 0x28);
      do {
        uVar13 = *(undefined8 *)(puVar8 + -0x28);
        *(undefined8 *)(puVar11 + -0x20) = *(undefined8 *)(puVar8 + -0x20);
        *(undefined8 *)(puVar11 + -0x28) = uVar13;
        uVar13 = *(undefined8 *)(puVar8 + -0x18);
        *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
        *(undefined8 *)(puVar11 + -0x18) = uVar13;
        *(undefined4 *)(puVar11 + -8) = *(undefined4 *)(puVar8 + -8);
        *(undefined4 *)(puVar11 + -4) = *(undefined4 *)(puVar8 + -4);
        uVar17 = uVar17 - 1;
        *puVar11 = *puVar8;
        puVar8 = puVar8 + 0x30;
        puVar11 = puVar11 + 0x30;
      } while (uVar17 != 0);
      lVar5 = *(long *)(param_1 + 0x38);
    }
    iVar10 = uVar1 - uVar2;
    if (0 < iVar10) {
      puVar9 = (undefined8 *)(lVar16 + (long)(int)uVar2 * 0x30);
      puVar12 = (undefined8 *)(lVar5 + (long)(int)uVar2 * 0x30);
      do {
        uVar13 = puVar9[3];
        iVar10 = iVar10 + -1;
        uVar7 = *(undefined4 *)(puVar9 + 4);
        puVar12[1] = puVar9[1];
        puVar12[3] = uVar13;
        *puVar12 = *puVar9;
        uVar13 = puVar9[2];
        *(undefined4 *)(puVar12 + 4) = uVar7;
        puVar12[2] = uVar13;
        *(undefined4 *)((long)puVar12 + 0x24) = *(undefined4 *)((long)puVar9 + 0x24);
        *(undefined1 *)(puVar12 + 5) = *(undefined1 *)(puVar9 + 5);
        puVar12 = puVar12 + 6;
        puVar9 = puVar9 + 6;
      } while (iVar10 != 0);
    }
    *(uint *)(param_1 + 0x40) = uVar1;
  }
  uVar13 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_2 + 0x56);
  *(undefined8 *)(param_1 + 0x50) = uVar13;
  return param_1;
}


