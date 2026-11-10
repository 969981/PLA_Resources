/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005453c0; name: FUN_005453c0
 */


undefined8 * FUN_005453c0(long *param_1,ulong *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  uint *puVar18;
  undefined8 *puVar19;
  long *local_98;
  long local_90;
  long local_88;
  void *local_80;
  ulong local_78;
  undefined1 auStack_70 [8];
  void **local_68;
  
  lVar4 = FUN_0053f520(0,0,PTR_PTR_04374c10);
  lVar12 = (long)param_1 + 9;
  if (*param_1 != 0) {
    lVar12 = param_1[2];
  }
  uVar6 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar6 = param_1[1];
  }
                    /* try { // try from 00545418 to 0054544b has its CatchHandler @ 005457b0 */
  puVar5 = (undefined8 *)FUN_0053ee00(PTR_PTR_04374c98,lVar4);
  if ((puVar5 == (undefined8 *)0x0) ||
     (uVar6 = FUN_005403e0(lVar12,uVar6,puVar5,PTR_PTR_04374c98,lVar4), (uVar6 & 1) == 0)) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    do {
      uVar10 = *param_2;
      uVar6 = uVar10 + 0x50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar3) {
        *param_2 = uVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (param_2[1] < uVar6) {
                    /* try { // try from 00545470 to 0054547b has its CatchHandler @ 00545794 */
      puVar7 = (undefined8 *)FUN_003f5a34(param_2,0x50);
    }
    else {
      puVar7 = (undefined8 *)((long)param_2 + uVar10 + 0x20);
    }
    puVar19 = puVar7 + 4;
    puVar7[5] = 0;
    *puVar19 = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar15 = puVar7 + 3;
    *puVar15 = puVar19;
    puVar11 = puVar7 + 7;
    *puVar11 = 0;
    puVar16 = puVar7 + 6;
    *puVar16 = puVar11;
    puVar7[8] = 0;
    *puVar7 = *puVar5;
    uVar17 = puVar5[1];
    puVar7[2] = puVar5[2];
    puVar7[1] = uVar17;
    local_90 = 0;
    local_88 = 0;
    lVar12 = puVar5[3];
    local_98 = &local_90;
    if (lVar12 != 0) {
      uVar6 = 0xffffffffffffffff;
      do {
        local_80 = (void *)(lVar12 + 8);
                    /* try { // try from 00545510 to 00545523 has its CatchHandler @ 005457d0 */
        local_78 = uVar6;
        FUN_0053fcd0(&local_80);
        uVar6 = local_78;
        uVar8 = FUN_0053fa50(&local_80);
        uVar10 = local_78;
        if ((uVar8 & 1) != 0) break;
        lVar12 = *(long *)((long)local_80 + 0x18);
        puVar13 = (undefined8 *)(lVar12 + local_78 * 0x18);
        if (puVar13 == (undefined8 *)0x0) break;
        puVar18 = (uint *)*puVar13;
        uVar1 = *puVar18;
        uVar8 = (ulong)(uVar1 + 0xf) & 0xfffffff0;
        do {
          uVar14 = *param_2;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
          if (bVar3) {
            *param_2 = uVar14 + uVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (param_2[1] < uVar8 + uVar14) {
                    /* try { // try from 00545568 to 0054556f has its CatchHandler @ 005457ac */
          pvVar9 = (void *)FUN_003f5a34(param_2);
        }
        else {
          pvVar9 = (void *)((long)param_2 + uVar14 + 0x20);
        }
        memcpy(pvVar9,puVar18 + 1,(ulong)uVar1);
        uVar17 = *(undefined8 *)(lVar12 + uVar10 * 0x18 + 8);
        local_68 = &local_80;
                    /* try { // try from 005455a4 to 005455bf has its CatchHandler @ 005457c8 */
        local_80 = pvVar9;
        local_78 = (ulong)uVar1;
        lVar12 = FUN_005457fc(&local_98,&local_80,&DAT_03a2b3e7,&local_68,auStack_70);
        *(undefined8 *)(lVar12 + 0x30) = uVar17;
        lVar12 = puVar5[3];
      } while (lVar12 != 0);
    }
    FUN_00530238(puVar15,puVar7[4]);
    puVar7[3] = local_98;
    puVar7[4] = local_90;
    puVar7[5] = local_88;
    if (local_88 == 0) {
      *puVar15 = puVar19;
    }
    else {
      *(undefined8 **)(local_90 + 0x10) = puVar19;
      local_90 = 0;
      local_88 = 0;
      local_98 = &local_90;
    }
    FUN_00530238(&local_98,local_90);
    local_90 = 0;
    local_88 = 0;
    lVar12 = puVar5[4];
    local_98 = &local_90;
    if (lVar12 != 0) {
      uVar6 = 0xffffffffffffffff;
      do {
        local_80 = (void *)(lVar12 + 8);
                    /* try { // try from 00545648 to 0054565b has its CatchHandler @ 005457cc */
        local_78 = uVar6;
        FUN_0053fcd0(&local_80);
        uVar6 = local_78;
        uVar8 = FUN_0053fa50(&local_80);
        uVar10 = local_78;
        if ((uVar8 & 1) != 0) break;
        lVar12 = *(long *)((long)local_80 + 0x18);
        puVar15 = (undefined8 *)(lVar12 + local_78 * 0x18);
        if (puVar15 == (undefined8 *)0x0) break;
        puVar18 = (uint *)*puVar15;
        uVar1 = *puVar18;
        uVar8 = (ulong)(uVar1 + 0xf) & 0xfffffff0;
        do {
          uVar14 = *param_2;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
          if (bVar3) {
            *param_2 = uVar14 + uVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (param_2[1] < uVar8 + uVar14) {
                    /* try { // try from 005456a0 to 005456a7 has its CatchHandler @ 005457a8 */
          pvVar9 = (void *)FUN_003f5a34(param_2);
        }
        else {
          pvVar9 = (void *)((long)param_2 + uVar14 + 0x20);
        }
        memcpy(pvVar9,puVar18 + 1,(ulong)uVar1);
        uVar17 = *(undefined8 *)(lVar12 + uVar10 * 0x18 + 8);
        local_68 = &local_80;
                    /* try { // try from 005456dc to 005456f3 has its CatchHandler @ 005457c4 */
        local_80 = pvVar9;
        local_78 = (ulong)uVar1;
        lVar12 = FUN_005457fc(&local_98,&local_80,&DAT_03a2b3e7,&local_68,auStack_70);
        *(undefined8 *)(lVar12 + 0x30) = uVar17;
        lVar12 = puVar5[4];
      } while (lVar12 != 0);
    }
    FUN_00530238(puVar16,puVar7[7]);
    puVar7[6] = local_98;
    puVar7[7] = local_90;
    puVar7[8] = local_88;
    if (local_88 == 0) {
      *puVar16 = puVar11;
      FUN_00530238(&local_98);
    }
    else {
      *(undefined8 **)(local_90 + 0x10) = puVar11;
      local_90 = 0;
      local_88 = 0;
      local_98 = &local_90;
      FUN_00530238(&local_98,0);
    }
  }
  if (lVar4 != 0) {
                    /* try { // try from 00545768 to 0054576f has its CatchHandler @ 005457a4 */
    FUN_0053f5f0(lVar4);
  }
  return puVar7;
}


