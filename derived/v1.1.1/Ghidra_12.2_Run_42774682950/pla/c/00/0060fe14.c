/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060fe14; name: FUN_0060fe14
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060fe14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack_54;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  uint7 uStack_28;
  
  uVar3 = FUN_00612330();
  uVar2 = _UNK_03889bb8;
  uVar1 = _DAT_03889bb0;
  strncpy((char *)&local_40,"nn.npln.Worker",0x1f);
  *param_1 = uVar3;
  param_1[1] = 2;
  param_1[3] = CONCAT44(uStack_54,0x80000000);
  param_1[2] = 0x10000;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uStack_38;
  param_1[6] = local_40;
  param_1[9] = (ulong)uStack_28;
  param_1[8] = uStack_30;
  return;
}


