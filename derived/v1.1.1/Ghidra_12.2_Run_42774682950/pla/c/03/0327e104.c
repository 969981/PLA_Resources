/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327e104; name: FUN_0327e104
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0327e104(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0x3c800000;
  uVar2 = _UNK_03888d18;
  uVar1 = _DAT_03888d10;
  *(undefined2 *)(param_1 + 0xe) = 0x101;
  *(undefined1 **)(param_1 + 0xf) = &DAT_3f0000003f000000;
  *(undefined8 *)(param_1 + 0x11) = 0x7f7fffee3f000000;
  *(undefined8 *)(param_1 + 0x14) = 0x3f80000040a00000;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 6) = uVar2;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined8 *)(param_1 + 8) = 0x3ecccccd3e4ccccd;
  *(undefined8 *)(param_1 + 10) = 0x3e99999a3e99999a;
  param_1[0xd] = 1;
  *(undefined1 *)((long)param_1 + 0x3a) = 1;
  *(undefined8 *)(param_1 + 0x1c) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  param_1[0x30] = 1;
  *(undefined8 *)(param_1 + 0x22) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(param_1 + 0x20) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(param_1 + 0x26) = 0xff7fffeeff7fffee;
  *(undefined8 *)(param_1 + 0x24) = 0xff7fffeeff7fffee;
  FUN_032c7a54(param_1 + 0x32,"generationSnapshot.hkt",0xffffffff);
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined8 *)(param_1 + 0x2a) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(param_1 + 0x28) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(param_1 + 0x2e) = 0xff7fffeeff7fffee;
  *(undefined8 *)(param_1 + 0x2c) = 0xff7fffeeff7fffee;
  return;
}


