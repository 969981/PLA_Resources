/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03048498; name: FUN_03048498
 */


void FUN_03048498(undefined4 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  *param_1 = 0x1d00;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2 + 0x38);
    lVar2 = lVar2 + 0x68;
    puVar1[6] = &LAB_03048580;
    puVar1[-6] = &LAB_03048580;
    puVar1[-5] = &LAB_03048580;
    puVar1[-4] = &LAB_03048580;
    puVar1[-3] = &LAB_03048580;
    puVar1[-2] = &LAB_03048580;
    puVar1[-1] = &LAB_03048580;
    *puVar1 = &LAB_03048580;
    puVar1[1] = &LAB_03048580;
    puVar1[2] = &LAB_03048580;
    puVar1[3] = &LAB_03048580;
    puVar1[4] = &LAB_03048580;
    puVar1[5] = &LAB_03048580;
  } while (lVar2 != 0x548);
  *(undefined1 **)(param_1 + 0x36) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0x1a) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0x1c) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 2) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 4) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0x50) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0x6a) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0x84) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0x9e) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0xb8) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0xd2) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0xec) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0x106) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0x120) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0x13a) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 6) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 8) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 10) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0xc) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0xe) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0x10) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0x12) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0x14) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0x16) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0x18) = &LAB_030485f0;
  *(undefined1 **)(param_1 + 0x3a) = &LAB_03048d2c;
  *(code **)(param_1 + 0x3c) = FUN_03049554;
  *(code **)(param_1 + 0x3e) = FUN_0304978c;
  *(code **)(param_1 + 0x58) = FUN_0304978c;
  *(undefined1 **)(param_1 + 0x54) = &LAB_03048600;
  *(code **)(param_1 + 0x56) = FUN_030499bc;
  *(undefined1 **)(param_1 + 0x6e) = &LAB_03048620;
  *(undefined1 **)(param_1 + 0x70) = &LAB_03048620;
  return;
}


