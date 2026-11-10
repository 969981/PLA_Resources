/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002080e0; name: FUN_002080e0
 */


int FUN_002080e0(long param_1,long param_2,long param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 8) == 0) {
    pcVar2 = "push response HEADERS: stream_id == 0";
  }
  else if (*(char *)(param_1 + 0x9aa) == '\0') {
    if (*(ulong *)(param_1 + 0x8f0) < (ulong)*(uint *)(param_1 + 0x988)) {
      if ((*(byte *)(param_1 + 0x9ab) & 5) != 0) {
        return -0x67;
      }
      if ((ulong)*(uint *)(param_1 + 0x9a0) <= *(ulong *)(param_1 + 0x8f0)) {
        iVar1 = FUN_0020be38(param_1,*(int *)(param_2 + 8),param_2,0xfffffdeb);
        iVar3 = -0x67;
        if (iVar1 < -900) {
          iVar3 = iVar1;
        }
        return iVar3;
      }
      FUN_00211b34(param_3);
      if ((*(uint *)(param_3 + 0xb8) == 0) ||
         ((*(uint *)(param_3 + 0xb8) & 1) != (uint)(*(char *)(param_1 + 0x9aa) == '\0'))) {
        *(long *)(param_1 + 0x8f8) = *(long *)(param_1 + 0x8f8) + -1;
      }
      *(long *)(param_1 + 0x8f0) = *(long *)(param_1 + 0x8f0) + 1;
      if (*(code **)(param_1 + 0x820) == (code *)0x0) {
        return 0;
      }
      iVar1 = (**(code **)(param_1 + 0x820))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8));
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = -0x386;
      }
      if (iVar1 != -0x209) {
        iVar1 = iVar3;
      }
      return iVar1;
    }
    pcVar2 = "push response HEADERS: max concurrent streams exceeded";
  }
  else {
    pcVar2 = "HEADERS: no HEADERS allowed from client in reserved state";
  }
  iVar1 = FUN_00208428(param_1,param_2,0xfffffe07,pcVar2);
  iVar3 = -0x67;
  if (iVar1 < -900) {
    iVar3 = iVar1;
  }
  return iVar3;
}


