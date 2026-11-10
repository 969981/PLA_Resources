/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0178038c; name: FUN_0178038c
 */


undefined8 FUN_0178038c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 in_q3 [16];
  undefined8 uVar14;
  float fStack_a8;
  float fStack_a4;
  char local_98;
  undefined7 uStack_97;
  float local_90;
  long local_80;
  long local_70;
  long *plStack_68;
  long *local_48;
  long *local_38;
  
  uVar10 = in_q3._8_8_;
  fVar11 = in_q3._0_4_;
  FUN_00be5694(&local_38,param_1 + 0x70);
  FUN_00be5694(&local_48,param_1 + 0xa0);
  if ((local_38 != (long *)0x0) && (local_48 != (long *)0x0)) {
    FUN_009c69bc(&local_98);
    (**(code **)(*(long *)CONCAT71(uStack_97,local_98) + 0x40))();
    plVar7 = (long *)CONCAT71(uStack_97,local_98);
    uVar14 = uVar10;
    fVar13 = fVar11;
    if (plVar7 != (long *)0x0) {
      lVar9 = plVar7[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    FUN_009c69bc(&local_98,local_48);
    (**(code **)(*(long *)CONCAT71(uStack_97,local_98) + 0x40))();
    plVar7 = (long *)CONCAT71(uStack_97,local_98);
    if (plVar7 != (long *)0x0) {
      lVar9 = plVar7[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    FUN_0177ffd8(&local_98,param_1);
    if (local_98 != '\0') {
      fStack_a8 = (float)uVar10;
      fStack_a4 = (float)((ulong)uVar10 >> 0x20);
      fStack_a8 = (float)uVar14 - fStack_a8;
      fStack_a4 = (float)((ulong)uVar14 >> 0x20) - fStack_a4;
      fVar11 = (fVar13 - fVar11) * (fVar13 - fVar11);
      fStack_a8 = fStack_a8 * fStack_a8;
      fStack_a4 = fStack_a4 * fStack_a4;
      auVar12._4_4_ = 0;
      auVar12._0_4_ = fVar11;
      auVar12._8_4_ = fStack_a8;
      auVar12._12_4_ = fStack_a4;
      auVar6._4_4_ = 0;
      auVar6._0_4_ = fVar11;
      auVar6._8_4_ = fStack_a8;
      auVar6._12_4_ = fStack_a4;
      auVar12 = NEON_ext(auVar12,auVar6,8,1);
      if ((auVar12._0_4_ + fVar11 + auVar12._4_4_ + 0.0 <= local_90 * local_90) ||
         (uVar8 = FUN_01780680(param_1), (uVar8 & 1) != 0)) {
        uVar10 = 0;
        lVar9 = local_80;
        plVar7 = plStack_68;
      }
      else {
        uVar10 = 1;
        lVar9 = local_80;
        plVar7 = plStack_68;
      }
      if (lVar9 != 0) {
        uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
        if ((uVar8 & 1) != 0) {
          lVar5 = tpidr_el0;
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar7,lVar9,local_70 - lVar9,0x10);
            goto LAB_01780528;
          }
        }
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,local_70 - lVar9,0x10);
      }
LAB_01780528:
      local_98 = '\0';
      goto joined_r0x017805d8;
    }
  }
  uVar10 = 0;
joined_r0x017805d8:
  if (local_48 != (long *)0x0) {
    lVar9 = local_48[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return uVar10;
}


