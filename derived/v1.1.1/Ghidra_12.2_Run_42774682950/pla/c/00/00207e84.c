/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00207e84; name: FUN_00207e84
 */


int FUN_00207e84(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 == 0) {
    pcVar6 = "request HEADERS: stream_id == 0";
LAB_00207f98:
    iVar3 = FUN_00208428(param_1,param_2,0xfffffe07,pcVar6);
    iVar2 = -0x67;
    if (iVar3 < -900) {
      iVar2 = iVar3;
    }
    return iVar2;
  }
  if (*(char *)(param_1 + 0x9aa) == '\0') {
    if ((uVar1 & 1) == 0) {
      iVar2 = *(int *)(param_1 + 0x938);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x934);
    }
    if ((int)uVar1 <= iVar2) {
      return -0x67;
    }
    pcVar6 = "request HEADERS: client received request";
    goto LAB_00207f98;
  }
  if ((uVar1 & 1) == 0) {
    pcVar6 = "request HEADERS: invalid stream_id";
    goto LAB_00207f98;
  }
  if (*(int *)(param_1 + 0x938) < (int)uVar1) {
    *(uint *)(param_1 + 0x938) = uVar1;
    if ((ulong)*(uint *)(param_1 + 0x988) <= *(ulong *)(param_1 + 0x8f0)) {
      pcVar6 = "request HEADERS: max concurrent streams exceeded";
      goto LAB_00207f98;
    }
    if ((*(byte *)(param_1 + 0x9ab) & 5) != 0) {
      return -0x67;
    }
    iVar2 = *(int *)(param_2 + 8);
    if (*(int *)(param_2 + 0x18) != iVar2) {
      if (*(ulong *)(param_1 + 0x8f0) < (ulong)*(uint *)(param_1 + 0x9a0)) {
        lVar4 = FUN_002066d8(param_1,iVar2,0,(int *)(param_2 + 0x18),1,0);
        if (lVar4 == 0) {
          return -0x385;
        }
        iVar2 = FUN_00206de8(param_1);
        if (iVar2 < -900) {
          return iVar2;
        }
        *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(param_1 + 0x938);
        if (*(code **)(param_1 + 0x820) == (code *)0x0) {
          return 0;
        }
        iVar3 = (**(code **)(param_1 + 0x820))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8));
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = -0x386;
        }
        if (iVar3 != -0x209) {
          iVar3 = iVar2;
        }
        return iVar3;
      }
      iVar2 = FUN_0020be38(param_1,iVar2,param_2,0xfffffdeb);
      goto LAB_00207f7c;
    }
    pcVar6 = "request HEADERS: depend on itself";
    uVar5 = 0xfffffe07;
  }
  else {
    lVar4 = FUN_00211270(param_1);
    if (lVar4 == 0) {
      return -0x67;
    }
    if ((*(byte *)(lVar4 + 0xe5) & 1) == 0) {
      return -0x67;
    }
    pcVar6 = "HEADERS: stream closed";
    uVar5 = 0xfffffe02;
  }
  iVar2 = FUN_00208428(param_1,param_2,uVar5,pcVar6);
LAB_00207f7c:
  iVar3 = -0x67;
  if (iVar2 < -900) {
    iVar3 = iVar2;
  }
  return iVar3;
}


