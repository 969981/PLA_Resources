/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00825bdc; name: FUN_00825bdc
 */


void FUN_00825bdc(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  uVar2 = *(undefined8 *)(param_2 + 0xe0);
  uVar1 = *(undefined8 *)(param_2 + 0xe8);
  uVar3 = *(undefined8 *)(param_2 + 0xf0);
  *param_3 = *(undefined8 *)(param_2 + 0xd8);
  param_3[1] = uVar2;
  param_3[2] = uVar1;
  param_3[3] = uVar3;
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_28);
  return;
}


