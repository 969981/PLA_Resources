/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0111e944; name: FUN_0111e944
 */


void FUN_0111e944(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x68;
  lVar3 = (ulong)(uint)(param_3 + param_2 * 0x1e) * 4;
  lVar2 = (ulong)(uint)(param_5 + param_4 * 0x1e) * 4;
  uVar1 = *(undefined4 *)(param_1 + lVar3);
  *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_1 + lVar2);
  *(undefined4 *)(param_1 + lVar2) = uVar1;
  return;
}


