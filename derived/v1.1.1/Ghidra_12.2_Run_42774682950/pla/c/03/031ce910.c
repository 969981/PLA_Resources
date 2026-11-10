/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ce910; name: FUN_031ce910
 */


long FUN_031ce910(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  int *piVar11;
  uint *puVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar9 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar9) {
    uVar9 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar9) {
    param_2 = uVar9;
  }
  FUN_032bd100(param_2,0x30,*param_5,&local_90);
  uVar9 = *param_5;
  lVar7 = (**(code **)(*param_1 + 0x10))(param_1,local_90,&local_90);
  puVar6 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    lVar10 = 0;
    uVar14 = (ulong)param_4;
    do {
      puVar2 = (undefined4 *)(param_3 + lVar10);
      puVar3 = (undefined4 *)(lVar7 + lVar10);
      *puVar3 = *puVar2;
      puVar3[2] = puVar2[2];
      *(undefined8 *)(puVar3 + 4) = 0;
      *(undefined8 *)(puVar3 + 6) = 0x8000000000000000;
      if ((int)puVar2[7] < 0) {
        FUN_031cec70(puVar6,puVar2 + 4);
      }
      *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
      puVar3[6] = puVar2[6];
      puVar3[7] = puVar2[7];
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar2 + 8);
      lVar10 = lVar10 + 0x30;
      uVar14 = uVar14 - 1;
      puVar3[10] = puVar2[10];
      *(undefined **)(puVar2 + 8) = &DAT_03aad864;
      puVar2[10] = 0;
    } while (uVar14 != 0);
    uVar14 = 0;
    lVar10 = tpidr_el0;
    do {
      plVar13 = (long *)(param_3 + uVar14 * 0x30 + 0x20);
      lVar15 = *plVar13;
      if ((lVar15 != 0) && (*(int *)(lVar15 + 4) != -2)) {
        piVar11 = (int *)(param_3 + uVar14 * 0x30 + 0x28);
        uVar1 = (long)*piVar11 + 1;
        lVar16 = *(long *)(lVar10 + 0x38d490);
        if (lVar16 == 0) {
          lVar16 = FUN_0333d16c(0,1);
          *(long *)(lVar10 + 0x38d490) = lVar16;
        }
        plVar8 = *(long **)(*(long *)(lVar16 + 8) + 0x58);
        local_88 = (undefined4)uVar1;
        uStack_84 = 8;
        if ((uVar1 & 0x1ffffffff0000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &uStack_84;
          FUN_03320b50(0x39ec3d88,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x61,"Memory allocation request overflow {}*{}",&local_80);
        }
        (**(code **)(*plVar8 + 0x18))
                  (plVar8,lVar15,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | uVar1 * 8 & 0xfffffff8)
        ;
        *plVar13 = (long)&DAT_03aad864;
        *piVar11 = 0;
      }
      lVar15 = param_3 + uVar14 * 0x30;
      piVar11 = (int *)(lVar15 + 0x18);
      iVar5 = *piVar11;
      plVar13 = (long *)(lVar15 + 0x10);
      lVar15 = *plVar13;
      if (iVar5 != 0) {
        lVar16 = (long)iVar5 * 0x68;
        do {
          FUN_031cd728(lVar15 + -0x60 + lVar16);
          lVar16 = lVar16 + -0x68;
        } while (lVar16 != 0);
      }
      *piVar11 = 0;
      puVar12 = (uint *)(param_3 + uVar14 * 0x30 + 0x1c);
      uVar4 = *puVar12;
      if ((-1 < (int)uVar4) && (*plVar13 != 0)) {
        (**(code **)(*(long *)puVar6 + 0x18))(puVar6,*plVar13,((ulong)uVar4 & 0x3fffffff) * 0x68);
      }
      uVar14 = uVar14 + 1;
      *plVar13 = 0;
      *puVar12 = 0x80000000;
    } while (uVar14 != param_4);
  }
  if (-1 < (int)uVar9) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar9 & 0x3fffffff) * 0x30);
  }
  uVar9 = 0x3fffffff;
  if (local_90 < 0xbffffffd0) {
    uVar9 = (uint)(local_90 / 0x30);
  }
  *param_5 = uVar9;
  return lVar7;
}


