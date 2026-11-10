/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337d118; name: FUN_0337d118
 */


void FUN_0337d118(undefined4 *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  undefined *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  undefined8 local_1a0;
  undefined *puStack_198;
  undefined4 *local_190;
  undefined4 *puStack_188;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar13 = PTR_PTR_0434a080;
  if ((param_3 & 1) != 0) {
    uVar10 = param_2[1] - *param_2;
    if ((uVar10 & 7) != 0) {
      if (DAT_04450900 == '\0') {
        if (DAT_04350668 == '\0') goto LAB_0337d308;
      }
      else if (DAT_04350668 == '\0') {
        FUN_03326994(&local_1a0,&DAT_044508b0,1);
        lVar7 = FUN_03326338(&local_1a0,"NATIVE_POINTERS section has the wrong size",
                             PTR_DAT_04372528);
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = 0x99a;
        *(undefined4 *)(lVar7 + 0x1c) = 0x574328eb;
LAB_0337d300:
        FUN_033269dc(&local_1a0);
        goto LAB_0337d308;
      }
      FUN_03326a7c(&local_1a0,&DAT_044508b0,1);
      lVar7 = FUN_03326338(&local_1a0,"NATIVE_POINTERS section has the wrong size",PTR_DAT_04372528)
      ;
      *(char **)(lVar7 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar7 + 0x40) = 0x99a;
      *(undefined4 *)(lVar7 + 0x1c) = 0x574328eb;
LAB_0337d408:
      FUN_03326adc(&local_1a0);
LAB_0337d308:
      *param_1 = 0x80040200;
      return;
    }
    uVar12 = uVar10 >> 3;
    uVar11 = (uint)uVar12;
    if (0 < (int)uVar11) {
      uVar10 = uVar10 >> 3 & 0xffffffff;
      plVar3 = (long *)param_2[2];
      do {
        if (*plVar3 != 0) {
          if (DAT_04450900 == '\0') {
            if (DAT_04350668 == '\0') goto LAB_0337d308;
          }
          else if (DAT_04350668 == '\0') {
            FUN_03326994(&local_1a0,&DAT_044508b0,1);
            lVar7 = FUN_03326338(&local_1a0,"Buffer already inplace loaded",PTR_DAT_04372528);
            *(char **)(lVar7 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
            ;
            *(undefined8 *)(lVar7 + 0x40) = 0x99f;
            goto LAB_0337d300;
          }
          FUN_03326a7c(&local_1a0,&DAT_044508b0,1);
          lVar7 = FUN_03326338(&local_1a0,"Buffer already inplace loaded",PTR_DAT_04372528);
          *(char **)(lVar7 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x40) = 0x99f;
          goto LAB_0337d408;
        }
        uVar10 = uVar10 - 1;
        plVar3 = plVar3 + 1;
      } while (uVar10 != 0);
    }
    if ((param_3 >> 8 & 1) == 0) {
      *(long **)(param_1 + 4) = (long *)param_2[2];
      puVar13 = PTR_PTR_0434a080;
      param_1[6] = uVar11;
      param_1[7] = uVar11 | 0x80000000;
    }
    else {
      puVar14 = param_1 + 7;
      uVar6 = *puVar14;
      if ((int)(uVar6 & 0x3fffffff) < (int)uVar11) {
        uVar15 = *(undefined8 *)(param_1 + 4);
        uVar2 = param_1[6];
        if (0x3fffffff < (int)uVar11) {
          FUN_032bd0a8(uVar12 & 0xffffffff);
          uVar6 = *puVar14;
        }
        uVar6 = (uVar6 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar6) {
          uVar6 = 0x3fffffff;
        }
        uVar1 = uVar11;
        if ((int)uVar11 <= (int)uVar6) {
          uVar1 = uVar6;
        }
        uVar15 = FUN_032bd1d4(puVar13,uVar1,8,uVar15,uVar2,puVar14);
        *(undefined8 *)(param_1 + 4) = uVar15;
      }
      if (((int)param_1[6] < (int)uVar11) || ((int)uVar11 < (int)param_1[6])) {
        param_1[6] = uVar11;
      }
    }
    uVar6 = param_1[0x79];
    if ((int)(uVar6 & 0x3fffffff) < (int)uVar11) {
      uVar15 = *(undefined8 *)(param_1 + 0x76);
      uVar2 = param_1[0x78];
      if (0x3fffffff < (int)uVar11) {
        FUN_032bd0a8(uVar12 & 0xffffffff);
        uVar6 = param_1[0x79];
      }
      uVar6 = (uVar6 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar6) {
        uVar6 = 0x3fffffff;
      }
      uVar1 = uVar11;
      if ((int)uVar11 <= (int)uVar6) {
        uVar1 = uVar6;
      }
      uVar15 = FUN_032bd1d4(puVar13,uVar1,1,uVar15,uVar2,param_1 + 0x79);
      *(undefined8 *)(param_1 + 0x76) = uVar15;
    }
    uVar6 = param_1[0x78];
    if ((int)uVar6 < (int)uVar11) {
      param_1[0x78] = uVar11;
      memset((void *)(*(long *)(param_1 + 0x76) + (long)(int)uVar6),0,(ulong)(~uVar6 + uVar11) + 1);
      lVar7 = *(long *)(param_1 + 0x46);
      goto joined_r0x0337d3b4;
    }
    if ((int)uVar11 < (int)uVar6) {
      param_1[0x78] = uVar11;
      lVar7 = *(long *)(param_1 + 0x46);
      goto joined_r0x0337d3b4;
    }
  }
  lVar7 = *(long *)(param_1 + 0x46);
joined_r0x0337d3b4:
  if (lVar7 == 0) {
    lVar7 = tpidr_el0;
    lVar8 = *(long *)(lVar7 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar8;
    }
    plVar3 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x20,0);
    *puVar4 = 0;
    puVar4[1] = 0x8000000000000000;
    puVar4[2] = &DAT_03aad864;
    puVar4[3] = 0;
    plVar3 = *(long **)(param_1 + 0x46);
    *(undefined8 **)(param_1 + 0x46) = puVar4;
    if (plVar3 != (long *)0x0) {
      lVar8 = plVar3[2];
      if ((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) {
        uVar10 = (long)(int)plVar3[3] + 1;
        lVar9 = *(long *)(lVar7 + 0x38d490);
        if (lVar9 == 0) {
          lVar9 = FUN_0333d16c(0,1);
          *(long *)(lVar7 + 0x38d490) = lVar9;
        }
        plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
        local_48 = (undefined4)uVar10;
        uStack_44 = 8;
        if ((uVar10 & 0x1ffffffff0000000) != 0) {
          local_1a0 = 2;
          puStack_198 = &DAT_0411b3a0;
          local_190 = &uStack_44;
          puStack_188 = &local_48;
          FUN_03320b50(0x39ec3d88,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x61,"Memory allocation request overflow {}*{}",&local_1a0);
        }
        (**(code **)(*plVar5 + 0x18))
                  (plVar5,lVar8,-(uVar10 >> 0x1c & 1) & 0xffffffff00000000 | uVar10 * 8 & 0xfffffff8
                  );
        plVar3[2] = (long)&DAT_03aad864;
        *(undefined4 *)(plVar3 + 3) = 0;
      }
      *(undefined4 *)(plVar3 + 1) = 0;
      if ((-1 < *(int *)((long)plVar3 + 0xc)) && (*plVar3 != 0)) {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                  (PTR_PTR_0434a080,*plVar3,*(int *)((long)plVar3 + 0xc) << 2);
      }
      *plVar3 = 0;
      *(undefined4 *)((long)plVar3 + 0xc) = 0x80000000;
      lVar8 = *(long *)(lVar7 + 0x38d490);
      if (lVar8 == 0) {
        lVar8 = FUN_0333d16c(0,1);
        *(long *)(lVar7 + 0x38d490) = lVar8;
      }
      plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x0337d230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5,plVar3,0x20);
      return;
    }
  }
  return;
}


