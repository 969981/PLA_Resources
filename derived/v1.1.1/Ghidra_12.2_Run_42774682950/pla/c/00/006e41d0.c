/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e41d0; name: FUN_006e41d0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_006e41d0(undefined8 param_1,byte *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined6 uVar6;
  undefined1 auVar7 [8];
  undefined8 *puVar8;
  size_t sVar9;
  size_t __n;
  undefined1 *__dest;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  ulong uVar14;
  void *pvVar15;
  ulong local_138;
  size_t local_130;
  void *local_128;
  undefined1 auStack_120 [48];
  undefined8 local_f0;
  long *local_e8;
  undefined8 local_c0;
  long *local_b8;
  ulong local_b0;
  size_t local_a8;
  void *local_a0;
  undefined8 local_98;
  size_t sStack_90;
  void *local_88;
  undefined1 local_80 [8];
  size_t sStack_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  
  if ((param_2[0x60] & 1) == 0) {
    pbVar13 = param_2 + 0x61;
  }
  else {
    pbVar13 = *(byte **)(param_2 + 0x70);
  }
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  sVar9 = strlen((char *)pbVar13);
  if (0xffffffffffffffef < sVar9) {
                    /* try { // try from 006e46f0 to 006e46f7 has its CatchHandler @ 006e4738 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    local_b0 = CONCAT71(local_b0._1_7_,(char)((int)sVar9 << 1));
    pvVar15 = (void *)((ulong)&local_b0 | 1);
    if (sVar9 != 0) goto LAB_006e4274;
  }
  else {
    uVar14 = sVar9 + 0x10 & 0xfffffffffffffff0;
    pvVar15 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar14);
    local_b0 = uVar14 | 1;
    local_a8 = sVar9;
    local_a0 = pvVar15;
LAB_006e4274:
    memcpy(pvVar15,pbVar13,sVar9);
  }
  *(undefined1 *)((long)pvVar15 + sVar9) = 0;
  if ((param_2[0x40] & 1) == 0) {
    pbVar13 = param_2 + 0x41;
  }
  else {
    pbVar13 = *(byte **)(param_2 + 0x50);
  }
  local_98 = 0;
  sStack_90 = 0;
  local_88 = (void *)0x0;
  sVar9 = strlen((char *)pbVar13);
  if (0xffffffffffffffef < sVar9) {
                    /* try { // try from 006e46f8 to 006e46ff has its CatchHandler @ 006e4728 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    pvVar15 = (void *)((long)&local_98 + 1);
    local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar9 << 1));
    if (sVar9 != 0) goto LAB_006e4308;
  }
  else {
    uVar14 = sVar9 + 0x10 & 0xfffffffffffffff0;
    pvVar15 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar14);
    local_98 = uVar14 | 1;
    sStack_90 = sVar9;
    local_88 = pvVar15;
LAB_006e4308:
    memcpy(pvVar15,pbVar13,sVar9);
  }
  *(undefined1 *)((long)pvVar15 + sVar9) = 0;
  if ((param_2[0x20] & 1) == 0) {
    pbVar13 = param_2 + 0x21;
  }
  else {
    pbVar13 = *(byte **)(param_2 + 0x30);
  }
  local_80 = (undefined1  [8])0x0;
  sStack_78 = 0;
  local_70 = (undefined1 *)0x0;
  __n = strlen((char *)pbVar13);
  sVar9 = sStack_78;
  auVar7 = local_80;
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006e4700 to 006e4707 has its CatchHandler @ 006e4718 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = local_80 + 1;
    local_80[0] = (char)((int)__n << 1);
    if (__n != 0) goto LAB_006e4418;
    uVar6 = local_80._0_6_;
    local_80._2_6_ = auVar7._2_6_;
    unique0x1000058a = local_80._2_6_;
    local_80[6] = 0;
    local_80._0_7_ = CONCAT16(local_80[6],uVar6);
    sStack_78 = sVar9;
    if (param_2[0xa0] != 0) goto LAB_006e4380;
LAB_006e4438:
                    /* try { // try from 006e4438 to 006e443f has its CatchHandler @ 006e473c */
    local_b8 = (long *)0x0;
    local_c0 = 0;
    FUN_0060a3d0(&local_f0);
    plVar2 = local_b8;
    local_b8 = local_e8;
    local_c0 = local_f0;
    local_f0 = 0;
    local_e8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_e8 != (long *)0x0) {
      plVar2 = local_e8 + 1;
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_006e44a0:
      if (lVar10 == 0) {
        (**(code **)(*local_e8 + 0x10))(local_e8);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    uVar14 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar14);
    local_80 = (undefined1  [8])(uVar14 | 1);
    sStack_78 = __n;
    local_70 = __dest;
LAB_006e4418:
    memcpy(__dest,pbVar13,__n);
    __dest[__n] = 0;
    if (param_2[0xa0] == 0) goto LAB_006e4438;
LAB_006e4380:
                    /* try { // try from 006e4380 to 006e438b has its CatchHandler @ 006e474c */
    local_b8 = (long *)0x0;
    local_c0 = 0;
    FUN_00606c20(&local_f0,&local_b0);
    plVar2 = local_b8;
    local_b8 = local_e8;
    local_c0 = local_f0;
    local_f0 = 0;
    local_e8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_e8 != (long *)0x0) {
      plVar2 = local_e8 + 1;
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_006e44a0;
    }
  }
                    /* try { // try from 006e44bc to 006e44c7 has its CatchHandler @ 006e4810 */
  FUN_002e3358(&local_f0,param_4);
  FUN_006e3ff0(auStack_120,&local_f0,param_2);
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
  }
  local_130 = 0;
  local_128 = (void *)0x0;
  local_138 = 0;
  sVar9 = strlen((char *)param_2);
  if (0xffffffffffffffef < sVar9) {
                    /* try { // try from 006e4708 to 006e470f has its CatchHandler @ 006e4710 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    local_138 = CONCAT71(local_138._1_7_,(char)((int)sVar9 << 1));
    pvVar15 = (void *)((ulong)&local_138 | 1);
    if (sVar9 == 0) goto LAB_006e4560;
  }
  else {
    uVar14 = sVar9 + 0x10 & 0xfffffffffffffff0;
    pvVar15 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar14);
    local_138 = uVar14 | 1;
    local_130 = sVar9;
    local_128 = pvVar15;
  }
  memcpy(pvVar15,param_2,sVar9);
LAB_006e4560:
  *(undefined1 *)((long)pvVar15 + sVar9) = 0;
  puStack_60 = (undefined8 *)param_3[1];
  local_68 = (undefined8 *)*param_3;
  local_58 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
                    /* try { // try from 006e457c to 006e4593 has its CatchHandler @ 006e475c */
  FUN_006061f0(param_1,&local_138,&local_c0,auStack_120,&local_68);
  puVar8 = local_68;
  puVar5 = PTR_LAB_04373088;
  if (local_68 != (undefined8 *)0x0) {
    if (puStack_60 != local_68) {
      puVar12 = puStack_60 + -1;
      puVar11 = (undefined8 *)*puVar12;
      *puVar12 = 0;
      if (puVar11 != (undefined8 *)0x0) goto LAB_006e45d0;
      while (puVar8 != puVar12) {
        while( true ) {
          puVar12 = puVar12 + -1;
          puVar11 = (undefined8 *)*puVar12;
          *puVar12 = 0;
          if (puVar11 == (undefined8 *)0x0) break;
LAB_006e45d0:
          (**(code **)*puVar11)(puVar11);
          FUN_002e2ea0(puVar5,puVar11);
          if (puVar8 == puVar12) goto LAB_006e4600;
        }
      }
    }
LAB_006e4600:
    puStack_60 = puVar8;
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  if ((local_138 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_128);
  }
  FUN_002e3804(auStack_120);
  FUN_002e3804(&local_f0);
  if (local_b8 != (long *)0x0) {
    plVar2 = local_b8 + 1;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_b8 + 0x10))(local_b8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (((ulong)local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  if ((local_98 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_88);
  }
  if ((local_b0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_a0);
  }
  return;
}


