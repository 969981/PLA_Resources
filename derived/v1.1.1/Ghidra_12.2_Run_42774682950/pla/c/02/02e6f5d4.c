/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6f5d4; name: FUN_02e6f5d4
 */


undefined8 *
FUN_02e6f5d4(long *param_1,long param_2,int param_3,undefined8 param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,ulong param_8,undefined4 *param_9,long *param_10,
            undefined1 *param_11)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long local_68;
  
  *param_10 = 0;
  *param_11 = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x3d));
  uVar1 = 0;
  plVar3 = param_1 + 0x55;
  local_68 = 0;
  if ((param_3 != -1) && ((char)param_1[0xc0] != '\0')) {
    uVar1 = FUN_02e6df14(plVar3,param_3,param_4,param_5,param_6,param_7 & 1,param_9,&local_68);
  }
  if ((param_8 & 1) == 0) {
LAB_02e6f6bc:
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x50))(param_1);
    if (puVar4 == (undefined8 *)0x0) goto LAB_02e6f694;
    if (local_68 == 0) {
      FUN_02e6d92c(plVar3,*param_9,param_6,&local_68);
      if (local_68 == 0) {
        lVar2 = puVar4[1];
        puVar4[1] = 0;
        if (lVar2 != 0) {
          FUN_02e6d800(plVar3);
        }
        (*DAT_0442d150)(7,puVar4);
        goto LAB_02e6f68c;
      }
      lVar2 = FUN_02e6f564(param_1,param_2,*(undefined8 *)(local_68 + 8),param_4,
                           *(undefined4 *)(local_68 + 0x1c),*param_9);
      *param_10 = lVar2;
      FUN_02e6e0ec(plVar3,local_68,lVar2,param_3,param_4,*param_9);
      puVar4[1] = local_68;
      *(undefined4 *)(puVar4 + 2) = 0;
      *(byte *)((long)puVar4 + 0x14) = *(byte *)((long)puVar4 + 0x14) & 0xf8;
      lVar2 = *param_10;
      if (*(long *)(lVar2 + 0x38) == 0) {
        *(undefined8 **)(lVar2 + 0x38) = puVar4;
        puVar4[3] = 0;
      }
      else {
        puVar4[3] = *(long *)(lVar2 + 0x38);
        *(undefined8 **)(lVar2 + 0x38) = puVar4;
      }
    }
    else {
      puVar4[1] = local_68;
      *(undefined4 *)(puVar4 + 2) = uVar1;
      *(byte *)((long)puVar4 + 0x14) = *(byte *)((long)puVar4 + 0x14) & 0xf8;
      lVar2 = *(long *)(local_68 + 0x10);
      if (lVar2 != 0) {
        if (*(long *)(lVar2 + 0x38) == 0) {
          *(undefined8 **)(lVar2 + 0x38) = puVar4;
          puVar4[3] = 0;
        }
        else {
          puVar4[3] = *(long *)(lVar2 + 0x38);
          *(undefined8 **)(lVar2 + 0x38) = puVar4;
        }
        *param_11 = 1;
      }
    }
    *puVar4 = 0;
    plVar3 = (long *)(param_2 + 0xd0);
    if (*plVar3 != 0) {
      plVar3 = *(long **)(param_2 + 200);
    }
    *plVar3 = (long)puVar4;
    *(undefined8 **)(param_2 + 200) = puVar4;
    puVar4[4] = param_2;
  }
  else {
    if (local_68 != 0) {
      if (*(long *)(local_68 + 0x10) == 0) goto LAB_02e6f6bc;
      FUN_02e6d800(plVar3);
    }
LAB_02e6f68c:
    puVar4 = (undefined8 *)0x0;
  }
LAB_02e6f694:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3d));
  return puVar4;
}


