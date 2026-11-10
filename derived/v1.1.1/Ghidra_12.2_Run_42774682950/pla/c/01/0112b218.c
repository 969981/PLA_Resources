/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112b218; name: FUN_0112b218
 */


void FUN_0112b218(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = FUN_0112b390();
  local_38 = param_1 + 0x118;
  local_40 = 4;
  FUN_0112b418(lVar1,&local_38,&local_40);
  local_38 = param_1 + 0x11c;
  local_40 = 4;
  FUN_0112b464(lVar1,&local_38,&local_40);
  local_38 = param_1 + 0x120;
  local_40 = 0x38;
  FUN_0112b4b0(lVar1,&local_38,&local_40);
  uVar2 = FUN_010d9140(lVar1,&DAT_03a78fa4);
  if (((uVar2 & 0xff) == 0) && (plVar3 = *(long **)(lVar1 + 0x60), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,&DAT_03a78fa4);
  }
  *(int *)(param_1 + 0x158) = (int)(uVar2 >> 0x20);
  local_38 = param_1 + 0x160;
  local_40 = 8;
  FUN_0112b4fc(lVar1,&DAT_03a78fa8,&local_38,&local_40);
  local_38 = param_1 + 0x168;
  local_40 = 8;
  FUN_0112b4fc(lVar1,&DAT_03a78fac,&local_38,&local_40);
  uVar2 = FUN_010d9140(lVar1,&DAT_03a78fb0);
  if (((uVar2 & 0xff) == 0) && (plVar3 = *(long **)(lVar1 + 0x60), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,&DAT_03a78fb0);
  }
  *(int *)(param_1 + 0x170) = (int)(uVar2 >> 0x20);
  local_38 = param_1 + 0x178;
  local_40 = 0xd0;
  FUN_0112b548(lVar1,&local_38,&local_40);
  return;
}


