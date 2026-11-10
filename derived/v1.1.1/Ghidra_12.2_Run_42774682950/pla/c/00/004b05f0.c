/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004b05f0; name: FUN_004b05f0
 */


void FUN_004b05f0(byte *param_1,byte *param_2,long param_3,undefined8 param_4,undefined4 *param_5,
                 uint *param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 local_48;
  undefined4 local_44;
  
  uVar3 = *param_6;
  if (param_7 == 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      if (uVar3 == 0) {
        local_48 = *param_5;
        local_44 = param_5[1];
        FUN_0047a3f0(&local_48,param_4,1);
        *param_5 = local_48;
        param_5[1] = local_44;
      }
      bVar1 = *param_1;
      bVar2 = *(byte *)((long)param_5 + (long)(int)uVar3);
      *(byte *)((long)param_5 + (long)(int)uVar3) = bVar1;
      *param_2 = bVar2 ^ bVar1;
      uVar3 = uVar3 + 1 & 7;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      if (uVar3 == 0) {
        local_48 = *param_5;
        local_44 = param_5[1];
        FUN_0047a3f0(&local_48,param_4,1);
        *param_5 = local_48;
        param_5[1] = local_44;
      }
      bVar1 = *(byte *)((long)param_5 + (long)(int)uVar3) ^ *param_1;
      *param_2 = bVar1;
      *(byte *)((long)param_5 + (long)(int)uVar3) = bVar1;
      uVar3 = uVar3 + 1 & 7;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  *param_6 = uVar3;
  return;
}


