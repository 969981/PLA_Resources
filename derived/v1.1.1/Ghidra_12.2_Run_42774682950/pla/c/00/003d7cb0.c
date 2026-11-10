/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d7cb0; name: FUN_003d7cb0
 */


void FUN_003d7cb0(long param_1,undefined8 param_2,int *param_3,long *param_4,int *param_5,
                 undefined8 *param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  void *local_70;
  long local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  long lStack_50;
  int local_48 [2];
  
  if (param_1 == 0) {
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (long *)0x0) {
      *param_4 = (long)PTR_DAT_04373888;
      param_4[1] = 0;
      param_4[2] = (long)&DAT_03996322;
    }
    if (param_5 != (int *)0x0) {
      *param_5 = 0;
    }
  }
  else {
    lVar3 = FUN_003d7ec0(param_1,3);
    if (lVar3 == 0) {
      lVar3 = FUN_003d7ec0(param_1,7);
    }
    lVar1 = param_1;
    if (lVar3 != 0) {
      lVar1 = lVar3;
    }
    uVar4 = FUN_002f12e0(lVar1,3,local_48);
    iVar2 = local_48[0];
    if ((uVar4 & 1) == 0) {
      uVar4 = FUN_002f12e0(lVar1,7,local_48);
      if ((uVar4 & 1) == 0) {
        iVar2 = 2;
      }
      else {
        iVar2 = FUN_003d7fd0(local_48[0],param_2);
      }
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar2;
    }
    if ((param_6 != (undefined8 *)0x0) && (iVar2 != 0)) {
      FUN_002f1480(param_1);
      uVar5 = FUN_002ec2d0();
      *param_6 = uVar5;
    }
    if (param_5 != (int *)0x0) {
      uVar4 = FUN_002f12e0(lVar1,7,local_48);
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_002f12e0(lVar1,3,local_48);
        if ((uVar4 & 1) == 0) {
          iVar2 = 2;
        }
        else {
          iVar2 = FUN_003d7fb0(local_48[0]);
        }
      }
      else {
        iVar2 = local_48[0];
      }
      *param_5 = iVar2;
    }
    if ((param_4 != (long *)0x0) && (uVar4 = FUN_002f1380(lVar1,5,param_4), (uVar4 & 1) == 0)) {
      uVar4 = FUN_002f12e0(lVar1,0,local_48);
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_002f1380(lVar1,0,param_4);
        if ((uVar4 & 1) == 0) {
          FUN_002f2c60(&local_68,"unknown error");
          param_4[1] = CONCAT44(uStack_5c,uStack_60);
          *param_4 = local_68;
          param_4[3] = lStack_50;
          param_4[2] = local_58;
        }
      }
      else {
        FUN_002f1380(lVar1,3,&local_68);
        if (local_68 == 0) {
          local_58 = (long)&uStack_60 + 1;
          uStack_60 = uStack_60 & 0xff;
        }
        FUN_002f4490(&local_70,"OS Error %d returned by %.*s",local_48[0],uStack_60,local_58);
        FUN_002f2ff0(&local_90,local_70);
        param_4[1] = lStack_88;
        *param_4 = local_90;
        param_4[3] = lStack_78;
        param_4[2] = lStack_80;
        free(local_70);
      }
    }
  }
  return;
}


