/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086126c; name: FUN_0086126c
 */


void FUN_0086126c(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_e8;
  int local_e0;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [48];
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  
  FUN_007f0ce0(auStack_78);
  if ((param_4 < 7) && ((1 << (ulong)(param_4 & 0x1f) & 0x43U) != 0)) {
    FUN_0085d630(&local_e8,*(undefined8 *)(param_2 + 0xb0),*(undefined8 *)(param_3 + 0x10));
    FUN_007f0f88(auStack_78,&local_e8);
  }
  else {
    lVar1 = param_3 + 0x48;
    if (*(char *)(param_3 + 0x68) != '\0') {
      lVar1 = param_3 + 0x28;
    }
    FUN_007e3428(&local_e8,lVar1);
    uVar3 = FUN_007e4430(&local_e8);
    FUN_007e34a4(&local_e8);
    if ((uVar3 & 1) == 0) {
      local_58[0] = 0;
      local_e8 = (undefined *)CONCAT44(local_e8._4_4_,0x2c0a);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_e8 | 4),(Result *)local_58);
      FUN_007ee578(param_1,&local_e8);
      return;
    }
    lVar1 = param_3 + 0x48;
    if (*(char *)(param_3 + 0x68) != '\0') {
      lVar1 = param_3 + 0x28;
    }
    FUN_007e3428(&local_e8,lVar1);
    FUN_007f105c(auStack_78,&local_e8);
    FUN_007e34a4(&local_e8);
  }
  uVar5 = *(undefined8 *)(param_2 + 0xa0);
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = FUN_00847388(*(undefined8 *)(param_2 + 0xb0));
  FUN_0086217c(&local_e8,param_4,uVar5,uVar6,param_2 + 0x60,param_2 + 0x80,uVar2);
  if (local_e0 == 2) {
    iVar4 = (int)*(float *)(param_3 + 0x70);
  }
  else {
    iVar4 = 0;
  }
  FUN_00861174(param_1,param_2,&local_e8,auStack_78,iVar4);
  local_e8 = PTR_DAT_043781a0 + 0x10;
  FUN_007e34a4(auStack_a8);
  FUN_007e34a4(auStack_c8);
  return;
}


