/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03267844; name: FUN_03267844
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03267844(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined4 *)(param_1 + 3) = 0x3fe00000;
  param_1[6] = 0x3f860a923c000000;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3ba3d70a00000000;
  *param_1 = &PTR_LAB_0432d1b8;
  *(undefined8 *)((long)param_1 + 0x44) = 0xff3dcccccd;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_03269eb8((long)param_1 + 0x4c);
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0x200000002;
  *(undefined4 *)(param_1 + 0x13) = 0x3dcccccd;
  *(undefined1 *)((long)param_1 + 0x8c) = 1;
  param_1[0x12] = 0x3f80000040a00000;
  *(undefined2 *)((long)param_1 + 0x9c) = 0x100;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 3;
  *(undefined1 *)(param_1 + 0x26) = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0x8000000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0x8000000000000000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x8000000000000000;
  param_1[0x20] = 0;
  param_1[0x21] = 0x8000000000000000;
  param_1[0x24] = 0;
  param_1[0x25] = 0x8000000000000000;
  FUN_0325f154((long)param_1 + 0x134);
  *(undefined2 *)(param_1 + 0x28) = 0x100;
  *(undefined8 *)((long)param_1 + 0x144) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x2a) = 0x40000000;
  *(undefined1 *)((long)param_1 + 0x14c) = 1;
  *(undefined2 *)((long)param_1 + 0x154) = 0x101;
  *(undefined1 *)((long)param_1 + 0x156) = 1;
  FUN_0326a09c(param_1 + 0x2b);
  *(undefined2 *)(param_1 + 0x40) = 0;
  param_1[0x3f] = 0x8ffffffe8fffffff;
  uVar2 = _UNK_03888d18;
  uVar1 = _DAT_03888d10;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0x8000000000000000;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[0x1b] = 0x7f7fffee7f7fffee;
  param_1[0x1a] = 0x7f7fffee7f7fffee;
  param_1[0x1d] = 0xff7fffeeff7fffee;
  param_1[0x1c] = 0xff7fffeeff7fffee;
  return;
}


