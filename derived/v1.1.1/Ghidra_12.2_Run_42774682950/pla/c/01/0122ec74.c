/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0122ec74; name: FUN_0122ec74
 */


void FUN_0122ec74(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  int iVar12;
  long lVar13;
  undefined1 **local_110;
  long *local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long *local_e8;
  undefined1 *local_e0;
  code *local_d8;
  code *local_d0;
  long *local_c8;
  long local_c0;
  undefined1 *local_b8;
  undefined8 uStack_b0;
  long *local_58;
  
  local_e0 = (undefined1 *)0x801e693dd9658f72;
  local_d8 = (code *)0x38dde2f;
  local_d0 = (code *)0xf;
  local_c8 = (long *)0x0;
  lVar9 = thunk_FUN_00d2ee28(param_1 + 0x180,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  local_58 = *(long **)(param_1 + 0x5b0);
  if (local_58 != (long *)0x0) {
    lVar13 = local_58[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0281e3a4(lVar9,&local_58);
  if (local_58 != (long *)0x0) {
    lVar13 = local_58[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  pcVar11 = *(code **)(lVar9 + 0x118);
  local_b8 = &LAB_0122f108;
  uStack_b0 = 0;
  local_e0 = &LAB_01232dd0;
  local_d8 = FUN_01232df4;
  local_d0 = FUN_01232df8;
  local_c8 = (long *)&LAB_01232e0c;
  local_c0 = param_1;
  if (pcVar11 == (code *)0x0) {
LAB_0122edb8:
    (*local_d0)(&local_c0,lVar9 + 0x130);
    *(code **)(lVar9 + 0x118) = local_d8;
    *(long **)(lVar9 + 0x128) = local_c8;
    *(code **)(lVar9 + 0x120) = local_d0;
    *(undefined8 *)(lVar9 + 0x110) = local_e0;
  }
  else {
    *(undefined8 *)(lVar9 + 0x120) = 0;
    *(undefined8 *)(lVar9 + 0x128) = 0;
    *(undefined8 *)(lVar9 + 0x110) = 0;
    *(undefined8 *)(lVar9 + 0x118) = 0;
    (*pcVar11)(lVar9 + 0x130);
    if (local_d0 != (code *)0x0) goto LAB_0122edb8;
  }
  pcVar11 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (long *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar11)(&local_c0);
  }
  pcVar11 = *(code **)(lVar9 + 0x218);
  local_b8 = &LAB_0122f518;
  uStack_b0 = 0;
  local_e0 = &LAB_01232dd0;
  local_d8 = FUN_01232df4;
  local_d0 = FUN_01232df8;
  local_c8 = (long *)&LAB_01232e0c;
  local_c0 = param_1;
  if (pcVar11 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 0x220) = 0;
    *(undefined8 *)(lVar9 + 0x228) = 0;
    *(undefined8 *)(lVar9 + 0x210) = 0;
    *(undefined8 *)(lVar9 + 0x218) = 0;
    (*pcVar11)(lVar9 + 0x230);
    if (local_d0 == (code *)0x0) goto LAB_0122ee70;
  }
  (*local_d0)(&local_c0,lVar9 + 0x230);
  *(code **)(lVar9 + 0x218) = local_d8;
  *(long **)(lVar9 + 0x228) = local_c8;
  *(code **)(lVar9 + 0x220) = local_d0;
  *(undefined8 *)(lVar9 + 0x210) = local_e0;
LAB_0122ee70:
  pcVar11 = local_d8;
  *(undefined1 *)(lVar9 + 0x91a) = 1;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (long *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar11)(&local_c0);
  }
  FUN_0281e398(lVar9,1);
  FUN_0281857c(lVar9);
  puVar7 = PTR_PTR_04379d00;
  puVar6 = PTR_DAT_04379c88;
  iVar12 = 0;
  do {
    snprintf((char *)&local_e0,0x60,"button_list_%02d",iVar12);
    local_110 = &local_e0;
    FUN_009313e8(&local_108,&local_110);
    plVar8 = local_108;
    plVar2 = (long *)puVar7;
    plVar5 = (long *)puVar6;
    if (local_108 != (long *)0x0) {
      plVar2 = local_108 + 0xc;
      plVar5 = local_108 + 0xb;
    }
    local_100 = *plVar5;
    lStack_f8 = *plVar2;
    if (local_108 == (long *)0x0) {
      local_f0 = 0;
      local_e8 = (long *)0x0;
    }
    else {
      local_f0 = local_108[0xd];
      local_e8 = (long *)0x0;
      (**(code **)(*local_108 + 0x18))(local_108);
      plVar2 = local_e8;
      local_e8 = plVar8;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))();
      }
    }
    lVar9 = thunk_FUN_00d2e944(param_1 + 0x180,&local_100);
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    if (local_108 != (long *)0x0) {
      (**(code **)(*local_108 + 0x20))();
    }
    iVar12 = iVar12 + 1;
    *(undefined1 *)(lVar9 + 0x2aa) = 0;
  } while (iVar12 != 0xe);
  return;
}


