/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e758c0; name: FUN_02e758c0
 */


void FUN_02e758c0(void)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  
  DAT_0440a30c = 0;
  if (DAT_0440a128 != 0) {
    FUN_02e8618c();
  }
  if (DAT_0440a148 != (long *)0x0) {
    (**(code **)(*DAT_0440a148 + 0x38))();
  }
  if (DAT_0440a180 != 0) {
    FUN_02ec4f70();
  }
  if (DAT_0440a320 != 0) {
    FUN_02e79b38();
  }
  FUN_02f1395c();
  if (0 < (int)DAT_0440a2a8) {
    lVar4 = (ulong)((int)DAT_0440a2a8 - 1) * 0x18;
    iVar3 = (int)DAT_0440a2a8;
    do {
      iVar3 = iVar3 + -1;
      pcVar5 = *(code **)(DAT_0440a2a0 + lVar4);
      if (((DAT_0440a318 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0440a318), iVar2 != 0)) {
        DAT_0440a310 = &PTR_LAB_042a7050;
        __cxa_guard_release(&DAT_0440a318);
      }
      (*pcVar5)(&DAT_0440a310,0x80,*(undefined8 *)(DAT_0440a2a0 + lVar4 + 8));
      lVar4 = lVar4 + -0x18;
    } while (0 < iVar3);
  }
  if (DAT_0440a230 != 0) {
    DAT_0440a238._0_4_ = 0;
    FUN_02f59e60(0);
    DAT_0440a230 = 0;
    DAT_0440a238._4_4_ = 0;
  }
  if (DAT_0440a240 != 0) {
    DAT_0440a248._0_4_ = 0;
    FUN_02f59e60(0);
    DAT_0440a240 = 0;
    DAT_0440a248._4_4_ = 0;
  }
  if (DAT_0440a250 != 0) {
    DAT_0440a258._0_4_ = 0;
    FUN_02f59e60(0);
    DAT_0440a250 = 0;
    DAT_0440a258._4_4_ = 0;
  }
  if (DAT_0440a260 != 0) {
    DAT_0440a268._0_4_ = 0;
    FUN_02f59e60(0);
    DAT_0440a260 = 0;
    DAT_0440a268._4_4_ = 0;
  }
  if (DAT_0440a270 != 0) {
    DAT_0440a278._0_4_ = 0;
    FUN_02f59e60(0);
    DAT_0440a270 = 0;
    DAT_0440a278._4_4_ = 0;
  }
  if (DAT_0440a280 != 0) {
    DAT_0440a288._0_4_ = 0;
    FUN_02f59e60(0);
    DAT_0440a280 = 0;
    DAT_0440a288._4_4_ = 0;
  }
  if (DAT_0440a290 != 0) {
    DAT_0440a298._0_4_ = 0;
    FUN_02f59e60(0);
    DAT_0440a290 = 0;
    DAT_0440a298._4_4_ = 0;
  }
  if (DAT_0440a2a0 != 0) {
    DAT_0440a2a8._0_4_ = 0;
    FUN_02f59e60(0);
    DAT_0440a2a0 = 0;
    DAT_0440a2a8._4_4_ = 0;
  }
  if (DAT_0440a2b0 != 0) {
    DAT_0440a2b8._0_4_ = 0;
    FUN_02f59e60(0);
    DAT_0440a2b0 = 0;
    DAT_0440a2b8._4_4_ = 0;
  }
  if (DAT_0440a2c0 != 0) {
    DAT_0440a2c8._0_4_ = 0;
    FUN_02f59e60(0);
    DAT_0440a2c0 = 0;
    DAT_0440a2c8._4_4_ = 0;
  }
  if (DAT_0440a2d0 != 0) {
    DAT_0440a2d8._0_4_ = 0;
    FUN_02f59e60(0);
    DAT_0440a2d0 = 0;
    DAT_0440a2d8._4_4_ = 0;
  }
  FUN_02f0f764();
  if (DAT_0440a128 != 0) {
    FUN_02e7d704();
    FUN_02e75d60(DAT_0440a128);
    DAT_0440a128 = 0;
  }
  if (DAT_0440a148 != (long *)0x0) {
    (**(code **)(*DAT_0440a148 + 0x18))();
    plVar1 = DAT_0440a148;
    if (DAT_0440a148 != (long *)0x0) {
      (**(code **)*DAT_0440a148)(DAT_0440a148);
      FUN_02f59e60(0x10,plVar1);
    }
    DAT_0440a148 = (long *)0x0;
  }
  if (DAT_0440a120 != 0) {
    FUN_02e7d084();
    FUN_02e7d20c(DAT_0440a120);
  }
  if (DAT_0440a300 != 0) {
    FUN_02f59e60(0x10);
    DAT_0440a300 = 0;
  }
  if (DAT_0440a158 != 0) {
    FUN_02edc3a4();
    FUN_02e75d90(DAT_0440a158);
    DAT_0440a158 = 0;
  }
  if (DAT_0440a150 != 0) {
    FUN_02f0ec78();
    if (DAT_0440a150 != 0) {
      FUN_02f59e60(0x10);
    }
    DAT_0440a150 = 0;
  }
  if (DAT_0440a140 != 0) {
    FUN_02ef1c9c();
    FUN_02e75dc0(DAT_0440a140);
    DAT_0440a140 = 0;
  }
  if (DAT_0440a170 != 0) {
    FUN_02edcbe4();
    FUN_02e75df0(DAT_0440a170);
    DAT_0440a170 = 0;
  }
  if (DAT_0440a178 != 0) {
    FUN_02ede1f8();
    FUN_02e75e40(DAT_0440a178);
    DAT_0440a178 = 0;
  }
  if (DAT_0440a168 != 0) {
    FUN_02eacea0();
    if (DAT_0440a168 != 0) {
      FUN_02f59e60(0x10);
    }
    DAT_0440a168 = 0;
  }
  if (DAT_0440a130 != 0) {
    FUN_02f0c314();
    FUN_02e75e80(DAT_0440a130);
    DAT_0440a130 = 0;
  }
  if (DAT_0440a138 != 0) {
    FUN_02f059b0();
    FUN_02e75eb0(DAT_0440a138);
    DAT_0440a138 = 0;
  }
  if (DAT_0440a160 != 0) {
    FUN_02edf8b8();
    FUN_02e75ee0(DAT_0440a160);
    DAT_0440a160 = 0;
  }
  if (DAT_0440a180 != 0) {
    FUN_02ec4f34();
    FUN_02e75f10(DAT_0440a180);
    DAT_0440a180 = 0;
  }
  if (DAT_0440a120 != 0) {
    FUN_02e7ce20();
    FUN_02e75f40(DAT_0440a120);
    DAT_0440a120 = 0;
  }
  FUN_02e71e10();
  FUN_02ee8c18();
  FUN_02ea6390();
  return;
}


