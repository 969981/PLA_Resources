/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ae2bd4; name: FUN_01ae2bd4
 */


void FUN_01ae2bd4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  
  FUN_01a6fbe4();
  *param_1 = &PTR_FUN_0423d710;
  param_1[9] = &PTR_LAB_0423d888;
  param_1[10] = &PTR_LAB_0423d968;
  param_1[0xb4] = &PTR_LAB_0423d990;
  param_1[0xb5] = &PTR_LAB_0423d9d8;
  FUN_01ae2df0(param_1 + 0xb6,param_2);
  *(undefined1 *)(param_1 + 0xfe) = 0;
  *(undefined1 *)(param_1 + 0x105) = 0;
  *(undefined1 *)((long)param_1 + 0x82c) = 0;
  *(undefined4 *)((long)param_1 + 0x834) = 0;
  *(undefined4 *)((long)param_1 + 0x837) = 0;
  uVar1 = *(undefined8 *)PTR_DAT_04379570;
  uVar2 = *(undefined8 *)(PTR_DAT_04379570 + 8);
  param_1[0x109] = uVar2;
  param_1[0x10b] = uVar2;
  param_1[0x108] = uVar1;
  param_1[0x10a] = uVar1;
  param_1[0x10c] = 0x3f80000000000000;
  param_1[0x10e] = PTR_DAT_0437a000 + 0x10;
  if (((DAT_043f1fd0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_043f1fd0), iVar5 != 0)) {
    nn::os::InitializeLightEvent(&DAT_043f1fbc,0,1);
    DAT_043f1fc8 = 0;
    FUN_00100250(PTR_LAB_04381908,&DAT_043f1fb8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043f1fd0);
  }
  lVar6 = nn::os::GetCurrentThread();
  do {
    if (DAT_043f1fc8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)&DAT_043f1fbc);
        while (DAT_043f1fc8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(0x43f1fc8,0x10);
          if (bVar4) {
            cVar3 = ExclusiveMonitorsStatus();
            DAT_043f1fc8 = lVar6;
          }
          if (cVar3 == '\0') goto LAB_01ae2cd0;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x43f1fc8,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      DAT_043f1fc8 = lVar6;
    }
  } while (cVar3 != '\0');
LAB_01ae2cd0:
  if (0xff < DAT_043f1fb0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  (&DAT_043f17b0)[DAT_043f1fb0] = param_1 + 0x10e;
  DAT_043f1fb0 = DAT_043f1fb0 + 1;
  DAT_043f1fc8 = 0;
  nn::os::SignalLightEvent((LightEventType *)&DAT_043f1fbc);
  param_1[0x10e] = &PTR_LAB_0423db28;
  *(undefined1 *)(param_1 + 0x11d) = 1;
  *(undefined4 *)((long)param_1 + 0x8e4) = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  *(undefined1 *)(param_1 + 0x11c) = 0;
  param_1[0x11f] = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined2 *)((long)param_1 + 0x8f4) = 0;
  *(undefined8 *)((long)param_1 + 0x8ec) = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x90c,0,1);
  param_1[0x123] = 0;
  return;
}


