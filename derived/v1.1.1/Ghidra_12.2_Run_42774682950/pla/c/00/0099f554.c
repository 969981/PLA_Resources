/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099f554; name: FUN_0099f554
 */


void FUN_0099f554(long *param_1,long param_2,undefined8 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7,byte param_8,undefined1 param_9)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_68;
  
  plVar12 = *(long **)(param_2 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar12;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x330,0x10);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*plVar12 + 0xb8))(plVar12);
  }
  FUN_00adb43c(plVar9,plVar12,param_4,param_5,param_6,0,param_7 & 1,1,param_9);
  plVar9[1] = (long)plVar12;
  plVar9[2] = (long)plVar9;
  plVar9[3] = 0x330;
  plVar9[4] = 0x10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  local_68 = plVar9;
  if (plVar9 == (long *)0x0) {
    plVar12 = (long *)0x0;
  }
  else {
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0099f938;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar12 = local_68;
  }
  plVar9 = local_68;
  *(byte *)((long)plVar12 + 0x303) = ~param_8 & 1;
  local_90 = (long *)*param_3;
  uStack_88 = param_3[1];
  local_80 = param_3[2];
  local_78 = (long *)0x0;
  FUN_00adc9e8(plVar12,&local_90,*(undefined8 *)(param_2 + 8));
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
    plVar12 = plVar9;
  }
  lVar8 = plVar12[0xb];
  local_90 = plVar12;
  if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_0099f938:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar8 + 0x10) == 0) {
    uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
    *(undefined8 *)(lVar8 + 0x10) = uVar10;
  }
  plVar12 = local_90;
  piVar1 = (int *)(lVar8 + 0xc);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(undefined4 *)(local_90 + 0xd) = 1;
  FUN_0099ae98(param_2 + 0x4a0,&local_90);
  if (((((*(byte *)(param_2 + 0x770) & 0x1f) != 0) || ((*(byte *)(param_2 + 0x768) & 0x1f) != 0)) &&
      (*(int *)(param_2 + 0x7b8) == 1)) && (lVar8 = FUN_0099d310(plVar12 + 10), lVar8 != 0)) {
    uVar14 = *(undefined4 *)(param_2 + 0x7c0);
    *(undefined4 *)(lVar8 + 0xf0) = uVar14;
    plVar2 = *(long **)(lVar8 + 0x80);
    for (plVar9 = *(long **)(lVar8 + 0x78); plVar9 != plVar2; plVar9 = plVar9 + 1) {
      puVar13 = *(undefined8 **)(*plVar9 + 0xe0);
      puVar3 = *(undefined8 **)(*plVar9 + 0xe8);
      if ((puVar13 != puVar3) &&
         ((**(code **)(*(long *)*puVar13 + 0x90))(uVar14), puVar13 + 1 != puVar3)) {
        (**(code **)(*(long *)puVar13[1] + 0x90))(uVar14);
        for (puVar13 = puVar13 + 2; puVar13 != puVar3; puVar13 = puVar13 + 1) {
          (**(code **)(*(long *)*puVar13 + 0x90))(uVar14);
        }
      }
    }
  }
  if (plVar12 != (long *)0x0) {
    lVar8 = plVar12[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  lVar8 = FUN_009bb6f0(*(undefined8 *)(param_2 + 8),&local_68);
  if (lVar8 != 0) {
    lVar11 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_0099f938;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = lVar8;
  if (local_68 != (long *)0x0) {
    lVar8 = local_68[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


