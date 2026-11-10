/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0338fd30; name: FUN_0338fd30
 */


void FUN_0338fd30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 local_58 [2];
  undefined4 local_48 [2];
  
  if (((*(int *)(param_1 + 0x100) < *(int *)(param_1 + 0xf8)) ||
      (*(int *)(param_1 + 0x140) < *(int *)(param_1 + 0x128))) ||
     (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38))) {
    FUN_03398be8(param_2,0,0x54595045);
    if (*(char *)(param_1 + 0x290) != '\0') {
      FUN_03398be8(param_2,1,0x54505452);
      FUN_033221c0(param_3,((long)*(int *)(param_1 + 0x210) + 1) * (long)*(int *)(param_1 + 0x220));
      FUN_03398cb8(param_2);
    }
    if (*(char *)(param_1 + 0x291) == '\0') {
      *(undefined4 *)(param_1 + 0x36c) = 1;
    }
    else {
      uVar1 = FUN_033901e4(param_1 + 0x18);
      FUN_03398be8(param_2,1,0x54534841);
      local_58[0] = *(undefined4 *)(param_1 + 0x36c);
      FUN_032afb80(param_3,local_58,4);
      local_48[0] = uVar1;
      FUN_032afb80(param_3,local_48,4);
      FUN_03398cb8(param_2);
      *(undefined4 *)(param_1 + 0x36c) = uVar1;
    }
    if (*(int *)(param_1 + 0x68) < *(int *)(param_1 + 0x50)) {
      FUN_03398be8(param_2,1,0x54535431);
      FUN_03390220(param_1 + 0x48,param_3);
      FUN_033902a0(param_3,4,param_1 + 0x368,&DAT_03ab1e8a);
      FUN_03398cb8(param_2);
    }
    if (*(int *)(param_1 + 0x100) < *(int *)(param_1 + 0xf8)) {
      FUN_03398be8(param_2,1,0x544e4131);
      FUN_03390344(param_1 + 0xf0,param_3);
      FUN_033902a0(param_3,4,param_1 + 0x368,&DAT_03ab1eaa);
      FUN_03398cb8(param_2);
    }
    if (*(int *)(param_1 + 0xa0) < *(int *)(param_1 + 0x88)) {
      FUN_03398be8(param_2,1,0x46535431);
      FUN_03390220(param_1 + 0x80,param_3);
      FUN_033902a0(param_3,4,param_1 + 0x368,&DAT_03ab1e8a);
      FUN_03398cb8(param_2);
    }
    if (*(int *)(param_1 + 0xd8) < *(int *)(param_1 + 0xc0)) {
      FUN_03398be8(param_2,1,0x41535431);
      FUN_03390220(param_1 + 0xb8,param_3);
      FUN_033902a0(param_3,4,param_1 + 0x368,&DAT_03ab1e8a);
      FUN_03398cb8(param_2);
    }
    if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
      FUN_03398be8(param_2,1,0x54424459);
      FUN_032afb80(param_3,*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x40),
                   (long)*(int *)(param_1 + 0x38) - (long)*(int *)(param_1 + 0x40));
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x38);
      FUN_033902a0(param_3,4,param_1 + 0x368,&DAT_03ab1eaa);
      FUN_03398cb8(param_2);
    }
    if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x20)) {
      FUN_03398be8(param_2,1,0x54485348);
      FUN_03390458(param_1 + 0x18,param_3);
      FUN_033902a0(param_3,4,param_1 + 0x368,&DAT_03ab1eaa);
      FUN_03398cb8(param_2);
    }
    if (*(int *)(param_1 + 0x140) < *(int *)(param_1 + 0x128)) {
      FUN_03398be8(param_2,1,0x5450524f);
      FUN_033904f8(param_1 + 0x120,param_3);
      FUN_033902a0(param_3,4,param_1 + 0x368,&DAT_03ab1eaa);
      FUN_03398cb8(param_2);
    }
    if (*(int *)(param_1 + 0x158) < *(int *)(param_1 + 0x150)) {
      FUN_03398be8(param_2,1,0x54504853);
      FUN_03390458(param_1 + 0x148,param_3);
      FUN_033902a0(param_3,4,param_1 + 0x368,&DAT_03ab1eaa);
      FUN_03398cb8(param_2);
    }
    FUN_03398be8(param_2,1,0x54504144);
    FUN_033902a0(param_3,4,param_1 + 0x368,&DAT_03ab1eaa);
    FUN_03398cb8(param_2);
    FUN_03398cb8(param_2);
  }
  return;
}


