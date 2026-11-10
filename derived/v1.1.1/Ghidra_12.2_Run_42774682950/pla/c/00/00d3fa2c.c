/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d3fa2c; name: FUN_00d3fa2c
 */


void FUN_00d3fa2c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04379ff8;
  plVar3 = *(long **)(param_1 + 8);
  lVar4 = *(long *)PTR_DAT_04379ff8;
  *(long **)(lVar4 + 0x10) = plVar3;
  *(undefined8 *)(lVar4 + 0x20) = 0x70;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x18) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x10) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x800000,plVar3,1);
    *(long **)(lVar4 + 8) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"HeapID::UI_RSD_BAG");
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
    FUN_0094b1c0(plVar2,&LAB_00d00000,plVar3,1);
    *(long **)(lVar4 + 0x48) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"HeapID::UI_RSD_HUD");
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
    FUN_0094b1c0(plVar2,0x1400000,plVar3,1);
    *(long **)(lVar4 + 200) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"HeapID::UI_RSD_APPLI");
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
    FUN_0094b1c0(plVar2,0x300000,plVar3,1);
    *(long **)(lVar4 + 0xa8) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"HeapID::UI_RSD_DATA");
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
    FUN_0094b1c0(plVar2,&LAB_00d00000,plVar3,1);
    *(long **)(lVar4 + 0xe8) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"HeapID::UI_RSD_POKEDEX");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x40) = 0x70;
  *(long **)(lVar4 + 0x30) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x38) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 0x30) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x1200000,plVar3,1);
    *(long **)(lVar4 + 0x28) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"HeapID::UI_RSD_MAP");
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
    FUN_0094b1c0(plVar2,0x700000,plVar3,1);
    *(long **)(lVar4 + 0x108) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"HeapID::UI_RSD_IBOX");
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
    FUN_0094b1c0(plVar2,0xa00000,plVar3,1);
    *(long **)(lVar4 + 0x128) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"HeapID::UI_RSD_BOX");
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
    FUN_0094b1c0(plVar2,0x700000,plVar3,1);
    *(long **)(lVar4 + 0x148) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"HeapID::UI_RSD_MAKING");
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
    FUN_0094b1c0(plVar2,0x700000,plVar3,1);
    *(long **)(lVar4 + 0x168) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"HeapID::UI_RSD_SHOP");
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
    FUN_0094b1c0(plVar2,0x1400000,plVar3,1);
    *(long **)(lVar4 + 0x68) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"HeapID::UI_APPLI");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x1a0) = 0x70;
  *(long **)(lVar4 + 400) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x198) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar4 + 400) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar2,0x600000,plVar3,1);
    *(long **)(lVar4 + 0x188) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"HeapID::UI_RSD_BATTLE");
  }
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0xa0) = 0x70;
  plVar3 = *(long **)(lVar4 + 0x68);
  *(long **)(lVar4 + 0x90) = plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x70,8);
  *(long **)(lVar4 + 0x98) = plVar2;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d40040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar4 + 0x90) + 0xb8))();
    return;
  }
  FUN_0094b1c0(plVar2,0x800000,plVar3,1);
  *(long **)(lVar4 + 0x88) = plVar2;
                    /* WARNING: Could not recover jumptable at 0x00d3ff34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,"HeapID::UI_APPLI_CHILD");
  return;
}


