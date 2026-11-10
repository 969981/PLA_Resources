/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008551fc; name: FUN_008551fc
 */


void FUN_008551fc(long *param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 byte param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_80 [4];
  undefined4 local_70 [4];
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(PTR_DAT_043780a0 + 0x10);
  param_1[1] = 0;
  param_1[4] = 0;
  local_70[0] = 0;
  local_80[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
  lVar1 = (**(code **)(*param_2 + 0x78))(param_2);
  param_1[1] = lVar1;
  uVar2 = FUN_007e336c();
  lVar1 = FUN_0081a750(0x718,uVar2);
  if (lVar1 != 0) {
    FUN_008566d0(lVar1);
  }
  param_1[3] = lVar1;
  FUN_0085671c(local_80,lVar1,param_1[1],param_4,10,param_8,param_6,param_9 & 1);
  FUN_007ee660(local_70,local_80);
  *(undefined4 *)(param_1[3] + 0xb4) = 5;
  lVar1 = (**(code **)(*param_2 + 0x80))(param_2);
  param_1[2] = lVar1;
  uVar2 = FUN_007e336c();
  lVar1 = FUN_0081a750(0x718,uVar2);
  if (lVar1 != 0) {
    FUN_0085555c(lVar1);
  }
  param_1[4] = lVar1;
  FUN_008555a8(local_80,lVar1,param_1[2],param_3,10,param_7,param_5,param_9 & 1);
  FUN_007ee660(local_70,local_80);
  *(undefined4 *)(param_1[4] + 0xb4) = 5;
  return;
}


