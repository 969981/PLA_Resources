/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332359c; name: FUN_0332359c
 */


void FUN_0332359c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  char *local_d8 [19];
  undefined8 local_38;
  
  *param_1 = &PTR_LAB_04350220;
  param_1[1] = 0xffffffff;
  puVar1 = param_1 + 0xc406;
  param_1[2] = 1;
  param_1[3] = param_2;
  FUN_032c7a54(param_1 + 4,param_3,0xffffffff);
  FUN_032c7a54(param_1 + 5,param_4,0xffffffff);
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0xc407) = 0;
  FUN_032c4d5c(local_d8,param_3);
  iVar2 = FUN_032c4900(param_3);
  if (iVar2 == 0) {
    pcVar4 = "host:/.";
  }
  else {
    if (*(char *)(param_3 + iVar2 + -1) != ':') goto LAB_03323654;
    pcVar4 = "/.";
  }
  FUN_032c5d4c(local_d8,pcVar4,0xffffffff);
LAB_03323654:
  uVar3 = nn::fs::OpenDirectory((DirectoryHandle *)&local_38,local_d8[0],3);
  if ((uVar3 & 0x3fffff) != 0x202) {
    iVar2 = nn::fs::ReadDirectory(puVar1,param_1 + 6,local_38,0x200);
    if (iVar2 != 0) {
      *puVar1 = 0;
    }
    nn::fs::CloseDirectory(local_38);
  }
  FUN_032c4ce8(local_d8);
  return;
}


