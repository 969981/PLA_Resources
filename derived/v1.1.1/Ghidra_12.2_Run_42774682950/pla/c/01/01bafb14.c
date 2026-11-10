/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bafb14; name: FUN_01bafb14
 */


/* WARNING: Removing unreachable block (ram,0x01bafb70) */

void FUN_01bafb14(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  
  *(undefined1 *)(param_3 + 0xbfc) = 1;
  *(float *)(param_3 + 0xc00) = param_1;
  *(float *)(param_3 + 0xc04) = param_2;
  if ((*(byte *)(param_3 + 0xb50) & 1) != 0) {
    return;
  }
  FUN_01a5bd74(param_3,&DAT_03a7ca70,1);
  fVar1 = param_1;
  if (1.0 < param_1) {
    fVar1 = 1.0;
  }
  fVar2 = -1.0;
  if (-1.0 <= param_1) {
    fVar2 = fVar1;
  }
  fVar1 = -1.0;
  if (-1.0 <= param_2) {
    fVar1 = param_2;
  }
  FUN_01a50188(fVar2,param_3,&DAT_03a7cac0);
  FUN_01a50188(fVar1,param_3,&DAT_03a7cac8);
  return;
}


