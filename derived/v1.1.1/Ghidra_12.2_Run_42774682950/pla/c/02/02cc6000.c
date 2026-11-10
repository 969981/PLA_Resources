/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc6000; name: _INIT_427
 */


void _INIT_427(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  DAT_04408ae8 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04408aec = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04408af0 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04408afc = 0;
  DAT_04408af8 = 0;
  DAT_04408b04 = 0xffff;
  DAT_04408b00 = 0xffffffff;
  DAT_04408b08 = (undefined **)(PTR_DAT_0437a000 + 0x10);
  if (((DAT_043f1fd0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043f1fd0), iVar3 != 0)) {
    nn::os::InitializeLightEvent(&DAT_043f1fbc,0,1);
    DAT_043f1fc8 = 0;
    FUN_00100250(PTR_LAB_04381908,&DAT_043f1fb8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043f1fd0);
  }
  lVar4 = nn::os::GetCurrentThread();
  do {
    if (DAT_043f1fc8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)&DAT_043f1fbc);
        while (DAT_043f1fc8 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x43f1fc8,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            DAT_043f1fc8 = lVar4;
          }
          if (cVar1 == '\0') goto LAB_02cc60f8;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x43f1fc8,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_043f1fc8 = lVar4;
    }
  } while (cVar1 != '\0');
LAB_02cc60f8:
  if (0xff < DAT_043f1fb0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  (&DAT_043f17b0)[DAT_043f1fb0] = &DAT_04408b08;
  DAT_043f1fb0 = DAT_043f1fb0 + 1;
  DAT_043f1fc8 = 0;
  nn::os::SignalLightEvent((LightEventType *)&DAT_043f1fbc);
  DAT_04408b88 = 0;
  DAT_04408b08 = &PTR_LAB_04296bf0;
  DAT_04408b10 = 0;
  DAT_04408b18 = 0;
  DAT_04408b20 = 0;
  DAT_04408b28 = 0;
  DAT_04408b30 = 0;
  DAT_04408b38 = 0;
  DAT_04408b40 = 0;
  DAT_04408b48 = 0;
  DAT_04408b50 = 0;
  DAT_04408b58 = 0;
  DAT_04408b60 = 0;
  DAT_04408b68 = 0;
  DAT_04408b70 = 0;
  DAT_04408b78 = 0;
  DAT_04408b80 = 0;
  FUN_00100250(&LAB_02cc44c4,&DAT_04408b08,&PTR_LOOP_0411a000);
  return;
}


