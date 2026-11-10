/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060ff04; name: FUN_0060ff04
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060ff04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_03889bb8;
  uVar1 = _DAT_03889bb0;
  *param_1 = 0x10000;
  *(undefined4 *)(param_1 + 1) = 0x80000000;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  strncpy((char *)(param_1 + 4),"nn.npln.Socket",0x1f);
  *(undefined1 *)((long)param_1 + 0x3f) = 0;
  return;
}


