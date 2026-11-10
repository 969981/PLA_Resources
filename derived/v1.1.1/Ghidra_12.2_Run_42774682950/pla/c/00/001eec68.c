/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001eec68; name: FUN_001eec68
 */


undefined8 FUN_001eec68(undefined8 param_1,long param_2,void *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  void *__dest;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  long local_48;
  
  piVar5 = (int *)(param_2 + 0x10);
  iVar2 = (int)param_4;
  if (*piVar5 - 1U < 6) {
    switch(*piVar5) {
    case 1:
      iVar1 = FUN_001eee70(param_3,param_4,&local_48);
      if (iVar1 != 0) {
        if (iVar1 != 2) {
LAB_001eed94:
          FUN_001ee890(param_1,param_2 + 0x18);
          uVar4 = 0x3d;
          goto LAB_001eedc4;
        }
        *(int *)(param_2 + 0x20) = iVar2;
        __dest = (void *)FUN_002044c4(param_4 & 0xffffffff);
        *(void **)(param_2 + 0x18) = __dest;
        if (__dest != (void *)0x0) {
          memcpy(__dest,param_3,(ulong)*(uint *)(param_2 + 0x20));
          *piVar5 = 4;
          return 0;
        }
LAB_001eedc0:
        uVar4 = 0x1b;
LAB_001eedc4:
        uVar4 = FUN_001eeb30(param_1,param_2 + 0x18,piVar5,uVar4);
        return uVar4;
      }
      iVar2 = iVar2 - (int)local_48;
      *(long *)(param_2 + 0x18) = (long)param_3 + local_48;
      break;
    default:
      goto switchD_001eecbc_caseD_2;
    case 3:
      *(void **)(param_2 + 0x18) = param_3;
      *(int *)(param_2 + 0x20) = iVar2;
      uVar4 = FUN_001ee8b4(param_1,piVar5);
      return uVar4;
    case 4:
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + iVar2;
      lVar3 = FUN_001f8d18(*(undefined8 *)(param_2 + 0x18));
      *(long *)(param_2 + 0x18) = lVar3;
      if (lVar3 == 0) goto LAB_001eedc0;
      memcpy((void *)((lVar3 + (ulong)*(uint *)(param_2 + 0x20)) - param_4),param_3,param_4);
      iVar2 = FUN_001eee70(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x20),&local_48
                          );
      if (iVar2 != 0) {
        if (iVar2 == 2) {
          return 0;
        }
        goto LAB_001eed94;
      }
      FUN_002044d4(*(undefined8 *)(param_2 + 0x18));
      iVar2 = *(uint *)(param_2 + 0x20) - (int)local_48;
      *(ulong *)(param_2 + 0x18) =
           (long)param_3 + ((param_4 + local_48) - (ulong)*(uint *)(param_2 + 0x20));
      break;
    case 6:
      *(void **)(param_2 + 0x18) = param_3;
      *(int *)(param_2 + 0x20) = iVar2;
      uVar4 = 6;
      goto LAB_001eee2c;
    }
    *(int *)(param_2 + 0x20) = iVar2;
    *piVar5 = 5;
  }
  else {
switchD_001eecbc_caseD_2:
    *(void **)(param_2 + 0x18) = param_3;
    *(int *)(param_2 + 0x20) = iVar2;
  }
  if (iVar2 == 0) {
    return 0;
  }
  uVar4 = 5;
LAB_001eee2c:
  uVar4 = FUN_001ee910(param_1,param_2,uVar4);
  return uVar4;
}


