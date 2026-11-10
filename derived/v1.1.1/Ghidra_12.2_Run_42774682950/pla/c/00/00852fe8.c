/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00852fe8; name: FUN_00852fe8
 */


void FUN_00852fe8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,uint param_5,
                 byte param_6)

{
  undefined **ppuVar1;
  undefined *local_bc0 [2];
  undefined *local_bb0;
  short local_ba8;
  undefined1 local_ba6;
  ulong local_ba4;
  undefined1 auStack_b9c [1436];
  undefined4 local_600 [360];
  int local_60 [4];
  undefined4 local_48;
  undefined4 local_44;
  
  ppuVar1 = local_bc0;
  FUN_00853178(local_60);
  if (local_60[0] == 0) {
    if (((param_4 == 0) || (param_5 == 0)) || (param_6 == 0xff)) {
      local_bb0 = (undefined *)CONCAT44(local_bb0._4_4_,0x10407);
      local_600[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_bb0 | 4),(Result *)local_600);
      ppuVar1 = &local_bb0;
    }
    else {
      local_ba8 = 0;
      local_ba6 = 0;
      local_bb0 = PTR_DAT_04378080 + 0x10;
      local_ba4 = 0;
      memset(auStack_b9c,0,0x595);
      local_ba8 = (ushort)param_6 << 8;
      local_ba4 = (ulong)param_5;
      FUN_008533e8(local_bc0,&local_bb0,local_600,&local_44,0x5a0);
      FUN_00841288(local_bc0,param_2,param_3,local_600,local_44);
      FUN_007ee660(local_60,local_bc0);
      *(undefined4 *)(param_2 + 0xac) = 0xffffffff;
      *(undefined4 *)(param_2 + 0x78) = 0;
      *(undefined8 *)(param_2 + 0x80) = 0;
      *(undefined8 *)(param_2 + 0x88) = 0;
      *(undefined4 *)(param_2 + 0x90) = 0;
      *(undefined2 *)(param_2 + 0xb0) = 0xffff;
      *(undefined8 *)(param_2 + 0xb4) = 0;
      *(undefined8 *)(param_2 + 0xc0) = 0;
      *(undefined2 *)(param_2 + 200) = 0;
      *(undefined1 *)(param_2 + 0xca) = 0;
      memset((void *)(param_2 + 0x94),0xff,0x18);
      *(long *)(param_2 + 0x88) = param_4;
      *(uint *)(param_2 + 0x90) = param_5;
      *(undefined4 *)(param_2 + 0x78) = 4;
      *(byte *)(param_2 + 0xb1) = param_6;
      *(undefined8 *)(param_2 + 0xc0) = param_3;
      local_bc0[0]._0_4_ = 0;
      local_48 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_bc0 | 4),(Result *)&local_48);
    }
  }
  else {
    ppuVar1 = (undefined **)local_60;
  }
  FUN_007ee578(param_1,ppuVar1);
  return;
}


