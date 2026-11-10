/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027fcc94; name: FUN_027fcc94
 */


void FUN_027fcc94(ulong param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  uint local_44;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((*(long *)(param_1 + 0x688) != 0) && (*(int *)(*(long *)(param_1 + 0x688) + 0xc) != 0)) {
    if ((*(long *)(param_1 + 0x688) != 0) &&
       (((lVar2 = *(long *)(*(long *)(param_1 + 0x688) + 0x18), lVar2 != 0 &&
         (param_1 = FUN_0205ca28(lVar2), (param_1 & 1) != 0)) &&
        (((*(char *)(lVar2 + 0x18) != '\0' ^ param_2) & 1) != 0)))) {
      local_40 = 0xdca5acb5512330bd;
      pcStack_38 = "HayabusaSkyEnable";
      local_30 = 0x1f;
      local_28 = (long *)0x0;
      local_44 = ~param_2 & 1;
      plVar1 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
      (**(code **)(*plVar1 + 0x30))(plVar1,&local_40,&local_44);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
      param_1 = FUN_01f629d0(lVar2 + -0x50,param_2 & 1);
    }
    FUN_027fd148(param_1,~param_2 & 1);
  }
  return;
}


