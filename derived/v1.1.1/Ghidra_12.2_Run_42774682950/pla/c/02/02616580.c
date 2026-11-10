/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02616580; name: FUN_02616580
 */


long * FUN_02616580(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_0437a6e0;
  puVar1 = PTR_DAT_0437a6d8;
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *param_1;
  do {
    if (lVar6 != 0) {
      plVar4 = (long *)(*(code *)**(undefined8 **)(lVar6 + 8))((undefined8 *)(lVar6 + 8));
      if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
        uVar5 = FUN_00ad3750();
        *(undefined8 *)puVar2 = uVar5;
        __cxa_guard_release(puVar1);
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)puVar2) {
          if (*(long *)*param_3 == lVar6 + -0x48) {
            return param_1;
          }
          break;
        }
      }
    }
    param_1 = param_1 + 1;
    if (param_1 == param_2) {
      return param_2;
    }
    lVar6 = *param_1;
  } while( true );
}


