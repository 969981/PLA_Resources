/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d9458; name: FUN_027d9458
 */


undefined8 FUN_027d9458(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_1d0 [8];
  undefined4 local_1c8 [2];
  undefined4 local_1c0 [94];
  long local_48;
  undefined8 local_40;
  ulong local_38;
  
  if (DAT_04408e40 == 0) {
    local_40 = 0;
    local_48 = 0;
  }
  else {
    local_40 = DAT_04408e60;
    local_48 = DAT_04408e40;
  }
  local_38 = 0;
  if (param_2 != 0) {
    local_38 = 0;
    uVar2 = FUN_02c5d3a4(param_2);
    if ((uVar2 & 1) == 0) {
      memset(local_1c0,0,0x178);
      FUN_02c65514(param_2,local_1c0);
      local_1c8[0] = 2;
      FUN_027daafc(auStack_1d0,local_1c8,&local_48);
      FUN_027d81fc(local_1c8,param_1 + 0xf8,&local_48);
      FUN_027dabb4(local_1c8,local_1c0,&local_48);
      goto LAB_027d94d8;
    }
  }
  local_1c0[0] = 3;
  FUN_027daafc(local_1c8,local_1c0,&local_48);
  FUN_027d81fc(local_1c0,param_1 + 0xf8,&local_48);
LAB_027d94d8:
  lVar4 = *(long *)(param_1 + 0x90);
  if ((((*(long *)(lVar4 + 0xa8) == 0) || (*(int *)(*(long *)(lVar4 + 0xa8) + 0xc) == 0)) ||
      (plVar1 = *(long **)(lVar4 + 0xb8), plVar1 == (long *)0x0)) ||
     ((uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,lVar4 + 0x6c,*(undefined8 *)(param_1 + 0x88)),
      (uVar2 & 1) == 0 ||
      (uVar2 = (**(code **)(**(long **)(param_1 + 0x90) + 0x40))
                         (*(long **)(param_1 + 0x90),DAT_04408e40,local_38 & 0xffffffff,
                          (undefined8 *)(param_1 + 0x88)), (uVar2 & 1) == 0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


