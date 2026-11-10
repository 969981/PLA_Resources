/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028677e4; name: FUN_028677e4
 */


void FUN_028677e4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x2cf0);
  plVar4 = (long *)(*(code *)**(undefined8 **)(lVar7 + 0x50))((undefined8 *)(lVar7 + 0x50));
  puVar2 = PTR_DAT_0437b518;
  puVar1 = PTR_DAT_0437b510;
  if (((*PTR_DAT_0437b510 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437b510), iVar3 != 0))
  {
    uVar5 = FUN_00d8faf4();
    *(undefined8 *)puVar2 = uVar5;
    __cxa_guard_release(PTR_DAT_0437b510);
  }
  for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    if (plVar4 == (long *)puVar2) {
      pcVar6 = *(code **)(lVar7 + 0x3a8);
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)(lVar7 + 0x3b8) = 0;
        *(undefined8 *)(lVar7 + 0x3b0) = 0;
        *(undefined8 *)(lVar7 + 0x3a8) = 0;
        *(undefined8 *)(lVar7 + 0x3a0) = 0;
        (*pcVar6)(lVar7 + 0x3c0);
      }
      break;
    }
  }
  lVar7 = *(long *)(param_1 + 0x2cf8);
  plVar4 = (long *)(*(code *)**(undefined8 **)(lVar7 + 0x50))((undefined8 *)(lVar7 + 0x50));
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437b510), iVar3 != 0)) {
    uVar5 = FUN_00d8faf4();
    *(undefined8 *)puVar2 = uVar5;
    __cxa_guard_release(PTR_DAT_0437b510);
  }
  for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    if (plVar4 == (long *)puVar2) {
      pcVar6 = *(code **)(lVar7 + 0x3a8);
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)(lVar7 + 0x3b8) = 0;
        *(undefined8 *)(lVar7 + 0x3b0) = 0;
        *(undefined8 *)(lVar7 + 0x3a8) = 0;
        *(undefined8 *)(lVar7 + 0x3a0) = 0;
        (*pcVar6)(lVar7 + 0x3c0);
      }
      break;
    }
  }
  lVar7 = *(long *)(param_1 + 0x2d00);
  plVar4 = (long *)(*(code *)**(undefined8 **)(lVar7 + 0x50))((undefined8 *)(lVar7 + 0x50));
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437b510), iVar3 != 0)) {
    uVar5 = FUN_00d8faf4();
    *(undefined8 *)puVar2 = uVar5;
    __cxa_guard_release(PTR_DAT_0437b510);
  }
  do {
    if (plVar4 == (long *)0x0) {
LAB_0286789c:
      *(undefined4 *)(param_1 + 0x2d08) = 0;
      return;
    }
    if (plVar4 == (long *)puVar2) {
      pcVar6 = *(code **)(lVar7 + 0x3a8);
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)(lVar7 + 0x3b8) = 0;
        *(undefined8 *)(lVar7 + 0x3b0) = 0;
        *(undefined8 *)(lVar7 + 0x3a8) = 0;
        *(undefined8 *)(lVar7 + 0x3a0) = 0;
        (*pcVar6)(lVar7 + 0x3c0);
      }
      goto LAB_0286789c;
    }
    plVar4 = (long *)*plVar4;
  } while( true );
}


