/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bae97c; name: FUN_02bae97c
 */


void FUN_02bae97c(long param_1,long *param_2,char *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  
  if (*param_2 != 0) {
    FUN_02ba48cc(param_1 + 0x230,*(undefined4 *)(*param_2 + 0xa0));
  }
  local_90 = *(undefined8 *)(param_1 + 8);
  lVar10 = *(long *)(param_1 + 0x58);
  if (lVar10 == 0) {
    FUN_02bb07f0(&local_88,local_90,&local_90);
    lVar10 = local_88;
    local_88 = 0;
    lVar9 = *(long *)(param_1 + 0x58);
    *(long *)(param_1 + 0x58) = lVar10;
    if (lVar9 == 0) {
      *(undefined8 *)(param_1 + 0x68) = uStack_78;
      *(undefined8 *)(param_1 + 0x70) = local_70;
    }
    else {
      FUN_02bcbe58(auStack_68,0);
      FUN_02bacee4(lVar9);
      plVar8 = *(long **)(param_1 + 0x60);
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      uVar11 = *(undefined8 *)(param_1 + 0x70);
      uVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      lVar10 = tpidr_el0;
      if ((uVar7 & 1) == 0) {
LAB_02baea64:
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,uVar2,uVar11);
      }
      else {
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_02baea64;
        FUN_02bcc824(plVar8,lVar9,uVar2,uVar11);
      }
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar5 = *(int *)(lVar10 + 0x38d480) + -1;
      *(int *)(lVar10 + 0x38d480) = iVar5;
      if (iVar5 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar10 + 0x38d484) = 0;
      }
      *(undefined8 *)(param_1 + 0x68) = uStack_78;
      *(undefined8 *)(param_1 + 0x70) = local_70;
      lVar10 = *(long *)(param_1 + 0x58);
    }
    *(undefined8 *)(param_1 + 0x60) = local_80;
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  plVar8 = *(long **)(lVar10 + 0x38);
  param_2 = (long *)*param_2;
  if (plVar8 == param_2) {
    bVar4 = false;
  }
  else {
    if (param_2 != (long *)0x0) {
      plVar8 = param_2 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar8 = *(long **)(lVar10 + 0x38);
    }
    *(long **)(lVar10 + 0x38) = param_2;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        lVar9 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar9 == 1) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    bVar4 = true;
  }
  cVar3 = *(char *)(lVar10 + 0x40);
  if ((cVar3 == '\0') || (*param_3 == '\0')) {
    if (*param_3 == '\0' && cVar3 == '\0') goto LAB_02baeba8;
  }
  else if (*(long *)(lVar10 + 0x48) == *(long *)(param_3 + 8)) {
LAB_02baeba8:
    if ((!bVar4) && (!bVar6)) {
      return;
    }
    goto LAB_02baebc4;
  }
  uVar2 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)param_3;
  *(undefined8 *)(lVar10 + 0x48) = uVar2;
LAB_02baebc4:
  lVar9 = *(long *)(param_1 + 0x240);
  for (lVar10 = *(long *)(param_1 + 0x238); lVar10 != lVar9; lVar10 = lVar10 + 0x18) {
    *(undefined1 *)(lVar10 + 0x10) = 1;
  }
  return;
}


