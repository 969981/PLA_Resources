/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f54dec; name: FUN_01f54dec
 */


void FUN_01f54dec(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  uVar2 = *(long *)(param_1 + 0x40) + 1;
  *(ulong *)(param_1 + 0x40) = uVar2;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
  if (uVar2 < 0x2aa) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x50);
  uVar3 = **(undefined8 **)(param_1 + 8);
  uVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4);
  if ((uVar2 & 1) != 0) {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(plVar4,uVar3,0xffc,4);
      goto LAB_01f54ea8;
    }
  }
  (**(code **)(*plVar4 + 0x18))(plVar4,uVar3,0xffc,4);
LAB_01f54ea8:
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x155;
  return;
}


