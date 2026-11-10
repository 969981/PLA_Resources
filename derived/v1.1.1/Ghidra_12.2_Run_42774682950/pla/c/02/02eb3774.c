/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb3774; name: FUN_02eb3774
 */


void FUN_02eb3774(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  FUN_02eddb40(DAT_0440a170,*(undefined4 *)(param_2 + 0x4c));
  (**(code **)(*param_1 + 0x138))(param_1,1);
  FUN_02ed5d64(param_1);
  puVar3 = *(undefined8 **)(param_2 + 8);
  iVar1 = *(int *)(puVar3 + 10);
  *(int *)(puVar3 + 10) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    (**(code **)*puVar3)(puVar3);
    (*DAT_0442d150)(4,puVar3);
    lVar2 = *(long *)(param_2 + 0x58);
  }
  else {
    lVar2 = *(long *)(param_2 + 0x58);
  }
  if (lVar2 != 0) {
    *(undefined4 *)(param_2 + 0x60) = 0;
    (*DAT_0442d150)(0);
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined4 *)(param_2 + 100) = 0;
  }
  FUN_02ec715c(param_2 + 0x68);
  return;
}


