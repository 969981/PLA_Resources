/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154110; name: FUN_00154110
 */


void FUN_00154110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 *local_f0;
  undefined1 **local_e8;
  undefined8 *puStack_e0;
  undefined8 local_d8;
  undefined1 auStack_b0 [40];
  int local_88;
  undefined1 auStack_78 [72];
  
  local_120 = param_3;
  uStack_118 = param_4;
  local_110 = param_5;
  uStack_108 = param_6;
  local_100 = param_7;
  uStack_f8 = param_8;
  iVar1 = FUN_00159110(param_1,1,auStack_b0);
  if (iVar1 != 0) {
    FUN_001594c0(param_1,&DAT_039a7c86,auStack_b0);
    if (0 < local_88) {
      FUN_00151650(param_1,"%s:%d: ",auStack_78);
      goto LAB_001541c8;
    }
  }
  FUN_00151650(param_1,&DAT_03996322);
LAB_001541c8:
  local_d8 = 0xffffff80ffffffd0;
  local_f0 = (undefined1 *)register0x00000008;
  local_e8 = &local_f0;
  puStack_e0 = &local_120;
  FUN_001515f0(param_1,param_2,&local_f0);
  FUN_00153380(param_1,2);
  FUN_00153290(param_1);
  return;
}


