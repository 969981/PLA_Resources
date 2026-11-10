/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018da270; name: FUN_018da270
 */


undefined1  [16] FUN_018da270(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_50 = 0x32c06e5ba5fa9d59;
  pcStack_48 = "ball_out_base_distance";
  local_40 = 0x16;
  local_38 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar10 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar10;
  uVar7 = *(ulong *)(lVar10 + 0x60);
  auVar12 = ZEXT816(0);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0xc0754f216bdb1c9;
    }
    else if (uVar7 < 0xc0754f216bdb1ca) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0xc0754f216bdb1c9 / uVar7;
      }
      uVar9 = 0xc0754f216bdb1c9 - uVar9 * uVar7;
    }
    else {
      uVar9 = 0xc0754f216bdb1c9;
    }
    plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
    auVar12 = ZEXT816(0);
    if ((plVar11 != (long *)0x0) &&
       (plVar11 = (long *)*plVar11, auVar12 = ZEXT816(0), plVar11 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == 0xc0754f216bdb1c9) {
            if (plVar11[2] == 0xc0754f216bdb1c9) goto LAB_018da368;
          }
          else {
            auVar12 = ZEXT816(0);
            if ((plVar11[1] & uVar7 - 1) != uVar9) break;
          }
          plVar11 = (long *)*plVar11;
          auVar12 = ZEXT816(0);
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar11[1];
          if (uVar8 == 0xc0754f216bdb1c9) {
            if (plVar11[2] == 0xc0754f216bdb1c9) goto LAB_018da368;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            auVar12 = ZEXT816(0);
            if (uVar8 != uVar9) break;
          }
          plVar11 = (long *)*plVar11;
          auVar12 = ZEXT816(0);
        } while (plVar11 != (long *)0x0);
      }
    }
  }
joined_r0x018da40c:
  if (local_38 != (long *)0x0) {
    uVar14 = auVar12._8_8_;
    uVar13 = auVar12._0_8_;
    (**(code **)(*local_38 + 0x20))();
    auVar12._8_8_ = uVar14;
    auVar12._0_8_ = uVar13;
  }
  return auVar12;
LAB_018da368:
  plVar11 = (long *)plVar11[3];
  auVar12 = ZEXT816(0);
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    auVar12 = FUN_00d7905c(plVar11,&local_50);
    uVar13 = auVar12._8_8_;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      auVar5._8_8_ = uVar13;
      auVar5._0_8_ = auVar12._0_8_;
      auVar12 = auVar5;
    }
  }
  goto joined_r0x018da40c;
}


