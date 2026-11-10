/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03008de4; name: FUN_03008de4
 */


void FUN_03008de4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &DAT_042b13b8;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  puVar1 = param_1 + 3;
  do {
    *puVar1 = FUN_03009104;
    puVar1[1] = FUN_03009130;
    puVar1[2] = &LAB_03009160;
    puVar1[3] = &LAB_0300919c;
    puVar1[4] = &LAB_030091c8;
    puVar1[5] = &LAB_030091f4;
    puVar1[6] = &LAB_03009224;
    puVar1[7] = &LAB_03009254;
    puVar1[8] = &LAB_03009288;
    puVar1[9] = &LAB_030092bc;
    puVar1[10] = &LAB_030092e8;
    puVar1[0xb] = &LAB_03009314;
    puVar1[0xc] = &LAB_03009340;
    puVar1[0xd] = &LAB_03009348;
    puVar1[0xe] = &LAB_03009364;
    puVar1[0xf] = &LAB_03009390;
    puVar1 = puVar1 + 0x10;
  } while (puVar1 != param_1 + 0x403);
  FUN_030082d0();
  return;
}


