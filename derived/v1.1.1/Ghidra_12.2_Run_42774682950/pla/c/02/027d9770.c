/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d9770; name: FUN_027d9770
 */


undefined8 FUN_027d9770(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  long local_48;
  undefined8 local_40;
  ulong local_38;
  undefined4 local_28 [2];
  
  if (*(int *)(param_1 + 0xb8) == 3) {
    if (DAT_04408e40 == 0) {
      local_40 = 0;
      local_48 = 0;
    }
    else {
      local_48 = DAT_04408e40;
      local_40 = DAT_04408e60;
    }
    local_38 = 0;
    local_28[0] = 5;
    FUN_027daafc(auStack_50,local_28,&local_48);
    FUN_027d81fc(local_28,param_1 + 0xf8,&local_48);
    lVar4 = *(long *)(param_1 + 0x90);
    if ((*(long *)(lVar4 + 0xa8) != 0) && (*(int *)(*(long *)(lVar4 + 0xa8) + 0xc) != 0)) {
      plVar1 = *(long **)(lVar4 + 0xb8);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,lVar4 + 0x6c,*(undefined8 *)(param_1 + 0x88));
      if (((uVar2 & 1) != 0) &&
         (uVar2 = (**(code **)(**(long **)(param_1 + 0x90) + 0x40))
                            (*(long **)(param_1 + 0x90),DAT_04408e40,local_38 & 0xffffffff,
                             (undefined8 *)(param_1 + 0x88)), (uVar2 & 1) != 0)) {
        *(undefined4 *)(param_1 + 0xb8) = 4;
        if ((*(uint *)(param_1 + 0xbc) & 0xfffffffe) == 4) {
          *(undefined8 *)(param_1 + 200) = 0;
          *(undefined8 *)(param_1 + 0xd0) = 0;
          if (*(char *)(param_1 + 0xc0) == '\0') {
            *(undefined1 *)(param_1 + 0xc0) = 1;
          }
          nn::os::GetSystemTick();
          uVar3 = nn::os::ConvertToTimeSpan();
          *(undefined8 *)(param_1 + 200) = uVar3;
        }
        return 1;
      }
    }
  }
  return 0;
}


