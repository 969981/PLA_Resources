/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01349acc; name: FUN_01349acc
 */


bool FUN_01349acc(long param_1,uint param_2,float *param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  float local_c [3];
  
  bVar3 = *(char *)(param_1 + 0x98c) != '\0';
  puVar2 = &UNK_03a7b2a8;
  if (bVar3) {
    puVar2 = &DAT_03a7b260;
  }
  uVar4 = 0xc;
  if (bVar3) {
    uVar4 = 8;
  }
  local_c[2] = 1.0;
  local_c[1] = 2.0;
  uVar1 = uVar4;
  if (param_2 <= uVar4) {
    uVar1 = param_2;
  }
  local_c[0] = *(float *)(puVar2 + (ulong)uVar1 * 8 + 4);
  pfVar5 = local_c + 1;
  if (local_c[0] <= 2.0) {
    pfVar5 = local_c;
  }
  if (local_c[0] < 1.0) {
    pfVar5 = local_c + 2;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = *pfVar5;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = puVar2[(ulong)uVar1 * 8];
  }
  return uVar4 <= param_2;
}


