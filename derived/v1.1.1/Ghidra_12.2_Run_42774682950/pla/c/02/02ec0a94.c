/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec0a94; name: FUN_02ec0a94
 */


bool FUN_02ec0a94(long param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long local_68;
  char local_54 [4];
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    puVar5 = *(undefined8 **)(param_1 + 8);
    *(undefined4 *)(puVar5 + 0xf) = 3;
    iVar1 = *(int *)((long)puVar5 + 0x74) + -1;
    *(int *)((long)puVar5 + 0x74) = iVar1;
    if (iVar1 == 0) {
      (**(code **)*puVar5)(puVar5);
      (*DAT_0442d150)(0,puVar5);
    }
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
  }
  if (*param_2 == -1) {
    local_68 = *(long *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        lVar3 = local_68;
        *param_4 = *(char *)(local_68 + 0x28);
        uVar4 = FUN_02ec0c68(local_68,param_2 + 8,param_3,param_4 + 8);
        if ((uVar4 & 1) == 0) {
          local_68 = lVar3 + 0x30;
        }
        else {
          if (*(long *)(lVar3 + 0x18) != 0) {
            *(undefined4 *)(lVar3 + 0x20) = 0;
            (*DAT_0442d150)(0);
            *(undefined8 *)(lVar3 + 0x18) = 0;
            *(undefined4 *)(lVar3 + 0x24) = 0;
          }
          local_68 = FUN_02ebd2f4((long *)(param_1 + 0x18),&local_68);
        }
      } while (local_68 != *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30);
    }
  }
  else {
    lVar3 = FUN_02ebc084(param_1 + 0x18,*param_2,local_54);
    if ((lVar3 != 0) && (local_54[0] != '\0')) {
      *param_4 = *param_2;
      uVar4 = FUN_02ec0c68(lVar3,param_2 + 8,param_3,param_4 + 8);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(lVar3 + 0x18) != 0) {
          *(undefined4 *)(lVar3 + 0x20) = 0;
          (*DAT_0442d150)(0);
          *(undefined8 *)(lVar3 + 0x18) = 0;
          *(undefined4 *)(lVar3 + 0x24) = 0;
        }
        FUN_02ec0364(param_1 + 0x18,*param_2);
      }
    }
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    bVar2 = *(int *)(param_1 + 0x20) == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


