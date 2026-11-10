/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bafab0; name: FUN_02bafab0
 */


void FUN_02bafab0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  
  local_80 = *(undefined8 *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x58);
  if (lVar6 == 0) {
    FUN_02bb07f0(&local_78,local_80,&local_80);
    lVar6 = local_78;
    local_78 = 0;
    lVar7 = *(long *)(param_1 + 0x58);
    *(long *)(param_1 + 0x58) = lVar6;
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 0x68) = uStack_68;
      *(undefined8 *)(param_1 + 0x70) = local_60;
      *(undefined8 *)(param_1 + 0x60) = local_70;
    }
    else {
      FUN_02bcbe58(auStack_58,0);
      FUN_02bacee4(lVar7);
      plVar1 = *(long **)(param_1 + 0x60);
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      uVar8 = *(undefined8 *)(param_1 + 0x70);
      uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      lVar6 = tpidr_el0;
      if ((uVar5 & 1) == 0) {
LAB_02bafb78:
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,uVar2,uVar8);
      }
      else {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02bafb78;
        FUN_02bcc824(plVar1,lVar7,uVar2,uVar8);
      }
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar3 = *(int *)(lVar6 + 0x38d480) + -1;
      *(int *)(lVar6 + 0x38d480) = iVar3;
      if (iVar3 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar6 + 0x38d484) = 0;
      }
      *(undefined8 *)(param_1 + 0x60) = local_70;
      lVar6 = *(long *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x68) = uStack_68;
      *(undefined8 *)(param_1 + 0x70) = local_60;
    }
    if (lVar6 == 0) goto LAB_02bafc60;
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (*(long *)(lVar6 + 0x90) == *(long *)(lVar6 + 0x88)) {
    if (!bVar4) {
      return;
    }
  }
  else {
    *(long *)(lVar6 + 0x90) = *(long *)(lVar6 + 0x88);
  }
LAB_02bafc60:
  lVar7 = *(long *)(param_1 + 0x240);
  for (lVar6 = *(long *)(param_1 + 0x238); lVar6 != lVar7; lVar6 = lVar6 + 0x18) {
    *(undefined1 *)(lVar6 + 0x10) = 1;
  }
  return;
}


