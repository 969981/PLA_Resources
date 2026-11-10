/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a04ec; name: FUN_002a04ec
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_002a04ec(long param_1)

{
  undefined *puVar1;
  undefined7 *puVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_280 [184];
  undefined8 local_1c8;
  byte local_1c0;
  undefined7 uStack_1bf;
  undefined8 local_1b0;
  long *plStack_1a8;
  byte local_1a0;
  undefined7 uStack_19f;
  undefined7 *local_190;
  long *plStack_188;
  undefined1 auStack_180 [16];
  byte *local_170;
  byte *local_168;
  byte *local_160;
  undefined *local_158;
  undefined1 auStack_148 [40];
  int local_120 [2];
  byte local_118;
  undefined7 uStack_117;
  undefined8 local_108;
  long *plStack_100;
  char local_f8;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined1 auStack_d0 [24];
  undefined *local_b8;
  undefined *local_a8;
  undefined *local_a0;
  long *******local_98;
  long *******local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  
  uVar8 = *(undefined8 *)(param_1 + 0xe8);
  puVar1 = PTR_DAT_04373168 + 0x10;
  local_a0 = PTR_DAT_04373170 + 0x10;
  local_98 = (long *******)&local_98;
  local_38 = 0;
  local_40 = (undefined **)0x0;
  local_a8 = puVar1;
  local_90 = local_98;
  (**(code **)(**(long **)(param_1 + 200) + 0x10))(*(long **)(param_1 + 200),&local_80);
  local_40 = &local_a0;
  thunk_FUN_00783af0(&local_a8);
  local_a8 = puVar1;
  FUN_00782f18(&local_a0);
  plVar3 = *(long **)(param_1 + 200);
  plVar4 = *(long **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  (**(code **)(*plVar3 + 0x30))(local_120);
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar4 + 1;
    do {
      lVar7 = *plVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
                    /* try { // try from 002a05b8 to 002a05c3 has its CatchHandler @ 002a0900 */
  FUN_002ae904(auStack_148,auStack_d0);
  if (local_120[0] != 0) {
    local_a0 = (undefined *)0x0;
    local_98 = (long *******)0x0;
    local_a8 = (undefined *)0x0;
    local_90 = (long *******)FUN_00612290();
    local_88 = 0;
    local_98 = (long *******)0x0;
    local_78 = 0;
    local_80 = 0;
    local_a8 = (undefined *)0x0;
    local_a0 = (undefined *)0x0;
    local_70 = (long *)FUN_00612290();
    local_68 = 0;
    local_78 = 0;
    local_58 = 0;
    local_60 = 0;
    local_88 = 0;
    local_80 = 0;
    local_50 = (long *)FUN_00612290();
    local_48 = 0;
    local_68 = 0;
    local_58 = 0;
    local_60 = 0;
    FUN_002a0a00(auStack_280,local_120,&local_a8);
    if ((local_68 & 1) != 0) {
      (**(code **)(*local_50 + 0x18))(local_50,local_58,local_68 & 0xfffffffffffffffe,1);
    }
    if ((local_88 & 1) != 0) {
      (**(code **)(*local_70 + 0x18))(local_70,local_78,local_88 & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_a8 & 1) != 0) {
      (*(code *)(*local_90)[3])(local_90,local_98,(ulong)local_a8 & 0xfffffffffffffffe,1);
    }
    goto LAB_002a07cc;
  }
  puVar1 = PTR_DAT_04373190;
  if (local_b8 != (undefined *)0x0) {
    puVar1 = local_b8;
  }
                    /* try { // try from 002a0660 to 002a0667 has its CatchHandler @ 002a08e0 */
  FUN_002b1e98(auStack_180,puVar1);
  if ((*local_170 & 1) == 0) {
    local_170 = local_170 + 1;
  }
  else {
    local_170 = *(byte **)(local_170 + 0x10);
  }
  FUN_006e8660(&local_1c0,local_170);
  puVar2 = &uStack_19f;
  if ((local_1a0 & 1) != 0) {
    puVar2 = local_190;
  }
  if ((*local_168 & 1) == 0) {
    local_168 = local_168 + 1;
    if ((*local_160 & 1) != 0) goto LAB_002a072c;
LAB_002a0744:
    local_160 = local_160 + 1;
  }
  else {
    local_168 = *(byte **)(local_168 + 0x10);
    if ((*local_160 & 1) == 0) goto LAB_002a0744;
LAB_002a072c:
    local_160 = *(byte **)(local_160 + 0x10);
  }
  puVar1 = PTR_DAT_04373198;
  if (local_158 != (undefined *)0x0) {
    puVar1 = local_158;
  }
  local_1c8 = *(undefined8 *)(puVar1 + 0x10);
  FUN_00295c88(&local_a8,puVar2,local_168,local_160,&local_1c8);
  FUN_002a0a00(auStack_280,local_120,&local_a8);
  if ((local_68 & 1) != 0) {
    (**(code **)(*local_50 + 0x18))(local_50,local_58,local_68 & 0xfffffffffffffffe,1);
  }
  if ((local_88 & 1) != 0) {
    (**(code **)(*local_70 + 0x18))(local_70,local_78,local_88 & 0xfffffffffffffffe,1);
  }
  if (((ulong)local_a8 & 1) != 0) {
    (*(code *)(*local_90)[3])(local_90,local_98,(ulong)local_a8 & 0xfffffffffffffffe,1);
  }
  if ((local_1a0 & 1) != 0) {
    (**(code **)(*plStack_188 + 0x18))
              (plStack_188,local_190,CONCAT71(uStack_19f,local_1a0) & 0xfffffffffffffffe,1);
  }
  if ((local_1c0 & 1) != 0) {
    (**(code **)(*plStack_1a8 + 0x18))
              (plStack_1a8,local_1b0,CONCAT71(uStack_1bf,local_1c0) & 0xfffffffffffffffe,1);
  }
  FUN_002b2034(auStack_180);
LAB_002a07cc:
  FUN_002aea10(auStack_148);
  FUN_002aea10(auStack_d0);
  if (local_f8 != '\0') {
    FUN_02767254(auStack_f0,local_e8);
  }
  if ((local_118 & 1) != 0) {
    (**(code **)(*plStack_100 + 0x18))
              (plStack_100,local_108,CONCAT71(uStack_117,local_118) & 0xfffffffffffffffe,1);
  }
  FUN_00295978(uVar8,auStack_280);
  FUN_00290f08(auStack_280);
  return 1;
}


