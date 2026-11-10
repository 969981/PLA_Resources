/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00212170; name: FUN_00212170
 */


int FUN_00212170(long param_1,uint param_2,int param_3,undefined8 *param_4,undefined8 param_5,
                undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  
  lVar1 = param_1 + 0x890;
  if (param_4 == (undefined8 *)0x0) {
    FUN_00205bfc(&local_78);
  }
  else {
    local_78 = *param_4;
    local_70 = *(undefined4 *)(param_4 + 1);
    FUN_00205c38(&local_78);
  }
  iVar3 = FUN_0020d4f4(&local_68,param_5,param_6,lVar1);
  if (iVar3 < 0) {
    return iVar3;
  }
  lVar4 = FUN_0020c738(lVar1,0x98);
  if (lVar4 == 0) {
    iVar3 = -0x385;
LAB_002122b8:
    FUN_0020c8b4(local_68,lVar1);
  }
  else {
    FUN_00211334(lVar4);
    if ((param_7 != (undefined8 *)0x0) && (param_7[1] != 0)) {
      uVar2 = param_7[1];
      *(undefined8 *)(lVar4 + 0x60) = *param_7;
      *(undefined8 *)(lVar4 + 0x68) = uVar2;
    }
    *(undefined8 *)(lVar4 + 0x70) = param_8;
    if (param_3 == -1) {
      param_3 = *(int *)(param_1 + 0x930);
      if (param_3 < 0) {
        iVar3 = -0x1fd;
        goto LAB_002122b8;
      }
      iVar5 = 0;
      *(int *)(param_1 + 0x930) = param_3 + 2;
    }
    else {
      iVar5 = 3;
    }
    FUN_0020c85c(lVar4,param_2 & 0x21 | 4,param_3,iVar5,&local_78,local_68,param_6);
    iVar3 = FUN_002069b8(param_1,lVar4);
    if (iVar3 == 0) {
      if (iVar5 != 0) {
        param_3 = 0;
      }
      return param_3;
    }
    FUN_0020c8a4(lVar4,lVar1);
  }
  FUN_0020c748(lVar1,lVar4);
  return iVar3;
}


