/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0272693c; name: FUN_0272693c
 */


void FUN_0272693c(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_0437b160;
  plVar3 = (long *)*param_1;
  lVar4 = *(long *)PTR_DAT_0437b160;
  *(long **)(lVar4 + 0x10) = plVar3;
  *(undefined8 *)(lVar4 + 0x20) = 0x70;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x18) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x10) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x53402c00,plVar3,1);
    *(long **)(lVar4 + 8) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::SYSTEM");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x1c0) = 0x70;
  *(long **)(lVar4 + 0x1b0) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x1b8) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x1b0) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x1100000,plVar3,1);
    *(long **)(lVar4 + 0x1a8) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::APP_SYSTEM");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x260) = 0x70;
  *(long **)(lVar4 + 0x250) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 600) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x250) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,&LAB_03300000,plVar3,1);
    *(long **)(lVar4 + 0x248) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::APP_CACHE");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x2c0) = 0x70;
  *(long **)(lVar4 + 0x2b0) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x2b8) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x2b0) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x2bc00000,plVar3,1);
    *(long **)(lVar4 + 0x2a8) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::APP");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x2e0) = 0x70;
  *(long **)(lVar4 + 0x2d0) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x2d8) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x2d0) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0xc900000,plVar3,1);
    *(long **)(lVar4 + 0x2c8) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::UI2D");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x380) = 0x70;
  *(long **)(lVar4 + 0x370) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x378) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x370) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x2c00000,plVar3,1);
    *(long **)(lVar4 + 0x368) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::NETWORK");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x3a0) = 0x70;
  *(long **)(lVar4 + 0x390) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x398) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x390) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x2000000,plVar3,1);
    *(long **)(lVar4 + 0x388) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::EVENT");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x3c0) = 0x70;
  *(long **)(lVar4 + 0x3b0) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x3b8) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x3b0) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x15300000,plVar3,1);
    *(long **)(lVar4 + 0x3a8) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::RESERVE");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x40) = 0x70;
  plVar3 = *(long **)(lVar4 + 8);
  *(long **)(lVar4 + 0x30) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x38) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x30) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x400,plVar3,1);
    *(long **)(lVar4 + 0x28) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::MAIN_APPLICATION");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x60) = 0x70;
  *(long **)(lVar4 + 0x50) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x58) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x50) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x4a00000,plVar3,1);
    *(long **)(lVar4 + 0x48) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::SOUND");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x80) = 0x70;
  *(long **)(lVar4 + 0x70) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x78) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x70) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x32000000,plVar3,1);
    *(long **)(lVar4 + 0x68) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::GFX2");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0xa0) = 0x70;
  *(long **)(lVar4 + 0x90) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x98) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x90) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x6400000,plVar3,1);
    *(long **)(lVar4 + 0x88) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::VFX2");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0xc0) = 0x70;
  *(long **)(lVar4 + 0xb0) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0xb8) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0xb0) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,&LAB_00500000,plVar3,1);
    *(long **)(lVar4 + 0xa8) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::STRING_POOL");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0xe0) = 0x70;
  *(long **)(lVar4 + 0xd0) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0xd8) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0xd0) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x2800,plVar3,1);
    *(long **)(lVar4 + 200) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::ANIMATION_CONTEXT");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x100) = 0x70;
  *(long **)(lVar4 + 0xf0) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0xf8) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0xf0) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0xfa00000,plVar3,1);
    *(long **)(lVar4 + 0xe8) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::FILE_MANAGER");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x120) = 0x70;
  *(long **)(lVar4 + 0x110) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x118) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x110) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x6400000,plVar3,1);
    *(long **)(lVar4 + 0x108) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::HAVOK_PHYSICS");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x140) = 0x70;
  *(long **)(lVar4 + 0x130) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x138) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x130) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x100000,plVar3,1);
    *(long **)(lVar4 + 0x128) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::HAVOK_AI");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x160) = 0x70;
  *(long **)(lVar4 + 0x150) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x158) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x150) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x100000,plVar3,1);
    *(long **)(lVar4 + 0x148) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::WORD_SET_LOADER");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x180) = 0x70;
  *(long **)(lVar4 + 0x170) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x178) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x170) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x600000,plVar3,1);
    *(long **)(lVar4 + 0x168) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::JOB_SCHEDULER");
  }
  FUN_02727730(*(undefined8 *)PTR_DAT_04387cc0,*(undefined8 *)(*(long *)puVar1 + 0x168));
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x1a0) = 0x70;
  *(long **)(lVar4 + 400) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x198) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 400) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,&LAB_00500000,plVar3,1);
    *(long **)(lVar4 + 0x188) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::OTHER_SYSTEM");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x1e0) = 0x70;
  plVar3 = *(long **)(lVar4 + 0x1a8);
  *(long **)(lVar4 + 0x1d0) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x1d8) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x1d0) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x100000,plVar3,1);
    *(long **)(lVar4 + 0x1c8) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::BATTLE_SYSTEM");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x200) = 0x70;
  *(long **)(lVar4 + 0x1f0) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x1f8) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x1f0) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x600000,plVar3,1);
    *(long **)(lVar4 + 0x1e8) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::SAVE");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x220) = 0x70;
  *(long **)(lVar4 + 0x210) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x218) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x210) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,&LAB_00500000,plVar3,1);
    *(long **)(lVar4 + 0x208) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::FADE");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x240) = 0x70;
  *(long **)(lVar4 + 0x230) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x238) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x230) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,&LAB_00500000,plVar3,1);
    *(long **)(lVar4 + 0x228) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::OTHER_APP_SYSTEM");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x280) = 0x70;
  plVar3 = *(long **)(lVar4 + 0x248);
  *(long **)(lVar4 + 0x270) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x278) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x270) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x100000,plVar3,1);
    *(long **)(lVar4 + 0x268) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::FIELD_RESIDENT");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x2a0) = 0x70;
  *(long **)(lVar4 + 0x290) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x298) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x290) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x3200000,plVar3,1);
    *(long **)(lVar4 + 0x288) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::CHARA");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x300) = 0x70;
  plVar3 = *(long **)(lVar4 + 0x2c8);
  *(long **)(lVar4 + 0x2f0) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x2f8) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x2f0) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x2400000,plVar3,1);
    *(long **)(lVar4 + 0x2e8) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::LAYOUT_SYSTEM");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 800) = 0x70;
  *(long **)(lVar4 + 0x310) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x318) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x310) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x1c00000,plVar3,1);
    *(long **)(lVar4 + 0x308) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::FONT");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x340) = 0x70;
  *(long **)(lVar4 + 0x330) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x338) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x330) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,&LAB_00500000,plVar3,1);
    *(long **)(lVar4 + 0x328) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::UI_RESIDENT");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x360) = 0x70;
  *(long **)(lVar4 + 0x350) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x358) = plVar2;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0272772c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar4 + 0x350) + 0xb8))();
    return;
  }
  FUN_0094b1c0(plVar2,0x8000000,plVar3,1);
  *(long **)(lVar4 + 0x348) = plVar2;
                    /* WARNING: Could not recover jumptable at 0x027274cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,"basesys::Heap::UI");
  return;
}


