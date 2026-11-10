/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e502d8; name: FUN_02e502d8
 */


void FUN_02e502d8(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  long local_40;
  undefined4 local_38;
  float local_34;
  
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x80) != '\0') {
      lVar2 = -4;
      if (*(long *)(param_1 + 0x40) != -1) {
        lVar2 = *(long *)(param_1 + 0x40);
      }
      puVar3 = (undefined8 *)FUN_02ef21f4(DAT_0440a140,lVar2);
      if (puVar3 != (undefined8 *)0x0) {
        iVar5 = *(int *)(puVar3 + 10) + -1;
        *(int *)(puVar3 + 10) = iVar5;
        if (iVar5 == 0) {
          (**(code **)*puVar3)(puVar3);
          FUN_02f59e60(4,puVar3);
          iVar5 = *(int *)(puVar3 + 10);
        }
        *(int *)(puVar3 + 10) = iVar5 + -1;
        if (iVar5 + -1 == 0) {
          (**(code **)*puVar3)(puVar3);
          FUN_02f59e60(4,puVar3);
        }
        *(undefined1 *)(param_1 + 0x80) = 0;
      }
    }
  }
  else if (*(char *)(param_1 + 0x80) == '\0') {
    lVar2 = -4;
    if (*(long *)(param_1 + 0x40) != -1) {
      lVar2 = *(long *)(param_1 + 0x40);
    }
    lVar2 = FUN_02e4ff70(lVar2,*(undefined4 *)(param_1 + 0x60));
    if (lVar2 != 0) {
      *(undefined1 *)(param_1 + 0x80) = 1;
      lVar1 = -4;
      if (*(long *)(param_1 + 0x40) != -1) {
        lVar1 = *(long *)(param_1 + 0x40);
      }
      FUN_02ef2694(DAT_0440a140,lVar1,0,0,2);
      uVar4 = 0;
      if (0.0 < *(float *)(param_1 + 0x74)) {
        local_40 = -4;
        if (*(long *)(param_1 + 0x40) != -1) {
          local_40 = *(long *)(param_1 + 0x40);
        }
        local_38 = *(undefined4 *)(param_1 + 0x60);
        local_34 = *(float *)(param_1 + 100) * *(float *)(param_1 + 0x74);
        uVar4 = 1;
      }
      FUN_02ef2f28(DAT_0440a140,lVar2,&local_40,uVar4);
    }
  }
  return;
}


