/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01eb0a74; name: FUN_01eb0a74
 */


void FUN_01eb0a74(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  FUN_01e8fb50();
  *param_1 = &PTR_LAB_04257570;
  *(undefined4 *)(param_1 + 0xc9) = 0;
  param_1[0x3e] = &PTR_LAB_04257810;
  *(undefined2 *)(param_1 + 0xce) = 0x100;
  param_1[9] = &PTR_LAB_04257708;
  param_1[10] = &PTR_LAB_042577e8;
  *(undefined2 *)((long)param_1 + 0x64c) = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  *(undefined8 *)((long)param_1 + 0x694) = 0;
  *(undefined8 *)((long)param_1 + 0x674) = 0;
  *(undefined8 *)((long)param_1 + 0x67c) = 0;
  *(undefined8 *)((long)param_1 + 0x684) = 0;
  *(undefined8 *)((long)param_1 + 0x68c) = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  uVar3 = *(undefined8 *)PTR_DAT_04379570;
  param_1[0xd9] = *(undefined8 *)(PTR_DAT_04379570 + 8);
  param_1[0xd8] = uVar3;
  param_1[0xdb] = 0;
  param_1[0xdd] = 0;
  param_1[0xdf] = 0;
  param_1[0xe1] = 0;
  param_1[0xe3] = 0;
  param_1[0xe5] = 0;
  param_1[0xe7] = 0;
  param_1[0xe9] = 0;
  param_1[0xda] = 0;
  param_1[0xdc] = 0;
  param_1[0xde] = 0;
  param_1[0xe0] = 0;
  param_1[0xe2] = 0;
  param_1[0xe4] = 0;
  param_1[0xe6] = 0;
  param_1[0xe8] = 0;
  FUN_01eb577c(param_1 + 0xdc);
  *(undefined4 *)((long)param_1 + 0x4b4) = 2;
  *(undefined4 *)((long)param_1 + 0x4bc) = 3;
  *(undefined4 *)((long)param_1 + 0x4c4) = 4;
  *(undefined4 *)((long)param_1 + 0x4d4) = 5;
  *(undefined4 *)((long)param_1 + 0x484) = 0;
  *(undefined1 *)(param_1 + 0x90) = 1;
  *(undefined4 *)((long)param_1 + 0x4a4) = 1;
  *(undefined1 *)(param_1 + 0x94) = 1;
  *(undefined1 *)(param_1 + 0x96) = 1;
  *(undefined1 *)(param_1 + 0x97) = 1;
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined1 *)(param_1 + 0x9a) = 1;
  if (*(char *)((long)param_1 + 0x4df) == '\0') {
    lVar2 = FUN_0108c538(param_1[0x41],0);
    iVar1 = atoi((char *)(lVar2 + 4));
    uVar3 = FUN_0108c538(param_1[0x41],3);
    uVar4 = FUN_01ea2c8c(param_1,uVar3);
    if ((iVar1 == 1) && ((uVar4 & 1) != 0)) {
      *(undefined1 *)((long)param_1 + 0x64c) = 1;
    }
  }
  return;
}


