/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa3c38; name: FUN_02fa3c38
 */


void FUN_02fa3c38(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_28;
  
  FUN_02fd6728();
  *param_1 = &PTR_LAB_042b85e0;
  (**(code **)(**(long **)(param_2 + 0x48) + 0x38))(&local_28);
  param_1[9] = local_28;
  lVar4 = *(long *)(param_2 + 0x50);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar4 + param_2 + 0x50;
  }
  FUN_02fa33b0(&local_28,lVar4);
  lVar4 = 0;
  if (local_28 != 0) {
    lVar4 = local_28 - (long)(param_1 + 10);
  }
  param_1[10] = lVar4;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((long)param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0x68);
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x15] = uVar3;
  param_1[0x12] = uVar1;
  param_1[0x13] = uVar2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}


