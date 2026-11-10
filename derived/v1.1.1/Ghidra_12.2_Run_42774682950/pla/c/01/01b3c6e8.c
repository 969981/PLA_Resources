/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b3c6e8; name: FUN_01b3c6e8
 */


void FUN_01b3c6e8(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  FUN_01a7b1c8();
  *param_1 = &PTR_LAB_0423ef88;
  *(undefined1 *)((long)param_1 + 0xbec) = 0;
  param_1[9] = &PTR_LAB_0423f360;
  param_1[10] = &PTR_LAB_0423f440;
  param_1[0x3e] = &PTR_LAB_0423f468;
  param_1[0x40] = &PTR_LAB_0423f4d0;
  param_1[0x42] = &PTR_LAB_0423f528;
  param_1[0x43] = &PTR_LAB_0423f590;
  uVar3 = *(undefined8 *)(param_2 + 0x3a8);
  param_1[0x17e] = *(undefined8 *)(param_2 + 0x3a0);
  uVar6 = *(undefined8 *)(param_2 + 0x3b0);
  uVar4 = *(undefined8 *)(param_2 + 0x3c8);
  uVar5 = *(undefined8 *)(param_2 + 0x3b8);
  param_1[0x182] = *(undefined8 *)(param_2 + 0x3c0);
  param_1[0x180] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 1000);
  uVar7 = *(undefined8 *)(param_2 + 0x3d8);
  uVar8 = *(undefined8 *)(param_2 + 0x3d0);
  param_1[0x186] = *(undefined8 *)(param_2 + 0x3e0);
  param_1[0x184] = uVar8;
  param_1[0x185] = uVar7;
  param_1[0x187] = uVar6;
  param_1[0x181] = uVar5;
  param_1[0x183] = uVar4;
  param_1[0x17f] = uVar3;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  if (*(code **)(param_2 + 0x400) != (code *)0x0) {
    (**(code **)(param_2 + 0x400))(param_2 + 0x410,param_1 + 0x18c);
    uVar3 = *(undefined8 *)(param_2 + 0x3f0);
    uVar4 = *(undefined8 *)(param_2 + 0x3f8);
    uVar5 = *(undefined8 *)(param_2 + 0x408);
    param_1[0x18a] = *(undefined8 *)(param_2 + 0x400);
    param_1[0x18b] = uVar5;
    param_1[0x188] = uVar3;
    param_1[0x189] = uVar4;
  }
  param_1[0x19b] = 0;
  param_1[0x19a] = 0;
  param_1[0x199] = 0;
  param_1[0x198] = 0;
  if (*(code **)(param_2 + 0x480) != (code *)0x0) {
    (**(code **)(param_2 + 0x480))(param_2 + 0x490,param_1 + 0x19c);
    uVar3 = *(undefined8 *)(param_2 + 0x470);
    uVar4 = *(undefined8 *)(param_2 + 0x478);
    uVar5 = *(undefined8 *)(param_2 + 0x488);
    param_1[0x19a] = *(undefined8 *)(param_2 + 0x480);
    param_1[0x19b] = uVar5;
    param_1[0x198] = uVar3;
    param_1[0x199] = uVar4;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x4f0);
  param_1[0x1aa] = 0;
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  param_1[0x1a9] = 0;
  FUN_00b636fc(param_1 + 0x1a9,param_2 + 0x4f8);
  param_1[0x1ac] = 0;
  param_1[0x1ab] = 0;
  FUN_008c4b3c(param_1 + 0x1ab,param_2 + 0x508);
  plVar2 = *(long **)(param_2 + 0x518);
  param_1[0x1ad] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  uVar1 = *(undefined4 *)(param_2 + 0x568);
  param_1[0x1b5] = *(undefined8 *)(param_2 + 0x558);
  uVar3 = *(undefined8 *)(param_2 + 0x548);
  param_1[0x1b1] = *(undefined8 *)(param_2 + 0x538);
  param_1[0x1b3] = uVar3;
  param_1[0x1af] = *(undefined8 *)(param_2 + 0x528);
  param_1[0x1ae] = *(undefined8 *)(param_2 + 0x520);
  uVar3 = *(undefined8 *)(param_2 + 0x530);
  param_1[0x1b2] = *(undefined8 *)(param_2 + 0x540);
  param_1[0x1b0] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x550);
  uVar4 = *(undefined8 *)(param_2 + 0x560);
  *(undefined4 *)(param_1 + 0x1b7) = uVar1;
  param_1[0x1b6] = uVar4;
  param_1[0x1b4] = uVar3;
  uVar4 = *(undefined8 *)(param_2 + 0x598);
  uVar5 = *(undefined8 *)(param_2 + 0x588);
  uVar6 = *(undefined8 *)(param_2 + 0x590);
  param_1[0x1ba] = *(undefined8 *)(param_2 + 0x580);
  uVar7 = *(undefined8 *)(param_2 + 0x5b8);
  uVar8 = *(undefined8 *)(param_2 + 0x5a8);
  uVar9 = *(undefined8 *)(param_2 + 0x5b0);
  param_1[0x1be] = *(undefined8 *)(param_2 + 0x5a0);
  uVar3 = *(undefined8 *)(param_2 + 0x578);
  uVar10 = *(undefined8 *)(param_2 + 0x570);
  param_1[0x1bc] = uVar6;
  param_1[0x1c0] = uVar9;
  param_1[0x1bf] = uVar8;
  param_1[0x1c1] = uVar7;
  param_1[0x1bb] = uVar5;
  param_1[0x1bd] = uVar4;
  param_1[0x1b8] = uVar10;
  param_1[0x1b9] = uVar3;
  uVar4 = *(undefined8 *)(param_2 + 0x5d0);
  uVar5 = *(undefined8 *)(param_2 + 0x5d8);
  uVar6 = *(undefined8 *)(param_2 + 0x5c8);
  param_1[0x1c2] = *(undefined8 *)(param_2 + 0x5c0);
  uVar7 = *(undefined8 *)(param_2 + 0x5f0);
  uVar8 = *(undefined8 *)(param_2 + 0x5f8);
  uVar9 = *(undefined8 *)(param_2 + 0x5e8);
  param_1[0x1c6] = *(undefined8 *)(param_2 + 0x5e0);
  uVar3 = *(undefined8 *)(param_2 + 0x610);
  uVar10 = *(undefined8 *)(param_2 + 0x618);
  uVar11 = *(undefined8 *)(param_2 + 0x608);
  uVar12 = *(undefined8 *)(param_2 + 0x600);
  param_1[0x1c7] = uVar9;
  param_1[0x1c9] = uVar8;
  param_1[0x1c3] = uVar6;
  param_1[0x1c5] = uVar5;
  param_1[0x1c4] = uVar4;
  param_1[0x1c8] = uVar7;
  param_1[0x1ca] = uVar12;
  param_1[0x1cb] = uVar11;
  param_1[0x1cd] = uVar10;
  param_1[0x1cc] = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x628);
  uVar3 = *(undefined8 *)(param_2 + 0x620);
  param_1[0x1d0] = 0;
  param_1[0x1ce] = uVar3;
  *(undefined4 *)(param_1 + 0x1cf) = uVar1;
  param_1[0x1d2] = 0;
  param_1[0x1d1] = 0;
  param_1[0x1d3] = 0;
  return;
}


