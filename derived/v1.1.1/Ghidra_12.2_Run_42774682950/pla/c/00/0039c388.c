/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039c388; name: FUN_0039c388
 */


void FUN_0039c388(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  undefined ***local_108;
  long *local_100;
  byte local_f8;
  undefined8 local_e8;
  int local_e0;
  undefined **local_c8;
  long *local_c0;
  byte local_b8;
  undefined8 local_a8;
  int local_a0;
  undefined1 auStack_98 [16];
  long *local_88;
  long *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined *puStack_68;
  
  uVar5 = FUN_0039bcc0();
  plVar6 = (long *)FUN_00380d6c(uVar5,param_1);
  if (*plVar6 != plVar6[1]) {
    FUN_0030cac0();
  }
  local_80 = (long *)0x0;
  uStack_78 = 0;
  local_88 = (long *)0x0;
                    /* try { // try from 0039c3d0 to 0039c3df has its CatchHandler @ 0039c754 */
  FUN_00387324(uVar5,param_1,&local_88);
  puVar3 = PTR_DAT_04373ab0;
  puVar2 = PTR_LAB_04373aa0;
  puVar1 = PTR_LAB_04373a98;
  plVar6 = local_80;
  if (local_80 == local_88) {
LAB_0039c6e8:
    if (plVar6 != (long *)0x0) {
      local_80 = plVar6;
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    return;
  }
  uVar13 = 0;
  lVar11 = *local_88;
  puVar7 = *(ulong **)(lVar11 + 0x30);
  do {
    if ((puVar7 != (ulong *)0x0) &&
       (puStack_68 = puVar1, local_70 = lVar11, *puVar7 != 0xffffffffffffffff)) {
      local_c0 = &local_70;
      local_c8 = &puStack_68;
                    /* try { // try from 0039c47c to 0039c52f has its CatchHandler @ 0039c760 */
      local_108 = &local_c8;
      std::__call_once(puVar7,&local_108,(_func_void_void_ptr *)puVar2);
    }
    uVar10 = *(uint *)(lVar11 + 0x38);
    if (*(int *)(puVar3 + (ulong)uVar10 * 4) == 10) {
      puVar7 = *(ulong **)(lVar11 + 0x30);
      if (puVar7 != (ulong *)0x0) {
        puStack_68 = puVar1;
        local_70 = lVar11;
        if (*puVar7 != 0xffffffffffffffff) {
          local_c0 = &local_70;
          local_c8 = &puStack_68;
          local_108 = &local_c8;
          std::__call_once(puVar7,&local_108,(_func_void_void_ptr *)puVar2);
        }
        uVar10 = *(uint *)(lVar11 + 0x38);
      }
      if ((uVar10 == 0xb) && (uVar8 = FUN_00344344(lVar11), (uVar8 & 1) != 0)) {
        lVar9 = FUN_00342dac(lVar11);
        lVar9 = *(long *)(lVar9 + 0x28);
        puVar7 = *(ulong **)(lVar9 + 200);
        if (puVar7 != (ulong *)0x0) {
          local_70 = lVar9 + 0x98;
          puStack_68 = puVar1;
          if (*puVar7 != 0xffffffffffffffff) {
            local_c0 = &local_70;
            local_c8 = &puStack_68;
            local_108 = &local_c8;
            std::__call_once(puVar7,&local_108,(_func_void_void_ptr *)puVar2);
          }
        }
        if (*(int *)(puVar3 + (ulong)*(uint *)(lVar9 + 0xd0) * 4) == 10) {
                    /* try { // try from 0039c540 to 0039c557 has its CatchHandler @ 0039c758 */
          plVar6 = (long *)FUN_0038e870(uVar5,param_1,lVar11);
          uVar8 = FUN_00395ca8();
          if ((uVar8 & 1) != 0) {
                    /* try { // try from 0039c55c to 0039c56b has its CatchHandler @ 0039c74c */
            FUN_00319b40(&local_c8,param_1,lVar11);
                    /* try { // try from 0039c56c to 0039c57b has its CatchHandler @ 0039c744 */
            FUN_00319b40(&local_108,param_1,lVar11);
                    /* try { // try from 0039c584 to 0039c5a3 has its CatchHandler @ 0039c750 */
            (**(code **)(*plVar6 + 0x30))(plVar6,&local_c8);
            (**(code **)(*plVar6 + 0x38))(plVar6,&local_108);
                    /* try { // try from 0039c5b0 to 0039c5ef has its CatchHandler @ 0039c764 */
            while (uVar8 = (**(code **)(*local_c0 + 0x28))(local_c0,&local_c8,&local_108),
                  (uVar8 & 1) == 0) {
              FUN_00395cd0(local_c0);
              plVar6 = (long *)FUN_00397508(auStack_98);
              (**(code **)(*plVar6 + 0x80))();
              (**(code **)(*local_c0 + 0x90))(local_c0,&local_c8);
            }
                    /* try { // try from 0039c680 to 0039c687 has its CatchHandler @ 0039c730 */
            (**(code **)(*local_100 + 0x80))(local_100,&local_108);
            if ((local_e0 == 9) && ((local_f8 & 1) != 0)) {
              FUN_002e2ea0(PTR_LAB_04373088,local_e8);
            }
                    /* try { // try from 0039c6b8 to 0039c6bf has its CatchHandler @ 0039c71c */
            (**(code **)(*local_c0 + 0x80))(local_c0,&local_c8);
            if ((local_a0 == 9) && ((local_b8 & 1) != 0)) {
              FUN_002e2ea0(PTR_LAB_04373088,local_a8);
            }
          }
          goto LAB_0039c438;
        }
      }
      if (*(int *)(lVar11 + 0x3c) == 3) {
                    /* try { // try from 0039c600 to 0039c60f has its CatchHandler @ 0039c75c */
        iVar4 = FUN_00386cec(uVar5,param_1,lVar11);
        if (0 < iVar4) {
          iVar12 = 0;
          do {
                    /* try { // try from 0039c620 to 0039c63f has its CatchHandler @ 0039c7ec */
            plVar6 = (long *)FUN_0038d2ac(uVar5,param_1,lVar11,iVar12);
            (**(code **)(*plVar6 + 0x80))();
            iVar12 = iVar12 + 1;
          } while (iVar4 != iVar12);
        }
      }
      else {
                    /* try { // try from 0039c650 to 0039c66f has its CatchHandler @ 0039c760 */
        plVar6 = (long *)FUN_0038c3b8(uVar5,param_1,lVar11,0);
        (**(code **)(*plVar6 + 0x80))();
      }
    }
LAB_0039c438:
    uVar13 = uVar13 + 1;
    plVar6 = local_88;
    if ((ulong)((long)local_80 - (long)local_88 >> 3) <= uVar13) goto LAB_0039c6e8;
    lVar11 = local_88[uVar13];
    puVar7 = *(ulong **)(lVar11 + 0x30);
  } while( true );
}


