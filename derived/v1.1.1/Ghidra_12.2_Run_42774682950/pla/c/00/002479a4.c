/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002479a4; name: FUN_002479a4
 */


void FUN_002479a4(float param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6,byte param_7,byte param_8)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte bVar4;
  float local_68;
  float fStack_64;
  float local_58;
  float fStack_54;
  
  uVar3 = (**(code **)(*(long *)*param_2 + 0x60))((long *)*param_2,&local_58);
  if (param_5 != 0) {
    if ((param_6 != 0) || ((*(byte *)(param_5 + 4) & 2) != 0 && (param_7 & 1) == 0)) {
      bVar4 = param_7 & param_8 & 1;
      if ((*(byte *)(param_5 + 4) & 2) == 0) {
        bVar4 = param_8 & 1;
      }
      uVar3 = FUN_002474cc(uVar3,param_2 + 9,param_3,param_4,&local_58,0xb01,bVar4);
      goto LAB_00247a4c;
    }
  }
  param_2[9] = 0;
  bVar4 = param_8 & 1;
LAB_00247a4c:
  fStack_54 = fStack_54 * param_1;
  local_58 = local_58 * param_1;
  if (param_6 == 0) {
    return;
  }
  bVar2 = *(byte *)(param_6 + 8) >> 5 & 1;
  bVar1 = 0;
  if ((bVar2 & (param_7 ^ 1)) == 0) {
    bVar1 = bVar4;
  }
  fStack_64 = (float)((uint)*(byte *)(param_6 + 0xc) << 1);
  local_68 = local_58 + fStack_64;
  fStack_64 = fStack_54 + fStack_64;
  uVar3 = FUN_002474cc(uVar3,param_2 + 0xf,param_3,param_4,&local_68,0x201,bVar1);
  if ((bVar2 & (param_7 ^ 1)) != 1) {
    return;
  }
  if ((*(byte *)(param_6 + 8) & 1) == 0) {
    param_2[0x10] = 0;
    bVar4 = *(byte *)(param_6 + 8);
  }
  else {
    uVar3 = FUN_002474cc(uVar3,param_2 + 0x10,param_3,param_4,&local_68,0xb01,0);
    bVar4 = *(byte *)(param_6 + 8);
  }
  if ((bVar4 >> 1 & 1) == 0) {
    param_2[0x11] = 0;
    bVar4 = *(byte *)(param_6 + 8);
  }
  else {
    uVar3 = FUN_002474cc(uVar3,param_2 + 0x11,param_3,param_4,&local_68,0xb01,0);
    bVar4 = *(byte *)(param_6 + 8);
  }
  if ((bVar4 >> 2 & 1) == 0) {
    param_2[0x12] = 0;
  }
  else {
    FUN_002474cc(uVar3,param_2 + 0x12,param_3,param_4,&local_68,0xb01,0);
  }
  return;
}


