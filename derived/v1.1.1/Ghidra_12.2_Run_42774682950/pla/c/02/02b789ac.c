/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b789ac; name: FUN_02b789ac
 */


void FUN_02b789ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  FUN_02b8b6bc();
  *param_1 = &PTR_LAB_04285dc8;
  memset(param_1 + 0xc14,0,0x201);
  nn::os::InitializeLightEvent((long)param_1 + 0x62b4,0,1);
  puVar1 = param_1 + 0xc59;
  param_1[0xc58] = 0;
  FUN_02b78db8(puVar1);
  puVar2 = param_1 + 0xc60;
  FUN_02b78db8(puVar2);
  puVar3 = param_1 + 0xc67;
  FUN_02b78db8(puVar3);
  *(undefined4 *)(param_1 + 0xc6e) = 0;
  lVar7 = param_1[0xc59];
  if (lVar7 != 0) {
    lVar6 = param_1[0xc5b];
    param_1[0xc5a] = lVar7;
    plVar8 = (long *)param_1[0xc5c];
    uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar5 & 1) == 0) {
LAB_02b78abc:
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar7,lVar6 - lVar7,8);
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02b78abc;
      FUN_02bcc824(plVar8,lVar7,lVar6 - lVar7,8);
    }
    param_1[0xc5a] = 0;
    param_1[0xc5b] = 0;
    *puVar1 = 0;
  }
  param_1[0xc5c] = param_2;
  param_1[0xc5e] = 0;
  param_1[0xc5d] = 0xfffffffffffffff;
  *(undefined4 *)(param_1 + 0xc5f) = 0;
  *puVar1 = 0;
  param_1[0xc5a] = 0;
  param_1[0xc5b] = 0;
  lVar7 = param_1[0xc60];
  if (lVar7 != 0) {
    lVar6 = param_1[0xc62];
    param_1[0xc61] = lVar7;
    plVar8 = (long *)param_1[0xc63];
    uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar5 & 1) == 0) {
LAB_02b78b6c:
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar7,lVar6 - lVar7,8);
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02b78b6c;
      FUN_02bcc824(plVar8,lVar7,lVar6 - lVar7,8);
    }
    param_1[0xc61] = 0;
    param_1[0xc62] = 0;
    *puVar2 = 0;
  }
  param_1[0xc63] = param_2;
  param_1[0xc64] = 0xfffffffffffffff;
  param_1[0xc65] = 0;
  *(undefined4 *)(param_1 + 0xc66) = 0;
  *puVar2 = 0;
  param_1[0xc61] = 0;
  param_1[0xc62] = 0;
  lVar7 = param_1[0xc67];
  if (lVar7 == 0) goto LAB_02b78c3c;
  lVar6 = param_1[0xc69];
  param_1[0xc68] = lVar7;
  plVar8 = (long *)param_1[0xc6a];
  uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  if ((uVar5 & 1) == 0) {
LAB_02b78c18:
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar7,lVar6 - lVar7,8);
  }
  else {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02b78c18;
    FUN_02bcc824(plVar8,lVar7,lVar6 - lVar7,8);
  }
  param_1[0xc68] = 0;
  param_1[0xc69] = 0;
  *puVar3 = 0;
LAB_02b78c3c:
  param_1[0xc6a] = param_2;
  param_1[0xc6c] = 0;
  param_1[0xc6b] = 0xfffffffffffffff;
  *(undefined4 *)(param_1 + 0xc6d) = 0;
  *puVar3 = 0;
  param_1[0xc68] = 0;
  param_1[0xc69] = 0;
  return;
}


