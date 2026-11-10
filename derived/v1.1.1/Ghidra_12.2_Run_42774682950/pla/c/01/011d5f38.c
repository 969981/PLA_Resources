/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d5f38; name: FUN_011d5f38
 */


void FUN_011d5f38(undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  undefined *puStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  lVar1 = (ulong)*(byte *)(param_1 + 2) * 0x18;
  local_30 = *(undefined8 *)(&DAT_041f82f8 + lVar1);
  puStack_28 = (&PTR_s_anime_L_poke_00_condition_01_041f8300)[(ulong)*(byte *)(param_1 + 2) * 3];
  local_20 = *(undefined8 *)(&DAT_041f8308 + lVar1);
  uStack_18 = 0;
  FUN_0283b1e8(*param_1,&local_30);
  return;
}


