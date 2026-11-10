/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6f3ec; name: FUN_02e6f3ec
 */


undefined8 *
FUN_02e6f3ec(long *param_1,long param_2,long param_3,uint param_4,undefined8 param_5,
            undefined4 param_6,undefined4 param_7,long *param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long local_68;
  
  *param_8 = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x3d));
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x50))(param_1);
  if (puVar1 != (undefined8 *)0x0) {
    if (*(long *)(param_3 + 0x10) == 0) {
      local_68 = param_3;
    }
    else {
      FUN_02e6e4b8(param_1 + 0x55,param_3,&local_68);
      if (local_68 == 0) {
        lVar2 = puVar1[1];
        puVar1[1] = 0;
        if (lVar2 != 0) {
          FUN_02e6d800(param_1 + 0x55);
        }
        (*DAT_0442d150)(7,puVar1);
        puVar1 = (undefined8 *)0x0;
        goto LAB_02e6f52c;
      }
    }
    lVar2 = FUN_02e6f564(param_1,param_2,*(long *)(local_68 + 8) + (ulong)param_4,param_5,param_6,
                         param_7);
    *param_8 = lVar2;
    *(long *)(local_68 + 0x10) = lVar2;
    puVar1[1] = local_68;
    *(uint *)(puVar1 + 2) = param_4;
    *(byte *)((long)puVar1 + 0x14) = *(byte *)((long)puVar1 + 0x14) & 0xf8;
    lVar2 = *param_8;
    if (*(long *)(lVar2 + 0x38) == 0) {
      *(undefined8 **)(lVar2 + 0x38) = puVar1;
      puVar1[3] = 0;
    }
    else {
      puVar1[3] = *(long *)(lVar2 + 0x38);
      *(undefined8 **)(lVar2 + 0x38) = puVar1;
    }
    *puVar1 = 0;
    plVar3 = (long *)(param_2 + 0xb8);
    if (*plVar3 != 0) {
      plVar3 = *(long **)(param_2 + 0xb0);
    }
    *plVar3 = (long)puVar1;
    *(undefined8 **)(param_2 + 0xb0) = puVar1;
    puVar1[4] = param_2;
  }
LAB_02e6f52c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3d));
  return puVar1;
}


