/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03328c70; name: _INIT_1658
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1658(void)

{
  DAT_0444b320 = "Register hkLog Sources";
  DAT_0444b328 = &LAB_03325e50;
  DAT_0444b330 = &LAB_03325e90;
  DAT_0444b338 = &DAT_0444b318;
  DAT_0444b340 = DAT_0444b3c0;
  DAT_0444b3c0 = &DAT_0444b320;
  nn::os::InitializeMutex((MutexType *)&DAT_0444b348,true,0);
  FUN_00100250(PTR_LAB_04389380,&DAT_0444b348,&PTR_LOOP_0411a000);
  DAT_0444b3bc = DAT_04350fbc;
  DAT_04350fbc = DAT_04350fbc + 1;
  DAT_0444b378 = &DAT_03aad864;
  DAT_0444b368 = 0;
  _DAT_0444b370 = 0x8000000000000000;
  DAT_0444b380 = 0;
  FUN_00100250(&LAB_0332644c,&DAT_0444b368,&PTR_LOOP_0411a000);
  DAT_0444b388 = 0;
  FUN_00100250(&LAB_033265ac,&DAT_0444b388,&PTR_LOOP_0411a000);
  DAT_0444b3b8 = DAT_04350fbc;
  DAT_0444b390 = "$Registry";
  DAT_0444b398 = &LAB_033265c0;
  DAT_0444b3b0 = DAT_0444b3c0;
  DAT_0444b3a0 = &LAB_033265e0;
  DAT_0444b3a8 = &DAT_0444b388;
  DAT_0444b3c0 = &DAT_0444b390;
  DAT_04350fbc = DAT_04350fbc + 1;
  return;
}


