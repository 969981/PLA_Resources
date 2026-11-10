/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00832a3c; name: FUN_00832a3c
 */


undefined8
FUN_00832a3c(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 *param_5,ulong param_6,uint param_7)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  uint local_58 [2];
  undefined6 local_50;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  uint uStack_48;
  
  local_50 = (undefined6)param_6;
  uStack_4a = (undefined1)(param_6 >> 0x30);
  uStack_49 = (undefined1)(param_6 >> 0x38);
  uStack_48 = param_7;
  memset(local_58,0,4);
  memset(local_58,0xff,4);
  local_58[0] = local_58[0] & 0xffffff;
  if (((param_6 & 0xff00000000) == 0) &&
     (lVar1 = FUN_00845d14(*(undefined8 *)(param_1 + 0x40),0), lVar1 != 0)) {
    iVar4 = 0;
    do {
      lVar1 = FUN_00845d14(*(undefined8 *)(param_1 + 0x40),iVar4);
      uVar2 = FUN_00846c54(param_1,lVar1,*param_5,param_4,uStack_4a,param_2);
      if (((uVar2 & 1) != 0) && (*(uint *)(lVar1 + 0x5fc) == local_58[0])) {
        if (lVar1 != 0) goto LAB_00832b50;
        break;
      }
      iVar4 = iVar4 + 1;
      lVar1 = FUN_00845d14(*(undefined8 *)(param_1 + 0x40),iVar4);
    } while (lVar1 != 0);
  }
  FUN_007f0ce0(auStack_78);
  lVar1 = FUN_00833394(param_1,PTR_DAT_04377e08,auStack_78,param_2,&local_50);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
LAB_00832b50:
    uVar3 = FUN_00846d14(param_1,lVar1,param_3);
    uStack_49 = 0;
    uStack_48 = uStack_48 & 0xffffff00;
    FUN_00849088(param_1 + 0x48,lVar1,uVar3,0,&local_50);
    uVar3 = 1;
  }
  return uVar3;
}


