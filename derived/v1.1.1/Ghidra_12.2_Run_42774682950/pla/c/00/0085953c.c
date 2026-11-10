/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085953c; name: FUN_0085953c
 */


void FUN_0085953c(long *param_1)

{
  char cVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined1 auStack_398 [16];
  undefined2 local_388 [4];
  undefined1 auStack_380 [32];
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_34c;
  undefined1 local_347;
  undefined8 local_340;
  undefined1 auStack_338 [304];
  undefined1 auStack_208 [128];
  undefined1 auStack_188 [304];
  undefined8 local_58;
  int local_50 [4];
  
  cVar1 = *(char *)((long)param_1 + 9);
  if (cVar1 == '\x04') {
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
    if ((uVar2 & 1) != 0) {
      (**(code **)(*param_1 + 0x60))(local_50 + 0xc,param_1);
      FUN_007ee660(param_1 + 5,local_50 + 0xc);
      *(undefined1 *)((long)param_1 + 9) = 5;
    }
  }
  else if (((cVar1 == '\x03') || (cVar1 == '\x01')) &&
          (uVar2 = FUN_0086d528(param_1[4]), (uVar2 & 1) != 0)) {
    FUN_00859f30(local_50);
    if (*(char *)((long)param_1 + 9) == '\x03') {
      if (local_50[0] == 0) {
        lVar4 = param_1[4];
        FUN_00859ff8(local_388);
        FUN_007e346c(auStack_380,lVar4 + 0xef8);
        local_388[0] = *(undefined2 *)(lVar4 + 0xef0);
        local_360 = *(undefined4 *)(lVar4 + 0xf18);
        local_35c = *(undefined4 *)(lVar4 + 0xf1c);
        local_358 = *(undefined4 *)(lVar4 + 0xf20);
        local_34c = *(undefined4 *)(lVar4 + 0xf2c);
        local_347 = *(undefined1 *)(lVar4 + 0xf31);
        local_340 = FUN_0086d500(param_1[4]);
        lVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
        FUN_007ec6ec(auStack_398,auStack_338,lVar4 + 0x18);
        lVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
        FUN_007ec6ec(auStack_398,auStack_188,lVar4 + 0x148);
        lVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
        local_58 = *(undefined8 *)(lVar4 + 8);
        lVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
        FUN_007ec6ec(auStack_398,auStack_208,lVar4 + 0x278);
        FUN_0085ab44(auStack_398,*(undefined8 *)PTR_DAT_043780f8,local_388);
        FUN_007ee660(local_50,auStack_398);
        if (local_50[0] == 0) {
          uVar3 = 4;
        }
        else {
          FUN_007ee660(param_1 + 5,local_50);
          uVar3 = 5;
        }
        *(undefined1 *)((long)param_1 + 9) = uVar3;
        FUN_007e34a4(auStack_380);
      }
      else {
        FUN_007ee660(param_1 + 5,local_50);
        *(undefined1 *)((long)param_1 + 9) = 5;
      }
    }
    else if (*(char *)((long)param_1 + 9) == '\x01') {
      *(undefined1 *)((long)param_1 + 9) = 2;
    }
    return;
  }
  return;
}


