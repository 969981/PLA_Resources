/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020b168; name: FUN_0020b168
 */


void FUN_0020b168(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x1a0;
  iVar2 = FUN_0020cccc(lVar1,*(undefined8 *)(param_1 + 0x218));
  if (iVar2 != 0) {
    FUN_00205c6c(param_1,*(undefined4 *)(param_1 + 0x93c),1,"HEADERS: could not unpack");
    return;
  }
  lVar3 = FUN_00205cf4(param_1,*(undefined4 *)(param_1 + 0x1a8));
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    FUN_00207e84(param_1,lVar1);
    return;
  }
  if (*(int *)(lVar3 + 0xdc) == 1) {
    if ((*(uint *)(param_1 + 0x1a8) != 0) &&
       ((*(uint *)(param_1 + 0x1a8) & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0'))) {
      *(undefined4 *)(param_1 + 0x1d8) = 1;
      FUN_0020805c(param_1,lVar1,lVar3);
      return;
    }
  }
  else if (*(int *)(lVar3 + 0xdc) == 4) {
    *(undefined4 *)(param_1 + 0x1d8) = 2;
    FUN_002080e0(param_1,lVar1);
    return;
  }
  *(undefined4 *)(param_1 + 0x1d8) = 3;
  FUN_00208220(param_1,lVar1);
  return;
}


