/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e44d68; name: FUN_01e44d68
 */


void FUN_01e44d68(undefined8 param_1,undefined4 param_2,long *param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_28;
  
  lVar7 = *param_3;
  local_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  FUN_0095aa3c(&local_c8,param_4);
  local_b8 = *(undefined8 *)(param_4 + 0x10);
  local_b0 = (undefined1 *)0x0;
  local_a8 = (code *)0x0;
  local_a0 = (code *)0x0;
  local_98 = (code *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_90[0] = param_2;
  FUN_0095aa3c(&local_88,&local_c8);
  local_78 = local_b8;
  local_b0 = &LAB_01e46b28;
  local_a8 = FUN_01e46f20;
  local_a0 = FUN_01e474f4;
  local_98 = FUN_01e47538;
  pcVar6 = *(code **)(lVar7 + 0x2a8);
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(lVar7 + 0x2b0) = 0;
    *(undefined8 *)(lVar7 + 0x2b8) = 0;
    *(undefined8 *)(lVar7 + 0x2a0) = 0;
    *(undefined8 *)(lVar7 + 0x2a8) = 0;
    (*pcVar6)(lVar7 + 0x2c0);
    if (local_a0 == (code *)0x0) goto LAB_01e44e50;
  }
  (*local_a0)(local_90,lVar7 + 0x2c0);
  *(code **)(lVar7 + 0x2a8) = local_a8;
  *(code **)(lVar7 + 0x2b8) = local_98;
  *(code **)(lVar7 + 0x2b0) = local_a0;
  *(undefined8 *)(lVar7 + 0x2a0) = local_b0;
LAB_01e44e50:
  pcVar6 = local_a8;
  if (local_a8 == (code *)0x0) {
    local_a8 = (code *)0x0;
    puVar4 = local_c8;
  }
  else {
    local_a0 = (code *)0x0;
    local_98 = (code *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar6)(local_90);
    puVar4 = local_c8;
  }
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      puVar4[2] = 0;
      local_c8 = puVar4;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_28 = *puVar4;
      FUN_02a44274(lVar7 + 0xd8,&local_28);
    }
  }
  return;
}


