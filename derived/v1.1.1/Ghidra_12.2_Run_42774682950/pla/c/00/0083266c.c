/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083266c; name: FUN_0083266c
 */


undefined8
FUN_0083266c(long param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined1 *param_6,ulong param_7,undefined4 param_8)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong local_70;
  undefined4 local_68;
  
  local_70 = param_7;
  local_68 = param_8;
  if (((param_7 & 0xff00000000) == 0) &&
     (lVar2 = FUN_00845d14(*(undefined8 *)(param_1 + 0x40),0), lVar2 != 0)) {
    iVar6 = 0;
    do {
      lVar2 = FUN_00845d14(*(undefined8 *)(param_1 + 0x40),iVar6);
      uVar3 = FUN_00846c54(param_1,lVar2,*param_6,param_5,(param_7 & 0xff000000000000) != 0,param_3)
      ;
      if (((uVar3 & 1) != 0) && (uVar3 = FUN_007f0f48(lVar2 + 0x600,param_2 + 8), (uVar3 & 1) != 0))
      {
        if (lVar2 != 0) goto LAB_00832764;
        break;
      }
      iVar6 = iVar6 + 1;
      lVar2 = FUN_00845d14(*(undefined8 *)(param_1 + 0x40),iVar6);
    } while (lVar2 != 0);
  }
  lVar2 = FUN_00833394(param_1,param_2,param_2 + 8,param_3,&local_70);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
LAB_00832764:
    if (*param_2 == param_2[0x28]) {
      bVar1 = param_2[1] != param_2[0x29];
    }
    else {
      bVar1 = true;
    }
    uVar4 = FUN_008336f4(param_1 + 0x7e2);
    uVar5 = FUN_00846d14(param_1,lVar2,param_4);
    local_70 = local_70 & 0xffffffffffffff;
    local_68 = CONCAT31(local_68._1_3_,bVar1);
    FUN_00849088(param_1 + 0x48,lVar2,uVar5,uVar4,&local_70);
    uVar4 = 1;
  }
  return uVar4;
}


