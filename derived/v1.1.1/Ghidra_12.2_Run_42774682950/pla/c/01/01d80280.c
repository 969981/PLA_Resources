/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d80280; name: FUN_01d80280
 */


long FUN_01d80280(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  long *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  
  FUN_00ae8374();
  FUN_00af7e30(param_1 + 0x10,param_2 + 0x10);
  FUN_01435a5c(param_1 + 0x20,param_2 + 0x20);
  FUN_00bd10a0(param_1 + 0x30,param_2 + 0x30);
  FUN_00cf98c8(param_1 + 0x40,param_2 + 0x40);
  FUN_018310a4(param_1 + 0x50,param_2 + 0x50);
  FUN_01a6a07c(param_1 + 0x60,param_2 + 0x60);
  FUN_01a2bf84(param_1 + 0x70,param_2 + 0x70);
  FUN_01a9e18c(param_1 + 0x80,param_2 + 0x80);
  FUN_01a9e404(param_1 + 0x90,param_2 + 0x90);
  FUN_01a9e67c(param_1 + 0xa0,param_2 + 0xa0);
  FUN_00ac4814(param_1 + 0xb0,param_2 + 0xb0);
  FUN_0182a468(param_1 + 0xc0,param_2 + 0xc0);
  FUN_01a9e8f4(param_1 + 0xd0,param_2 + 0xd0);
  FUN_0095aa3c(param_1 + 0xe0,param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  FUN_01a9ccd4(param_1 + 0xf8,param_2 + 0xf8);
  uVar5 = *(undefined8 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x110) = uVar5;
  if (*(char *)(param_1 + 0x120) == '\0') {
    if (*(char *)(param_2 + 0x120) != '\0') {
      *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
      *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
      *(undefined1 *)(param_1 + 0x120) = 1;
    }
  }
  else if (*(char *)(param_2 + 0x120) == '\0') {
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  }
  if (*(char *)(param_1 + 0x140) == '\0') {
    if (*(char *)(param_2 + 0x140) != '\0') {
      *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
      *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
      *(undefined1 *)(param_1 + 0x140) = 1;
    }
  }
  else if (*(char *)(param_2 + 0x140) == '\0') {
    *(undefined1 *)(param_1 + 0x140) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  }
  if (*(char *)(param_1 + 0x160) == '\0') {
    if (*(char *)(param_2 + 0x160) != '\0') {
      *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
      *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
      *(undefined1 *)(param_1 + 0x160) = 1;
    }
  }
  else if (*(char *)(param_2 + 0x160) == '\0') {
    *(undefined1 *)(param_1 + 0x160) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  }
  uVar5 = *(undefined8 *)(param_2 + 0x1d8);
  uVar3 = *(undefined2 *)(param_2 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1d8) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1b8) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 0x198) = uVar5;
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
  uVar5 = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 400) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1b0) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined2 *)(param_1 + 0x1e0) = uVar3;
  *(undefined8 *)(param_1 + 0x1d0) = uVar5;
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
  if (*(char *)(param_1 + 0x200) == '\0') {
    if (*(char *)(param_2 + 0x200) != '\0') {
      *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
      *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x210);
      *(undefined1 *)(param_1 + 0x200) = 1;
    }
  }
  else if (*(char *)(param_2 + 0x200) == '\0') {
    *(undefined1 *)(param_1 + 0x200) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
    *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x210);
  }
  if (*(char *)(param_1 + 0x220) == '\0') {
    if (*(char *)(param_2 + 0x220) != '\0') {
      uVar5 = *(undefined8 *)(param_2 + 0x268);
      *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_2 + 600);
      *(undefined8 *)(param_1 + 0x268) = uVar5;
      uVar5 = *(undefined8 *)(param_2 + 0x248);
      *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
      *(undefined8 *)(param_1 + 0x248) = uVar5;
      uVar5 = *(undefined8 *)(param_2 + 0x230);
      *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x240);
      *(undefined8 *)(param_1 + 0x230) = uVar5;
      uVar5 = *(undefined8 *)(param_2 + 0x260);
      *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x250);
      *(undefined8 *)(param_1 + 0x260) = uVar5;
      *(undefined1 *)(param_1 + 0x220) = 1;
    }
  }
  else if (*(char *)(param_2 + 0x220) == '\0') {
    *(undefined1 *)(param_1 + 0x220) = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 600);
    *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_2 + 0x248);
    *(undefined8 *)(param_1 + 600) = uVar5;
    *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
    uVar5 = *(undefined8 *)(param_2 + 0x230);
    *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x240);
    *(undefined8 *)(param_1 + 0x230) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x250);
    *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x260);
    *(undefined8 *)(param_1 + 0x250) = uVar5;
  }
  pcVar6 = *(code **)(param_1 + 0x278);
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x280) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
    (*pcVar6)(param_1 + 0x290);
  }
  if (*(code **)(param_2 + 0x280) != (code *)0x0) {
    (**(code **)(param_2 + 0x280))(param_2 + 0x290,param_1 + 0x290);
    uVar5 = *(undefined8 *)(param_2 + 0x270);
    uVar7 = *(undefined8 *)(param_2 + 0x278);
    uVar1 = *(undefined8 *)(param_2 + 0x288);
    *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_2 + 0x280);
    *(undefined8 *)(param_1 + 0x288) = uVar1;
    *(undefined8 *)(param_1 + 0x270) = uVar5;
    *(undefined8 *)(param_1 + 0x278) = uVar7;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x358);
  *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(param_2 + 0x348);
  *(undefined8 *)(param_1 + 0x358) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x338);
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_2 + 0x328);
  *(undefined8 *)(param_1 + 0x338) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x318);
  *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_2 + 0x308);
  *(undefined8 *)(param_1 + 0x318) = uVar5;
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_2 + 0x2f0);
  uVar5 = *(undefined8 *)(param_2 + 0x300);
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_2 + 0x310);
  *(undefined8 *)(param_1 + 0x300) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 800);
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_2 + 0x330);
  *(undefined8 *)(param_1 + 800) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x340);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_2 + 0x350);
  *(undefined8 *)(param_1 + 0x340) = uVar5;
  uVar2 = *(undefined4 *)(param_2 + 0x378);
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_2 + 0x368);
  uVar5 = *(undefined8 *)(param_2 + 0x360);
  uVar7 = *(undefined8 *)(param_2 + 0x370);
  *(undefined4 *)(param_1 + 0x378) = uVar2;
  *(undefined8 *)(param_1 + 0x370) = uVar7;
  *(undefined8 *)(param_1 + 0x360) = uVar5;
  *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(param_2 + 0x380);
  *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_2 + 0x388);
  *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)(param_2 + 0x390);
  plVar8 = *(long **)(param_2 + 0x398);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar4 = *(long **)(param_1 + 0x398);
  *(long **)(param_1 + 0x398) = plVar8;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  return param_1;
}


