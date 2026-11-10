/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0275c3bc; name: FUN_0275c3bc
 */


void FUN_0275c3bc(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  FUN_02cbb4a0();
  plVar1 = (long *)FUN_027812ec();
  lVar2 = *plVar1;
  *(long *)PTR_DAT_0437b478 = lVar2;
  if (lVar2 != 0) {
    FUN_02cc79a0();
  }
  plVar1 = (long *)FUN_013b2b18();
  lVar2 = *plVar1;
  *(long *)PTR_DAT_0437b480 = lVar2;
  if (lVar2 != 0) {
    FUN_02cc4e90();
  }
  if (DAT_043ea508 != 0) {
    FUN_02ccb8b8();
  }
  if (((DAT_043ea520 & 0xfffffffe) == 2) && (uVar3 = FUN_02cb8cb0(), (uVar3 & 1) == 0)) {
    DAT_043ea520 = 4;
  }
  if ((DAT_043ea520 == DAT_043ea524) ||
     (DAT_043ea524 = DAT_043ea520, DAT_043ea518 == (undefined8 *)0x0)) {
    lVar2 = *(long *)(param_1 + 0xa0);
  }
  else {
    (**(code **)*DAT_043ea518)();
    lVar2 = *(long *)(param_1 + 0xa0);
  }
  if (lVar2 != 0) {
    plVar1 = *(long **)(param_1 + 0x98);
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar1)();
    }
    if (lVar2 != 1) {
      if ((undefined8 *)plVar1[1] != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)plVar1[1])();
      }
      if (lVar2 != 2) {
        if ((undefined8 *)plVar1[2] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar1[2])();
        }
        if (lVar2 != 3) {
          plVar1 = plVar1 + 3;
          lVar2 = lVar2 * 8 + -0x18;
          do {
            if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)*plVar1)();
            }
            plVar1 = plVar1 + 1;
            lVar2 = lVar2 + -8;
          } while (lVar2 != 0);
        }
      }
    }
  }
  return;
}


