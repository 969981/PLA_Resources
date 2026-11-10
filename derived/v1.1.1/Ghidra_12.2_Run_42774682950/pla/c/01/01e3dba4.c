/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e3dba4; name: FUN_01e3dba4
 */


void FUN_01e3dba4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long local_38;
  undefined8 *local_30;
  
  FUN_01e3dce0(&local_38);
  lVar2 = local_38;
  uVar3 = FUN_01e3dd74(param_1,local_38);
  local_38 = 0;
  if ((lVar2 != 0) && ((uVar3 & 1) == 0)) {
    plVar4 = (long *)*local_30;
    uVar3 = (**(code **)(*plVar4 + 0xc0))(plVar4);
    if ((uVar3 & 1) != 0) {
      lVar1 = tpidr_el0;
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar4,lVar2,0x20,8);
        return;
      }
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar2,0x20,8);
  }
  return;
}


