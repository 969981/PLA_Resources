/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb7688; name: FUN_02bb7688
 */


void FUN_02bb7688(long param_1,char *param_2,char *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 local_98;
  undefined8 uStack_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = local_98;
  if (*(long *)(param_1 + 400) == 0) {
    FUN_02bb93c0(&local_88,local_98,&uStack_90);
    pcVar8 = local_88;
    local_88 = (char *)0x0;
    lVar9 = *(long *)(param_1 + 400);
    *(char **)(param_1 + 400) = pcVar8;
    if (lVar9 != 0) {
      FUN_02bcbe58(auStack_68,0);
      FUN_02bad2b8(lVar9);
      plVar1 = *(long **)(param_1 + 0x198);
      uVar2 = *(undefined8 *)(param_1 + 0x1a0);
      uVar12 = *(undefined8 *)(param_1 + 0x1a8);
      uVar7 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      lVar10 = tpidr_el0;
      if ((uVar7 & 1) == 0) {
LAB_02bb7768:
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar9,uVar2,uVar12);
      }
      else {
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_02bb7768;
        FUN_02bcc824(plVar1,lVar9,uVar2,uVar12);
      }
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar4 = *(int *)(lVar10 + 0x38d480) + -1;
      *(int *)(lVar10 + 0x38d480) = iVar4;
      if (iVar4 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar10 + 0x38d484) = 0;
      }
    }
    bVar6 = true;
    *(undefined8 *)(param_1 + 0x1a0) = uStack_78;
    *(undefined8 *)(param_1 + 0x1a8) = local_70;
    *(undefined8 *)(param_1 + 0x198) = local_80;
    pcVar8 = *(char **)(param_1 + 0x1b0);
    if (pcVar8 != (char *)0x0) goto LAB_02bb76cc;
LAB_02bb7820:
    FUN_02bb99a0(&local_88,*(undefined8 *)(param_1 + 8),&local_98);
    pcVar8 = local_88;
    local_88 = (char *)0x0;
    lVar9 = *(long *)(param_1 + 0x1b0);
    *(char **)(param_1 + 0x1b0) = pcVar8;
    if (lVar9 == 0) {
      *(undefined8 *)(param_1 + 0x1c0) = uStack_78;
      *(undefined8 *)(param_1 + 0x1c8) = local_70;
      *(undefined8 *)(param_1 + 0x1b8) = local_80;
    }
    else {
      FUN_02bade94(param_1 + 0x1b8);
      *(undefined8 *)(param_1 + 0x1c0) = uStack_78;
      *(undefined8 *)(param_1 + 0x1c8) = local_70;
      *(undefined8 *)(param_1 + 0x1b8) = local_80;
      pcVar8 = *(char **)(param_1 + 0x1b0);
    }
    bVar5 = true;
  }
  else {
    bVar6 = false;
    pcVar8 = *(char **)(param_1 + 0x1b0);
    if (pcVar8 == (char *)0x0) goto LAB_02bb7820;
LAB_02bb76cc:
    bVar5 = false;
  }
  if (*pcVar8 == '\0' || *param_2 == '\0') {
    if (*param_2 == '\0' && *pcVar8 == '\0') goto LAB_02bb78bc;
LAB_02bb789c:
    uVar2 = *(undefined8 *)(param_2 + 8);
    bVar11 = 0;
    *(undefined8 *)pcVar8 = *(undefined8 *)param_2;
    *(undefined8 *)(pcVar8 + 8) = uVar2;
  }
  else {
    if (*(long *)(pcVar8 + 8) != *(long *)(param_2 + 8)) goto LAB_02bb789c;
LAB_02bb78bc:
    bVar11 = 1;
  }
  cVar3 = pcVar8[0x10];
  if ((cVar3 == '\0') || (*param_3 == '\0')) {
    if (*param_3 == '\0' && cVar3 == '\0') goto LAB_02bb78e4;
  }
  else if (*(long *)(pcVar8 + 0x18) == *(long *)(param_3 + 8)) {
LAB_02bb78e4:
    if (((bool)(!bVar5 & bVar11)) && (!bVar6)) {
      return;
    }
    goto LAB_02bb790c;
  }
  uVar2 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(pcVar8 + 0x10) = *(undefined8 *)param_3;
  *(undefined8 *)(pcVar8 + 0x18) = uVar2;
LAB_02bb790c:
  lVar10 = *(long *)(param_1 + 0x240);
  for (lVar9 = *(long *)(param_1 + 0x238); lVar9 != lVar10; lVar9 = lVar9 + 0x18) {
    *(undefined1 *)(lVar9 + 0x10) = 1;
  }
  return;
}


