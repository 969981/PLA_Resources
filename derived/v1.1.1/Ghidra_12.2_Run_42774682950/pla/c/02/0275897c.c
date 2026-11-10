/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0275897c; name: FUN_0275897c
 */


void FUN_0275897c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  long *local_100;
  long *local_f8;
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [104];
  long *local_68;
  long local_60;
  long lStack_58;
  long local_50;
  long *local_48;
  long *local_38;
  
  plVar6 = (long *)FUN_013b2b18();
  lVar8 = *plVar6;
  *(long *)PTR_DAT_0437b480 = lVar8;
  FUN_02758bd4(&local_38,*(undefined8 *)(lVar8 + 0x50));
  FUN_00ae29ec(&local_68,param_2);
  plVar6 = local_68;
  if (local_68 == (long *)0x0) {
    local_60 = *(long *)PTR_DAT_04379c88;
  }
  else {
    local_60 = local_68[0xb];
    if (local_68 != (long *)0x0) {
      lStack_58 = local_68[0xc];
      goto joined_r0x02758bb0;
    }
  }
  lStack_58 = *(long *)PTR_PTR_04379d00;
joined_r0x02758bb0:
  if (local_68 == (long *)0x0) {
    local_50 = 0;
  }
  else {
    local_50 = local_68[0xd];
  }
  local_48 = (long *)0x0;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))(local_68);
  }
  local_48 = plVar6;
  local_118 = *param_2;
  local_110 = param_2[1];
  local_108 = param_2[2];
  local_100 = (long *)param_2[3];
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x18))();
  }
  local_f8 = local_38;
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  FUN_02758d84(&local_f0,&local_118);
  FUN_013b1d1c(param_1,&local_60,param_3,&local_f0);
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar5)(auStack_d0);
  }
  if (local_f8 != (long *)0x0) {
    lVar8 = local_f8[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_f8 + 0x20))();
    }
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


