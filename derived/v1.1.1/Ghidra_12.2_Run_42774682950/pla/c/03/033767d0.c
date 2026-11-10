/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033767d0; name: FUN_033767d0
 */


long FUN_033767d0(int *param_1,byte *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  byte *local_1d0;
  undefined1 local_1c8 [16];
  long local_1b8 [42];
  byte *local_68;
  undefined1 local_60 [16];
  byte *local_48;
  
  if ((param_2 != (byte *)0x0) && (-1 < *param_1)) {
    local_48 = param_2;
    if ((*(char *)((long)param_1 + 6) != '\0') ||
       (uVar2 = FUN_032e2598(param_2), (uVar2 >> 9 & 1) == 0)) {
      local_1b8[0] = 0;
      uVar2 = FUN_03376a64(param_1 + 6,&local_48,local_1b8);
      lVar7 = *(long *)(*(long *)(param_1 + 6) + ((long)((ulong)uVar2 << 0x20) >> 0x1c) + 8);
      if (lVar7 != 0) {
        return lVar7;
      }
      lVar7 = (long)(int)uVar2;
      uVar3 = FUN_032f04e0(param_2);
      if ((uVar3 & 1) != 0) {
        lVar4 = FUN_033767d0(param_1,&DAT_0435a690,param_3);
        *(long *)(*(long *)(param_1 + 6) + lVar7 * 0x10 + 8) = lVar4;
        return lVar4;
      }
      if (((*param_2 >> 3 & 1) == 0) ||
         (plVar5 = (long *)FUN_032e2008(param_2,8), plVar5 == (long *)0x0)) {
        local_1b8[0] = 0;
      }
      else {
        local_1b8[0] = *plVar5;
        if (local_1b8[0] != 0) {
          lVar4 = FUN_03377628(param_1 + 0xe,local_1b8);
          if ((lVar4 != 0) &&
             (lVar4 = *(long *)(*(long *)(param_1 + 0xe) + (long)*(int *)(lVar4 + 4) * 0x10 + 8),
             lVar4 != 0)) {
            *(long *)(*(long *)(param_1 + 6) + lVar7 * 0x10 + 8) = lVar4;
            return lVar4;
          }
        }
      }
      lVar4 = FUN_03376b04(param_1,param_2);
      *(long *)(*(long *)(param_1 + 6) + lVar7 * 0x10 + 8) = lVar4;
      FUN_03376e3c(param_1,lVar4,param_2,param_3);
      iVar6 = (int)param_3[1];
      iVar1 = iVar6 + 1;
      lVar7 = *param_3;
      if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar6) {
        lVar7 = FUN_033778f8(PTR_PTR_0434a090,iVar1);
        iVar6 = (int)param_3[1];
        *param_3 = lVar7;
      }
      plVar5 = (long *)(lVar7 + (long)iVar6 * 0x10);
      *plVar5 = lVar4;
      plVar5[1] = (long)param_2;
      *(int *)(param_3 + 1) = iVar1;
      return lVar4;
    }
    if ((1 < DAT_04450680) || (uVar3 = FUN_03327170(), (uVar3 & 1) != 0)) {
      uVar3 = FUN_03327170();
      if ((uVar3 & 1) == 0) {
        FUN_03326994(local_1b8,&DAT_04450630,2);
        local_60 = FUN_032e2464(param_2);
        local_68 = param_2;
        lVar7 = FUN_03326338(local_1b8,"Cannot copy {}@{}, it is not retargetable",&DAT_0436e250,
                             local_60,&local_68);
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Builder/hkTypeCopier.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = 0x17b;
        FUN_033269dc(local_1b8);
      }
      else {
        FUN_03326a7c(local_1b8,&DAT_04450630,2);
        local_1c8 = FUN_032e2464(param_2);
        local_1d0 = param_2;
        lVar7 = FUN_03326338(local_1b8,"Cannot copy {}@{}, it is not retargetable",&DAT_0436e250,
                             local_1c8,&local_1d0);
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Builder/hkTypeCopier.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = 0x17b;
        FUN_03326adc(local_1b8);
      }
    }
    *param_1 = -0x7ffbfe00;
  }
  return 0;
}


