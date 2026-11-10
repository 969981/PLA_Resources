/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01196054; name: FUN_01196054
 */


undefined8 FUN_01196054(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  
  puVar9 = param_1;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (puVar9 = (undefined8 *)__cxa_guard_acquire(PTR_DAT_04379558), (int)puVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    puVar9 = (undefined8 *)__cxa_guard_release(PTR_DAT_04379558);
  }
  lVar11 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar11;
  plVar13 = *(long **)(lVar11 + 0x280);
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[0xb];
    puVar9 = *(undefined8 **)(lVar11 + 0x18);
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      puVar9 = (undefined8 *)(**(code **)*puVar9)();
      *(undefined8 **)(lVar11 + 0x10) = puVar9;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar11 = param_1[0x35];
  iVar2 = *(int *)(lVar11 + 0x16c4);
  uVar3 = *(undefined4 *)(lVar11 + 0x16a8);
  uVar5 = *(ushort *)(lVar11 + 0x16b0);
  uVar14 = (ulong)uVar5;
  uVar8 = FUN_010dac08(puVar9,iVar2);
  if (iVar2 == 0) {
    plVar12 = plVar13 + 0xd;
joined_r0x01196238:
    if (uVar8 <= uVar5) goto LAB_0119623c;
LAB_01196100:
    uVar8 = *(uint *)((long)plVar12 + uVar14 * 4);
    uVar15 = uVar8 >> 0x10;
  }
  else {
    if (iVar2 == 1) {
      plVar12 = (long *)((long)plVar13 + 0xaf4);
      if (uVar5 < uVar8) goto LAB_01196100;
    }
    else if (iVar2 == 2) {
      plVar12 = (long *)((long)plVar13 + 0xc84);
      goto joined_r0x01196238;
    }
LAB_0119623c:
    uVar15 = 0;
    uVar8 = 0;
  }
  uVar4 = *(uint *)(param_1 + 0x4f);
  FUN_010db560(plVar13,uVar8 & 0xffff,uVar4,uVar14);
  FUN_00dac164(*(undefined4 *)(param_1 + 0x4f));
  if (uVar4 < uVar15) {
    FUN_00d5dbe8(param_1[0x35],uVar3,uVar14,0);
    uVar14 = FUN_0119f7c8(param_1[0x35],uVar8);
    if ((uVar14 & 1) != 0) {
      FUN_01196348(param_1);
      goto joined_r0x011961ec;
    }
  }
  else {
    uVar10 = FUN_011a0ad0(param_1[0x35]);
    FUN_00d5dc3c(param_1[0x35],uVar3,uVar14,0);
    FUN_011a0b40(param_1[0x35]);
    FUN_00d4be50(param_1[0x35],0,1);
    FUN_0119e304(param_1[0x35]);
    FUN_011aaf60(param_1[0x36],0);
    if ((uVar10 & 1) != 0) {
      param_1[0x3a] = 0xe;
      goto joined_r0x011961ec;
    }
  }
  FUN_011a0c80(param_1[0x35]);
  FUN_011953c8(param_1);
joined_r0x011961ec:
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  return 0;
}


