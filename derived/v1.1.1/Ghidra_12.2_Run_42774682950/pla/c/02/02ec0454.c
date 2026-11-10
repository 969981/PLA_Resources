/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec0454; name: FUN_02ec0454
 */


void FUN_02ec0454(long param_1,long *param_2,undefined8 param_3,long *param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long local_60;
  char local_54 [4];
  
  if (((param_5 & 1) != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    puVar4 = *(undefined8 **)(param_1 + 8);
    *(undefined4 *)(puVar4 + 0xf) = 3;
    iVar1 = *(int *)((long)puVar4 + 0x74) + -1;
    *(int *)((long)puVar4 + 0x74) = iVar1;
    if (iVar1 == 0) {
      (**(code **)*puVar4)(puVar4);
      (*DAT_0442d150)(0,puVar4);
    }
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
  }
  if (*param_2 == 0) {
    local_60 = *(long *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        lVar2 = local_60;
        *param_4 = *(long *)(local_60 + 0x28);
        uVar3 = FUN_02ec05e0(local_60,param_2 + 1,param_3,param_4 + 1);
        if ((uVar3 & 1) == 0) {
          local_60 = lVar2 + 0x30;
        }
        else {
          FUN_02ebca50(lVar2);
          local_60 = FUN_02ebcaa0((long *)(param_1 + 0x18),&local_60);
        }
      } while (local_60 != *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30);
    }
  }
  else {
    lVar2 = FUN_02ebbd18(param_1 + 0x18,*param_2,local_54);
    if ((lVar2 != 0) && (local_54[0] != '\0')) {
      *param_4 = *param_2;
      uVar3 = FUN_02ec05e0(lVar2,param_2 + 1,param_3,param_4 + 1);
      if ((uVar3 & 1) != 0) {
        FUN_02ebca50(lVar2);
        FUN_02ebffc8(param_1 + 0x18,*param_2);
        return;
      }
    }
  }
  return;
}


