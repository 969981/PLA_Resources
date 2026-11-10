/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d13224; name: FUN_00d13224
 */


void FUN_00d13224(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 local_310;
  char *pcStack_308;
  undefined8 local_300;
  long *local_2f8;
  long *local_2f0;
  char *pcStack_2e8;
  undefined8 local_2e0;
  long *local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  char *local_2c0;
  char *pcStack_2b8;
  char *local_2b0;
  char *pcStack_2a8;
  char *local_2a0;
  char *pcStack_298;
  long *local_290;
  undefined1 *local_288;
  undefined1 *local_280;
  undefined8 local_278;
  long *local_270;
  undefined4 local_268;
  long *local_260;
  undefined1 *local_258;
  undefined1 *local_250;
  undefined8 local_248;
  long *local_240;
  undefined4 local_238;
  long *local_230;
  undefined1 *local_228;
  undefined1 *local_220;
  undefined8 local_218;
  long *local_210;
  undefined4 local_208;
  long *local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined8 local_1e8;
  long *local_1e0;
  undefined4 local_1d8;
  long *local_1d0;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  undefined8 local_1b8;
  long *local_1b0;
  undefined4 local_1a8;
  long *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined8 local_188;
  long *local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined4 local_148;
  long *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined8 local_128;
  long *local_120;
  undefined4 local_118;
  long *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  long *local_f0;
  undefined4 local_e8;
  long *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined4 local_b8;
  long *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  long *local_90;
  undefined4 local_88;
  undefined **local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined8 local_64;
  undefined4 local_5c;
  long *local_58;
  
  local_270 = (long *)0x0;
  local_108 = &DAT_cbf29ce484222645;
  local_290 = (long *)0x0;
  local_288 = &DAT_cbf29ce484222645;
  local_260 = (long *)0x0;
  local_258 = &DAT_cbf29ce484222645;
  local_230 = (long *)0x0;
  local_228 = &DAT_cbf29ce484222645;
  local_200 = (long *)0x0;
  local_1f8 = &DAT_cbf29ce484222645;
  local_d8 = &DAT_cbf29ce484222645;
  local_a8 = &DAT_cbf29ce484222645;
  local_268 = 0;
  local_240 = (long *)0x0;
  local_238 = 0;
  local_210 = (long *)0x0;
  local_208 = 0;
  local_1d8 = 0;
  local_1e0 = (long *)0x0;
  local_1b0 = (long *)0x0;
  local_1a8 = 0;
  local_180 = (long *)0x0;
  local_178 = 0;
  local_148 = 0;
  local_150 = 0;
  local_118 = 0;
  local_120 = (long *)0x0;
  local_110 = (long *)0x0;
  local_100 = &DAT_03996322;
  local_e8 = 0;
  local_f0 = (long *)0x0;
  local_f8 = 0;
  local_e0 = (long *)0x0;
  local_c8 = 0;
  local_d0 = &DAT_03996322;
  local_b8 = 0;
  local_c0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_a0 = &DAT_03996322;
  local_88 = 0;
  local_90 = (long *)0x0;
  local_98 = 0;
  local_1d0 = (long *)0x0;
  local_1c8 = &DAT_cbf29ce484222645;
  local_1a0 = (long *)0x0;
  local_198 = &DAT_cbf29ce484222645;
  local_170 = 0;
  puStack_168 = &DAT_cbf29ce484222645;
  local_140 = (long *)0x0;
  local_138 = &DAT_cbf29ce484222645;
  local_280 = &DAT_03996322;
  local_278 = 0;
  local_250 = &DAT_03996322;
  local_248 = 0;
  local_220 = &DAT_03996322;
  local_218 = 0;
  local_1f0 = &DAT_03996322;
  local_1e8 = 0;
  local_1c0 = &DAT_03996322;
  local_1b8 = 0;
  local_190 = &DAT_03996322;
  local_188 = 0;
  local_160 = &DAT_03996322;
  uStack_158 = 0;
  local_130 = &DAT_03996322;
  local_128 = 0;
  local_64 = 0;
  local_80 = &PTR_DAT_041e9f40;
  local_5c = 0;
  local_2c0 = "bin/pml/personal";
  pcStack_2b8 = "bin/pml/waza";
  local_2b0 = "bin/pml/waza_oboe";
  pcStack_2a8 = "bin/pml/grow_table";
  local_2a0 = "bin/pml/evolution";
  pcStack_298 = "bin/pml/item";
  local_300 = 0x13;
  local_2f8 = (long *)0x0;
  local_310 = 0xcbdc15e3ceed118e;
  pcStack_308 = "common/monsname.dat";
  FUN_010c4b50(&local_2f0,&local_310,0);
  plVar1 = local_290;
  local_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  plVar1 = local_270;
  local_290 = local_2f0;
  local_2f0 = (long *)0x0;
  local_288 = pcStack_2e8;
  local_280 = (undefined1 *)local_2e0;
  local_278 = local_2d8;
  local_270 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  local_270 = (long *)local_2d0;
  local_2d0 = 0;
  local_268 = local_2c8;
  if (local_2f0 != (long *)0x0) {
    (**(code **)(*local_2f0 + 0x20))();
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  local_300 = 0x13;
  local_2f8 = (long *)0x0;
  local_310 = 0xcbdc15e3ceed118e;
  pcStack_308 = "common/monsname.dat";
  FUN_010c4b50(&local_2f0,&local_310,0);
  plVar1 = local_260;
  local_260 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  plVar1 = local_240;
  local_260 = local_2f0;
  local_2f0 = (long *)0x0;
  local_258 = pcStack_2e8;
  local_250 = (undefined1 *)local_2e0;
  local_248 = local_2d8;
  local_240 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  local_240 = (long *)local_2d0;
  local_2d0 = 0;
  local_238 = local_2c8;
  if (local_2f0 != (long *)0x0) {
    (**(code **)(*local_2f0 + 0x20))();
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  local_300 = 0x13;
  local_2f8 = (long *)0x0;
  local_310 = 0xcbdc15e3ceed118e;
  pcStack_308 = "common/monsname.dat";
  FUN_010c4b50(&local_2f0,&local_310,2);
  plVar1 = local_230;
  local_230 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  plVar1 = local_210;
  local_230 = local_2f0;
  local_2f0 = (long *)0x0;
  local_228 = pcStack_2e8;
  local_220 = (undefined1 *)local_2e0;
  local_218 = local_2d8;
  local_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  local_210 = (long *)local_2d0;
  local_2d0 = 0;
  local_208 = local_2c8;
  if (local_2f0 != (long *)0x0) {
    (**(code **)(*local_2f0 + 0x20))();
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  local_300 = 0x13;
  local_2f8 = (long *)0x0;
  local_310 = 0xcbdc15e3ceed118e;
  pcStack_308 = "common/monsname.dat";
  FUN_010c4b50(&local_2f0,&local_310,3);
  plVar1 = local_200;
  local_200 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  plVar1 = local_1e0;
  local_200 = local_2f0;
  local_2f0 = (long *)0x0;
  local_1f8 = pcStack_2e8;
  local_1f0 = (undefined1 *)local_2e0;
  local_1e8 = local_2d8;
  local_1e0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  local_1e0 = (long *)local_2d0;
  local_2d0 = 0;
  local_1d8 = local_2c8;
  if (local_2f0 != (long *)0x0) {
    (**(code **)(*local_2f0 + 0x20))();
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  local_300 = 0x13;
  local_2f8 = (long *)0x0;
  local_310 = 0xcbdc15e3ceed118e;
  pcStack_308 = "common/monsname.dat";
  FUN_010c4b50(&local_2f0,&local_310,4);
  plVar1 = local_1d0;
  local_1d0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  plVar1 = local_1b0;
  local_1d0 = local_2f0;
  local_2f0 = (long *)0x0;
  local_1c8 = pcStack_2e8;
  local_1c0 = (undefined1 *)local_2e0;
  local_1b8 = local_2d8;
  local_1b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  local_1b0 = (long *)local_2d0;
  local_2d0 = 0;
  local_1a8 = local_2c8;
  if (local_2f0 != (long *)0x0) {
    (**(code **)(*local_2f0 + 0x20))();
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  local_300 = 0x13;
  local_2f8 = (long *)0x0;
  local_310 = 0xcbdc15e3ceed118e;
  pcStack_308 = "common/monsname.dat";
  FUN_010c4b50(&local_2f0,&local_310,5);
  plVar1 = local_1a0;
  local_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  plVar1 = local_180;
  local_1a0 = local_2f0;
  local_2f0 = (long *)0x0;
  local_198 = pcStack_2e8;
  local_190 = (undefined1 *)local_2e0;
  local_188 = local_2d8;
  local_180 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  local_180 = (long *)local_2d0;
  local_2d0 = 0;
  local_178 = local_2c8;
  if (local_2f0 != (long *)0x0) {
    (**(code **)(*local_2f0 + 0x20))();
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  local_300 = 0x13;
  local_2f8 = (long *)0x0;
  local_310 = 0xcbdc15e3ceed118e;
  pcStack_308 = "common/monsname.dat";
  FUN_010c4b50(&local_2f0,&local_310,6);
  plVar1 = local_140;
  local_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  plVar1 = local_120;
  local_140 = local_2f0;
  local_2f0 = (long *)0x0;
  local_138 = pcStack_2e8;
  local_130 = (undefined1 *)local_2e0;
  local_128 = local_2d8;
  local_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  local_120 = (long *)local_2d0;
  local_2d0 = 0;
  local_118 = local_2c8;
  if (local_2f0 != (long *)0x0) {
    (**(code **)(*local_2f0 + 0x20))();
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  local_300 = 0x13;
  local_2f8 = (long *)0x0;
  local_310 = 0xcbdc15e3ceed118e;
  pcStack_308 = "common/monsname.dat";
  FUN_010c4b50(&local_2f0,&local_310,7);
  plVar1 = local_110;
  local_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  plVar1 = local_f0;
  local_110 = local_2f0;
  local_2f0 = (long *)0x0;
  local_100 = (undefined1 *)local_2e0;
  local_108 = pcStack_2e8;
  local_f8 = local_2d8;
  local_f0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  local_f0 = (long *)local_2d0;
  local_2d0 = 0;
  local_e8 = local_2c8;
  if (local_2f0 != (long *)0x0) {
    (**(code **)(*local_2f0 + 0x20))();
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  local_300 = 0x13;
  local_2f8 = (long *)0x0;
  local_310 = 0xcbdc15e3ceed118e;
  pcStack_308 = "common/monsname.dat";
  FUN_010c4b50(&local_2f0,&local_310,8);
  plVar1 = local_e0;
  local_e0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  plVar1 = local_c0;
  local_e0 = local_2f0;
  local_2f0 = (long *)0x0;
  local_d0 = (undefined1 *)local_2e0;
  local_d8 = pcStack_2e8;
  local_c8 = local_2d8;
  local_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  local_c0 = (long *)local_2d0;
  local_2d0 = 0;
  local_b8 = local_2c8;
  if (local_2f0 != (long *)0x0) {
    (**(code **)(*local_2f0 + 0x20))();
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  local_300 = 0x13;
  local_2f8 = (long *)0x0;
  local_310 = 0xcbdc15e3ceed118e;
  pcStack_308 = "common/monsname.dat";
  FUN_010c4b50(&local_2f0,&local_310,9);
  plVar1 = local_b0;
  local_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  plVar1 = local_90;
  local_b0 = local_2f0;
  local_2f0 = (long *)0x0;
  local_a8 = pcStack_2e8;
  local_a0 = (undefined1 *)local_2e0;
  local_98 = local_2d8;
  local_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  local_90 = (long *)local_2d0;
  local_2d0 = 0;
  local_88 = local_2c8;
  if (local_2f0 != (long *)0x0) {
    (**(code **)(*local_2f0 + 0x20))();
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  local_68 = FUN_00d15530();
  local_67 = FUN_00d16150();
  puVar4 = PTR_DAT_04379660;
  local_78 = &LAB_00d12a70;
  local_70 = &LAB_00d12b10;
  local_2e0 = 0x11;
  local_2d8 = (long *)0x0;
  local_2f0 = (long *)0x3f9fa23139e90860;
  pcStack_2e8 = "pokemon_evolution";
  local_310 = 0x4fed2b627c4d0187;
  pcStack_308 = "TechnicalWazaUseCount";
  local_300 = 0x15;
  local_2f8 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar6 = PTR_DAT_04379670;
  puVar5 = PTR_DAT_04379668;
  uVar9 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar9;
  FUN_00d7d9e4(&local_58,uVar9,&local_2f0);
  if (local_58 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00d78f50(local_58,&local_310);
    if (local_58 != (long *)0x0) {
      plVar1 = local_58 + 10;
      do {
        iVar8 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
  }
  local_64 = CONCAT44(local_64._4_4_,uVar7);
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (local_2d8 != (long *)0x0) {
    (**(code **)(*local_2d8 + 0x20))();
  }
  local_2e0 = 0x11;
  local_2d8 = (long *)0x0;
  local_310 = 0x7a762b3fd9c03852;
  pcStack_308 = "PowerfulWazaUseCount";
  local_2f0 = (long *)0x3f9fa23139e90860;
  pcStack_2e8 = "pokemon_evolution";
  local_300 = 0x14;
  local_2f8 = (long *)0x0;
  if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar9 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar9;
  FUN_00d7d9e4(&local_58,uVar9,&local_2f0);
  if (local_58 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00d78f50(local_58,&local_310);
    if (local_58 != (long *)0x0) {
      plVar1 = local_58 + 10;
      do {
        iVar8 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
  }
  local_64 = CONCAT44(uVar7,(undefined4)local_64);
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (local_2d8 != (long *)0x0) {
    (**(code **)(*local_2d8 + 0x20))();
  }
  local_2e0 = 0x11;
  local_2d8 = (long *)0x0;
  local_310 = 0xe162d97997243f07;
  pcStack_308 = "ReactionDamage";
  local_2f0 = (long *)0x3f9fa23139e90860;
  pcStack_2e8 = "pokemon_evolution";
  local_300 = 0xe;
  local_2f8 = (long *)0x0;
  if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar9 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar9;
  FUN_00d7d9e4(&local_58,uVar9,&local_2f0);
  if (local_58 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00d78f50(local_58,&local_310);
    if (local_58 != (long *)0x0) {
      plVar1 = local_58 + 10;
      do {
        iVar8 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
  }
  local_5c = uVar7;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (local_2d8 != (long *)0x0) {
    (**(code **)(*local_2d8 + 0x20))();
  }
  FUN_02c8cf9c(*(undefined8 *)(param_1 + 0x78),&local_2c0);
  FUN_00d141fc(&local_2c0);
  return;
}


