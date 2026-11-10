/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00928010; name: FUN_00928010
 */


void FUN_00928010(long param_1,uint param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar8 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar8;
  plVar6 = *(long **)(lVar8 + 0xd0);
  if (plVar6 != (long *)0x0) {
    plVar13 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar13 = (long *)plVar6[0xb];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar1 = plVar6 + 10;
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  lVar8 = *(long *)(param_1 + 0x68);
  uVar16 = (uint)*(byte *)(*(long *)(*(long *)(*(long *)(lVar8 + 0x98) + 0x370) + 8) + 0x38);
  if (uVar16 == 0) {
LAB_00928184:
    if (plVar13 != (long *)0x0) {
      plVar6 = plVar13 + 10;
      do {
        iVar5 = (int)*plVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *(int *)plVar6 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x009281e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar13 + 0x10))(plVar13);
        return;
      }
    }
    return;
  }
  bVar2 = *(byte *)(plVar13 + 0x11);
  uVar14 = 0;
  do {
    lVar11 = *(long *)(*(long *)(lVar8 + 0x150) + 0x68);
    uVar9 = (uint)*(byte *)(*(long *)(lVar11 + 8) + 0x88);
    if (uVar14 == uVar9) {
      uVar7 = 0;
LAB_00928130:
      lVar8 = FUN_00933eec(*(undefined8 *)(lVar8 + 0xd0),uVar7);
      uVar15 = *(undefined8 *)(*(long *)(lVar8 + 0x70) + 0x60);
      FUN_02950f48(*(long *)(lVar8 + 0x70),param_2 & 1);
      if (uVar14 < bVar2) {
        (**(code **)(*plVar13 + 0x30))(plVar13,uVar14,uVar15);
      }
      else {
        (**(code **)(*plVar13 + 0x28))(plVar13,uVar15);
      }
    }
    else {
      uVar10 = (uint)*(byte *)(*(long *)(*(long *)(*(long *)(lVar11 + 0x98) + 0x370) + 8) + 0x38);
      if (uVar10 != 0) {
        uVar12 = 0;
        uVar7 = 0;
        do {
          if ((uVar9 != uVar12) && (uVar7 = uVar7 + 1, uVar14 == uVar12)) {
            if ((uVar7 & 0xff) != 0x1f) goto LAB_00928130;
            break;
          }
          uVar12 = uVar12 + 1;
        } while (uVar10 != uVar12);
      }
    }
    uVar14 = uVar14 + 1;
    if (uVar14 == uVar16) goto LAB_00928184;
    lVar8 = *(long *)(param_1 + 0x68);
  } while( true );
}


