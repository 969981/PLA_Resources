/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa4cac; name: FUN_02fa4cac
 */


void FUN_02fa4cac(long param_1,int param_2,int param_3,int param_4,int param_5,float *param_6,
                 float *param_7)

{
  int iVar1;
  int iVar2;
  float local_38 [2];
  float local_28 [2];
  
  iVar1 = param_2;
  if (param_4 <= param_2) {
    iVar1 = param_4;
  }
  if (param_2 <= param_4) {
    param_2 = param_4;
  }
  iVar2 = param_3;
  if (param_5 <= param_3) {
    iVar2 = param_5;
  }
  if (param_3 <= param_5) {
    param_3 = param_5;
  }
  FUN_02fa4180(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0x5c),iVar1,iVar2,param_2,param_3,local_28,local_38);
  *param_6 = *(float *)(param_1 + 0x84) * local_28[0];
  *param_7 = *(float *)(param_1 + 0x84) * local_38[0];
  return;
}


