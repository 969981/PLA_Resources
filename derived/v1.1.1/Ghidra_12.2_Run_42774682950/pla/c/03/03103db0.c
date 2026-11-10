/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03103db0; name: FUN_03103db0
 */


void FUN_03103db0(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined4 *puVar10;
  int *piVar11;
  long lVar12;
  uint uVar13;
  long local_90;
  uint local_88;
  uint local_84;
  uint local_6c;
  
  FUN_0303d8d0(&local_90,param_1 + 8);
  puVar3 = PTR_PTR_0434a080;
  if (local_84 != local_6c) {
    uVar13 = local_84;
    do {
      lVar6 = *(long *)(local_90 + (ulong)uVar13 * 0x10);
      lVar9 = *param_3;
      iVar8 = (int)param_3[1];
      iVar1 = iVar8 + 1;
      if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar8) {
        lVar9 = FUN_031047d0(puVar3,iVar1,lVar9,iVar8,(long)param_3 + 0xc);
        iVar8 = (int)param_3[1];
        *param_3 = lVar9;
      }
      *(int *)(param_3 + 1) = iVar1;
      lVar12 = lVar9 + (long)iVar8 * 0x18;
      *(undefined8 *)(lVar12 + 8) = 0;
      *(undefined8 *)(lVar12 + 0x10) = 0x8000000000000000;
      FUN_030fea18(lVar6,param_2,(undefined8 *)(lVar12 + 8));
      if (*(int *)(lVar12 + 0x10) == 0) {
        lVar9 = (long)(int)param_3[1] + -1;
        lVar6 = *param_3 + lVar9 * 0x18;
        iVar1 = *(int *)(lVar6 + 0x14);
        *(undefined4 *)(lVar6 + 0x10) = 0;
        if ((-1 < iVar1) && (lVar12 = *(long *)(lVar6 + 8), lVar12 != 0)) {
          (**(code **)(*(long *)puVar3 + 0x18))(puVar3,lVar12,iVar1 << 2);
        }
        *(long *)(lVar6 + 8) = 0;
        *(int *)(lVar6 + 0x14) = -0x80000000;
        lVar6 = (long)(int)param_3[1] + -1;
        *(int *)(param_3 + 1) = (int)lVar6;
        if ((int)lVar6 != (int)lVar9) {
          lVar12 = *param_3;
          puVar10 = (undefined4 *)(lVar12 + lVar6 * 0x18);
          puVar5 = (undefined4 *)(lVar12 + lVar9 * 0x18);
          *puVar5 = *puVar10;
          *(undefined8 *)(puVar5 + 2) = 0;
          *(undefined8 *)(puVar5 + 4) = 0x8000000000000000;
          piVar11 = puVar10 + 5;
          puVar7 = (undefined8 *)(puVar10 + 2);
          if (*piVar11 < 0) {
            FUN_032bcf84(puVar3,puVar7,4);
          }
          *(undefined8 *)(puVar5 + 2) = *puVar7;
          puVar5[4] = *(undefined4 *)(lVar12 + lVar6 * 0x18 + 0x10);
          puVar5[5] = *piVar11;
          *puVar7 = 0;
          *(undefined8 *)(puVar10 + 4) = 0;
          *piVar11 = -0x80000000;
        }
      }
      else {
        *(undefined4 *)(lVar9 + (long)iVar8 * 0x18) = *(undefined4 *)(lVar6 + 0x158);
      }
      puVar4 = (uint *)(local_90 + 8 + (ulong)(uVar13 + 1) * 0x10);
      do {
        uVar13 = uVar13 + 1;
        if (local_88 <= uVar13) {
          uVar13 = 0xffffffff;
          break;
        }
        uVar2 = *puVar4;
        puVar4 = puVar4 + 4;
      } while ((~uVar2 & 0xffffff) == 0);
    } while (uVar13 != local_6c);
  }
  return;
}


