/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147d4a4; name: FUN_0147d4a4
 */


void FUN_0147d4a4(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x40);
  plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar3 / 0x2e) * 8) + (uVar3 % 0x2e) * 0x58
                     + 0x38);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
    uVar3 = *(ulong *)(param_1 + 0x40);
  }
  *(ulong *)(param_1 + 0x40) = uVar3 + 1;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
  if (uVar3 + 1 < 0x5c) {
    return;
  }
  plVar2 = *(long **)(param_1 + 0x50);
  uVar4 = **(undefined8 **)(param_1 + 8);
  uVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if ((uVar3 & 1) != 0) {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(plVar2,uVar4,0xfd0,8);
      goto LAB_0147d5a0;
    }
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,uVar4,0xfd0,8);
LAB_0147d5a0:
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x2e;
  return;
}


