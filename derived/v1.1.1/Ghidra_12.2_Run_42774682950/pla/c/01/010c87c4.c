/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c87c4; name: FUN_010c87c4
 */


void FUN_010c87c4(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  *(undefined4 *)(param_1 + 0x78) = 0;
  uVar1 = FUN_010ca210(*(undefined8 *)PTR_DAT_0437e408);
  *(undefined8 *)(param_1 + 0xb20) = uVar1;
  local_70 = 0xb4cc9d0257902b6e;
  pcStack_68 = "common/itemname.dat";
  local_60 = 0x13;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xb28);
  *(undefined8 *)(param_1 + 0xb28) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xb28) = plVar2;
  *(undefined8 *)(param_1 + 0xb30) = local_48;
  *(undefined8 *)(param_1 + 0xb38) = local_40;
  plVar2 = *(long **)(param_1 + 0xb48);
  *(undefined8 *)(param_1 + 0xb48) = 0;
  *(undefined8 *)(param_1 + 0xb40) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xb48) = uVar1;
  *(undefined4 *)(param_1 + 0xb50) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x2b0af70209c60ca5;
  pcStack_68 = "common/itemname.tbl";
  local_60 = 0x13;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xb58);
  *(undefined8 *)(param_1 + 0xb58) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xb58) = plVar2;
  *(undefined8 *)(param_1 + 0xb60) = local_48;
  *(undefined8 *)(param_1 + 0xb68) = local_40;
  plVar2 = *(long **)(param_1 + 0xb78);
  *(undefined8 *)(param_1 + 0xb78) = 0;
  *(undefined8 *)(param_1 + 0xb70) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xb78) = uVar1;
  *(undefined4 *)(param_1 + 0xb80) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x41655414cfbef75c;
  pcStack_68 = "common/wazaname.dat";
  local_60 = 0x13;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xb88);
  *(undefined8 *)(param_1 + 0xb88) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xb88) = plVar2;
  *(undefined8 *)(param_1 + 0xb90) = local_48;
  *(undefined8 *)(param_1 + 0xb98) = local_40;
  plVar2 = *(long **)(param_1 + 0xba8);
  *(undefined8 *)(param_1 + 0xba8) = 0;
  *(undefined8 *)(param_1 + 0xba0) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xba8) = uVar1;
  *(undefined4 *)(param_1 + 0xbb0) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0xb524be147fd5f8df;
  pcStack_68 = "common/wazaname.tbl";
  local_60 = 0x13;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 3000);
  *(undefined8 *)(param_1 + 3000) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 3000) = plVar2;
  *(undefined8 *)(param_1 + 0xbc0) = local_48;
  *(undefined8 *)(param_1 + 0xbc8) = local_40;
  plVar2 = *(long **)(param_1 + 0xbd8);
  *(undefined8 *)(param_1 + 0xbd8) = 0;
  *(undefined8 *)(param_1 + 0xbd0) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xbd8) = uVar1;
  *(undefined4 *)(param_1 + 0xbe0) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x6db944fd9c30dde5;
  pcStack_68 = "common/typename.dat";
  local_60 = 0x13;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xbe8);
  *(undefined8 *)(param_1 + 0xbe8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xbe8) = plVar2;
  *(undefined8 *)(param_1 + 0xbf0) = local_48;
  *(undefined8 *)(param_1 + 0xbf8) = local_40;
  plVar2 = *(long **)(param_1 + 0xc08);
  *(undefined8 *)(param_1 + 0xc08) = 0;
  *(undefined8 *)(param_1 + 0xc00) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xc08) = uVar1;
  *(undefined4 *)(param_1 + 0xc10) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0xf77aeafde9fafcae;
  pcStack_68 = "common/typename.tbl";
  local_60 = 0x13;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xc18);
  *(undefined8 *)(param_1 + 0xc18) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xc18) = plVar2;
  *(undefined8 *)(param_1 + 0xc20) = local_48;
  *(undefined8 *)(param_1 + 0xc28) = local_40;
  plVar2 = *(long **)(param_1 + 0xc38);
  *(undefined8 *)(param_1 + 0xc38) = 0;
  *(undefined8 *)(param_1 + 0xc30) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xc38) = uVar1;
  *(undefined4 *)(param_1 + 0xc40) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x1d4603fdfbcbfc24;
  pcStack_68 = "common/tokusei.dat";
  local_60 = 0x12;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xc48);
  *(undefined8 *)(param_1 + 0xc48) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xc48) = plVar2;
  *(undefined8 *)(param_1 + 0xc50) = local_48;
  *(undefined8 *)(param_1 + 0xc58) = local_40;
  plVar2 = *(long **)(param_1 + 0xc68);
  *(undefined8 *)(param_1 + 0xc68) = 0;
  *(undefined8 *)(param_1 + 0xc60) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xc68) = uVar1;
  *(undefined4 *)(param_1 + 0xc70) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x91055dfdabe2e277;
  pcStack_68 = "common/tokusei.tbl";
  local_60 = 0x12;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xc78);
  *(undefined8 *)(param_1 + 0xc78) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xc78) = plVar2;
  *(undefined8 *)(param_1 + 0xc80) = local_48;
  *(undefined8 *)(param_1 + 0xc88) = local_40;
  plVar2 = *(long **)(param_1 + 0xc98);
  *(undefined8 *)(param_1 + 0xc98) = 0;
  *(undefined8 *)(param_1 + 0xc90) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xc98) = uVar1;
  *(undefined4 *)(param_1 + 0xca0) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0xad357db753d6f73;
  pcStack_68 = "common/seikaku.dat";
  local_60 = 0x12;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xca8);
  *(undefined8 *)(param_1 + 0xca8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xca8) = plVar2;
  *(undefined8 *)(param_1 + 0xcb0) = local_48;
  *(undefined8 *)(param_1 + 0xcb8) = local_40;
  plVar2 = *(long **)(param_1 + 0xcc8);
  *(undefined8 *)(param_1 + 0xcc8) = 0;
  *(undefined8 *)(param_1 + 0xcc0) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xcc8) = uVar1;
  *(undefined4 *)(param_1 + 0xcd0) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x7da4bddb248a1d60;
  pcStack_68 = "common/seikaku.tbl";
  local_60 = 0x12;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xcd8);
  *(undefined8 *)(param_1 + 0xcd8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xcd8) = plVar2;
  *(undefined8 *)(param_1 + 0xce0) = local_48;
  *(undefined8 *)(param_1 + 0xce8) = local_40;
  plVar2 = *(long **)(param_1 + 0xcf8);
  *(undefined8 *)(param_1 + 0xcf8) = 0;
  *(undefined8 *)(param_1 + 0xcf0) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xcf8) = uVar1;
  *(undefined4 *)(param_1 + 0xd00) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0xb059dd7e20c2c317;
  pcStack_68 = "script/place_name.dat";
  local_60 = 0x15;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xd08);
  *(undefined8 *)(param_1 + 0xd08) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xd08) = plVar2;
  *(undefined8 *)(param_1 + 0xd10) = local_48;
  *(undefined8 *)(param_1 + 0xd18) = local_40;
  plVar2 = *(long **)(param_1 + 0xd28);
  *(undefined8 *)(param_1 + 0xd28) = 0;
  *(undefined8 *)(param_1 + 0xd20) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xd28) = uVar1;
  *(undefined4 *)(param_1 + 0xd30) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x276b537dd3ac58f4;
  pcStack_68 = "script/place_name.tbl";
  local_60 = 0x15;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xd38);
  *(undefined8 *)(param_1 + 0xd38) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xd38) = plVar2;
  *(undefined8 *)(param_1 + 0xd40) = local_48;
  *(undefined8 *)(param_1 + 0xd48) = local_40;
  plVar2 = *(long **)(param_1 + 0xd58);
  *(undefined8 *)(param_1 + 0xd58) = 0;
  *(undefined8 *)(param_1 + 0xd50) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xd58) = uVar1;
  *(undefined4 *)(param_1 + 0xd60) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0xd6d1a9fe944dcd2b;
  pcStack_68 = "common/trname.dat";
  local_60 = 0x11;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xd68);
  *(undefined8 *)(param_1 + 0xd68) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xd68) = plVar2;
  *(undefined8 *)(param_1 + 0xd70) = local_48;
  *(undefined8 *)(param_1 + 0xd78) = local_40;
  plVar2 = *(long **)(param_1 + 0xd88);
  *(undefined8 *)(param_1 + 0xd88) = 0;
  *(undefined8 *)(param_1 + 0xd80) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xd88) = uVar1;
  *(undefined4 *)(param_1 + 0xd90) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x4de31ffe47376308;
  pcStack_68 = "common/trname.tbl";
  local_60 = 0x11;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xd98);
  *(undefined8 *)(param_1 + 0xd98) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xd98) = plVar2;
  *(undefined8 *)(param_1 + 0xda0) = local_48;
  *(undefined8 *)(param_1 + 0xda8) = local_40;
  plVar2 = *(long **)(param_1 + 0xdb8);
  *(undefined8 *)(param_1 + 0xdb8) = 0;
  *(undefined8 *)(param_1 + 0xdb0) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xdb8) = uVar1;
  *(undefined4 *)(param_1 + 0xdc0) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0xaecff13bebdf63e3;
  pcStack_68 = "common/bag_pocket.dat";
  local_60 = 0x15;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xdc8);
  *(undefined8 *)(param_1 + 0xdc8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xdc8) = plVar2;
  *(undefined8 *)(param_1 + 0xdd0) = local_48;
  *(undefined8 *)(param_1 + 0xdd8) = local_40;
  plVar2 = *(long **)(param_1 + 0xde8);
  *(undefined8 *)(param_1 + 0xde8) = 0;
  *(undefined8 *)(param_1 + 0xde0) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xde8) = uVar1;
  *(undefined4 *)(param_1 + 0xdf0) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x3bea973c3c822150;
  pcStack_68 = "common/bag_pocket.tbl";
  local_60 = 0x15;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xdf8);
  *(undefined8 *)(param_1 + 0xdf8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xdf8) = plVar2;
  *(undefined8 *)(param_1 + 0xe00) = local_48;
  *(undefined8 *)(param_1 + 0xe08) = local_40;
  plVar2 = *(long **)(param_1 + 0xe18);
  *(undefined8 *)(param_1 + 0xe18) = 0;
  *(undefined8 *)(param_1 + 0xe10) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xe18) = uVar1;
  *(undefined4 *)(param_1 + 0xe20) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x66fe45b25b2ddbbb;
  pcStack_68 = "common/itemname_plural.dat";
  local_60 = 0x1a;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xe28);
  *(undefined8 *)(param_1 + 0xe28) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xe28) = plVar2;
  *(undefined8 *)(param_1 + 0xe30) = local_48;
  *(undefined8 *)(param_1 + 0xe38) = local_40;
  plVar2 = *(long **)(param_1 + 0xe48);
  *(undefined8 *)(param_1 + 0xe48) = 0;
  *(undefined8 *)(param_1 + 0xe40) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xe48) = uVar1;
  *(undefined4 *)(param_1 + 0xe50) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0xf33ebbb2ab16a3d8;
  pcStack_68 = "common/itemname_plural.tbl";
  local_60 = 0x1a;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xe58);
  *(undefined8 *)(param_1 + 0xe58) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xe58) = plVar2;
  *(undefined8 *)(param_1 + 0xe60) = local_48;
  *(undefined8 *)(param_1 + 0xe68) = local_40;
  plVar2 = *(long **)(param_1 + 0xe78);
  *(undefined8 *)(param_1 + 0xe78) = 0;
  *(undefined8 *)(param_1 + 0xe70) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xe78) = uVar1;
  *(undefined4 *)(param_1 + 0xe80) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x405425fc16f32062;
  pcStack_68 = "common/itemname_classified.dat";
  local_60 = 0x1e;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xe88);
  *(undefined8 *)(param_1 + 0xe88) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xe88) = plVar2;
  *(undefined8 *)(param_1 + 0xe90) = local_48;
  *(undefined8 *)(param_1 + 0xe98) = local_40;
  plVar2 = *(long **)(param_1 + 0xea8);
  *(undefined8 *)(param_1 + 0xea8) = 0;
  *(undefined8 *)(param_1 + 0xea0) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xea8) = uVar1;
  *(undefined4 *)(param_1 + 0xeb0) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0xcc9bcffc66e25f89;
  pcStack_68 = "common/itemname_classified.tbl";
  local_60 = 0x1e;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xeb8);
  *(undefined8 *)(param_1 + 0xeb8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xeb8) = plVar2;
  *(undefined8 *)(param_1 + 0xec0) = local_48;
  *(undefined8 *)(param_1 + 0xec8) = local_40;
  plVar2 = *(long **)(param_1 + 0xed8);
  *(undefined8 *)(param_1 + 0xed8) = 0;
  *(undefined8 *)(param_1 + 0xed0) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xed8) = uVar1;
  *(undefined4 *)(param_1 + 0xee0) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x914e4c5f68d6e6d;
  pcStack_68 = "common/itemname_plural_classified.dat";
  local_60 = 0x25;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xee8);
  *(undefined8 *)(param_1 + 0xee8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xee8) = plVar2;
  *(undefined8 *)(param_1 + 0xef0) = local_48;
  *(undefined8 *)(param_1 + 0xef8) = local_40;
  plVar2 = *(long **)(param_1 + 0xf08);
  *(undefined8 *)(param_1 + 0xf08) = 0;
  *(undefined8 *)(param_1 + 0xf00) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xf08) = uVar1;
  *(undefined4 *)(param_1 + 0xf10) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x80333ac5a9815846;
  pcStack_68 = "common/itemname_plural_classified.tbl";
  local_60 = 0x25;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xf18);
  *(undefined8 *)(param_1 + 0xf18) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xf18) = plVar2;
  *(undefined8 *)(param_1 + 0xf20) = local_48;
  *(undefined8 *)(param_1 + 0xf28) = local_40;
  plVar2 = *(long **)(param_1 + 0xf38);
  *(undefined8 *)(param_1 + 0xf38) = 0;
  *(undefined8 *)(param_1 + 0xf30) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xf38) = uVar1;
  *(undefined4 *)(param_1 + 0xf40) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x8fdfb282ee289b08;
  pcStack_68 = "common/itemname_acc.dat";
  local_60 = 0x17;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xf48);
  *(undefined8 *)(param_1 + 0xf48) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xf48) = plVar2;
  *(undefined8 *)(param_1 + 0xf50) = local_48;
  *(undefined8 *)(param_1 + 0xf58) = local_40;
  plVar2 = *(long **)(param_1 + 0xf68);
  *(undefined8 *)(param_1 + 0xf68) = 0;
  *(undefined8 *)(param_1 + 0xf60) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xf68) = uVar1;
  *(undefined4 *)(param_1 + 0xf70) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x19a84c833bf8c41b;
  pcStack_68 = "common/itemname_acc.tbl";
  local_60 = 0x17;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xf78);
  *(undefined8 *)(param_1 + 0xf78) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xf78) = plVar2;
  *(undefined8 *)(param_1 + 0xf80) = local_48;
  *(undefined8 *)(param_1 + 0xf88) = local_40;
  plVar2 = *(long **)(param_1 + 0xf98);
  *(undefined8 *)(param_1 + 0xf98) = 0;
  *(undefined8 *)(param_1 + 0xf90) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xf98) = uVar1;
  *(undefined4 *)(param_1 + 4000) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0xebdc52d126d88f34;
  pcStack_68 = "common/itemname_acc_classified.dat";
  local_60 = 0x22;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xfa8);
  *(undefined8 *)(param_1 + 0xfa8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xfa8) = plVar2;
  *(undefined8 *)(param_1 + 0xfb0) = local_48;
  *(undefined8 *)(param_1 + 0xfb8) = local_40;
  plVar2 = *(long **)(param_1 + 0xfc8);
  *(undefined8 *)(param_1 + 0xfc8) = 0;
  *(undefined8 *)(param_1 + 0xfc0) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xfc8) = uVar1;
  *(undefined4 *)(param_1 + 0xfd0) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x74caecd173ef1487;
  pcStack_68 = "common/itemname_acc_classified.tbl";
  local_60 = 0x22;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xfd8);
  *(undefined8 *)(param_1 + 0xfd8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xfd8) = plVar2;
  *(undefined8 *)(param_1 + 0xfe0) = local_48;
  *(undefined8 *)(param_1 + 0xfe8) = local_40;
  plVar2 = *(long **)(param_1 + 0xff8);
  *(undefined8 *)(param_1 + 0xff8) = 0;
  *(undefined8 *)(param_1 + 0xff0) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xff8) = uVar1;
  *(undefined4 *)(param_1 + 0x1000) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x9654922fc2c8b9d1;
  pcStack_68 = "common/namelist.dat";
  local_60 = 0x13;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0x1008);
  *(undefined8 *)(param_1 + 0x1008) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0x1008) = plVar2;
  *(undefined8 *)(param_1 + 0x1010) = local_48;
  *(undefined8 *)(param_1 + 0x1018) = local_40;
  plVar2 = *(long **)(param_1 + 0x1028);
  *(undefined8 *)(param_1 + 0x1028) = 0;
  *(undefined8 *)(param_1 + 0x1020) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0x1028) = uVar1;
  *(undefined4 *)(param_1 + 0x1030) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x201608301092870a;
  pcStack_68 = "common/namelist.tbl";
  local_60 = 0x13;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0x1038);
  *(undefined8 *)(param_1 + 0x1038) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0x1038) = plVar2;
  *(undefined8 *)(param_1 + 0x1040) = local_48;
  *(undefined8 *)(param_1 + 0x1048) = local_40;
  plVar2 = *(long **)(param_1 + 0x1058);
  *(undefined8 *)(param_1 + 0x1058) = 0;
  *(undefined8 *)(param_1 + 0x1050) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0x1058) = uVar1;
  *(undefined4 *)(param_1 + 0x1060) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0xdf8732707c30506e;
  pcStack_68 = "common/place_name_indirect.dat";
  local_60 = 0x1e;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0x1068);
  *(undefined8 *)(param_1 + 0x1068) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0x1068) = plVar2;
  *(undefined8 *)(param_1 + 0x1070) = local_48;
  *(undefined8 *)(param_1 + 0x1078) = local_40;
  plVar2 = *(long **)(param_1 + 0x1088);
  *(undefined8 *)(param_1 + 0x1088) = 0;
  *(undefined8 *)(param_1 + 0x1080) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0x1088) = uVar1;
  *(undefined4 *)(param_1 + 0x1090) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x55c58c702e6631a5;
  pcStack_68 = "common/place_name_indirect.tbl";
  local_60 = 0x1e;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0x1098);
  *(undefined8 *)(param_1 + 0x1098) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0x1098) = plVar2;
  *(undefined8 *)(param_1 + 0x10a0) = local_48;
  *(undefined8 *)(param_1 + 0x10a8) = local_40;
  plVar2 = *(long **)(param_1 + 0x10b8);
  *(undefined8 *)(param_1 + 0x10b8) = 0;
  *(undefined8 *)(param_1 + 0x10b0) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0x10b8) = uVar1;
  *(undefined4 *)(param_1 + 0x10c0) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x75608af7ff084381;
  pcStack_68 = "common/another_name.dat";
  local_60 = 0x17;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0x10c8);
  *(undefined8 *)(param_1 + 0x10c8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0x10c8) = plVar2;
  *(undefined8 *)(param_1 + 0x10d0) = local_48;
  *(undefined8 *)(param_1 + 0x10d8) = local_40;
  plVar2 = *(long **)(param_1 + 0x10e8);
  *(undefined8 *)(param_1 + 0x10e8) = 0;
  *(undefined8 *)(param_1 + 0x10e0) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0x10e8) = uVar1;
  *(undefined4 *)(param_1 + 0x10f0) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0xeba500f7b142bffa;
  pcStack_68 = "common/another_name.tbl";
  local_60 = 0x17;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0x10f8);
  *(undefined8 *)(param_1 + 0x10f8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0x10f8) = plVar2;
  *(undefined8 *)(param_1 + 0x1100) = local_48;
  *(undefined8 *)(param_1 + 0x1108) = local_40;
  plVar2 = *(long **)(param_1 + 0x1118);
  *(undefined8 *)(param_1 + 0x1118) = 0;
  *(undefined8 *)(param_1 + 0x1110) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0x1118) = uVar1;
  *(undefined4 *)(param_1 + 0x1120) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x1433b2d24a872d48;
  pcStack_68 = "common/trtype.dat";
  local_60 = 0x11;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0x1128);
  *(undefined8 *)(param_1 + 0x1128) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0x1128) = plVar2;
  *(undefined8 *)(param_1 + 0x1130) = local_48;
  *(undefined8 *)(param_1 + 0x1138) = local_40;
  plVar2 = *(long **)(param_1 + 0x1148);
  *(undefined8 *)(param_1 + 0x1148) = 0;
  *(undefined8 *)(param_1 + 0x1140) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0x1148) = uVar1;
  *(undefined4 *)(param_1 + 0x1150) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x9dfc4cd29857565b;
  pcStack_68 = "common/trtype.tbl";
  local_60 = 0x11;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0x1158);
  *(undefined8 *)(param_1 + 0x1158) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0x1158) = plVar2;
  *(undefined8 *)(param_1 + 0x1160) = local_48;
  *(undefined8 *)(param_1 + 0x1168) = local_40;
  plVar2 = *(long **)(param_1 + 0x1178);
  *(undefined8 *)(param_1 + 0x1178) = 0;
  *(undefined8 *)(param_1 + 0x1170) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0x1178) = uVar1;
  *(undefined4 *)(param_1 + 0x1180) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_010ca2cc(param_1);
  return;
}


