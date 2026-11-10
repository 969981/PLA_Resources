/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00882154; name: FUN_00882154
 */


void FUN_00882154(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long local_90;
  long *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  
  local_70 = *(undefined8 *)(param_1 + 8);
  local_68 = *(undefined8 *)(*(long *)(param_1 + 0x2b68) + 0x98);
  local_60 = FUN_02940e84(*(undefined8 *)(param_1 + 0x58));
  FUN_00882460(&local_90,*(undefined8 *)(param_1 + 8),&local_70);
  FUN_00882570(param_1 + 0x2b70,&local_90);
  lVar3 = local_90;
  local_90 = 0;
  if (lVar3 == 0) {
    return;
  }
  FUN_02bcbe58(auStack_58,0);
  FUN_00883f8c(lVar3);
  uVar4 = (**(code **)(*local_88 + 0xc0))(local_88);
  lVar2 = tpidr_el0;
  if ((uVar4 & 1) != 0) {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(local_88,lVar3,uStack_80,local_78);
      goto LAB_00882264;
    }
  }
  (**(code **)(*local_88 + 0x18))(local_88,lVar3,uStack_80,local_78);
LAB_00882264:
  if (*(char *)(lVar2 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar2 + 0x38d488) = 1;
    *(undefined8 *)(lVar2 + 0x38d478) = 0;
    *(undefined8 *)(lVar2 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
  *(int *)(lVar2 + 0x38d480) = iVar1;
  if (iVar1 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar2 + 0x38d484) = 0;
  }
  return;
}


