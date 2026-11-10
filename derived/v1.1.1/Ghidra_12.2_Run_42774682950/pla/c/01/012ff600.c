/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012ff600; name: FUN_012ff600
 */


void FUN_012ff600(long param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  ulong **ppuVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong *puVar13;
  ulong local_118;
  ulong uStack_110;
  ulong local_108;
  ulong uStack_100;
  ulong local_f8;
  ulong uStack_f0;
  ulong *local_e8;
  ulong *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  ulong *local_b0;
  ulong *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  ulong *local_78;
  ulong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  lVar12 = param_1 + (long)param_2 * 0x38;
  if (*(long *)(lVar12 + 0x1650) != *(long *)(lVar12 + 0x1658)) {
    cVar6 = FUN_012f113c(param_2);
    if (cVar6 == '\0') {
      FUN_01303430(*(undefined8 *)(lVar12 + 0x1650),*(undefined8 *)(lVar12 + 0x1658));
      return;
    }
    if (cVar6 == '\x01') {
      uStack_d0 = *(undefined8 *)(param_1 + 8);
      local_a0 = 0;
      local_68 = 0;
      local_d8 = 0;
      param_1 = param_1 + (long)param_2 * 0x38;
      lVar12 = param_1 + 0x1650;
      local_78 = (ulong *)0x0;
      local_48 = 0;
      local_58 = 0x555555555555555;
      uStack_50 = 0;
      local_80 = 0;
      local_b8 = 0;
      local_70 = (ulong *)0x0;
      local_b0 = (ulong *)0x0;
      local_a8 = (ulong *)0x0;
      local_90 = 0x555555555555555;
      uStack_88 = 0;
      local_e8 = (ulong *)0x0;
      local_e0 = (ulong *)0x0;
      local_c8 = 0x555555555555555;
      uStack_c0 = 0;
      uStack_98 = uStack_d0;
      uStack_60 = uStack_d0;
      FUN_01302da4(&local_78,lVar12);
      *(undefined8 *)(param_1 + 0x1658) = *(undefined8 *)(param_1 + 0x1650);
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      lVar10 = *(long *)PTR_DAT_04379560;
      *(long *)PTR_DAT_04379568 = lVar10;
      plVar11 = *(long **)(lVar10 + 0x2a0);
      puVar4 = local_78;
      puVar13 = local_70;
      if (plVar11 != (long *)0x0) {
        lVar10 = plVar11[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar2) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          puVar4 = local_78;
          puVar13 = local_70;
        } while (cVar6 != '\0');
      }
      for (; puVar3 = local_70, puVar4 != local_70; puVar4 = puVar4 + 6) {
        local_118 = *puVar4;
        uStack_110 = puVar4[1];
        local_108 = puVar4[2];
        uStack_100 = puVar4[3];
        local_f8 = puVar4[4];
        uStack_f0 = puVar4[5];
        if (((local_118 & 0xffff) < 100) &&
           (*(char *)((long)plVar11 + (local_118 & 0xffff) + 0x68) != '\0')) {
          ppuVar9 = &local_b0;
        }
        else {
          ppuVar9 = &local_e8;
        }
        local_70 = puVar13;
        FUN_012ff938(ppuVar9,&local_118);
        puVar13 = local_70;
        local_70 = puVar3;
      }
      local_70 = puVar13;
      FUN_013041a0(local_b0,local_a8);
      FUN_01304f10(local_e8,local_e0);
      puVar5 = local_a8;
      puVar13 = local_e8;
      puVar3 = local_e0;
      puVar4 = local_b0;
      while( true ) {
        local_e8 = puVar13;
        local_e0 = puVar3;
        if (puVar4 == puVar5) break;
        local_118 = *puVar4;
        uStack_110 = puVar4[1];
        local_108 = puVar4[2];
        uStack_100 = puVar4[3];
        local_f8 = puVar4[4];
        uStack_f0 = puVar4[5];
        FUN_012ff938(lVar12,&local_118);
        puVar4 = puVar4 + 6;
        puVar13 = local_e8;
        puVar3 = local_e0;
      }
      if (puVar13 != puVar3) {
        do {
          local_118 = *puVar13;
          uStack_110 = puVar13[1];
          local_108 = puVar13[2];
          uStack_100 = puVar13[3];
          local_f8 = puVar13[4];
          uStack_f0 = puVar13[5];
          FUN_012ff938(lVar12,&local_118);
          puVar13 = puVar13 + 6;
        } while (puVar3 != puVar13);
      }
      local_70 = local_78;
      local_a8 = local_b0;
      local_e0 = local_e8;
      if (plVar11 != (long *)0x0) {
        lVar12 = plVar11[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar2) {
            *piVar1 = iVar7 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))(plVar11);
        }
      }
      FUN_012f6128(&local_e8);
      FUN_012f6128(&local_b0);
      FUN_012f6128(&local_78);
      return;
    }
  }
  return;
}


