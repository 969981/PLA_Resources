/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01390a20; name: FUN_01390a20
 */


void FUN_01390a20(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  
  puVar2 = PTR_DAT_0437c680;
  puVar1 = PTR_DAT_0437c678;
  plVar5 = (long *)*param_2;
  if (plVar5 != (long *)*param_3) {
    do {
      plVar5 = (long *)(*(code *)**(undefined8 **)(*plVar5 + 0x50))();
      if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
        uVar4 = FUN_009311a8();
        *(undefined8 *)puVar2 = uVar4;
        __cxa_guard_release(puVar1);
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)puVar2) {
          plVar5 = (long *)*param_2;
          goto LAB_01390a88;
        }
      }
      plVar5 = (long *)(*param_2 + 8);
      *param_2 = (long)plVar5;
    } while (plVar5 != (long *)*param_3);
  }
LAB_01390a88:
  *param_1 = (long)plVar5;
  return;
}


