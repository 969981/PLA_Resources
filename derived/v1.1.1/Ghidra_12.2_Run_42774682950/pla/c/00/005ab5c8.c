/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ab5c8; name: FUN_005ab5c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ab5c8(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = _UNK_03889db8;
  uVar1 = _DAT_03889db0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  auVar3 = FUN_002eefc0(0);
  *(undefined8 *)(param_1 + 10) = DAT_0388a858;
  *(undefined1 (*) [16])(param_1 + 6) = auVar3;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = param_2;
  return;
}


