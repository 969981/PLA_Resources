/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328e550; name: FUN_0328e550
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0328e550(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_0328eae8();
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar4 = DAT_0388a148;
  uVar3 = DAT_0388a140;
  uVar2 = _UNK_03889a88;
  uVar1 = _DAT_03889a80;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  uVar2 = _UNK_03888d18;
  uVar1 = _DAT_03888d10;
  *param_1 = &PTR_LAB_0433c288;
  uVar4 = _UNK_0388a138;
  uVar3 = _DAT_0388a130;
  param_1[0x12] = 0;
  param_1[0x13] = 0x8000000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0x8000000000000000;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0x17] = 0x7f7fffee7f7fffee;
  param_1[0x16] = 0x7f7fffee7f7fffee;
  param_1[0x19] = 0xff7fffeeff7fffee;
  param_1[0x18] = 0xff7fffeeff7fffee;
  return;
}


