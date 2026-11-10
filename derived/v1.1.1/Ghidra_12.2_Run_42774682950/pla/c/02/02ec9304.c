/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec9304; name: FUN_02ec9304
 */


void FUN_02ec9304(void)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if (DAT_0440a7e0 == (long *)0x0) {
LAB_02ec939c:
    DAT_0440a7d0 = 0;
    DAT_0440a7d8 = 0;
    DAT_0440a7e0 = (long *)0x0;
    DAT_042aa0e8 = 0x3f8000003f800000;
    if (DAT_0440a5a8 != 0) {
      FUN_02f59e60(0);
      DAT_0440a5a8 = 0;
    }
    if (DAT_0440a7f0 != (undefined *)0x0) {
      DAT_0440a7f8 = 0;
      if (DAT_0440a7f0 != &DAT_0440a7e8) {
        FUN_02f59e70(4);
      }
      DAT_0440a7f0 = (undefined *)0x0;
      DAT_0440a7fc = 0;
    }
    DAT_0440a5b8 = 0;
    DAT_042aa0f4 = 1;
    if (DAT_0440a600 != '\0') {
      DAT_0440a798 = 1;
      nn::os::SignalEvent((EventType *)&DAT_0440a7a0);
      nn::os::WaitThread((ThreadType *)&DAT_0440a5c0);
      FUN_02e719d0(&DAT_0440a5c0);
      DAT_0440a600 = '\0';
    }
    if (DAT_0440a7b0._3_1_ == '\x01') {
      nn::os::FinalizeEvent((EventType *)&DAT_0440a7a0);
    }
    DAT_0440a7b8 = 0;
    DAT_0440a7c0 = 0;
    DAT_0440a7a0 = 0;
    DAT_0440a5b4 = 0;
    DAT_0440a7a8 = 0;
    DAT_0440a7b0 = 0;
    return;
  }
  plVar4 = (long *)0x0;
  plVar3 = DAT_0440a7e0;
  do {
    uVar2 = (**(code **)(*plVar3 + 0x60))(plVar3);
    plVar5 = plVar3;
    if ((uVar2 & 1) == 0) goto LAB_02ec932c;
    plVar6 = (long *)plVar3[1];
    while( true ) {
      bVar1 = plVar3 == (long *)0x0;
      if (plVar6 == (long *)0x0) {
        if (plVar3 != (long *)0x0) {
          (**(code **)*plVar3)(plVar3);
          FUN_02f59e60(0,plVar3);
        }
        goto LAB_02ec939c;
      }
      plVar4 = plVar3;
      plVar5 = plVar6;
      plVar3 = plVar6;
      if (bVar1) break;
LAB_02ec932c:
      plVar3 = plVar4;
      plVar6 = (long *)plVar5[1];
      (**(code **)*plVar5)(plVar5);
      FUN_02f59e60(0,plVar5);
    }
  } while( true );
}


