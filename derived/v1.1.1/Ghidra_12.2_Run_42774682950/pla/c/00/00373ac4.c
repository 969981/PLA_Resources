/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00373ac4; name: FUN_00373ac4
 */


void FUN_00373ac4(long param_1,undefined8 param_2,undefined8 param_3,undefined ***param_4,
                 long *param_5)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined ****ppppuVar11;
  long *plVar12;
  undefined ****ppppuVar13;
  long *plVar14;
  undefined ***pppuVar15;
  long *plVar16;
  undefined8 local_f8;
  undefined ****local_e0;
  undefined ****local_d8;
  undefined8 uStack_d0;
  undefined ***local_c8;
  undefined ****ppppuStack_c0;
  undefined ***local_88;
  undefined *puStack_80;
  undefined ***local_78;
  undefined **local_70;
  undefined ****local_68;
  
  if ((*(char *)(param_1 + 6) != '\0') && (*(int *)((long)param_4 + 0x3c) == 3)) {
    ppuVar8 = param_4[6];
    if (ppuVar8 != (undefined **)0x0) {
      local_70 = (undefined **)PTR_LAB_04373a98;
      local_78 = param_4;
      if (*ppuVar8 != (undefined *)0xffffffffffffffff) {
        local_c8 = &local_70;
        ppppuStack_c0 = &local_78;
        local_e0 = &local_c8;
        std::__call_once((ulong *)ppuVar8,&local_e0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
    }
    puVar5 = PTR_DAT_04373ab0;
    iVar3 = *(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_4 + 7) * 4);
    if (iVar3 != 9) {
      ppuVar8 = param_4[6];
      if (ppuVar8 != (undefined **)0x0) {
        local_70 = (undefined **)PTR_LAB_04373a98;
        local_78 = param_4;
        if (*ppuVar8 != (undefined *)0xffffffffffffffff) {
          local_c8 = &local_70;
          ppppuStack_c0 = &local_78;
          local_e0 = &local_c8;
          std::__call_once((ulong *)ppuVar8,&local_e0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
        iVar3 = *(int *)(puVar5 + (ulong)*(uint *)(param_4 + 7) * 4);
      }
      if (iVar3 != 10) {
        FUN_003754c4(param_1,param_2,param_3,param_4,param_5);
        return;
      }
    }
  }
  if (*(int *)((long)param_4 + 0x3c) == 3) {
    uVar6 = FUN_00386cec();
  }
  else {
    uVar9 = FUN_00386684(param_3,param_2,param_4);
    if (((uVar9 & 1) == 0) && (param_4[10][4][0x4b] == '\0')) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
  }
  FUN_003800dc(&local_c8);
  local_d8 = (undefined ****)0x0;
  uStack_d0 = 0;
  local_e0 = (undefined ****)0x0;
  ppuVar8 = param_4[6];
  if (ppuVar8 != (undefined **)0x0) {
    puStack_80 = PTR_LAB_04373a98;
    local_88 = param_4;
    if (*ppuVar8 != (undefined *)0xffffffffffffffff) {
      local_70 = &puStack_80;
      local_68 = &local_88;
      local_78 = &local_70;
                    /* try { // try from 00373c3c to 00373c7b has its CatchHandler @ 00373fd0 */
      std::__call_once((ulong *)ppuVar8,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if ((*(int *)(param_4 + 7) == 0xb) && (uVar9 = FUN_00344344(param_4), (uVar9 & 1) != 0)) {
    uVar7 = FUN_00374a08(param_2,param_3,param_4,&local_c8,&local_e0);
    local_f8 = CONCAT44(1,uVar7);
    bVar4 = true;
  }
  else {
    local_f8 = 0;
    bVar4 = false;
  }
  if (0 < (int)uVar6) {
    plVar1 = (long *)(param_1 + 0x18);
    uVar9 = 0;
    plVar2 = (long *)(param_1 + 0x28);
    do {
      uVar7 = (undefined4)uVar9;
      if (*(int *)((long)param_4 + 0x3c) != 3) {
        uVar7 = 0xffffffff;
      }
      FUN_003755dc(param_1,param_2,uVar7,uVar6,param_3,param_4,param_5);
      ppuVar8 = param_4[6];
      if (ppuVar8 != (undefined **)0x0) {
        puStack_80 = PTR_LAB_04373a98;
        local_88 = param_4;
        if (*ppuVar8 != (undefined *)0xffffffffffffffff) {
          local_68 = &local_88;
          local_70 = &puStack_80;
          local_78 = &local_70;
          std::__call_once((ulong *)ppuVar8,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
      }
      if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_4 + 7) * 4) == 10) {
        plVar14 = (long *)*plVar2;
        plVar16 = plVar1;
        if (plVar14 != (long *)0x0) {
          plVar12 = plVar2;
          do {
            if ((undefined ***)plVar14[4] >= param_4) {
              plVar12 = plVar14;
            }
            plVar14 = (long *)plVar14[(undefined ***)plVar14[4] < param_4];
          } while (plVar14 != (long *)0x0);
          if ((plVar12 != plVar2) && ((undefined ***)plVar12[4] <= param_4)) {
            plVar16 = plVar12 + 5;
          }
        }
        plVar16 = (long *)*plVar16;
        if (*(int *)((long)param_4 + 0x3c) == 3) {
          if (!bVar4) {
            pppuVar15 = (undefined ***)FUN_0038cfc0(param_3,param_2,param_4,uVar9 & 0xffffffff);
          }
          else {
            pppuVar15 = local_e0[uVar9];
          }
        }
        else {
                    /* try { // try from 00373e34 to 00373f03 has its CatchHandler @ 00373ff0 */
          pppuVar15 = (undefined ***)FUN_0038c150(param_3,param_2,param_4,0);
        }
        (**(code **)(*plVar16 + 0x70))
                  (plVar16,pppuVar15,uVar7,uVar6,*(undefined1 *)(param_1 + 4),param_5);
        (**(code **)(*param_5 + 0x10))(param_5);
        uVar10 = (**(code **)(*plVar16 + 0x78))
                           (plVar16,pppuVar15,uVar7,uVar6,*(undefined1 *)(param_1 + 4),param_5);
        if ((uVar10 & 1) == 0) {
          FUN_00372540(param_1,pppuVar15,param_5);
        }
        (**(code **)(*param_5 + 0x18))(param_5);
        (**(code **)(*plVar16 + 0x80))
                  (plVar16,pppuVar15,uVar7,uVar6,*(undefined1 *)(param_1 + 4),param_5);
      }
      else {
        (**(code **)(*param_5 + 0x28))(param_5,&DAT_039403eb,2);
        FUN_003741b0(param_1,param_2,param_3,param_4,uVar7,param_5);
        if (*(char *)(param_1 + 4) == '\0') {
                    /* try { // try from 00373cb8 to 00373e2f has its CatchHandler @ 00373fe0 */
          (**(code **)(*param_5 + 0x28))(param_5,&DAT_0396725e,1);
        }
        else {
          (**(code **)(*param_5 + 0x28))(param_5,&DAT_038bdc00,1);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar6);
  }
  puVar5 = PTR_LAB_04373088;
  ppppuVar11 = local_e0;
  if (((local_f8 & 1) != 0) && (local_d8 != local_e0)) {
    uVar9 = 0;
    pppuVar15 = *local_e0;
    ppppuVar13 = local_d8;
    while( true ) {
      if (pppuVar15 != (undefined ***)0x0) {
        (*(code *)**pppuVar15)(pppuVar15);
        FUN_002e2ea0(puVar5,pppuVar15);
        ppppuVar11 = local_e0;
        ppppuVar13 = local_d8;
      }
      uVar9 = uVar9 + 1;
      if ((ulong)((long)ppppuVar13 - (long)ppppuVar11 >> 3) <= uVar9) break;
      pppuVar15 = ppppuVar11[uVar9];
    }
  }
  if (ppppuVar11 != (undefined ****)0x0) {
    local_d8 = ppppuVar11;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  FUN_0038013c(&local_c8);
  return;
}


