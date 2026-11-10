/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f358fc; name: FUN_02f358fc
 */


void FUN_02f358fc(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_02ef4950();
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *param_1 = &PTR_LAB_042ad2d0;
  *(uint *)(param_1 + 4) = (uint)DAT_0440a544;
  uVar1 = DAT_0440a540;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  *(undefined8 *)((long)param_1 + 0x34) = 0x2b;
  param_1[0x35] = 0;
  nn::mem::StandardAllocator::StandardAllocator((StandardAllocator *)(param_1 + 0x36));
  memset(param_1 + 8,0,0x168);
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0x2b;
  nn::mem::StandardAllocator::Initialize((StandardAllocator *)(param_1 + 0x36),0x440c000);
  return;
}


