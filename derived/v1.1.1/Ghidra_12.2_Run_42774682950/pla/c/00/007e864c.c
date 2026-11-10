/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e864c; name: FUN_007e864c
 */


void FUN_007e864c(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_38 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_007e8f94();
  *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_007e8f94();
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_007ecf14(param_1 + 8);
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 0xb),(Result *)local_38);
  FUN_007e60f4(param_1 + 0xd,0);
  *(undefined4 *)((long)param_1 + 0x14) = 0x18;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x18;
  uVar1 = FUN_007e336c();
  lVar2 = FUN_0081a750(0x188,uVar1);
  if (lVar2 != 0) {
    FUN_007e8b80(lVar2,param_2,param_1 + 0xd,param_3);
  }
  param_1[0x11] = lVar2;
  FUN_007e5480();
  return;
}


