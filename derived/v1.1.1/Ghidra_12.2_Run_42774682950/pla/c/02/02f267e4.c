/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f267e4; name: FUN_02f267e4
 */


void FUN_02f267e4(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_042ac498;
  param_1[0x15] = &PTR_LAB_042ac5e8;
  FUN_02f26970();
  plVar2 = (long *)param_1[100];
  if (plVar2 != (long *)0x0) {
    plVar4 = (long *)plVar2[0xc];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,&PTR_PTR_042a9250);
      *(undefined8 *)(param_1[100] + 0x60) = 0;
      plVar2 = (long *)param_1[100];
    }
    (**(code **)(*plVar2 + 0x28))();
    *(undefined4 *)(param_1[100] + 0x68) = 0xffffffff;
    puVar5 = (undefined8 *)param_1[100];
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5);
      (*DAT_0442d150)(5,puVar5);
      param_1[100] = 0;
      lVar3 = param_1[0x65];
      goto joined_r0x02f268f0;
    }
  }
  lVar3 = param_1[0x65];
joined_r0x02f268f0:
  if (lVar3 == 0) {
    puVar5 = (undefined8 *)param_1[99];
  }
  else {
    if (*(uint *)(param_1 + 0x66) != 0) {
      lVar6 = (ulong)*(uint *)(param_1 + 0x66) << 5;
      lVar3 = lVar3 + 8;
      do {
        FUN_02f19760(lVar3);
        lVar6 = lVar6 + -0x20;
        lVar3 = lVar3 + 0x20;
      } while (lVar6 != 0);
      lVar3 = param_1[0x65];
    }
    *(undefined4 *)(param_1 + 0x66) = 0;
    (*DAT_0442d150)(0,lVar3);
    param_1[0x65] = 0;
    *(undefined4 *)((long)param_1 + 0x334) = 0;
    puVar5 = (undefined8 *)param_1[99];
  }
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (*DAT_0442d150)(5,puVar5);
    param_1[99] = 0;
  }
  puVar1 = PTR_FUN_042a9630;
  param_1[0x46] = &PTR_LAB_042a9608;
  (*(code *)puVar1)(param_1 + 0x46);
  param_1[0x36] = &PTR_LAB_042a9608;
  (*(code *)puVar1)(param_1 + 0x36);
  param_1[0x26] = &PTR_LAB_042a9608;
  (*(code *)puVar1)(param_1 + 0x26);
  param_1[0x16] = &PTR_LAB_042a9608;
  (*(code *)puVar1)();
  FUN_02f244ac(param_1);
  return;
}


