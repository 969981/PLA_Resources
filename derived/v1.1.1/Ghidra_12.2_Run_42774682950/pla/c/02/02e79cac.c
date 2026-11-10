/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e79cac; name: FUN_02e79cac
 */


void FUN_02e79cac(long param_1,int param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if ((((param_3 != -1) && (param_2 != 0)) && (DAT_0440a320 != 0)) &&
     (puVar3 = (undefined8 *)FUN_02ef21f4(DAT_0440a140,param_3), puVar3 != (undefined8 *)0x0)) {
    if (DAT_0440a320 != 0) {
      for (lVar4 = *(long *)(param_1 + 8); lVar4 != 0; lVar4 = *(long *)(lVar4 + 8)) {
        if ((*(int *)(lVar4 + 0x3c) == param_2) && (*(undefined8 **)(lVar4 + 0x10) == puVar3))
        goto LAB_02e79d4c;
      }
    }
    lVar4 = FUN_02e79bc4(param_1,param_2,puVar3);
LAB_02e79d4c:
    iVar2 = *(int *)(puVar3 + 10);
    *(int *)(puVar3 + 10) = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      (**(code **)*puVar3)(puVar3);
      FUN_02f59e60(4,puVar3);
    }
    if ((param_5 != 0) && (lVar4 != 0)) {
      uVar5 = 0;
      do {
        lVar1 = param_4 + (ulong)uVar5 * 8;
        FUN_02e7c660(lVar4,lVar1,*(undefined4 *)(lVar1 + 4));
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_5);
    }
  }
  return;
}


