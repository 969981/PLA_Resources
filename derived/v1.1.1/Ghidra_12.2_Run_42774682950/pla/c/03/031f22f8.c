/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f22f8; name: FUN_031f22f8
 */


undefined8 FUN_031f22f8(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  int local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  
  FUN_031f2da8(param_2,(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x40),&local_70,
               local_78);
  if (local_78[0] == -1) {
    uVar15 = *(undefined8 *)(param_1 + 0x28);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    iVar7 = (int)param_4[1];
    iVar11 = iVar7 + 1;
    lVar14 = *param_4;
    if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar7) {
      lVar14 = FUN_031f35d8(PTR_PTR_0434a080,iVar11);
      *param_4 = lVar14;
      iVar7 = (int)param_4[1];
    }
    puVar10 = (undefined4 *)(lVar14 + (long)iVar7 * 0x50);
    *(int *)(param_4 + 1) = iVar11;
    *puVar10 = 1;
    *(undefined8 *)(puVar10 + 8) = 0;
    *(undefined8 *)(puVar10 + 10) = 0;
    *(undefined8 *)(puVar10 + 0xf) = 0;
    *(undefined8 *)(puVar10 + 0xc) = 0xffffffffffffffff;
  }
  else {
    *(int *)(param_3 + 0x40) = local_78[0];
    *(undefined4 *)(param_3 + 0x50) = 0;
    *(undefined4 *)(param_3 + 0x38) = 0;
    *(undefined8 *)(param_3 + 0x28) = uStack_68;
    *(undefined8 *)(param_3 + 0x20) = local_70;
    puVar5 = PTR_PTR_0434a080;
    uVar12 = local_70;
    uVar15 = uStack_68;
    if (*(int *)(param_1 + 0x38) != 0) {
      lVar14 = *(long *)(param_1 + 0x30);
      lVar13 = (long)*(int *)(param_1 + 0x38) << 4;
      do {
        FUN_031f2da8(param_2,lVar14,*(undefined8 *)(param_1 + 0x40),&local_90,local_98);
        iVar11 = local_98[0];
        if (local_98[0] != -1) {
          iVar8 = *(int *)(param_3 + 0x50);
          lVar6 = *(long *)(param_3 + 0x48);
          iVar7 = iVar8 + 1;
          if ((int)(*(uint *)(param_3 + 0x54) & 0x3fffffff) <= iVar8) {
            lVar6 = FUN_0315ac2c(puVar5,iVar7,lVar6,iVar8,param_3 + 0x54);
            iVar8 = *(int *)(param_3 + 0x50);
            *(long *)(param_3 + 0x48) = lVar6;
          }
          *(int *)(lVar6 + (long)iVar8 * 4) = iVar11;
          *(int *)(param_3 + 0x50) = iVar7;
          iVar11 = *(int *)(param_3 + 0x38);
          uVar9 = *(uint *)(param_3 + 0x3c);
          uVar2 = iVar11 + 1;
          if (iVar11 < (int)(uVar9 & 0x3fffffff)) {
            lVar6 = *(long *)(param_3 + 0x30);
          }
          else {
            uVar12 = *(undefined8 *)(param_3 + 0x30);
            if (0x3ffffffe < iVar11) {
              FUN_032bd0a8(uVar2);
              uVar9 = *(uint *)(param_3 + 0x3c);
            }
            uVar9 = (uVar9 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar9) {
              uVar9 = 0x3fffffff;
            }
            uVar3 = uVar2;
            if ((int)uVar2 <= (int)uVar9) {
              uVar3 = uVar9;
            }
            lVar6 = FUN_032bd1d4(puVar5,uVar3,0x10,uVar12,iVar11,(uint *)(param_3 + 0x3c));
            iVar11 = *(int *)(param_3 + 0x38);
            *(long *)(param_3 + 0x30) = lVar6;
          }
          puVar1 = (undefined8 *)(lVar6 + (long)iVar11 * 0x10);
          puVar1[1] = local_88;
          *puVar1 = local_90;
          *(uint *)(param_3 + 0x38) = uVar2;
        }
        lVar14 = lVar14 + 0x10;
        lVar13 = lVar13 + -0x10;
      } while (lVar13 != 0);
      if (*(int *)(param_3 + 0x50) != 0) {
        iVar11 = *(int *)(*(long *)(param_1 + 0x40) + 0x30);
        if (iVar11 < 1) {
          iVar11 = 10000;
        }
        *(int *)(param_3 + 0x58) = iVar11;
        *(undefined8 *)(param_3 + 0x5c) = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x44);
        lVar14 = *(long *)(param_1 + 0x40);
        uVar12 = *(undefined8 *)(lVar14 + 0x50);
        *(undefined8 *)(param_3 + 0x78) = *(undefined8 *)(lVar14 + 0x58);
        *(undefined8 *)(param_3 + 0x70) = uVar12;
        uVar12 = *(undefined8 *)(lVar14 + 0x78);
        uVar4 = *(undefined4 *)(lVar14 + 0x80);
        *(undefined8 *)(param_3 + 0x88) = *(undefined8 *)(lVar14 + 0x68);
        *(undefined8 *)(param_3 + 0x98) = uVar12;
        *(undefined8 *)(param_3 + 0x80) = *(undefined8 *)(lVar14 + 0x60);
        uVar12 = *(undefined8 *)(lVar14 + 0x70);
        *(undefined4 *)(param_3 + 0xa0) = uVar4;
        *(undefined8 *)(param_3 + 0x90) = uVar12;
        uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20);
        *(undefined8 *)(param_3 + 0x78) = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x28);
        *(undefined8 *)(param_3 + 0x70) = uVar12;
        return 1;
      }
      uVar12 = local_70;
      uVar15 = uStack_68;
    }
    iVar7 = (int)param_4[1];
    iVar11 = iVar7 + 1;
    lVar14 = *param_4;
    if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar7) {
      lVar14 = FUN_031f35d8(PTR_PTR_0434a080,iVar11);
      *param_4 = lVar14;
      iVar7 = (int)param_4[1];
    }
    puVar10 = (undefined4 *)(lVar14 + (long)iVar7 * 0x50);
    *(int *)(param_4 + 1) = iVar11;
    *puVar10 = 1;
    *(undefined8 *)(puVar10 + 8) = 0;
    *(undefined8 *)(puVar10 + 10) = 0;
    puVar10[0xc] = local_78[0];
    puVar10[0xd] = 0xffffffff;
    *(undefined8 *)(puVar10 + 0xf) = 0x100000000;
  }
  *(undefined8 *)(puVar10 + 6) = uVar15;
  *(undefined8 *)(puVar10 + 4) = uVar12;
  return 0;
}


