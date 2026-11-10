/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018d0dc0; name: FUN_018d0dc0
 */


bool FUN_018d0dc0(long param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  iVar1 = *(int *)(param_1 + 0x70);
  local_50 = 0xf8c8d5e5e6e3589f;
  pcStack_48 = "stop_frame";
  local_40 = 10;
  uStack_38 = 0;
  uVar5 = FUN_018cff20(param_1,&local_50);
  iVar2 = *(int *)(param_1 + 0x74);
  local_50 = 0xe07c11f1bf145cec;
  pcStack_48 = "stop_frame_oybn";
  local_40 = 0xf;
  uStack_38 = 0;
  iVar4 = FUN_018cff20(uVar5,&local_50);
  if (((iVar1 == (int)uVar5) || (iVar2 == iVar4)) || (*(char *)(param_1 + 0x6b) != '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(param_1 + 0x6c) == '\0';
  }
  return bVar3;
}


