/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028fecb8; name: FUN_028fecb8
 */


void FUN_028fecb8(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  uint *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long **pplVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  code *pcVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  code *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  long **local_e0;
  undefined4 *local_d8;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint *local_60;
  undefined8 local_58;
  uint *local_48;
  
  lVar14 = *param_3;
  if (lVar14 == 0) {
    return;
  }
  uVar12 = *(undefined8 *)*param_1;
  uVar3 = *param_2;
  uVar5 = param_2[1];
  uVar4 = param_2[2];
  pplVar6 = (long **)param_2[3];
  if (pplVar6 != (long **)0x0) {
    (*(code *)(*pplVar6)[3])(pplVar6);
  }
  local_100 = (code *)CONCAT71(local_100._1_7_,1);
  local_f8 = (code *)uVar3;
  local_f0 = (undefined1 *)uVar5;
  local_e8 = (undefined1 *)uVar4;
  local_e0 = pplVar6;
  FUN_02b3365c(&local_78,uVar12,&local_100);
  if (((char)local_100 != '\0') && (local_e0 != (long **)0x0)) {
    (*(code *)(*local_e0)[4])();
  }
  if (local_78 == (long *)0x0) {
    return;
  }
  local_d8 = (undefined4 *)param_1[1];
  local_e0 = &local_78;
  local_100 = FUN_028fefb0;
  local_f8 = FUN_028ff044;
  local_f0 = &LAB_028ff048;
  local_e8 = &LAB_028ff054;
  plVar13 = *(long **)(lVar14 + 0x50);
  pcVar11 = FUN_028ff044;
  if (plVar13 == (long *)0x0) {
LAB_028fee1c:
    local_f0 = (undefined1 *)0x0;
    local_e8 = (undefined1 *)0x0;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar11)(&local_e0);
  }
  else {
    puVar1 = (uint *)(plVar13 + 6);
    local_60 = puVar1;
    if ((0.0 < *(float *)((long)plVar13 + 0x34)) &&
       (uVar10 = (**(code **)(*(long *)(local_78[0xc] + 0x58) + 0x98))
                           ((long *)(local_78[0xc] + 0x58),&local_70,plVar13 + 2,local_78 + 0x1a),
       (uVar10 & 1) != 0)) {
      pcVar11 = *(code **)(PTR_PTR_04387fe0 + (ulong)*puVar1 * 0x10);
      uVar10 = *(ulong *)((long)(PTR_PTR_04387fe0 + (ulong)*puVar1 * 0x10) + 8);
      plVar2 = (long *)((long)puVar1 + ((long)uVar10 >> 1));
      if ((uVar10 & 1) != 0) {
        pcVar11 = *(code **)(pcVar11 + *plVar2);
      }
      (*pcVar11)(*local_d8,plVar2,&local_70);
    }
    plVar13 = (long *)*plVar13;
    if (plVar13 != (long *)0x0) {
      do {
        local_60 = (uint *)(plVar13 + 6);
        (*local_100)(&local_e0,plVar13 + 2,&local_60);
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
    pcVar11 = local_f8;
    if (local_f8 != (code *)0x0) goto LAB_028fee1c;
  }
  local_d8 = (undefined4 *)param_1[1];
  local_e0 = &local_78;
  local_100 = FUN_028ff060;
  local_f8 = FUN_028ff120;
  local_f0 = &LAB_028ff124;
  local_e8 = &LAB_028ff130;
  plVar13 = *(long **)(lVar14 + 0xb8);
  pcVar11 = FUN_028ff120;
  if (plVar13 != (long *)0x0) {
    puVar1 = (uint *)(plVar13 + 6);
    local_48 = puVar1;
    if (0.0 < *(float *)((long)plVar13 + 0x34)) {
      uVar10 = (**(code **)(*(long *)(local_78[0xc] + 0x58) + 0xa8))
                         ((long *)(local_78[0xc] + 0x58),&local_60,plVar13 + 2,local_78 + 0x1a);
      if ((uVar10 & 1) != 0) {
        uStack_68 = local_58;
        local_70 = CONCAT44(*(undefined4 *)((ulong)&local_60 | 4),local_60._0_4_);
        pcVar11 = *(code **)(PTR_PTR_04387fe8 + (ulong)*puVar1 * 0x10);
        uVar10 = *(ulong *)((long)(PTR_PTR_04387fe8 + (ulong)*puVar1 * 0x10) + 8);
        plVar2 = (long *)((long)puVar1 + ((long)uVar10 >> 1));
        if ((uVar10 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *plVar2);
        }
        (*pcVar11)(*local_d8,plVar2,&local_70);
      }
    }
    plVar13 = (long *)*plVar13;
    if (plVar13 != (long *)0x0) {
      do {
        local_48 = (uint *)(plVar13 + 6);
        (*local_100)(&local_e0,plVar13 + 2,&local_48);
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
    pcVar11 = local_f8;
    if (local_f8 == (code *)0x0) goto LAB_028fef4c;
  }
  local_f0 = (undefined1 *)0x0;
  local_e8 = (undefined1 *)0x0;
  local_100 = (code *)0x0;
  local_f8 = (code *)0x0;
  (*pcVar11)(&local_e0);
LAB_028fef4c:
  if (local_78 != (long *)0x0) {
    plVar13 = local_78 + 10;
    do {
      iVar9 = (int)*plVar13 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *(int *)plVar13 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  return;
}


